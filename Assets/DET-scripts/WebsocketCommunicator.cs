using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using NativeWebSocket;
using System.Runtime.CompilerServices;
using System;

public class WebsocketCommunicator : MonoBehaviour
{
	public bool showDebug; //Turn this on to show Sensor values
	public string computerIP;
	private int webSocketPort = 32323;
	private WebSocket webSocket;

    private int[] drumForceValues;
    private bool[] drumSoundPlaying;
    public AudioClip[] drumAudioClips;
    public GameObject[] drumObjects;
    private Color defaultDrumColor;
    public float audioVolume = 0.9f;


    private void initWebSocket() //Starts WebSocket Client Connection
	{
		webSocket = new WebSocket($"ws://{computerIP}:{webSocketPort}");
		webSocket.Connect();

		webSocket.OnOpen += WebSocket_OnOpen;
		webSocket.OnError += WebSocket_OnError;
		webSocket.OnClose += WebSocket_OnClose;
		webSocket.OnMessage += WebSocket_OnMessage;

	}

	private void WebSocket_OnOpen() //Alerts on console when WebSocket Connection is Successfull
	{
		Debug.Log("Connecion opened!");
	}

	private void WebSocket_OnError(string error) //Alerts on console when WebSocket Connection is Unsuccessfull
	{
		Debug.Log($"Error: {error}");
	}

	private void WebSocket_OnClose(WebSocketCloseCode closeCode) //Alerts on console when WebSocket Connection is Closed
	{
		Debug.Log("Connection closed!");
	}

	private void WebSocket_OnMessage(byte[] data) //Receives webSocket message and handles it respectively depending on what it contains
	{
		string socketMessage = System.Text.Encoding.UTF8.GetString(data);
		if(showDebug)
		{
            Debug.Log(System.Text.Encoding.UTF8.GetString(data));
        }
        if (socketMessage != string.Empty)
        {
            drumForceValues = Array.ConvertAll(socketMessage.Split(","), v => int.Parse(v));
            for (int i = 0; i < drumForceValues.Length; i++)
            {
                var force = drumForceValues[i];
                if (force > 10 && !drumSoundPlaying[i])
                {
                    Debug.Log("Drum play " + i);
                    drumSoundPlaying[i] = true;
                    drumObjects[i].GetComponent<AudioSource>().PlayOneShot(drumAudioClips[i], audioVolume);
                    drumObjects[i].GetComponent<Renderer>().material.color = new Color(0, 1.0f, 0);

                }
                else if(force == 0)
                {
                    Debug.Log("inside else " + i);
                    drumSoundPlaying[i] = false;
                    drumObjects[i].GetComponent<Renderer>().material.color = defaultDrumColor;
                }
            }
        }
    }
	

	// Start is called before the first frame update
	void Start()
	{
        drumSoundPlaying = new bool[drumAudioClips.Length];
        defaultDrumColor = drumObjects[0].GetComponent<Renderer>().material.color;
        initWebSocket();
		Debug.Log("Started");
		
	}

	// Update is called once per frame
	void Update()
	{
		webSocket.DispatchMessageQueue();

    }
	

	private async void OnApplicationQuit() //Closes Websocket Connection Correctly when app is closed
	{
		await webSocket.Close();
	}
	
}
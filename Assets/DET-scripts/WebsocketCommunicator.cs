using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using NativeWebSocket;
using System.Runtime.CompilerServices;
using System;

public enum GameMode
{
	FREEPLAY, 
	DEFAULT,
	GUIDED
}

public class WebsocketCommunicator : MonoBehaviour
{
	public GameMode gameMode = GameMode.DEFAULT;
	public bool showDebug; //Turn this on to show Sensor values
	public string computerIP;
	private int webSocketPort = 32323;
	private WebSocket webSocket;

    private int[] drumForceValues;
    public GameObject[] drumObjects;
    private Color defaultDrumColor;

	public int GetSensorValue(int sensorIndex)
	{
		return drumForceValues[sensorIndex]; //get sensor value for the sensor# thats passed in as argument
	}

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
                if (force > 10)
                {
					if (showDebug)
					{
                        Debug.Log("Drum play " + i);
                    }
                    drumObjects[i].GetComponent<Renderer>().material.color = new Color(0, 1.0f, 0);

                    
                    if (gameMode== GameMode.FREEPLAY)
					{
                        var audioSource = drumObjects[i].GetComponent<AudioSource>();
                        audioSource.PlayOneShot(audioSource.clip);
                    }
                }
                else if(force == 0)
                {
                    if (showDebug)
                    {
                        Debug.Log("inside else " + i);
                    }
                    drumObjects[i].GetComponent<Renderer>().material.color = defaultDrumColor;
                }
            }
        }
    }
	

	// Start is called before the first frame update
	void Start()
	{
        defaultDrumColor = drumObjects[0].GetComponent<Renderer>().material.color;
		drumForceValues = new int[drumObjects.Length];
        initWebSocket();
		Debug.Log("Started");
		
	}

	// Update is called once per frame
	void Update()
	{
		webSocket.DispatchMessageQueue();

    }

	private async void OnDestroy()
	{
        await webSocket.Close();
    }


	private async void OnApplicationQuit() //Closes Websocket Connection Correctly when app is closed
	{
		await webSocket.Close();
	}
	
}
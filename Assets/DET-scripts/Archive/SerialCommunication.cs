using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO.Ports;
using System;

// make sure to name your C# file the same as your class name. In this case Move.cs 
public class SerialCommunication : MonoBehaviour
{
    // change your serial port
    SerialPort sp = new SerialPort("COM10", 9600);
    private int[] drumForceValues;
    private bool[] drumSoundPlaying;
    public AudioClip[] drumAudioClips;
    public GameObject[] drumObjects;
    private Color defaultDrumColor;
    public float audioVolume = 0.9f;



    // Start is called before the first frame update
    void Start()
    {
        sp.Open();
        Debug.Log("connection build");
        sp.ReadTimeout = 100; // In my case, 100 was a good amount to allow quite smooth transition.
        drumSoundPlaying = new bool[drumAudioClips.Length];
        defaultDrumColor = drumObjects[0].GetComponent<Renderer>().material.color;
    }

    // Update is called once per frame
    void Update()
    {
        if (sp.IsOpen)
        {
            try
            {
                var line = sp.ReadLine();
                Debug.Log(line);
                if (line != string.Empty)
                {
                    drumForceValues = Array.ConvertAll(line.Split(","), v => int.Parse(v));
                    for (int i = 0; i < drumForceValues.Length; i++)
                    {
                        var force = drumForceValues[i];
                        if(force > 1 && !drumSoundPlaying[i])
                        {
                            Debug.Log("reading force values");
                            drumSoundPlaying[i] = true;
                            drumObjects[i].GetComponent<AudioSource>().PlayOneShot(drumAudioClips[i], audioVolume);
                            drumObjects[i].GetComponent<Renderer>().material.color = new Color(0, 1.0f, 0);

                        } else
                        {
                            Debug.Log("inside else");
                            drumSoundPlaying[i] = false;
                            drumObjects[i].GetComponent<Renderer>().material.color = defaultDrumColor;
                        }
                    }
                }

            }
            catch (System.Exception)
            {

            }

        }
    }
    private void OnApplicationQuit()
    {
        sp.Close();
    }
}
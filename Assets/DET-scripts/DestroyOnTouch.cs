using MidiPlayerTK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnTouch : MonoBehaviour
{
    public MidiStreamPlayer midiStreamPlayer;
    public MPTKEvent note;
    public int pad = -1;
    private WebsocketCommunicator communicator;
    private float originalY;

    // Start is called before the first frame update

    private bool padPress = false;
    void Start()
    {
        communicator = GameObject.FindGameObjectWithTag("Arduino").GetComponent<WebsocketCommunicator>();
        originalY = this.transform.position.y;
    }

    // Update is called once per frame
    void Update()
    {
        if (pad == -1) //if pad is not assigned yet do nothing
        {
            return;
        }
        //checks if the desired pad is pressed by the user
        int sensorValue = communicator.GetSensorValue(pad);
        if (sensorValue > 10  && originalY - this.transform.position.y  > 0.8f)
        {
            padPress = true;
            midiStreamPlayer.MPTK_PlayEvent(note);
            Destroy(this.gameObject);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        // Play miss music
        if (!padPress)
        {
            GameObject.FindGameObjectWithTag("NotePlayer").GetComponent<NotePlayer3>().PlayMissedNote();
        }
        Debug.Log("Note collision");
        Destroy(this.gameObject);
        
    }
}

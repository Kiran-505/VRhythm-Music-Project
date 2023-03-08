using MidiPlayerTK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnTouch : MonoBehaviour
{
    public MidiStreamPlayer midiStreamPlayer;
    public MPTKEvent note;
    public int pad;
    private WebsocketCommunicator communicator;
    private float originalY;
    // Start is called before the first frame update
    void Start()
    {
        communicator = GameObject.FindGameObjectWithTag("Arduino").GetComponent<WebsocketCommunicator>();
        originalY = this.transform.position.y;
    }

    // Update is called once per frame
    void Update()
    {
        int sensorValue = communicator.GetSensorValue(pad);
        if (sensorValue > 10  && originalY - this.transform.position.y  > 0.1f)
        {
            midiStreamPlayer.MPTK_PlayEvent(note);
            Destroy(this.gameObject);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        // Play miss music
        GameObject.FindGameObjectWithTag("NotePlayer").GetComponent<NotePlayer3>().PlayMissedNote();
        Destroy(this.gameObject);
        
    }
}

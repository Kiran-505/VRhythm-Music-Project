using MidiPlayerTK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnTouch2 : MonoBehaviour
{
    public MidiStreamPlayer midiStreamPlayer;
    public MPTKEvent note;
    public int pad;
    public AudioClip missedSound;
    private WebsocketCommunicator communicator;
    private float originalY;

    private float noteHeight;
    
    public GameObject table;
    private float tableHeight;

    private bool insideRange;

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
        //checks if the desired pad is pressed by the user
        /*
        int sensorValue = communicator.GetSensorValue(pad);
        if (sensorValue > 10  && originalY - this.transform.position.y  > 0.1f)
        {
            padPress = true;
            midiStreamPlayer.MPTK_PlayEvent(note);
            Destroy(this.gameObject);
        }
        */
        
        // imported from CheckRange.cs

        // boolean for updating the note height
        noteHeight = this.gameObject.transform.position.y;
        
        int sensorValue = communicator.GetSensorValue(pad);
        tableHeight = table.transform.position.y;

        // When pad is hit and the note is within range
        if (sensorValue > 10 && noteHeight <= tableHeight + 0.15f && noteHeight >= tableHeight - 0.15f) 
        {
            padPress = true;
            midiStreamPlayer.MPTK_PlayEvent(note);
            Debug.Log("Note inside range");
            Destroy(this.gameObject);
            // Debug.Log(noteHeight);
            // midiStreamPlayer.MPTK_PlayEvent(note);
        }

        // when the note is 0.15 beneath the table and the note is considered missed 
        // replaces onCollisionEnter function
        else if (noteHeight <= tableHeight - 0.15f)
        {
            Debug.Log("Missed beat");
            // Play missed beat sound
            GameObject.FindGameObjectWithTag("NotePlayer").GetComponent<NotePlayer4>().PlayMissedNote();
            Destroy(this.gameObject);
            
        }
        // when the note is above threshold
        else {
            padPress = false;
            Debug.Log("Above threshold");
        }

        // end of import
    }

    /*
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
    */
}

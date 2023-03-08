using MidiPlayerTK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CheckRange : MonoBehaviour
{
    public MidiStreamPlayer midiStreamPlayer;
    public MPTKEvent note;
    public GameObject noteObject;
    private float noteHeight;
    
    public GameObject table;
    private float tableHeight;

    private bool insideRange;

    // Start is called before the first frame update
    void Start()
    {
        tableHeight = table.transform.position.y;
    }

    // Update is called once per frame
    void Update()
    {
        noteHeight = noteObject.transform.position.y;
        
        if (noteHeight <= tableHeight + 0.15f & noteHeight >= tableHeight - 0.15f) 
        {
            insideRange = true;
            Debug.Log(noteHeight);
            // midiStreamPlayer.MPTK_PlayEvent(note);
        }
        else if (noteHeight < tableHeight - 0.15f) 
        {
            Destroy(this.gameObject);
        }
        else {
            insideRange = false;
            Debug.Log("Above threshold");
        }
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        //plays note and destroy
        // midiStreamPlayer.MPTK_PlayEvent(note);
        
    }
}

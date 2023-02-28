using MidiPlayerTK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnTouch : MonoBehaviour
{
    public MidiStreamPlayer midiStreamPlayer;
    public MPTKEvent note;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        //plays note and destroy
        midiStreamPlayer.MPTK_PlayEvent(note);
        Destroy(this.gameObject);
        
    }
}

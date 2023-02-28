using MidiPlayerTK;
using MPTKDemoCatchMusic;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotePlayer : MonoBehaviour
{
    public MidiStreamPlayer midiStreamPlayer;
    public MidiFilePlayer midiFilePlayer;
    public GameObject[] drums;
    private float yOffset = 1.2f;
    public GameObject fallingNote;
    int notesPlayed = 0;

    // Start is called before the first frame update
    void Start()
    {

        if (midiFilePlayer != null)
        {
            // If call is already set from the inspector there is no need to set another listeneer
            if (!midiFilePlayer.OnEventNotesMidi.HasEvent())
            {

                // No listener defined, set now by script. NotesToPlay will be called for each new notes read from Midi file
                Debug.Log("MusicView: no OnEventNotesMidi defined, set by script");
                midiFilePlayer.OnEventNotesMidi.AddListener(NotesToPlay);
            }
        }
        else
            Debug.Log("MusicView: no MidiFilePlayer detected");
    }
    public void NotesToPlay(List<MPTKEvent> notes)
    {

        Debug.Log(midiFilePlayer.MPTK_PlayTime.ToString() + " count:" + notes.Count);
        foreach (MPTKEvent mptkEvent in notes)
        {
            var note = mptkEvent;
            switch (mptkEvent.Command)
            {
                case MPTKCommand.NoteOn:
                    Debug.Log($"NoteOn Channel:{note.Channel}  Preset index:{midiStreamPlayer.MPTK_ChannelPresetGetIndex(note.Channel)}  Preset name:{midiStreamPlayer.MPTK_ChannelPresetGetName(note.Channel)}");
                    
                    Debug.Log(notesPlayed);
                    Vector3 drumPosition = drums[notesPlayed].transform.position;
                    GameObject instantiatedNote = Instantiate(fallingNote, new Vector3(drumPosition.x, drumPosition.y + yOffset, drumPosition.z), Quaternion.identity);
                    instantiatedNote.SetActive(true);
                    instantiatedNote.GetComponent<DestroyOnTouch>().midiStreamPlayer = midiStreamPlayer;
                    instantiatedNote.GetComponent<DestroyOnTouch>().note = note;
                    notesPlayed++;
                    if (mptkEvent.Value > 40 && mptkEvent.Value < 100)// && note.Channel==1)
                    {
                    }
                    break;

                case MPTKCommand.PatchChange:
                    {
                        Debug.Log($"PatchChange Channel:{note.Channel}  Preset index:{note.Value}");
                    }
                    break;
            }
        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}

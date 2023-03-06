using MidiPlayerTK;
using MPTKDemoCatchMusic;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotePlayer3 : MonoBehaviour
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
        // loops through all notes in MIDI file
        foreach (MPTKEvent note in notes)
        {
            // variable holding pad value
            int pad;
            // Switch statement checking note value to send to correct pad
            switch (note.Value)
            {
                // Kick
                case (36):
                    pad = 3;
                    playNote(note, pad);
                    break;

                // Snare
                case (38):
                    pad = 0;
                    playNote(note, pad);
                    break;

                // Hi-hat
                case (42):
                    pad = 1;
                    playNote(note, pad);
                    break;

                // Crash?
                case (40):
                    pad = 2;
                    playNote(note, pad);
                    break;

                default:
                    Debug.Log($"Value {note.Value} not supported");
                    break;
            }

            Debug.Log($"Note {notesPlayed} - Channel: {note.Channel}, Value: {note.Value}");
            notesPlayed++;
            break;
        }
    }
    // Instantiates falling object for a note
    public void playNote(MPTKEvent note, int pad)
    {
        Vector3 drumPosition = drums[pad].transform.position;
        GameObject instantiatedNote = Instantiate(fallingNote, new Vector3(drumPosition.x, drumPosition.y + yOffset, drumPosition.z), Quaternion.identity);
        instantiatedNote.SetActive(true);
        instantiatedNote.GetComponent<DestroyOnTouch>().midiStreamPlayer = midiStreamPlayer;
        instantiatedNote.GetComponent<DestroyOnTouch>().note = note;

        // Old log
        // Debug.Log($"NoteOn Channel:{note.Channel}  Preset index:{midiStreamPlayer.MPTK_ChannelPresetGetIndex(note.Channel)}  Preset name:{midiStreamPlayer.MPTK_ChannelPresetGetName(note.Channel)}");
    }


    // Update is called once per frame
    void Update()
    {

    }
}
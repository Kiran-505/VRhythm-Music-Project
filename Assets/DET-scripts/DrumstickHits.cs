using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrumstickHits : MonoBehaviour
{
    private AudioSource drum; //whichever object the sound needs to be played (drum)

    public AudioClip drumSound; //actual sound attach to the object (drumsound)


    public float soundVolume = 0.5f;

    // Start is called before the first frame update
    void Start()
    {
        drum = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag=="Drumstick")
        {
            drum.PlayOneShot(drumSound, soundVolume);
        }
    }
}
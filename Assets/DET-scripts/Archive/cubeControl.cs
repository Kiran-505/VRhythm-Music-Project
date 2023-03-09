using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cubeControl : MonoBehaviour
{
    
	public int speed = 0;
	public int multiplierDirection = 1;
	public AudioSource myAudioSource;
	public AudioClip myAudioClip;
	public AudioClip myAudioClip2;
	
	private bool playOnce1 = false;
	private bool playOnce2 = false;
	
    void Start()
    {
	    multiplierDirection = 1;
	    speed = 1;
    }

    void Update()
    {
	    // update cube location
	    transform.Translate(Vector3.right * multiplierDirection * Time.deltaTime * speed/4);
	    
    }
    
	// update cube location, by reading values from the Serial Reader Script
	public void UpdateCubeLocation(int directionRecv){
		multiplierDirection = directionRecv;
	}
	
	// update cube Speed, by reading values from the Serial Reader Script
	public void UpdateCubeSpeed(int forceRecv, int forceRecv2){
		speed = forceRecv;
		
		if(forceRecv == 4){
			playOnce1 = true;
			if(playOnce1){
				myAudioSource.PlayOneShot(myAudioClip);
				playOnce1 = false;
			}
		}
		
		if(forceRecv2 == 4 ){
			playOnce2 = true;
			if(playOnce2){
				myAudioSource.PlayOneShot(myAudioClip2);
				playOnce2 = false;
			}
			
			//myAudioSource.PlayOneShot(myAudioClip2);
		}
	}
}

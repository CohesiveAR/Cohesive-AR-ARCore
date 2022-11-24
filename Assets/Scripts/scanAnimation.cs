using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scanAnimation : MonoBehaviour
{
    float scrollX = 2.5f;
    float scrollY = 2.5f;
    public bool scanClicked = false;
    public bool soundOnce = false;

    void Start()
    {
        scanClicked = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(scanClicked){
            if(!soundOnce){
                GetComponentInChildren<AudioSource>().Play(0);
                soundOnce = true;
            }
            float offsetX = Time.time*scrollX;
            float offsetY = Time.time*scrollY;
            GetComponent<Renderer>().material.mainTextureOffset = new Vector2(offsetX,offsetY);
        }
    }
}

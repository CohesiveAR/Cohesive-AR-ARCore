using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class RotateTextures : MonoBehaviour
{

 
    GameObject cube;
    [SerializeField] Slider rotateSlider;
    [SerializeField] Slider scaleSlider;
    public Texture2D originTexture;

    void Start()
    {
        //cube = gameObject.GetComponent<TapToPlace>().spawnedObject;
    }

    // Update is called once per frame
    void Update()
    {

        //cube.GetComponent<Renderer>().material.SetTexture("_MainTex", RotateImage(image, angle));

    }

    public void scale(float factor){
        if(cube==null){
            cube = gameObject.GetComponent<TapToPlace>().spawnedObject;     
        }
        if(cube==null){
            return;
        }
        factor = (1-factor)*10;
        // cube.GetComponent<Renderer>().material.mainTextureScale = new Vector2(factor*2, factor*10);
        cube.GetComponent<Renderer>().material.SetFloat("_Scale", factor);
    }
    public void RotateImage(float angle)
    {
        if(cube==null){
            cube = gameObject.GetComponent<TapToPlace>().spawnedObject;     
        }
        if(cube==null){
            return;
        }

        cube.GetComponent<Renderer>().material.SetFloat("_RotateAngle", angle*2*Mathf.PI);
    }

    
}



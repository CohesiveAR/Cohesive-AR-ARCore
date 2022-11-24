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
        factor = (1-factor)*5;
        cube.GetComponent<Renderer>().material.mainTextureScale = new Vector2(factor, factor);
    }
    public void RotateImage(float angle)
    {
        if(cube==null){
            cube = gameObject.GetComponent<TapToPlace>().spawnedObject;     
        }
        if(cube==null){
            return;
        }

        try{
        int oldX;
        int oldY;
        int width = originTexture.width;
        int height = originTexture.height;

        Color32[] originPixels = originTexture.GetPixels32();
        Color32[] transformedPixels = originTexture.GetPixels32();
        float phi = (float)(angle *Math.PI);

        for (int newY = 0; newY < height; newY++)
        {
            for (int newX = 0; newX < width; newX++)
            {
                transformedPixels[newY * width + newX] = originPixels[0];
                int newXNormToCenter = newX - width / 2;
                int newYNormToCenter = newY - height / 2;
                oldX = (int)(Mathf.Cos(phi) * newXNormToCenter + Mathf.Sin(phi) * newYNormToCenter + width / 2);
                oldY = (int)(-Mathf.Sin(phi) * newXNormToCenter + Mathf.Cos(phi) * newYNormToCenter + height / 2);
                bool InsideImageBounds = (oldX > -1) && (oldX < width) && (oldY > -1) && (oldY < height);

                if (InsideImageBounds)
                {
                    transformedPixels[newY * width + newX] = originPixels[oldY * width + oldX];
                }
            }
        }

        Texture2D result = new Texture2D(width, height);
        result.SetPixels32(transformedPixels);
        result.Apply();
        cube.GetComponent<Renderer>().material.SetTexture("_MainTex", result);
        }
        catch(Exception ex)
        {
            Debug.Log("Error info:" + ex.Message);
        }
    }

    
}



using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class fixedRotateTextures : MonoBehaviour
{

    // you can change this line to get access each virtual object in the scene
    GameObject cube;

    private Shader RotationShader;
    

    // Start is called before the first frame update
    void Start()
    {
        RotationShader = Shader.Find("Custom/RotateShader");
    }

    
    public void RotateImage2(float angle)
    {
        if(cube==null){
            cube = gameObject.GetComponent<TapToPlace>().spawnedObject;     
        }
        if(cube==null){
            return;
        }
        Debug.Log(RotationShader);

        SetShader();
        cube.GetComponent<Renderer>().material.SetFloat("_RotateAngle", angle*2*Mathf.PI/360);
        
    }

    public void SetShader()
    {
        if(cube==null){
            cube = gameObject.GetComponent<TapToPlace>().spawnedObject;     
        }
        if(cube==null){
            return;
        }
        cube.GetComponent<Renderer>().material.shader = RotationShader;
    }
    

    

}



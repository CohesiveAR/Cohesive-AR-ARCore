using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WelcomeButtons : MonoBehaviour
{
    public static List<Texture2D> textureDB = new List<Texture2D>();

    public void scanTextureClick(){
        SceneManager.LoadSceneAsync("SurfaceCapture");
    }
    public void manipulateObjectClick(){
        SceneManager.LoadSceneAsync("ManipulateObject");
    }

}

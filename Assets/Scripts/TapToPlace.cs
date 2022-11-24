using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]
public class TapToPlace : MonoBehaviour
{
    [SerializeField] CanvasGroup defaultUI;
    [SerializeField] CanvasGroup cubeClickUI;
    [SerializeField] Camera arCamera;

    public GameObject gameObjectToInsatiate;
    public GameObject spawnedObject;
    ARRaycastManager arRaycastManager;
    Vector2 touchPosition;
    List<ARRaycastHit> hits = new List<ARRaycastHit>();
    
    void Awake()
    {
        arRaycastManager = GetComponent<ARRaycastManager>();
    }

    public void onCubeClick(){
        cubeClickUI.alpha = 1f;
        cubeClickUI.blocksRaycasts = true;
        defaultUI.alpha = 0f;
        defaultUI.blocksRaycasts = false;
    }
    
    public void doneClicked(){
        SceneManager.LoadSceneAsync("WelcomeScreen");
    }

    bool TryGetTouchPosition(out Vector2 touchPosition){

        if(spawnedObject==null){
            GameObject text = GameObject.FindGameObjectWithTag("ObjectPlacedText");
            text.GetComponent<TextMeshProUGUI>().text = "No Object Present in Scene. Click to spawn object now.";
            float r=0.2f,g=0.3f,b=0.7f,a=0.6f;
            text.GetComponent<TextMeshProUGUI>().color = new Color(r,g,b,a);
        }
        else{
            GameObject text = GameObject.FindGameObjectWithTag("ObjectPlacedText");
            text.GetComponent<TextMeshProUGUI>().text = "Object Present in Scene";
            float r=1f,g=1f,b=1f,a=1f;
            text.GetComponent<TextMeshProUGUI>().color = new Color(r,g,b,a);
        }

        if(Input.touchCount > 0){
            touchPosition = Input.GetTouch(0).position;

            RaycastHit hit;
            Ray ray = arCamera.ScreenPointToRay(touchPosition);
            if (Physics.Raycast(ray, out hit)&&hit.collider != null &&(hit.collider.gameObject.name.StartsWith("cube"))){
                onCubeClick();

                touchPosition  = default;
                return false;                            
            }
             
            return true;
        }
        touchPosition = default;
        return false;
    }

    public void replaceObjectClick(){
        if(spawnedObject==null) return;
        Destroy(spawnedObject);
    }


    void Start(){
        spawnedObject = GameObject.Find("cube");
    }

    void Update()
    {   
        if(!TryGetTouchPosition(out Vector2 touchPosition)){
            return;
        }        

        if(arRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon)){
            var hitPose = hits[0].pose;

            if(spawnedObject==null){
                spawnedObject = Instantiate(gameObjectToInsatiate, hitPose.position, hitPose.rotation);
                spawnedObject.name = "cube";
                DontDestroyOnLoad(spawnedObject);
            }
            else{
                // spawnedObject.transform.position = hitPose.position;
            }
        }
    }
}

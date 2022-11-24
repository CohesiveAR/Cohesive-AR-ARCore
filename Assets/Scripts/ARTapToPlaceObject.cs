using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;
using TMPro;

[RequireComponent(typeof(ARRaycastManager))]
public class ARTapToPlaceObject : MonoBehaviour
{
    [SerializeField] Canvas canvas;
    [SerializeField] Camera arCamera;
    [SerializeField] TextMeshProUGUI placeMarkerText;
    public GameObject patchGO;
    public Vector3[] textureScreenVertices = new Vector3[4];
    private GameObject patch;
    private ARRaycastManager aRRaycastManager;
    private Vector2 touchPosition;
    // private System.DateTime startTime;
    static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    private void Awake()
    {
        aRRaycastManager = GetComponent<ARRaycastManager>();
        // canvas.gameObject.SetActive(false);
        gameObject.GetComponent<CameraImageExample>().enabled = false;
    }

    bool TryGetTouchPosition(out Vector2 touchPosition){
        // System.TimeSpan ts = System.DateTime.UtcNow - startTime;
        if(Input.touchCount==1){
            touchPosition = Input.GetTouch(0).position;
            
            RaycastHit hit;
            Ray ray = arCamera.ScreenPointToRay(touchPosition);
            if (Physics.Raycast(ray, out hit)&&hit.collider != null&&(hit.collider.gameObject.name.StartsWith("patch"))) {
                touchPosition  = default;
                return false;                            
            }
            return true;
        }
        touchPosition  = default;
        return false;
    }

    void Start(){
        patch = GameObject.Find("patch");

        if(patch == null){
            placeMarkerTextSet();
        }
        else{
            donePlacedMarkerText();
        }
    }

    void Update()
    {
        if(!TryGetTouchPosition(out Vector2 touchPosition)){
            return;
        }

        if(aRRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon)){
            var hitPose = hits[0].pose;   
            // System.TimeSpan ts = System.DateTime.UtcNow - startTime;

            if(patch==null) {
                patch = Instantiate(patchGO, hitPose.position, hitPose.rotation);
                patch.name = "patch";
                canvas.gameObject.SetActive(true);
                donePlacedMarkerText();
                // DontDestroyOnLoad(patch);
            }
        }      
    }

    public void doneScanning(){
        SceneManager.LoadSceneAsync("WelcomeScreen");
    }

    void scanTextureUtil(){
        Matrix4x4 localToWorld = patch.transform.localToWorldMatrix;
        MeshFilter mf = patch.GetComponent<MeshFilter>();
        for(int i = 12; i<16; ++i) {
            Vector3 world_v = localToWorld.MultiplyPoint3x4(mf.mesh.vertices[i]);
            Vector3 screenPos = gameObject.GetComponentInChildren<Camera>().WorldToScreenPoint(world_v);
            textureScreenVertices[i-12] = screenPos;
        }
        
        placeMarkerTextSet();

        Destroy(patch);
        gameObject.GetComponent<CameraImageExample>().enabled = true;  
        // Debug.Log("scanTezture") ;
    }
    public void replaceMarker(){
        placeMarkerTextSet();
        Destroy(patch);
    }

    public void scanTexture(){
        if(patch==null) return;
        patch.GetComponent<scanAnimation>().scanClicked = true;
        Invoke("scanTextureUtil", 3);
    }

    private void placeMarkerTextSet()
    {
        Color blue = new Color(0.215f, 0.6f, 1, 0.7f);
        placeMarkerText.color = blue;
        placeMarkerText.text = "Place the Marker before scanning.";
    }
    private void donePlacedMarkerText()
    {
        Color white = new Color(1, 1, 1, 0.7f);
        placeMarkerText.color = white;
        placeMarkerText.text = "Marker placed. Click on Scan Texture to edit and load into Texture DB";    
    }
}

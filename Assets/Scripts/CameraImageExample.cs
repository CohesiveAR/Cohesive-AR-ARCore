using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Unity.Collections;
using System.Threading.Tasks;
using OpenCVForUnity.CoreModule;
using OpenCVForUnity.ImgprocModule;
using OpenCVForUnity.ImgcodecsModule;
using OpenCVForUnity.ObjdetectModule;
using OpenCVForUnity.UnityUtils;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;

public class CameraImageExample : MonoBehaviour
{
    [SerializeField]
    [Tooltip("The ARCameraManager which will produce frame events.")]
    ARCameraManager m_CameraManager;
    [SerializeField] Canvas canvas;
    public static Texture2D outputTexture;
    bool init = false;
    ARPlaneManager planeManager;
    public ARCameraManager cameraManager
    {
        get { return m_CameraManager; }
        set { m_CameraManager = value; }
    }

    
    void OnEnable()
    {
        if (m_CameraManager != null)
        {
            planeManager = gameObject.GetComponent<ARPlaneManager>();
            m_CameraManager.frameReceived += OnCameraFrameReceived;
        }
    }

    void OnDisable()
    {
        if (m_CameraManager != null)
        {
            m_CameraManager.frameReceived -= OnCameraFrameReceived;
        }
    }
 unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs)
    {
        StartCoroutine(CoroutineScreenshot());
        Debug.Log("started ss");
    }
    private IEnumerator CoroutineScreenshot() {
        //Remove UI from screenshot
        foreach (var plane in planeManager.trackables)
        {
            plane.gameObject.SetActive(false);
        }
        canvas.gameObject.SetActive(false);//canvas
        yield return new WaitForEndOfFrame();

        int width = Screen.width;
        int height = Screen.height;
        Texture2D screenshotTexture = new Texture2D(width, height, TextureFormat.ARGB32, false);
        UnityEngine.Rect rect = new UnityEngine.Rect(0, 0, width, height);
        screenshotTexture.ReadPixels(rect, 0, 0);
        screenshotTexture.Apply();    
        
        foreach (var plane in planeManager.trackables)
        {
            plane.gameObject.SetActive(true);
        }        
        canvas.gameObject.SetActive(true);//canvas

        StartCoroutine(perspectiveWarpApply(screenshotTexture));
        this.enabled = false;          
    }
    IEnumerator perspectiveWarpApply(Texture2D originalTexture){      
        int width = 400;
        int height = 400;

        Mat img = Mat.zeros(new Size(originalTexture.width,originalTexture.height),CvType.CV_8UC3);  
        Utils.texture2DToMat(originalTexture, img);

        MatOfPoint2f  src_mat = pointsInResolution(originalTexture.width, originalTexture.height,Screen.width, Screen.height);
        MatOfPoint2f  dst_mat = new MatOfPoint2f(new Point(0,0), new Point(width,0), new Point(0,height), new Point(width,height));
        
        Mat outputMat = Mat.zeros(new Size(width,height),CvType.CV_8UC3);        
        Mat matrix = Imgproc.getPerspectiveTransform(src_mat, dst_mat);
        
        Imgproc.warpPerspective(img, outputMat, matrix, new Size(width,height));
        if(outputTexture==null)
            outputTexture = new Texture2D(outputMat.cols(), outputMat.rows(), TextureFormat.RGBA32, false);

        Utils.matToTexture2D(outputMat, outputTexture);
        // rawImage.texture = outputTexture;    
        Debug.Log("perspectiveWarpApply") ;

        SceneManager.LoadScene("OpenCV");
        yield return null;
    }
    

    MatOfPoint2f pointsInResolution(int srcW=1080, int srcH=2340, int dstW=360, int dstH=640){
        Vector3[] inVertices = gameObject.GetComponent<ARTapToPlaceObject>().textureScreenVertices;
        Point[] outPoints = new Point[4];
        
        int[] order = {2,1,3,0};
        int j=0;
        foreach(int i in order){
            var v =  inVertices[i]; 

            float x = v.x*dstW/srcW;
            if(x<0) x=0;
            if(x>dstW) x=dstW-1;
            float y = dstH - (v.y*dstH/srcH);
            if(y<0) y=0;
            if(y>dstH) x=dstH-1;
            outPoints[j++] = new Point(x,y);
        }
        
        return new MatOfPoint2f(outPoints);
    }
    Texture2D m_Texture;
}
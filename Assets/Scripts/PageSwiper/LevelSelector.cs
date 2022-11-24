using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class LevelSelector : MonoBehaviour{
    public GameObject levelHolder;
    public List<Texture2D> texture2DList;
    public Button levelIcon;
    public GameObject thisCanvas;
    CanvasGroup defaultUI;
    CanvasGroup cubeClickUI;
    public int numberOfLevels = 50;
    public Vector2 iconSpacing;
    private Rect panelDimensions;
    private Rect iconDimensions;
    private int amountPerPage;
    private int currentLevelCount;

    // Start is called before the first frame update
    void Start(){
        texture2DList.AddRange(WelcomeButtons.textureDB);
        numberOfLevels = texture2DList.Count;
        Debug.Log(texture2DList);
        panelDimensions = levelHolder.GetComponent<RectTransform>().rect;
        iconDimensions = levelIcon.GetComponent<RectTransform>().rect;
        int maxInARow = Mathf.FloorToInt((panelDimensions.width + iconSpacing.x) / (iconDimensions.width + iconSpacing.x));
        int maxInACol = Mathf.FloorToInt((panelDimensions.height + iconSpacing.y) / (iconDimensions.height + iconSpacing.y));
        amountPerPage = maxInARow * maxInACol;
        int totalPages = Mathf.CeilToInt((float)numberOfLevels / amountPerPage);
        LoadPanels(totalPages);
        
        cubeClickUI = GameObject.FindGameObjectWithTag("CubeClickUI").GetComponent<CanvasGroup>();
        defaultUI = GameObject.FindGameObjectWithTag("DefaultUI").GetComponent<CanvasGroup>();
        
        cubeClickUI.alpha = 0f;
        cubeClickUI.blocksRaycasts = false;
    }

    void LoadPanels(int numberOfPanels){
        GameObject panelClone = Instantiate(levelHolder) as GameObject;
        PageSwiper swiper = levelHolder.AddComponent<PageSwiper>();
        swiper.totalPages = numberOfPanels;

        for(int i = 1; i <= numberOfPanels; i++){
            GameObject panel = Instantiate(panelClone) as GameObject;
            panel.transform.SetParent(thisCanvas.transform, false);
            panel.transform.SetParent(levelHolder.transform);
            panel.name = "Page-" + i;
            panel.GetComponent<RectTransform>().localPosition = new Vector2(panelDimensions.width * (i-1), 0);
            SetUpGrid(panel);
            int numberOfIcons = i == numberOfPanels ? numberOfLevels - currentLevelCount : amountPerPage;
            LoadIcons(numberOfIcons, panel);
        }
        Destroy(panelClone);
    }
    void SetUpGrid(GameObject panel){
        GridLayoutGroup grid = panel.AddComponent<GridLayoutGroup>();
        grid.cellSize = new Vector2(iconDimensions.width, iconDimensions.height);
        grid.childAlignment = TextAnchor.MiddleCenter;
        grid.spacing = iconSpacing;
    }
    void LoadIcons(int numberOfIcons, GameObject parentObject){
        for(int i = 1; i <= numberOfIcons; i++){
            currentLevelCount++;
            Button icon = Instantiate(levelIcon);
            icon.transform.SetParent(thisCanvas.transform, false);
            icon.transform.SetParent(parentObject.transform);
            icon.name = currentLevelCount.ToString();
            icon.GetComponentInChildren<TextMeshProUGUI>().SetText("Level " + currentLevelCount);
            icon.GetComponentInChildren<RawImage>().texture = texture2DList[currentLevelCount-1];
            icon.onClick.AddListener(delegate { buttonfunction(icon.name); });
        }
    }

    private void buttonfunction(String j)
    {
        // Debug.Log("Button clicked"+(Int32.Parse(j)-1));
        cubeClickUI.alpha = 0f;
        cubeClickUI.blocksRaycasts = false;
        defaultUI.alpha = 1f;
        defaultUI.blocksRaycasts = true;
        GameObject cube = gameObject.GetComponent<TapToPlace>().spawnedObject;  
        if(cube!=null){
            cube.GetComponent<Renderer>().material.SetTexture("_MainTex", texture2DList[Int32.Parse(j)-1]);
            GetComponent<RotateTextures>().originTexture = texture2DList[Int32.Parse(j)-1];
        }
    }

    // Update is called once per frame
    void Update(){
        
    }
}

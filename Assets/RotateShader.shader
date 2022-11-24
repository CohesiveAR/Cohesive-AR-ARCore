// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/RotateShader" {        
       Properties 
       { 
           _MainTex("Main Tex",2D)="Write"{} 
           //create a slider to control the rotation angle, range: (0, 2PI)
           
           _RotateAngle("Rotate Angle", Range(0, 6.2831852))=0
       } 
       SubShader 
       { 
         Tags{"Queue"="Transparent" "RenderType"="Transparent"} 
         Blend SrcAlpha OneMinusSrcAlpha 
         Pass 
         { 
            CGPROGRAM 
            #pragma vertex vert 
            #pragma fragment frag 
            #include "UnityCG.cginc" 
            sampler2D _MainTex; 
            float _RotateAngle; 
            struct v2f 
            { 
               float4 pos:POSITION; 
               float4 uv:TEXCOORD; 
            }; 
            v2f vert(appdata_base v) 
            { 
               v2f o; 
               o.pos=UnityObjectToClipPos(v.vertex); 
               o.uv=v.texcoord; 
               return o; 
            } 
            half4 frag(v2f i):COLOR 
            {   //Define a float to store the x, y of the vertex,
                    //because the center of rotation of uv is (1,1), then I minus (0.5, 0.5) to make the center of rotation be the (0.5 0.5)

               float2 uv=i.uv.xy -float2(0.5,0.5); 
                   
              //        rotation matrix： COS() -  sin() , sin() + cos()     
              //                         COS() +  sin() , sin() - cos()     
  
               uv = float2(    uv.x*cos(_RotateAngle) - uv.y*sin(_RotateAngle), uv.x*sin(_RotateAngle) + uv.y*cos(_RotateAngle) ); 

                // then plus the (0.5,0.5)

               uv += float2(0.5,0.5);

               half4 c=tex2D(_MainTex,uv); 
               return c; 
            } 
            ENDCG         
         }                   
     } 
} 

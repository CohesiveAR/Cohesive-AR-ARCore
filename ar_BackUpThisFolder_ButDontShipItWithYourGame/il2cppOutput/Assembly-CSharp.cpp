#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct ARTrackableManager_5_tCF3716950AB6E762DC60917DB4A4A6214010074D;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103;
// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.XR.ARFoundation.ARAnchor[]
struct ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// OpenCVForUnity.CoreModule.Point[]
struct PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraImageExample
struct CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// OpenCVForUnity.CoreModule.Mat
struct Mat_t63C614C1527F3B965A572FEA6C95C5552E219875;
// OpenCVForUnity.CoreModule.MatOfPoint2f
struct MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NewTextureAdd
struct NewTextureAdd_tB1E50649955666FF540D821CAE1B834F7B5132F3;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OpenCVForUnity.CoreModule.Point
struct Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// OpenCVForUnity.CoreModule.Size
struct Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CameraImageExample/<CoroutineScreenshot>d__10
struct U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36;
// CameraImageExample/<perspectiveWarpApply>d__11
struct U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7E917078917EF4C2C3B6E9FA39AC79DC44F552B494D33AB0BEEC4E19D3CCC89E_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24;
IL2CPP_EXTERN_C String_t* _stringLiteral5E1CF86760F87095329CFB79DF5FDBC3899BDD33;
IL2CPP_EXTERN_C String_t* _stringLiteral5FA1ADEF39C919984C38FF934022C6A185E99268;
IL2CPP_EXTERN_C String_t* _stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C;
IL2CPP_EXTERN_C String_t* _stringLiteralAEB40825DB0DD17BCCA62967A2F240C5B5840B07;
IL2CPP_EXTERN_C String_t* _stringLiteralCD48D29CB0B7954E52DE4A1258A1E8242CD94A23;
IL2CPP_EXTERN_C const RuntimeMethod* ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraImageExample_OnCameraFrameReceived_m965CCC980A93D5EBFB1095525D316E2EA37A1688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mCCF887EA392FE7F32B6BB618F3FE72D632EA6D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF71F7AD2C7C3D2A3DE840026172981A72436CB47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA7E36939DA28B409D55BE5435221AAC46E40F14C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m4DD4524FEBE1A17944EDB9D9B369CEE40F0CD12E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_m5819FCF6116797AC54CD808DEE692C67587A22AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B_m3B378CC22E0DBF29B267B9A186602CAA84450090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_GetEnumerator_m97880EA61861EAC2C10D9978BA6BFD5DF9110E89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutineScreenshotU3Ed__10_System_Collections_IEnumerator_Reset_mAB22B9DCEFAB131F97EA30AACF149FF03B432F95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CperspectiveWarpApplyU3Ed__11_System_Collections_IEnumerator_Reset_mD9091FE5A9EB826D6BFEBF5CCC012483F136CAFA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// OpenCVForUnity.CoreModule.CvType
struct CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E  : public RuntimeObject
{
};

struct CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields
{
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8UC1
	int32_t ___CV_8UC1_9;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8UC2
	int32_t ___CV_8UC2_10;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8UC3
	int32_t ___CV_8UC3_11;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8UC4
	int32_t ___CV_8UC4_12;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8SC1
	int32_t ___CV_8SC1_13;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8SC2
	int32_t ___CV_8SC2_14;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8SC3
	int32_t ___CV_8SC3_15;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8SC4
	int32_t ___CV_8SC4_16;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16UC1
	int32_t ___CV_16UC1_17;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16UC2
	int32_t ___CV_16UC2_18;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16UC3
	int32_t ___CV_16UC3_19;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16UC4
	int32_t ___CV_16UC4_20;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16SC1
	int32_t ___CV_16SC1_21;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16SC2
	int32_t ___CV_16SC2_22;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16SC3
	int32_t ___CV_16SC3_23;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16SC4
	int32_t ___CV_16SC4_24;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32SC1
	int32_t ___CV_32SC1_25;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32SC2
	int32_t ___CV_32SC2_26;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32SC3
	int32_t ___CV_32SC3_27;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32SC4
	int32_t ___CV_32SC4_28;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32FC1
	int32_t ___CV_32FC1_29;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32FC2
	int32_t ___CV_32FC2_30;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32FC3
	int32_t ___CV_32FC3_31;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32FC4
	int32_t ___CV_32FC4_32;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_64FC1
	int32_t ___CV_64FC1_33;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_64FC2
	int32_t ___CV_64FC2_34;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_64FC3
	int32_t ___CV_64FC3_35;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_64FC4
	int32_t ___CV_64FC4_36;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16FC1
	int32_t ___CV_16FC1_37;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16FC2
	int32_t ___CV_16FC2_38;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16FC3
	int32_t ___CV_16FC3_39;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16FC4
	int32_t ___CV_16FC4_40;
};

// OpenCVForUnity.DisposableObject
struct DisposableObject_t80A982D8DD51A4FAC07BC026740796005D3FA69E  : public RuntimeObject
{
	// System.Boolean OpenCVForUnity.DisposableObject::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
	// System.Boolean OpenCVForUnity.DisposableObject::<IsEnabledDispose>k__BackingField
	bool ___U3CIsEnabledDisposeU3Ek__BackingField_1;
};

// OpenCVForUnity.CoreModule.Point
struct Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682  : public RuntimeObject
{
	// System.Double OpenCVForUnity.CoreModule.Point::x
	double ___x_0;
	// System.Double OpenCVForUnity.CoreModule.Point::y
	double ___y_1;
};

// OpenCVForUnity.CoreModule.Size
struct Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC  : public RuntimeObject
{
	// System.Double OpenCVForUnity.CoreModule.Size::width
	double ___width_0;
	// System.Double OpenCVForUnity.CoreModule.Size::height
	double ___height_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CameraImageExample/<CoroutineScreenshot>d__10
struct U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36  : public RuntimeObject
{
	// System.Int32 CameraImageExample/<CoroutineScreenshot>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraImageExample/<CoroutineScreenshot>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CameraImageExample CameraImageExample/<CoroutineScreenshot>d__10::<>4__this
	CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* ___U3CU3E4__this_2;
};

// CameraImageExample/<perspectiveWarpApply>d__11
struct U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C  : public RuntimeObject
{
	// System.Int32 CameraImageExample/<perspectiveWarpApply>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraImageExample/<perspectiveWarpApply>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Texture2D CameraImageExample/<perspectiveWarpApply>d__11::originalTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___originalTexture_2;
	// CameraImageExample CameraImageExample/<perspectiveWarpApply>d__11::<>4__this
	CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* ___U3CU3E4__this_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>
struct Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARPlane>
struct TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>
struct TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC 
{
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs::<plane>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_pinvoke
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_com
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct KeyValuePair_2_tF4103E1E436E82040535A2C299BE9A183DB1BCA6 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyValuePair_2_t53ED52B6CCF9EE67874B20217661A725F4B0AC33 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7E917078917EF4C2C3B6E9FA39AC79DC44F552B494D33AB0BEEC4E19D3CCC89E
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___7E917078917EF4C2C3B6E9FA39AC79DC44F552B494D33AB0BEEC4E19D3CCC89E_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// OpenCVForUnity.DisposableOpenCVObject
struct DisposableOpenCVObject_t3F651F810DE91A77E5073556138D35D7439C31DE  : public DisposableObject_t80A982D8DD51A4FAC07BC026740796005D3FA69E
{
	// System.IntPtr OpenCVForUnity.DisposableOpenCVObject::nativeObj
	intptr_t ___nativeObj_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Enumerator_t6AC07927744D05C3A26AF108FB9A50182758ABF1 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tF4103E1E436E82040535A2C299BE9A183DB1BCA6 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Enumerator_tBB025BB555B121BA20A6CE8CD9BE4A484E91D80B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t53ED52B6CCF9EE67874B20217661A725F4B0AC33 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 
{
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// OpenCVForUnity.CoreModule.Mat
struct Mat_t63C614C1527F3B965A572FEA6C95C5552E219875  : public DisposableOpenCVObject_t3F651F810DE91A77E5073556138D35D7439C31DE
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARPlane>
struct Enumerator_tA6706F09647162500C03E08B6768056515FEF90A 
{
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_t6AC07927744D05C3A26AF108FB9A50182758ABF1 ___m_Enumerator_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>
struct Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D 
{
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_tBB025BB555B121BA20A6CE8CD9BE4A484E91D80B ___m_Enumerator_0;
};

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC 
{
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_pinvoke
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_com
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// OpenCVForUnity.CoreModule.MatOfPoint2f
struct MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8  : public Mat_t63C614C1527F3B965A572FEA6C95C5552E219875
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ARFeatheredPlaneMeshVisualizer::m_FeatheringWidth
	float ___m_FeatheringWidth_4;
	// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer ARFeatheredPlaneMeshVisualizer::m_PlaneMeshVisualizer
	ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* ___m_PlaneMeshVisualizer_7;
	// UnityEngine.XR.ARFoundation.ARPlane ARFeatheredPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
	// UnityEngine.Material ARFeatheredPlaneMeshVisualizer::m_FeatheredPlaneMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_FeatheredPlaneMaterial_9;
};

struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_FeatheringUVs
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_FeatheringUVs_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_Vertices_6;
};

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::<mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_TrackingStateVisibilityThreshold
	int32_t ___m_TrackingStateVisibilityThreshold_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_HideSubsumed
	bool ___m_HideSubsumed_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_InitialLineWidthMultiplier
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_InitialLineWidthMultiplier_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
};

// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas ARTapToPlaceObject::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_4;
	// UnityEngine.Camera ARTapToPlaceObject::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_5;
	// UnityEngine.GameObject ARTapToPlaceObject::patchGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___patchGO_6;
	// UnityEngine.Vector3[] ARTapToPlaceObject::textureScreenVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___textureScreenVertices_7;
	// UnityEngine.GameObject ARTapToPlaceObject::patch
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___patch_8;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARTapToPlaceObject::aRRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___aRRaycastManager_9;
	// UnityEngine.Vector2 ARTapToPlaceObject::touchPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchPosition_10;
};

struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> ARTapToPlaceObject::hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hits_11;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AnchorCreator::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> AnchorCreator::m_AnchorPoints
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___m_AnchorPoints_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager AnchorCreator::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_7;
	// UnityEngine.XR.ARFoundation.ARAnchorManager AnchorCreator::m_AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___m_AnchorManager_8;
	// UnityEngine.XR.ARFoundation.ARPlaneManager AnchorCreator::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_9;
};

struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> AnchorCreator::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_5;
};

// CameraImageExample
struct CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARCameraManager CameraImageExample::m_CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___m_CameraManager_4;
	// UnityEngine.UI.RawImage CameraImageExample::rawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___rawImage_5;
	// System.Boolean CameraImageExample::init
	bool ___init_6;
	// UnityEngine.XR.ARFoundation.ARPlaneManager CameraImageExample::planeManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___planeManager_7;
	// UnityEngine.Texture2D CameraImageExample::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_8;
};

// NewTextureAdd
struct NewTextureAdd_tB1E50649955666FF540D821CAE1B834F7B5132F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera NewTextureAdd::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103  : public SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928  : public ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___planesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// OpenCVForUnity.CoreModule.Point[]
struct PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB  : public RuntimeArray
{
	ALIGN_FIELD (8) Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* m_Items[1];

	inline Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB ARTrackableManager_5_get_trackables_m3F866C4F639EB2D24942998408E40FD24D2CF7B5_gshared (ARTrackableManager_5_tCF3716950AB6E762DC60917DB4A4A6214010074D* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D TrackableCollection_1_GetEnumerator_m40FC0BACB788B33217B7B2C3221C7D9967F2B836_gshared (TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB* __this, const RuntimeMethod* method) ;
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m0C78B1A685CCC36524577967CE1620CB889FDC0A_gshared (Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2DFDA23C7884D9A93FF21291F1DF5DDA2C0DA27C_gshared (Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D* __this, const RuntimeMethod* method) ;

// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::GetEnumerator()
inline Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::Dispose()
inline void Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3 (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::get_Current()
inline ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::MoveNext()
inline bool Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Clear()
inline void List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::.ctor()
inline void List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3 (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneManager::GetPlane(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___trackableId0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARAnchor UnityEngine.XR.ARFoundation.ARAnchorManager::AttachAnchor(UnityEngine.XR.ARFoundation.ARPlane,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___plane0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Add(T)
inline void List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer>()
inline ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlane>()
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1 (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlane::add_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARPlane::remove_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) ;
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___uvs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___markNoLongerReadable0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CameraImageExample>()
inline CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* GameObject_GetComponent_TisCameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B_m3B378CC22E0DBF29B267B9A186602CAA84450090 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean ARTapToPlaceObject::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTapToPlaceObject_TryGetTouchPosition_m37EFBE292089562CBB6BB562333B296B8E274999 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.RawImage>()
inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* Component_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mCCF887EA392FE7F32B6BB618F3FE72D632EA6D76 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* GameObject_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m4DD4524FEBE1A17944EDB9D9B369CEE40F0CD12E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CameraImageExample::CoroutineScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraImageExample_CoroutineScreenshot_mCF4B703883D5ACF4A3BCBE7C1915BAC35B1C4B4B (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void CameraImageExample/<CoroutineScreenshot>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineScreenshotU3Ed__10__ctor_m4B08B17153D0F294580C5613C35AD6540F3C441C (U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void CameraImageExample/<perspectiveWarpApply>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CperspectiveWarpApplyU3Ed__11__ctor_m8318255C7F74A5922DC31EE277E3C2C926D07239 (U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ARTapToPlaceObject>()
inline ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* GameObject_GetComponent_TisARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_m5819FCF6116797AC54CD808DEE692C67587A22AF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Point::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m0E943E97CC3013044DCC0A7F1FAD8694136AF591 (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* __this, double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.MatOfPoint2f::.ctor(OpenCVForUnity.CoreModule.Point[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatOfPoint2f__ctor_mC15533B7B2669AC472D3660C15E68273D45501BF (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* __this, PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* ___a0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>::get_trackables()
inline TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7 (ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* __this, const RuntimeMethod* method)
{
	return ((  TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 (*) (ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103*, const RuntimeMethod*))ARTrackableManager_5_get_trackables_m3F866C4F639EB2D24942998408E40FD24D2CF7B5_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARPlane>::GetEnumerator()
inline Enumerator_tA6706F09647162500C03E08B6768056515FEF90A TrackableCollection_1_GetEnumerator_m97880EA61861EAC2C10D9978BA6BFD5DF9110E89 (TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA6706F09647162500C03E08B6768056515FEF90A (*) (TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7*, const RuntimeMethod*))TrackableCollection_1_GetEnumerator_m40FC0BACB788B33217B7B2C3221C7D9967F2B836_gshared)(__this, method);
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARPlane>::get_Current()
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Enumerator_get_Current_mA7E36939DA28B409D55BE5435221AAC46E40F14C (Enumerator_tA6706F09647162500C03E08B6768056515FEF90A* __this, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (Enumerator_tA6706F09647162500C03E08B6768056515FEF90A*, const RuntimeMethod*))Enumerator_get_Current_m0C78B1A685CCC36524577967CE1620CB889FDC0A_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARPlane>::MoveNext()
inline bool Enumerator_MoveNext_mF71F7AD2C7C3D2A3DE840026172981A72436CB47 (Enumerator_tA6706F09647162500C03E08B6768056515FEF90A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA6706F09647162500C03E08B6768056515FEF90A*, const RuntimeMethod*))Enumerator_MoveNext_m2DFDA23C7884D9A93FF21291F1DF5DDA2C0DA27C_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CameraImageExample::perspectiveWarpApply(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraImageExample_perspectiveWarpApply_m8333DBD20A7626AB9CA05EA6476F20485E1BC02D (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___originalTexture0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Size::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size__ctor_mD7D3D4B7411F9791AFE27A8D82C9D5091ED56EE6 (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* __this, double ___width0, double ___height1, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.Mat OpenCVForUnity.CoreModule.Mat::zeros(OpenCVForUnity.CoreModule.Size,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* Mat_zeros_mFAB31BC5D4A32905DAAFC25B1056EB5DA7058867 (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* ___size0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.UnityUtils.Utils::texture2DToMat(UnityEngine.Texture2D,OpenCVForUnity.CoreModule.Mat,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_texture2DToMat_m719D7CF7DB7529D4ED317A7AA5FBAFEED5FB6531 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture2D0, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___mat1, bool ___flip2, int32_t ___flipCode3, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.MatOfPoint2f CameraImageExample::pointsInResolution(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* CameraImageExample_pointsInResolution_mB8BF4F091A09D5B71A336C3A49C602FDDD6E6F3B (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, int32_t ___srcW0, int32_t ___srcH1, int32_t ___dstW2, int32_t ___dstH3, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.Mat OpenCVForUnity.ImgprocModule.Imgproc::getPerspectiveTransform(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* Imgproc_getPerspectiveTransform_mCB819091C45D8732F7FDAB6FDAF7953D86BA99A2 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___src0, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___dst1, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.ImgprocModule.Imgproc::warpPerspective(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Imgproc_warpPerspective_m7425FF7E5641458A73A72045274072B49A0FE663 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___src0, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___dst1, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___M2, Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* ___dsize3, const RuntimeMethod* method) ;
// System.Int32 OpenCVForUnity.CoreModule.Mat::cols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_cols_mA8C3EC315EC7F3EB97B30381F8D8269BCA475297 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Int32 OpenCVForUnity.CoreModule.Mat::rows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.UnityUtils.Utils::matToTexture2D(OpenCVForUnity.CoreModule.Mat,UnityEngine.Texture2D,System.Boolean,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_matToTexture2D_m16080BAB307F864212C3286528C917CEE8C84E09 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___mat0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture2D1, bool ___flip2, int32_t ___flipCode3, bool ___flipAfter4, bool ___updateMipmaps5, bool ___makeNoLongerReadable6, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean NewTextureAdd::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewTextureAdd_TryGetTouchPosition_m17C026EE28F4F0BCA95A94B3024F4EA09903C49C (NewTextureAdd_tB1E50649955666FF540D821CAE1B834F7B5132F3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject AnchorCreator::get_AnchorPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnchorCreator_get_AnchorPrefab_mBBAF7805E9D9F8D79408EE642D153BC76306B25A (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AnchorPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_AnchorPrefab_4;
		return L_0;
	}
}
// System.Void AnchorCreator::set_AnchorPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_set_AnchorPrefab_m53CC9CC3022C713826B44536B48B462C8A1FACFF (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_AnchorPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_AnchorPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPrefab_4), (void*)L_0);
		return;
	}
}
// System.Void AnchorCreator::RemoveAllAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_RemoveAllAnchors_m6BA302DD9EECA47969FD3F6E5397441DCB09ED21 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var anchor in m_AnchorPoints)
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_0 = __this->___m_AnchorPoints_6;
		NullCheck(L_0);
		Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 L_1;
		L_1 = List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502(L_0, List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3((&V_0), Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2;
				L_2 = Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline((&V_0), Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
				// Destroy(anchor);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				bool L_3;
				L_3 = Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F((&V_0), Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// m_AnchorPoints.Clear();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_4 = __this->___m_AnchorPoints_6;
		NullCheck(L_4);
		List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline(L_4, List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AnchorCreator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Awake_m8820A3F157354D7EDED7B2D7CE2BFA42844F1F8E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_7), (void*)L_0);
		// m_AnchorManager = GetComponent<ARAnchorManager>();
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_1;
		L_1 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(__this, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		__this->___m_AnchorManager_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorManager_8), (void*)L_1);
		// m_PlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_2;
		L_2 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___m_PlaneManager_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_9), (void*)L_2);
		// m_AnchorPoints = new List<ARAnchor>();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_3 = (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*)il2cpp_codegen_object_new(List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4(L_3, List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		__this->___m_AnchorPoints_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPoints_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void AnchorCreator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Update_mA0A8BCCBAB0AE50DB087524E6273D11F1D6456D0 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_3 = NULL;
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_4 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (Input.touchCount == 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// var touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase != TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_3 = __this->___m_RaycastManager_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_3);
		bool L_6;
		L_6 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_3, L_4, L_5, 1, NULL);
		if (!L_6)
		{
			goto IL_00ae;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_7);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_8;
		L_8 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_7, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_5 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_5), NULL);
		V_1 = L_9;
		// var hitTrackableId = s_Hits[0].trackableId;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_10);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_11;
		L_11 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_10, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_5 = L_11;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_12;
		L_12 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_5), NULL);
		V_2 = L_12;
		// var hitPlane = m_PlaneManager.GetPlane(hitTrackableId);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_13 = __this->___m_PlaneManager_9;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_14 = V_2;
		NullCheck(L_13);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_15;
		L_15 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_13, L_14, NULL);
		V_3 = L_15;
		// var anchor = m_AnchorManager.AttachAnchor(hitPlane, hitPose);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_16 = __this->___m_AnchorManager_8;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_17 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_1;
		NullCheck(L_16);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_19;
		L_19 = ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75(L_16, L_17, L_18, NULL);
		V_4 = L_19;
		// Instantiate(m_AnchorPrefab, anchor.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___m_AnchorPrefab_4;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_21 = V_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_20, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// if (anchor == null)
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_24 = V_4;
		bool L_25;
		L_25 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00a1;
		}
	}
	{
		// Debug.Log("Error creating anchor.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C, NULL);
		return;
	}

IL_00a1:
	{
		// m_AnchorPoints.Add(anchor);
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_26 = __this->___m_AnchorPoints_6;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_27 = V_4;
		NullCheck(L_26);
		List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline(L_26, L_27, List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void AnchorCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__ctor_m702B01425680D7FD1C9272A423AAF8A913E5476E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AnchorCreator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__cctor_mDE519BED5D639DA8CD4FA7E389C3D97DF4BA54C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_set_featheringWidth_mD616A09A3B426EA5DE1FA37334DD194E43EEC110 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_FeatheringWidth = value; }
		float L_0 = ___value0;
		__this->___m_FeatheringWidth_4 = L_0;
		// set { m_FeatheringWidth = value; }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_Awake_mC5DB0414A2514BF4851266C25141C903F0AC57BA (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneMeshVisualizer = GetComponent<ARPlaneMeshVisualizer>();
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0;
		L_0 = Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01(__this, Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		__this->___m_PlaneMeshVisualizer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneMeshVisualizer_7), (void*)L_0);
		// m_FeatheredPlaneMaterial = GetComponent<MeshRenderer>().material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___m_FeatheredPlaneMaterial_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FeatheredPlaneMaterial_9), (void*)L_2);
		// m_Plane = GetComponent<ARPlane>();
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_3;
		L_3 = Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F(__this, Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		__this->___m_Plane_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Plane_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnEnable_m8781C85CFED871C8A81A5B88DB1031856E0FC9F0 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged += ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnDisable_m2343B05B1A8F14BAD4DD516C584281B66FE6A4E8 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged -= ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC ___eventArgs0, const RuntimeMethod* method) 
{
	{
		// GenerateBoundaryUVs(m_PlaneMeshVisualizer.mesh);
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0 = __this->___m_PlaneMeshVisualizer_7;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline(L_0, NULL);
		ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int vertexCount = mesh.vertexCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		V_0 = L_1;
		// s_FeatheringUVs.Clear();
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_2);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_2, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_3, List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE(L_6, L_7, List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
	}

IL_0029:
	{
		// mesh.GetVertices(s_Vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = ___mesh0;
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_9 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_8);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_8, L_9, NULL);
		// Vector3 centerInPlaneSpace = s_Vertices[s_Vertices.Count - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_11, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_1 = L_13;
		// Vector3 uv = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// float shortestUVMapping = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < vertexCount - 1; i++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_006c:
	{
		// float vertexDist = Vector3.Distance(s_Vertices[i], centerInPlaneSpace);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_14, L_15, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18;
		L_18 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_17, NULL);
		// float uvMapping = vertexDist / Mathf.Max(vertexDist - featheringWidth, 0.001f);
		float L_19 = L_18;
		float L_20;
		L_20 = ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline(__this, NULL);
		float L_21;
		L_21 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_19, L_20)), (0.00100000005f), NULL);
		V_5 = ((float)(L_19/L_21));
		// uv.x = uvMapping;
		float L_22 = V_5;
		(&V_2)->___x_2 = L_22;
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_23 = V_3;
		float L_24 = V_5;
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00a4;
		}
	}
	{
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_25 = V_5;
		V_3 = L_25;
	}

IL_00a4:
	{
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_26 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_26, L_27, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1)))))
		{
			goto IL_006c;
		}
	}
	{
		// m_FeatheredPlaneMaterial.SetFloat("_ShortestUVMapping", shortestUVMapping);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___m_FeatheredPlaneMaterial_9;
		float L_32 = V_3;
		NullCheck(L_31);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_31, _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24, L_32, NULL);
		// uv.Set(0, 0, 0);
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_33 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		NullCheck(L_33);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_33, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// mesh.SetUVs(1, s_FeatheringUVs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = ___mesh0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_35);
		Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2(L_35, 1, L_36, NULL);
		// mesh.UploadMeshData(false);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = ___mesh0;
		NullCheck(L_37);
		Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB(L_37, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__ctor_m9A77651BCAE58AA0B994FFF6C6B63B1CFF2729F6 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// float m_FeatheringWidth = 0.2f;
		__this->___m_FeatheringWidth_4 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__cctor_m56285A000EE27A1631BE9C5BCDA5C376E5D133C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Vector3> s_FeatheringUVs = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5), (void*)L_0);
		// static List<Vector3> s_Vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARTapToPlaceObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Awake_mD41874ABE87A6EB0F15949E24F6632BD8C246173 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B_m3B378CC22E0DBF29B267B9A186602CAA84450090_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aRRaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___aRRaycastManager_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRRaycastManager_9), (void*)L_0);
		// canvas.gameObject.SetActive(false);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = __this->___canvas_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// gameObject.GetComponent<CameraImageExample>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_4;
		L_4 = GameObject_GetComponent_TisCameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B_m3B378CC22E0DBF29B267B9A186602CAA84450090(L_3, GameObject_GetComponent_TisCameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B_m3B378CC22E0DBF29B267B9A186602CAA84450090_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean ARTapToPlaceObject::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTapToPlaceObject_TryGetTouchPosition_m37EFBE292089562CBB6BB562333B296B8E274999 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FA1ADEF39C919984C38FF934022C6A185E99268);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEB40825DB0DD17BCCA62967A2F240C5B5840B07);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(Input.touchCount==1){
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0092;
		}
	}
	{
		// touchPosition = Input.GetTouch(0).position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___touchPosition0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_1 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_1 = L_3;
		// Ray ray = arCamera.ScreenPointToRay(touchPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___arCamera_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___touchPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		NullCheck(L_4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		L_8 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_4, L_7, NULL);
		// if (Physics.Raycast(ray, out hit)&&hit.collider != null&&(hit.collider.gameObject.name.StartsWith("Patch")||hit.collider.gameObject.name.StartsWith("PreviewTexture"))) {
		bool L_9;
		L_9 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_8, (&V_0), NULL);
		if (!L_9)
		{
			goto IL_0090;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10;
		L_10 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12;
		L_12 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_14, _stringLiteral5FA1ADEF39C919984C38FF934022C6A185E99268, NULL);
		if (L_15)
		{
			goto IL_0087;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16;
		L_16 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_18, _stringLiteralAEB40825DB0DD17BCCA62967A2F240C5B5840B07, NULL);
		if (!L_19)
		{
			goto IL_0090;
		}
	}

IL_0087:
	{
		// touchPosition  = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___touchPosition0;
		il2cpp_codegen_initobj(L_20, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// return false;
		return (bool)0;
	}

IL_0090:
	{
		// return true;
		return (bool)1;
	}

IL_0092:
	{
		// touchPosition  = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = ___touchPosition0;
		il2cpp_codegen_initobj(L_21, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// return false;
		return (bool)0;
	}
}
// System.Void ARTapToPlaceObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Update_m9B0A45DCE03CA35CFA8CF6CAB12F0369A1C1BAF4 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mCCF887EA392FE7F32B6BB618F3FE72D632EA6D76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if(!TryGetTouchPosition(out Vector2 touchPosition)){
		bool L_0;
		L_0 = ARTapToPlaceObject_TryGetTouchPosition_m37EFBE292089562CBB6BB562333B296B8E274999(__this, (&V_0), NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// if(aRRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon)){
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_1 = __this->___aRRaycastManager_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = ((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_11;
		NullCheck(L_1);
		bool L_4;
		L_4 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_1, L_2, L_3, 1, NULL);
		if (!L_4)
		{
			goto IL_0091;
		}
	}
	{
		// var hitPose = hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = ((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_11;
		NullCheck(L_5);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_6;
		L_6 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_5, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		L_7 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		V_1 = L_7;
		// if(patch==null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___patch_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		// patch = Instantiate(patchGO, hitPose.position, hitPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___patchGO_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = L_13.___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_12, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___patch_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___patch_8), (void*)L_15);
		// canvas.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->___canvas_4;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// canvas.GetComponentInChildren<RawImage>().enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_18 = __this->___canvas_4;
		NullCheck(L_18);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_19;
		L_19 = Component_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mCCF887EA392FE7F32B6BB618F3FE72D632EA6D76(L_18, Component_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mCCF887EA392FE7F32B6BB618F3FE72D632EA6D76_RuntimeMethod_var);
		NullCheck(L_19);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_19, (bool)0, NULL);
		// canvas.GetComponentInChildren<Button>().enabled = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_20 = __this->___canvas_4;
		NullCheck(L_20);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21;
		L_21 = Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB(L_20, Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB_RuntimeMethod_var);
		NullCheck(L_21);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_21, (bool)1, NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::scanTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_scanTexture_m8BBDA8352488060CD64AA8C653ECBFC359A129C2 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mCCF887EA392FE7F32B6BB618F3FE72D632EA6D76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B_m3B378CC22E0DBF29B267B9A186602CAA84450090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Matrix4x4 localToWorld = patch.transform.localToWorldMatrix;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___patch_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_1, NULL);
		V_0 = L_2;
		// MeshFilter mf = patch.GetComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___patch_8;
		NullCheck(L_3);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_4;
		L_4 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_3, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		V_1 = L_4;
		// for(int i = 12; i<16; ++i) {
		V_2 = ((int32_t)12);
		goto IL_0063;
	}

IL_0022:
	{
		// Vector3 world_v = localToWorld.MultiplyPoint3x4(mf.mesh.vertices[i]);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5 = V_1;
		NullCheck(L_5);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6;
		L_6 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_5, NULL);
		NullCheck(L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7;
		L_7 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_6, NULL);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_0), L_10, NULL);
		V_3 = L_11;
		// Vector3 screenPos = gameObject.GetComponentInChildren<Camera>().WorldToScreenPoint(world_v);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730(L_12, GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_3;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_13, L_14, NULL);
		V_4 = L_15;
		// textureScreenVertices[i-12] = screenPos;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = __this->___textureScreenVertices_7;
		int32_t L_17 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)12)))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_18);
		// for(int i = 12; i<16; ++i) {
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0063:
	{
		// for(int i = 12; i<16; ++i) {
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)16))))
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(patch);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___patch_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_21, NULL);
		// canvas.GetComponentInChildren<Button>().enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_22 = __this->___canvas_4;
		NullCheck(L_22);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23;
		L_23 = Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB(L_22, Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB_RuntimeMethod_var);
		NullCheck(L_23);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_23, (bool)0, NULL);
		// canvas.GetComponentInChildren<RawImage>().enabled = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_24 = __this->___canvas_4;
		NullCheck(L_24);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_25;
		L_25 = Component_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mCCF887EA392FE7F32B6BB618F3FE72D632EA6D76(L_24, Component_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mCCF887EA392FE7F32B6BB618F3FE72D632EA6D76_RuntimeMethod_var);
		NullCheck(L_25);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)1, NULL);
		// gameObject.GetComponent<CameraImageExample>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_26);
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_27;
		L_27 = GameObject_GetComponent_TisCameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B_m3B378CC22E0DBF29B267B9A186602CAA84450090(L_26, GameObject_GetComponent_TisCameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B_m3B378CC22E0DBF29B267B9A186602CAA84450090_RuntimeMethod_var);
		NullCheck(L_27);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject__ctor_m835E4B900ABF4C300EE8938022D18FA3FDD16884 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3[] textureScreenVertices = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___textureScreenVertices_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textureScreenVertices_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARTapToPlaceObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject__cctor_m18195ED73E851BD165089C409F9D25A878143E21 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_11), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARFoundation.ARCameraManager CameraImageExample::get_cameraManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* CameraImageExample_get_cameraManager_mD44F7BFEB984AA8703C842AA71BD0EA3CB03E9B4 (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CameraManager; }
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___m_CameraManager_4;
		return L_0;
	}
}
// System.Void CameraImageExample::set_cameraManager(UnityEngine.XR.ARFoundation.ARCameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageExample_set_cameraManager_mF830C7D66362451AB8AA18593203879AB674313B (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_CameraManager = value; }
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = ___value0;
		__this->___m_CameraManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CameraManager_4), (void*)L_0);
		// set { m_CameraManager = value; }
		return;
	}
}
// System.Void CameraImageExample::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageExample_OnEnable_m63DFB8574CECFFF75C49775C85812EF831F1107C (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraImageExample_OnCameraFrameReceived_m965CCC980A93D5EBFB1095525D316E2EA37A1688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m4DD4524FEBE1A17944EDB9D9B369CEE40F0CD12E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CameraManager != null)
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___m_CameraManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// planeManager = gameObject.GetComponent<ARPlaneManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_3;
		L_3 = GameObject_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m4DD4524FEBE1A17944EDB9D9B369CEE40F0CD12E(L_2, GameObject_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m4DD4524FEBE1A17944EDB9D9B369CEE40F0CD12E_RuntimeMethod_var);
		__this->___planeManager_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___planeManager_7), (void*)L_3);
		// m_CameraManager.frameReceived += OnCameraFrameReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_4 = __this->___m_CameraManager_4;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_5 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_5, __this, (intptr_t)((void*)CameraImageExample_OnCameraFrameReceived_m965CCC980A93D5EBFB1095525D316E2EA37A1688_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1(L_4, L_5, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void CameraImageExample::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageExample_OnDisable_mD3D2EA1E5A7E0C8F0EA4279EC29D3E4DB4F2F919 (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraImageExample_OnCameraFrameReceived_m965CCC980A93D5EBFB1095525D316E2EA37A1688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CameraManager != null)
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___m_CameraManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// m_CameraManager.frameReceived -= OnCameraFrameReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_2 = __this->___m_CameraManager_4;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_3 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_3, __this, (intptr_t)((void*)CameraImageExample_OnCameraFrameReceived_m965CCC980A93D5EBFB1095525D316E2EA37A1688_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D(L_2, L_3, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void CameraImageExample::OnCameraFrameReceived(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageExample_OnCameraFrameReceived_m965CCC980A93D5EBFB1095525D316E2EA37A1688 (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC ___eventArgs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD48D29CB0B7954E52DE4A1258A1E8242CD94A23);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(CoroutineScreenshot());
		RuntimeObject* L_0;
		L_0 = CameraImageExample_CoroutineScreenshot_mCF4B703883D5ACF4A3BCBE7C1915BAC35B1C4B4B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// Debug.Log("started ss");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCD48D29CB0B7954E52DE4A1258A1E8242CD94A23, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CameraImageExample::CoroutineScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraImageExample_CoroutineScreenshot_mCF4B703883D5ACF4A3BCBE7C1915BAC35B1C4B4B (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36* L_0 = (U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36*)il2cpp_codegen_object_new(U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoroutineScreenshotU3Ed__10__ctor_m4B08B17153D0F294580C5613C35AD6540F3C441C(L_0, 0, NULL);
		U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator CameraImageExample::perspectiveWarpApply(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraImageExample_perspectiveWarpApply_m8333DBD20A7626AB9CA05EA6476F20485E1BC02D (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___originalTexture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C* L_0 = (U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C*)il2cpp_codegen_object_new(U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CperspectiveWarpApplyU3Ed__11__ctor_m8318255C7F74A5922DC31EE277E3C2C926D07239(L_0, 0, NULL);
		U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C* L_2 = L_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ___originalTexture0;
		NullCheck(L_2);
		L_2->___originalTexture_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___originalTexture_2), (void*)L_3);
		return L_2;
	}
}
// OpenCVForUnity.CoreModule.MatOfPoint2f CameraImageExample::pointsInResolution(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* CameraImageExample_pointsInResolution_mB8BF4F091A09D5B71A336C3A49C602FDDD6E6F3B (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, int32_t ___srcW0, int32_t ___srcH1, int32_t ___dstW2, int32_t ___dstH3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_m5819FCF6116797AC54CD808DEE692C67587A22AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7E917078917EF4C2C3B6E9FA39AC79DC44F552B494D33AB0BEEC4E19D3CCC89E_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* V_1 = NULL;
	int32_t V_2 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		// Vector3[] inVertices = gameObject.GetComponent<ARTapToPlaceObject>().textureScreenVertices;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* L_1;
		L_1 = GameObject_GetComponent_TisARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_m5819FCF6116797AC54CD808DEE692C67587A22AF(L_0, GameObject_GetComponent_TisARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_m5819FCF6116797AC54CD808DEE692C67587A22AF_RuntimeMethod_var);
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = L_1->___textureScreenVertices_7;
		V_0 = L_2;
		// Point[] outPoints = new Point[4];
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_3 = (PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB*)(PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB*)SZArrayNew(PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_1 = L_3;
		// int[] order = {2,1,3,0};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7E917078917EF4C2C3B6E9FA39AC79DC44F552B494D33AB0BEEC4E19D3CCC89E_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		// int j=0;
		V_2 = 0;
		// foreach(int i in order){
		V_3 = L_5;
		V_4 = 0;
		goto IL_00b9;
	}

IL_0034:
	{
		// foreach(int i in order){
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = L_10;
		// var v =  inVertices[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_6 = L_14;
		// float x = v.x*dstW/srcW;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_6;
		float L_16 = L_15.___x_2;
		int32_t L_17 = ___dstW2;
		int32_t L_18 = ___srcW0;
		V_7 = ((float)(((float)il2cpp_codegen_multiply(L_16, ((float)L_17)))/((float)L_18)));
		// if(x<0) x=0;
		float L_19 = V_7;
		if ((!(((float)L_19) < ((float)(0.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		// if(x<0) x=0;
		V_7 = (0.0f);
	}

IL_0063:
	{
		// if(x>dstW) x=dstW-1;
		float L_20 = V_7;
		int32_t L_21 = ___dstW2;
		if ((!(((float)L_20) > ((float)((float)L_21)))))
		{
			goto IL_006f;
		}
	}
	{
		// if(x>dstW) x=dstW-1;
		int32_t L_22 = ___dstW2;
		V_7 = ((float)((int32_t)il2cpp_codegen_subtract(L_22, 1)));
	}

IL_006f:
	{
		// float y = dstH - (v.y*dstH/srcH);
		int32_t L_23 = ___dstH3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		float L_25 = L_24.___y_3;
		int32_t L_26 = ___dstH3;
		int32_t L_27 = ___srcH1;
		V_8 = ((float)il2cpp_codegen_subtract(((float)L_23), ((float)(((float)il2cpp_codegen_multiply(L_25, ((float)L_26)))/((float)L_27)))));
		// if(y<0) y=0;
		float L_28 = V_8;
		if ((!(((float)L_28) < ((float)(0.0f)))))
		{
			goto IL_0093;
		}
	}
	{
		// if(y<0) y=0;
		V_8 = (0.0f);
	}

IL_0093:
	{
		// if(y>dstH) x=dstH-1;
		float L_29 = V_8;
		int32_t L_30 = ___dstH3;
		if ((!(((float)L_29) > ((float)((float)L_30)))))
		{
			goto IL_00a1;
		}
	}
	{
		// if(y>dstH) x=dstH-1;
		int32_t L_31 = ___dstH3;
		V_7 = ((float)((int32_t)il2cpp_codegen_subtract(L_31, 1)));
	}

IL_00a1:
	{
		// outPoints[j++] = new Point(x,y);
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = L_33;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		float L_35 = V_7;
		float L_36 = V_8;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_37 = (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)il2cpp_codegen_object_new(Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Point__ctor_m0E943E97CC3013044DCC0A7F1FAD8694136AF591(L_37, ((double)L_35), ((double)L_36), NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_37);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)L_37);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b9:
	{
		// foreach(int i in order){
		int32_t L_39 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_3;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		// return new MatOfPoint2f(outPoints);
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_41 = V_1;
		MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_42 = (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8*)il2cpp_codegen_object_new(MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		MatOfPoint2f__ctor_mC15533B7B2669AC472D3660C15E68273D45501BF(L_42, L_41, NULL);
		return L_42;
	}
}
// System.Void CameraImageExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageExample__ctor_m277519D505806A960AF953701EB7EFD09B57053D (CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraImageExample/<CoroutineScreenshot>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineScreenshotU3Ed__10__ctor_m4B08B17153D0F294580C5613C35AD6540F3C441C (U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CameraImageExample/<CoroutineScreenshot>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineScreenshotU3Ed__10_System_IDisposable_Dispose_mCCE93BC75942418D2CEBC496E416BAD9BECE88F7 (U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CameraImageExample/<CoroutineScreenshot>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutineScreenshotU3Ed__10_MoveNext_mAEF688F29C02DA81AAECA802F2C0FCFEE2896DDF (U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF71F7AD2C7C3D2A3DE840026172981A72436CB47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA7E36939DA28B409D55BE5435221AAC46E40F14C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_GetEnumerator_m97880EA61861EAC2C10D9978BA6BFD5DF9110E89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tA6706F09647162500C03E08B6768056515FEF90A V_6;
	memset((&V_6), 0, sizeof(V_6));
	TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (var plane in planeManager.trackables)
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_4 = V_1;
		NullCheck(L_4);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_5 = L_4->___planeManager_7;
		NullCheck(L_5);
		TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 L_6;
		L_6 = ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7(L_5, ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7_RuntimeMethod_var);
		V_7 = L_6;
		Enumerator_tA6706F09647162500C03E08B6768056515FEF90A L_7;
		L_7 = TrackableCollection_1_GetEnumerator_m97880EA61861EAC2C10D9978BA6BFD5DF9110E89((&V_7), TrackableCollection_1_GetEnumerator_m97880EA61861EAC2C10D9978BA6BFD5DF9110E89_RuntimeMethod_var);
		V_6 = L_7;
		goto IL_0048;
	}

IL_0036:
	{
		// foreach (var plane in planeManager.trackables)
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_8;
		L_8 = Enumerator_get_Current_mA7E36939DA28B409D55BE5435221AAC46E40F14C((&V_6), Enumerator_get_Current_mA7E36939DA28B409D55BE5435221AAC46E40F14C_RuntimeMethod_var);
		// plane.gameObject.SetActive(false);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
	}

IL_0048:
	{
		// foreach (var plane in planeManager.trackables)
		bool L_10;
		L_10 = Enumerator_MoveNext_mF71F7AD2C7C3D2A3DE840026172981A72436CB47((&V_6), Enumerator_MoveNext_mF71F7AD2C7C3D2A3DE840026172981A72436CB47_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0036;
		}
	}
	{
		// rawImage.gameObject.transform.parent.gameObject.SetActive(false);//canvas
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_11 = V_1;
		NullCheck(L_11);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_12 = L_11->___rawImage_5;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_14, NULL);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_17 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_17, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0085:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int width = Screen.width;
		int32_t L_18;
		L_18 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_2 = L_18;
		// int height = Screen.height;
		int32_t L_19;
		L_19 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_3 = L_19;
		// Texture2D screenshotTexture = new Texture2D(width, height, TextureFormat.ARGB32, false);
		int32_t L_20 = V_2;
		int32_t L_21 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_22, L_20, L_21, 5, (bool)0, NULL);
		V_4 = L_22;
		// UnityEngine.Rect rect = new UnityEngine.Rect(0, 0, width, height);
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_5), (0.0f), (0.0f), ((float)L_23), ((float)L_24), NULL);
		// screenshotTexture.ReadPixels(rect, 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_26 = V_5;
		NullCheck(L_25);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_25, L_26, 0, 0, NULL);
		// screenshotTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = V_4;
		NullCheck(L_27);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_27, NULL);
		// foreach (var plane in planeManager.trackables)
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_28 = V_1;
		NullCheck(L_28);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_29 = L_28->___planeManager_7;
		NullCheck(L_29);
		TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 L_30;
		L_30 = ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7(L_29, ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7_RuntimeMethod_var);
		V_7 = L_30;
		Enumerator_tA6706F09647162500C03E08B6768056515FEF90A L_31;
		L_31 = TrackableCollection_1_GetEnumerator_m97880EA61861EAC2C10D9978BA6BFD5DF9110E89((&V_7), TrackableCollection_1_GetEnumerator_m97880EA61861EAC2C10D9978BA6BFD5DF9110E89_RuntimeMethod_var);
		V_6 = L_31;
		goto IL_00f4;
	}

IL_00e2:
	{
		// foreach (var plane in planeManager.trackables)
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_32;
		L_32 = Enumerator_get_Current_mA7E36939DA28B409D55BE5435221AAC46E40F14C((&V_6), Enumerator_get_Current_mA7E36939DA28B409D55BE5435221AAC46E40F14C_RuntimeMethod_var);
		// plane.gameObject.SetActive(true);
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)1, NULL);
	}

IL_00f4:
	{
		// foreach (var plane in planeManager.trackables)
		bool L_34;
		L_34 = Enumerator_MoveNext_mF71F7AD2C7C3D2A3DE840026172981A72436CB47((&V_6), Enumerator_MoveNext_mF71F7AD2C7C3D2A3DE840026172981A72436CB47_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_00e2;
		}
	}
	{
		// rawImage.gameObject.transform.parent.gameObject.SetActive(true);//canvas
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_35 = V_1;
		NullCheck(L_35);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_36 = L_35->___rawImage_5;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_38, NULL);
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)1, NULL);
		// StartCoroutine(perspectiveWarpApply(screenshotTexture));
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_41 = V_1;
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_42 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = V_4;
		NullCheck(L_42);
		RuntimeObject* L_44;
		L_44 = CameraImageExample_perspectiveWarpApply_m8333DBD20A7626AB9CA05EA6476F20485E1BC02D(L_42, L_43, NULL);
		NullCheck(L_41);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_45;
		L_45 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_41, L_44, NULL);
		// this.enabled = false;
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_46 = V_1;
		NullCheck(L_46);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_46, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object CameraImageExample/<CoroutineScreenshot>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoroutineScreenshotU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2DF86B3FDD3920CC931E2B5ADAFC0837FDE11296 (U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CameraImageExample/<CoroutineScreenshot>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineScreenshotU3Ed__10_System_Collections_IEnumerator_Reset_mAB22B9DCEFAB131F97EA30AACF149FF03B432F95 (U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutineScreenshotU3Ed__10_System_Collections_IEnumerator_Reset_mAB22B9DCEFAB131F97EA30AACF149FF03B432F95_RuntimeMethod_var)));
	}
}
// System.Object CameraImageExample/<CoroutineScreenshot>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoroutineScreenshotU3Ed__10_System_Collections_IEnumerator_get_Current_m09CBEDE11216834A51092EE24FAB93C258395A2D (U3CCoroutineScreenshotU3Ed__10_t2C747DD4C86CC073DD5A26964FAF88210F45DD36* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraImageExample/<perspectiveWarpApply>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CperspectiveWarpApplyU3Ed__11__ctor_m8318255C7F74A5922DC31EE277E3C2C926D07239 (U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CameraImageExample/<perspectiveWarpApply>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CperspectiveWarpApplyU3Ed__11_System_IDisposable_Dispose_m819E45412846E121AA25060B7AF1897717931F82 (U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CameraImageExample/<perspectiveWarpApply>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CperspectiveWarpApplyU3Ed__11_MoveNext_mA8AA0C143B37CA020B55D39ECEE3954B497035A4 (U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_4 = NULL;
	MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* V_5 = NULL;
	MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* V_6 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_7 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_8 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_9 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_015c;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int width = 400;
		V_2 = ((int32_t)400);
		// int height = 400;
		V_3 = ((int32_t)400);
		// Mat img = Mat.zeros(new Size(originalTexture.width,originalTexture.height),CvType.CV_8UC3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___originalTexture_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___originalTexture_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_8 = (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC*)il2cpp_codegen_object_new(Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Size__ctor_mD7D3D4B7411F9791AFE27A8D82C9D5091ED56EE6(L_8, ((double)L_5), ((double)L_7), NULL);
		il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		int32_t L_9 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_8UC3_11;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_10;
		L_10 = Mat_zeros_mFAB31BC5D4A32905DAAFC25B1056EB5DA7058867(L_8, L_9, NULL);
		V_4 = L_10;
		// Utils.texture2DToMat(originalTexture, img);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___originalTexture_2;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_12 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		Utils_texture2DToMat_m719D7CF7DB7529D4ED317A7AA5FBAFEED5FB6531(L_11, L_12, (bool)1, 0, NULL);
		// MatOfPoint2f  src_mat = pointsInResolution(originalTexture.width, originalTexture.height,Screen.width, Screen.height);
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_13 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = __this->___originalTexture_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = __this->___originalTexture_2;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		int32_t L_18;
		L_18 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_19;
		L_19 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		NullCheck(L_13);
		MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_20;
		L_20 = CameraImageExample_pointsInResolution_mB8BF4F091A09D5B71A336C3A49C602FDDD6E6F3B(L_13, L_15, L_17, L_18, L_19, NULL);
		V_5 = L_20;
		// MatOfPoint2f  dst_mat = new MatOfPoint2f(new Point(0,0), new Point(width,0), new Point(0,height), new Point(width,height));
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_21 = (PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB*)(PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB*)SZArrayNew(PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB_il2cpp_TypeInfo_var, (uint32_t)4);
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_22 = L_21;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_23 = (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)il2cpp_codegen_object_new(Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Point__ctor_m0E943E97CC3013044DCC0A7F1FAD8694136AF591(L_23, (0.0), (0.0), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)L_23);
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_24 = L_22;
		int32_t L_25 = V_2;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_26 = (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)il2cpp_codegen_object_new(Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Point__ctor_m0E943E97CC3013044DCC0A7F1FAD8694136AF591(L_26, ((double)L_25), (0.0), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)L_26);
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_27 = L_24;
		int32_t L_28 = V_3;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_29 = (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)il2cpp_codegen_object_new(Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Point__ctor_m0E943E97CC3013044DCC0A7F1FAD8694136AF591(L_29, (0.0), ((double)L_28), NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)L_29);
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_30 = L_27;
		int32_t L_31 = V_2;
		int32_t L_32 = V_3;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_33 = (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)il2cpp_codegen_object_new(Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Point__ctor_m0E943E97CC3013044DCC0A7F1FAD8694136AF591(L_33, ((double)L_31), ((double)L_32), NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)L_33);
		MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_34 = (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8*)il2cpp_codegen_object_new(MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		MatOfPoint2f__ctor_mC15533B7B2669AC472D3660C15E68273D45501BF(L_34, L_30, NULL);
		V_6 = L_34;
		// Mat outputMat = Mat.zeros(new Size(width,height),CvType.CV_8UC3);
		int32_t L_35 = V_2;
		int32_t L_36 = V_3;
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_37 = (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC*)il2cpp_codegen_object_new(Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Size__ctor_mD7D3D4B7411F9791AFE27A8D82C9D5091ED56EE6(L_37, ((double)L_35), ((double)L_36), NULL);
		int32_t L_38 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_8UC3_11;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_39;
		L_39 = Mat_zeros_mFAB31BC5D4A32905DAAFC25B1056EB5DA7058867(L_37, L_38, NULL);
		V_7 = L_39;
		// Mat matrix = Imgproc.getPerspectiveTransform(src_mat, dst_mat);
		MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_40 = V_5;
		MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_41 = V_6;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_42;
		L_42 = Imgproc_getPerspectiveTransform_mCB819091C45D8732F7FDAB6FDAF7953D86BA99A2(L_40, L_41, NULL);
		V_8 = L_42;
		// Imgproc.warpPerspective(img, outputMat, matrix, new Size(width,height));
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_43 = V_4;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_44 = V_7;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_45 = V_8;
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_48 = (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC*)il2cpp_codegen_object_new(Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Size__ctor_mD7D3D4B7411F9791AFE27A8D82C9D5091ED56EE6(L_48, ((double)L_46), ((double)L_47), NULL);
		Imgproc_warpPerspective_m7425FF7E5641458A73A72045274072B49A0FE663(L_43, L_44, L_45, L_48, NULL);
		// Texture2D outputTexture = new Texture2D(outputMat.cols(), outputMat.rows(), TextureFormat.RGBA32, false);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_49 = V_7;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = Mat_cols_mA8C3EC315EC7F3EB97B30381F8D8269BCA475297(L_49, NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_51 = V_7;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5(L_51, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_53 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_53, L_50, L_52, 4, (bool)0, NULL);
		V_9 = L_53;
		// Utils.matToTexture2D(outputMat, outputTexture);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_54 = V_7;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_55 = V_9;
		Utils_matToTexture2D_m16080BAB307F864212C3286528C917CEE8C84E09(L_54, L_55, (bool)1, 0, (bool)0, (bool)0, (bool)0, NULL);
		// rawImage.texture = outputTexture;
		CameraImageExample_t687D36E82A312A90B158EDEA2BEB2337DBC77D0B* L_56 = V_1;
		NullCheck(L_56);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_57 = L_56->___rawImage_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_58 = V_9;
		NullCheck(L_57);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_57, L_58, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_015c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object CameraImageExample/<perspectiveWarpApply>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CperspectiveWarpApplyU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m33F1B313734F964D9C2245A3268914DEFEE543BA (U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CameraImageExample/<perspectiveWarpApply>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CperspectiveWarpApplyU3Ed__11_System_Collections_IEnumerator_Reset_mD9091FE5A9EB826D6BFEBF5CCC012483F136CAFA (U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CperspectiveWarpApplyU3Ed__11_System_Collections_IEnumerator_Reset_mD9091FE5A9EB826D6BFEBF5CCC012483F136CAFA_RuntimeMethod_var)));
	}
}
// System.Object CameraImageExample/<perspectiveWarpApply>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CperspectiveWarpApplyU3Ed__11_System_Collections_IEnumerator_get_Current_m373E16454F98E093A6795C06BADD5F4EEA2896C1 (U3CperspectiveWarpApplyU3Ed__11_t709ECA8BB4C2C1B7F2D42C0C9DE9B631596E699C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NewTextureAdd::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewTextureAdd_Start_m662E022905AD0B9ED0A4095780D1B2F48A20C834 (NewTextureAdd_tB1E50649955666FF540D821CAE1B834F7B5132F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean NewTextureAdd::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewTextureAdd_TryGetTouchPosition_m17C026EE28F4F0BCA95A94B3024F4EA09903C49C (NewTextureAdd_tB1E50649955666FF540D821CAE1B834F7B5132F3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E1CF86760F87095329CFB79DF5FDBC3899BDD33);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(Input.touchCount==1){
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// touchPosition = Input.GetTouch(0).position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___touchPosition0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_1 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_1 = L_3;
		// Ray ray = arCamera.ScreenPointToRay(touchPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___arCamera_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___touchPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		NullCheck(L_4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		L_8 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_4, L_7, NULL);
		// if (Physics.Raycast(ray, out hit)&&hit.collider != null&&hit.collider.gameObject.name==gameObject.name) {
		bool L_9;
		L_9 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_8, (&V_0), NULL);
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10;
		L_10 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0079;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12;
		L_12 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, L_16, NULL);
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		// Debug.Log("hit.collider.gameObject.name");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5E1CF86760F87095329CFB79DF5FDBC3899BDD33, NULL);
		// return true;
		return (bool)1;
	}

IL_0079:
	{
		// touchPosition  = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = ___touchPosition0;
		il2cpp_codegen_initobj(L_18, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// return false;
		return (bool)0;
	}
}
// System.Void NewTextureAdd::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewTextureAdd_Update_m7AC2407369C8F5761D588C72FD1A43F800DD8A21 (NewTextureAdd_tB1E50649955666FF540D821CAE1B834F7B5132F3* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(!TryGetTouchPosition(out Vector2 touchPosition)){
		bool L_0;
		L_0 = NewTextureAdd_TryGetTouchPosition_m17C026EE28F4F0BCA95A94B3024F4EA09903C49C(__this, (&V_0), NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void NewTextureAdd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewTextureAdd__ctor_m4F7F6339EA5D244B493B0580141534DC97A73DB4 (NewTextureAdd_tB1E50649955666FF540D821CAE1B834F7B5132F3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___newX0;
		__this->___x_2 = L_0;
		float L_1 = ___newY1;
		__this->___y_3 = L_1;
		float L_2 = ___newZ2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}

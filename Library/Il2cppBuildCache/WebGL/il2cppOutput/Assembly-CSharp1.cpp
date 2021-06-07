#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.EventSystems.PointerEventData>
struct Action_1_tA2DD7F6E11491D13B5BD6A51C36682B60C1F578B;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B;
// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<UnityEngine.Camera>
struct Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Func`1<UnityEngine.Vector3>
struct Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08;
// System.Collections.Generic.List`1<CodeMonkey.Utils.FunctionUpdater>
struct List_1_t504D6C0F0514635F66E1A2C3335F5A0A328EA8B3;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// CodeMonkey.Assets
struct Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// CodeMonkey.Utils.Button_Sprite
struct Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066;
// CodeMonkey.Utils.Button_UI
struct Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// CodeMonkey.Utils.FunctionUpdater
struct FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// CodeMonkey.Utils.UI_Sprite
struct UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// CodeMonkey.Utils.World_Mesh
struct World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21;
// CodeMonkey.Utils.World_Sprite
struct World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66;
// article
struct article_t24309762A688BEBA5D9AE214DBCCACEB88C43F11;
// player2
struct player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// CodeMonkey.Utils.Button_Sprite/<>c
struct U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B;
// CodeMonkey.Utils.Button_UI/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_tE0B826C3E82158E1B70A6685D69BF43F8C7A418D;
// CodeMonkey.Utils.Button_UI/<>c__DisplayClass46_0
struct U3CU3Ec__DisplayClass46_0_tDAE4BF0FAB94027AD3EC75AD4E8A8A7BCAB91BA6;
// CodeMonkey.Utils.Button_UI/InterceptActionHandler
struct InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1;
// CodeMonkey.CMDebug/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t87FAA324BE8CF408780FDA2305E83B6EF8568698;
// CodeMonkey.CMDebug/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t2AA139612845657BD1D96B4C0F8A14C2556248AD;
// CodeMonkey.CMDebug/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t608E5A0118B75FAF76695472685B88BFE5BDD636;
// CodeMonkey.CMDebug/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tCA159636BB4F0001C2E47FB9461910BE3BFC80F6;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t94B4F15EC46E27A859852A456FAB26A909AB0C33;
// CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tCBE9BF1E43FD204DF61CE5C906118D208040757C;
// CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c
struct U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4;
// CodeMonkey.Utils.FunctionPeriodic/MonoBehaviourHook
struct MonoBehaviourHook_t5CF272546F6BB863E2500DF31F7BA75F44F969DF;
// CodeMonkey.Utils.FunctionTimer/FunctionTimerObject
struct FunctionTimerObject_tCBCB54F994F9B94192127BE13BD3C37154F37739;
// CodeMonkey.Utils.FunctionTimer/MonoBehaviourHook
struct MonoBehaviourHook_tD91D26718582FADB653D271568B86BBF0FF146A6;
// CodeMonkey.Utils.FunctionUpdater/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t529908B2241F66C86C3B4B7DD1BB889F547E39D9;
// CodeMonkey.Utils.FunctionUpdater/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t4A998D3A4CDA5F3777A69DC2D62C14FF2913EB67;
// CodeMonkey.Utils.FunctionUpdater/MonoBehaviourHook
struct MonoBehaviourHook_t91E87D3D400E6903AA423FA2AE3A07349A8EB692;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// CodeMonkey.Utils.UI_Bar/Outline
struct Outline_tDE54FB55CDC069176B6F15C1B7DFE0367257DB2D;
// CodeMonkey.Utils.UI_BarMultiple/Outline
struct Outline_t30C9845191591806D84BD6D7809A8405397E0D8A;
// CodeMonkey.Utils.UI_Sprite/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tDCF69252FA6291E8ADCF558083FE58B74597A960;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tF6CFA44B8730A2B65B02EAAF3564587770EC5B01;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tF68643E48E1C849FFA5D7EEC5C2BD4701B0B5202;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t7D0114B0F864BEA8AF5826CA24096433BB46424A;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t9187C1FD66B2DFE407761F382CE5FDE65DE6F806;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_tE4F124901A91B675508FADF11B14139950C0B06B;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_tC686698F780074E32D69A3F95DA362BD5A9D4618;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_tA68F688B0EB182279B44DDAAA0C5E5199A3663FD;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0
struct U3CU3Ec__DisplayClass76_0_t38C189DA6C17BB3391CDADBC1129653DFEB5267F;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_t79B2C050D23A2BFD40438DB1166F088A3188826C;
// CodeMonkey.Utils.UtilsClass/JsonDictionary
struct JsonDictionary_t592D0C6A5E99A2EE36E2EE7843341EE12042A6BE;
// CodeMonkey.Utils.World_Bar/Outline
struct Outline_t4491BB7682DAC745DBF9DE70A9B99B0F67A6B136;
// CodeMonkey.Utils.World_Mesh/UVCoords
struct UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C;
// CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0;
// CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E40FD816FA06BF4A96B5DAC0C15D881442F7C7D;
IL2CPP_EXTERN_C String_t* _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011;
IL2CPP_EXTERN_C String_t* _stringLiteral2619A50D640D12F7EAED94CD5A39DFCD03B99E2A;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821;
IL2CPP_EXTERN_C String_t* _stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE2AA3A701649CC43A2E9341CC61243714522AC;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE6FC00E66878771A5D97FE8E877FFB625457E5;
IL2CPP_EXTERN_C String_t* _stringLiteralD043BF74961BDB48374C3FF0B17827DBBF6C7F2A;
IL2CPP_EXTERN_C String_t* _stringLiteralD766DFC9DAFE8A53336C517FCAA7EDC54BE79778;
IL2CPP_EXTERN_C String_t* _stringLiteralED46F57488487C31729552B22A6ECB873B8FD2C7;
IL2CPP_EXTERN_C String_t* _stringLiteralF6A3463C3F0A237C6D59BD191E963BE8C8E0E6D3;
IL2CPP_EXTERN_C String_t* _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFF0F9038A26E4D8772CC7DABE8604FC6B53A8F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m728FB332AD1A2628A9FC76F9F0D6FFCE83CED99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m67ACBA85BD6ABA0E3DAEB3BA6FAD566FAF3ED7FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m99A062A5D6783FEB51E6513F24C21788A92638EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisButton_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066_mE3BF674C6CEE3F66C70832D360C703499A6FBA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionTools_CallMethod_mEF25DDDF4D0F003BBC2A64DB6E93BC5707739EE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionTools_GetField_m6ED3DCB83822E593AD9D2B9703311743A97B2935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionTools_GetNestedType_mF18944F7EE973BB6946E476492F782AC6FB703BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CSetPositionU3Eb__0_m587562D9C5363C1D5E5226266F1F5F2B5B3DDEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__0_mF97183B5AE787305771D5CBB5B266DC64D2FD7A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__1_mBE26EC0FDC9F274A79E3F19F2E2FF3C22CE123D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* World_Mesh_ApplyUVToUVArray_mAE708CFD4C8232AB56B7C05DBE8AE74F82D8C5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_0_0_0_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// CodeMonkey.Utils.FunctionUpdater
struct FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B  : public RuntimeObject
{
public:
	// UnityEngine.GameObject CodeMonkey.Utils.FunctionUpdater::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_2;
	// System.String CodeMonkey.Utils.FunctionUpdater::functionName
	String_t* ___functionName_3;
	// System.Boolean CodeMonkey.Utils.FunctionUpdater::active
	bool ___active_4;
	// System.Func`1<System.Boolean> CodeMonkey.Utils.FunctionUpdater::updateFunc
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___updateFunc_5;

public:
	inline static int32_t get_offset_of_gameObject_2() { return static_cast<int32_t>(offsetof(FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B, ___gameObject_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_2() const { return ___gameObject_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_2() { return &___gameObject_2; }
	inline void set_gameObject_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_functionName_3() { return static_cast<int32_t>(offsetof(FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B, ___functionName_3)); }
	inline String_t* get_functionName_3() const { return ___functionName_3; }
	inline String_t** get_address_of_functionName_3() { return &___functionName_3; }
	inline void set_functionName_3(String_t* value)
	{
		___functionName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___functionName_3), (void*)value);
	}

	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_updateFunc_5() { return static_cast<int32_t>(offsetof(FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B, ___updateFunc_5)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_updateFunc_5() const { return ___updateFunc_5; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_updateFunc_5() { return &___updateFunc_5; }
	inline void set_updateFunc_5(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___updateFunc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateFunc_5), (void*)value);
	}
};

struct FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B_StaticFields
{
public:
	// System.Collections.Generic.List`1<CodeMonkey.Utils.FunctionUpdater> CodeMonkey.Utils.FunctionUpdater::updaterList
	List_1_t504D6C0F0514635F66E1A2C3335F5A0A328EA8B3 * ___updaterList_0;
	// UnityEngine.GameObject CodeMonkey.Utils.FunctionUpdater::initGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___initGameObject_1;

public:
	inline static int32_t get_offset_of_updaterList_0() { return static_cast<int32_t>(offsetof(FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B_StaticFields, ___updaterList_0)); }
	inline List_1_t504D6C0F0514635F66E1A2C3335F5A0A328EA8B3 * get_updaterList_0() const { return ___updaterList_0; }
	inline List_1_t504D6C0F0514635F66E1A2C3335F5A0A328EA8B3 ** get_address_of_updaterList_0() { return &___updaterList_0; }
	inline void set_updaterList_0(List_1_t504D6C0F0514635F66E1A2C3335F5A0A328EA8B3 * value)
	{
		___updaterList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updaterList_0), (void*)value);
	}

	inline static int32_t get_offset_of_initGameObject_1() { return static_cast<int32_t>(offsetof(FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B_StaticFields, ___initGameObject_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_initGameObject_1() const { return ___initGameObject_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_initGameObject_1() { return &___initGameObject_1; }
	inline void set_initGameObject_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___initGameObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initGameObject_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// CodeMonkey.Utils.UI_Sprite
struct UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6  : public RuntimeObject
{
public:
	// UnityEngine.GameObject CodeMonkey.Utils.UI_Sprite::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
	// UnityEngine.UI.Image CodeMonkey.Utils.UI_Sprite::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_1;
	// UnityEngine.RectTransform CodeMonkey.Utils.UI_Sprite::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_2;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6, ___gameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_image_1() { return static_cast<int32_t>(offsetof(UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6, ___image_1)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_1() const { return ___image_1; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_1() { return &___image_1; }
	inline void set_image_1(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_1), (void*)value);
	}

	inline static int32_t get_offset_of_rectTransform_2() { return static_cast<int32_t>(offsetof(UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6, ___rectTransform_2)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_2() const { return ___rectTransform_2; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_2() { return &___rectTransform_2; }
	inline void set_rectTransform_2(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_2), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// CodeMonkey.Utils.World_Mesh
struct World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21  : public RuntimeObject
{
public:
	// UnityEngine.GameObject CodeMonkey.Utils.World_Mesh::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_1;
	// UnityEngine.Transform CodeMonkey.Utils.World_Mesh::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_2;
	// UnityEngine.Material CodeMonkey.Utils.World_Mesh::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// UnityEngine.Vector3[] CodeMonkey.Utils.World_Mesh::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_4;
	// UnityEngine.Vector2[] CodeMonkey.Utils.World_Mesh::uv
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uv_5;
	// System.Int32[] CodeMonkey.Utils.World_Mesh::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_6;
	// UnityEngine.Mesh CodeMonkey.Utils.World_Mesh::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_7;

public:
	inline static int32_t get_offset_of_gameObject_1() { return static_cast<int32_t>(offsetof(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21, ___gameObject_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_1() const { return ___gameObject_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_1() { return &___gameObject_1; }
	inline void set_gameObject_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_transform_2() { return static_cast<int32_t>(offsetof(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21, ___transform_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_2() const { return ___transform_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_2() { return &___transform_2; }
	inline void set_transform_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_4() { return static_cast<int32_t>(offsetof(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21, ___vertices_4)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_4() const { return ___vertices_4; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_4() { return &___vertices_4; }
	inline void set_vertices_4(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_4), (void*)value);
	}

	inline static int32_t get_offset_of_uv_5() { return static_cast<int32_t>(offsetof(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21, ___uv_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uv_5() const { return ___uv_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uv_5() { return &___uv_5; }
	inline void set_uv_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uv_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uv_5), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_6() { return static_cast<int32_t>(offsetof(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21, ___triangles_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_6() const { return ___triangles_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_6() { return &___triangles_6; }
	inline void set_triangles_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_6), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_7() { return static_cast<int32_t>(offsetof(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21, ___mesh_7)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_7() const { return ___mesh_7; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_7() { return &___mesh_7; }
	inline void set_mesh_7(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_7), (void*)value);
	}
};


// CodeMonkey.Utils.World_Sprite
struct World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66  : public RuntimeObject
{
public:
	// UnityEngine.GameObject CodeMonkey.Utils.World_Sprite::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_1;
	// UnityEngine.Transform CodeMonkey.Utils.World_Sprite::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_2;
	// UnityEngine.SpriteRenderer CodeMonkey.Utils.World_Sprite::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_3;

public:
	inline static int32_t get_offset_of_gameObject_1() { return static_cast<int32_t>(offsetof(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66, ___gameObject_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_1() const { return ___gameObject_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_1() { return &___gameObject_1; }
	inline void set_gameObject_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_transform_2() { return static_cast<int32_t>(offsetof(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66, ___transform_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_2() const { return ___transform_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_2() { return &___transform_2; }
	inline void set_transform_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_2), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderer_3() { return static_cast<int32_t>(offsetof(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66, ___spriteRenderer_3)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_3() const { return ___spriteRenderer_3; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_3() { return &___spriteRenderer_3; }
	inline void set_spriteRenderer_3(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_3), (void*)value);
	}
};


// CodeMonkey.Utils.Button_Sprite/<>c
struct U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B_StaticFields
{
public:
	// CodeMonkey.Utils.Button_Sprite/<>c CodeMonkey.Utils.Button_Sprite/<>c::<>9
	U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B * ___U3CU3E9_0;
	// System.Func`1<UnityEngine.Camera> CodeMonkey.Utils.Button_Sprite/<>c::<>9__43_0
	Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 * ___U3CU3E9__43_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__43_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B_StaticFields, ___U3CU3E9__43_0_1)); }
	inline Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 * get_U3CU3E9__43_0_1() const { return ___U3CU3E9__43_0_1; }
	inline Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 ** get_address_of_U3CU3E9__43_0_1() { return &___U3CU3E9__43_0_1; }
	inline void set_U3CU3E9__43_0_1(Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 * value)
	{
		___U3CU3E9__43_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__43_0_1), (void*)value);
	}
};


// CodeMonkey.Utils.Button_UI/<>c__DisplayClass46_0
struct U3CU3Ec__DisplayClass46_0_tDAE4BF0FAB94027AD3EC75AD4E8A8A7BCAB91BA6  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo CodeMonkey.Utils.Button_UI/<>c__DisplayClass46_0::fieldInfo
	FieldInfo_t * ___fieldInfo_0;
	// CodeMonkey.Utils.Button_UI CodeMonkey.Utils.Button_UI/<>c__DisplayClass46_0::<>4__this
	Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 * ___U3CU3E4__this_1;
	// System.Action CodeMonkey.Utils.Button_UI/<>c__DisplayClass46_0::backFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___backFunc_2;
	// System.Func`1<System.Boolean> CodeMonkey.Utils.Button_UI/<>c__DisplayClass46_0::testPassthroughFunc
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___testPassthroughFunc_3;
	// CodeMonkey.Utils.Button_UI/InterceptActionHandler CodeMonkey.Utils.Button_UI/<>c__DisplayClass46_0::interceptActionHandler
	InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1 * ___interceptActionHandler_4;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_tDAE4BF0FAB94027AD3EC75AD4E8A8A7BCAB91BA6, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_tDAE4BF0FAB94027AD3EC75AD4E8A8A7BCAB91BA6, ___U3CU3E4__this_1)); }
	inline Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_backFunc_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_tDAE4BF0FAB94027AD3EC75AD4E8A8A7BCAB91BA6, ___backFunc_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_backFunc_2() const { return ___backFunc_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_backFunc_2() { return &___backFunc_2; }
	inline void set_backFunc_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___backFunc_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backFunc_2), (void*)value);
	}

	inline static int32_t get_offset_of_testPassthroughFunc_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_tDAE4BF0FAB94027AD3EC75AD4E8A8A7BCAB91BA6, ___testPassthroughFunc_3)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_testPassthroughFunc_3() const { return ___testPassthroughFunc_3; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_testPassthroughFunc_3() { return &___testPassthroughFunc_3; }
	inline void set_testPassthroughFunc_3(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___testPassthroughFunc_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testPassthroughFunc_3), (void*)value);
	}

	inline static int32_t get_offset_of_interceptActionHandler_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_tDAE4BF0FAB94027AD3EC75AD4E8A8A7BCAB91BA6, ___interceptActionHandler_4)); }
	inline InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1 * get_interceptActionHandler_4() const { return ___interceptActionHandler_4; }
	inline InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1 ** get_address_of_interceptActionHandler_4() { return &___interceptActionHandler_4; }
	inline void set_interceptActionHandler_4(InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1 * value)
	{
		___interceptActionHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interceptActionHandler_4), (void*)value);
	}
};


// CodeMonkey.Utils.Button_UI/InterceptActionHandler
struct InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1  : public RuntimeObject
{
public:
	// System.Action CodeMonkey.Utils.Button_UI/InterceptActionHandler::removeInterceptFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___removeInterceptFunc_0;

public:
	inline static int32_t get_offset_of_removeInterceptFunc_0() { return static_cast<int32_t>(offsetof(InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1, ___removeInterceptFunc_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_removeInterceptFunc_0() const { return ___removeInterceptFunc_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_removeInterceptFunc_0() { return &___removeInterceptFunc_0; }
	inline void set_removeInterceptFunc_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___removeInterceptFunc_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeInterceptFunc_0), (void*)value);
	}
};


// CodeMonkey.CMDebug/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t608E5A0118B75FAF76695472685B88BFE5BDD636  : public RuntimeObject
{
public:
	// UnityEngine.GameObject CodeMonkey.CMDebug/<>c__DisplayClass17_0::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
	// System.Single CodeMonkey.CMDebug/<>c__DisplayClass17_0::currentTime
	float ___currentTime_1;
	// System.Single CodeMonkey.CMDebug/<>c__DisplayClass17_0::startAlphaDecayTime
	float ___startAlphaDecayTime_2;
	// UnityEngine.SpriteRenderer CodeMonkey.CMDebug/<>c__DisplayClass17_0::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_3;
	// System.Single CodeMonkey.CMDebug/<>c__DisplayClass17_0::timer
	float ___timer_4;
	// System.Single CodeMonkey.CMDebug/<>c__DisplayClass17_0::totalAlphaDecayTime
	float ___totalAlphaDecayTime_5;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t608E5A0118B75FAF76695472685B88BFE5BDD636, ___gameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentTime_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t608E5A0118B75FAF76695472685B88BFE5BDD636, ___currentTime_1)); }
	inline float get_currentTime_1() const { return ___currentTime_1; }
	inline float* get_address_of_currentTime_1() { return &___currentTime_1; }
	inline void set_currentTime_1(float value)
	{
		___currentTime_1 = value;
	}

	inline static int32_t get_offset_of_startAlphaDecayTime_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t608E5A0118B75FAF76695472685B88BFE5BDD636, ___startAlphaDecayTime_2)); }
	inline float get_startAlphaDecayTime_2() const { return ___startAlphaDecayTime_2; }
	inline float* get_address_of_startAlphaDecayTime_2() { return &___startAlphaDecayTime_2; }
	inline void set_startAlphaDecayTime_2(float value)
	{
		___startAlphaDecayTime_2 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t608E5A0118B75FAF76695472685B88BFE5BDD636, ___spriteRenderer_3)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_3() const { return ___spriteRenderer_3; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_3() { return &___spriteRenderer_3; }
	inline void set_spriteRenderer_3(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_3), (void*)value);
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t608E5A0118B75FAF76695472685B88BFE5BDD636, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_totalAlphaDecayTime_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t608E5A0118B75FAF76695472685B88BFE5BDD636, ___totalAlphaDecayTime_5)); }
	inline float get_totalAlphaDecayTime_5() const { return ___totalAlphaDecayTime_5; }
	inline float* get_address_of_totalAlphaDecayTime_5() { return &___totalAlphaDecayTime_5; }
	inline void set_totalAlphaDecayTime_5(float value)
	{
		___totalAlphaDecayTime_5 = value;
	}
};


// CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t94B4F15EC46E27A859852A456FAB26A909AB0C33  : public RuntimeObject
{
public:
	// System.Single CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0::cameraZoom
	float ___cameraZoom_0;

public:
	inline static int32_t get_offset_of_cameraZoom_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t94B4F15EC46E27A859852A456FAB26A909AB0C33, ___cameraZoom_0)); }
	inline float get_cameraZoom_0() const { return ___cameraZoom_0; }
	inline float* get_address_of_cameraZoom_0() { return &___cameraZoom_0; }
	inline void set_cameraZoom_0(float value)
	{
		___cameraZoom_0 = value;
	}
};


// CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c
struct U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4_StaticFields
{
public:
	// CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::<>9
	U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4 * ___U3CU3E9_0;
	// System.Func`1<UnityEngine.Vector3> CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::<>9__3_0
	Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// CodeMonkey.Utils.FunctionTimer/FunctionTimerObject
struct FunctionTimerObject_tCBCB54F994F9B94192127BE13BD3C37154F37739  : public RuntimeObject
{
public:
	// System.Single CodeMonkey.Utils.FunctionTimer/FunctionTimerObject::timer
	float ___timer_0;
	// System.Action CodeMonkey.Utils.FunctionTimer/FunctionTimerObject::callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback_1;

public:
	inline static int32_t get_offset_of_timer_0() { return static_cast<int32_t>(offsetof(FunctionTimerObject_tCBCB54F994F9B94192127BE13BD3C37154F37739, ___timer_0)); }
	inline float get_timer_0() const { return ___timer_0; }
	inline float* get_address_of_timer_0() { return &___timer_0; }
	inline void set_timer_0(float value)
	{
		___timer_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(FunctionTimerObject_tCBCB54F994F9B94192127BE13BD3C37154F37739, ___callback_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callback_1() const { return ___callback_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// CodeMonkey.Utils.FunctionUpdater/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t529908B2241F66C86C3B4B7DD1BB889F547E39D9  : public RuntimeObject
{
public:
	// System.Action CodeMonkey.Utils.FunctionUpdater/<>c__DisplayClass4_0::updateFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___updateFunc_0;

public:
	inline static int32_t get_offset_of_updateFunc_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t529908B2241F66C86C3B4B7DD1BB889F547E39D9, ___updateFunc_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_updateFunc_0() const { return ___updateFunc_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_updateFunc_0() { return &___updateFunc_0; }
	inline void set_updateFunc_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___updateFunc_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateFunc_0), (void*)value);
	}
};


// CodeMonkey.Utils.FunctionUpdater/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t4A998D3A4CDA5F3777A69DC2D62C14FF2913EB67  : public RuntimeObject
{
public:
	// System.Action CodeMonkey.Utils.FunctionUpdater/<>c__DisplayClass5_0::updateFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___updateFunc_0;

public:
	inline static int32_t get_offset_of_updateFunc_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t4A998D3A4CDA5F3777A69DC2D62C14FF2913EB67, ___updateFunc_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_updateFunc_0() const { return ___updateFunc_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_updateFunc_0() { return &___updateFunc_0; }
	inline void set_updateFunc_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___updateFunc_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateFunc_0), (void*)value);
	}
};


// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tF6CFA44B8730A2B65B02EAAF3564587770EC5B01  : public RuntimeObject
{
public:
	// UnityEngine.TextMesh CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0::textMesh
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___textMesh_0;
	// System.Func`1<System.String> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0::GetTextFunc
	Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___GetTextFunc_1;

public:
	inline static int32_t get_offset_of_textMesh_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tF6CFA44B8730A2B65B02EAAF3564587770EC5B01, ___textMesh_0)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_textMesh_0() const { return ___textMesh_0; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_textMesh_0() { return &___textMesh_0; }
	inline void set_textMesh_0(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___textMesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_GetTextFunc_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tF6CFA44B8730A2B65B02EAAF3564587770EC5B01, ___GetTextFunc_1)); }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * get_GetTextFunc_1() const { return ___GetTextFunc_1; }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 ** get_address_of_GetTextFunc_1() { return &___GetTextFunc_1; }
	inline void set_GetTextFunc_1(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * value)
	{
		___GetTextFunc_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTextFunc_1), (void*)value);
	}
};


// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t7D0114B0F864BEA8AF5826CA24096433BB46424A  : public RuntimeObject
{
public:
	// UnityEngine.UI.Text CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_0;
	// System.Func`1<System.String> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0::GetTextFunc
	Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___GetTextFunc_1;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t7D0114B0F864BEA8AF5826CA24096433BB46424A, ___text_0)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_0() const { return ___text_0; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_0), (void*)value);
	}

	inline static int32_t get_offset_of_GetTextFunc_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t7D0114B0F864BEA8AF5826CA24096433BB46424A, ___GetTextFunc_1)); }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * get_GetTextFunc_1() const { return ___GetTextFunc_1; }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 ** get_address_of_GetTextFunc_1() { return &___GetTextFunc_1; }
	inline void set_GetTextFunc_1(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * value)
	{
		___GetTextFunc_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTextFunc_1), (void*)value);
	}
};


// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t9187C1FD66B2DFE407761F382CE5FDE65DE6F806  : public RuntimeObject
{
public:
	// System.Int32 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0::mouseButton
	int32_t ___mouseButton_0;
	// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0::dragging
	bool ___dragging_1;
	// System.Action`1<UnityEngine.Vector3> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0::onMouseDragging
	Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * ___onMouseDragging_2;

public:
	inline static int32_t get_offset_of_mouseButton_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_t9187C1FD66B2DFE407761F382CE5FDE65DE6F806, ___mouseButton_0)); }
	inline int32_t get_mouseButton_0() const { return ___mouseButton_0; }
	inline int32_t* get_address_of_mouseButton_0() { return &___mouseButton_0; }
	inline void set_mouseButton_0(int32_t value)
	{
		___mouseButton_0 = value;
	}

	inline static int32_t get_offset_of_dragging_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_t9187C1FD66B2DFE407761F382CE5FDE65DE6F806, ___dragging_1)); }
	inline bool get_dragging_1() const { return ___dragging_1; }
	inline bool* get_address_of_dragging_1() { return &___dragging_1; }
	inline void set_dragging_1(bool value)
	{
		___dragging_1 = value;
	}

	inline static int32_t get_offset_of_onMouseDragging_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_t9187C1FD66B2DFE407761F382CE5FDE65DE6F806, ___onMouseDragging_2)); }
	inline Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * get_onMouseDragging_2() const { return ___onMouseDragging_2; }
	inline Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B ** get_address_of_onMouseDragging_2() { return &___onMouseDragging_2; }
	inline void set_onMouseDragging_2(Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * value)
	{
		___onMouseDragging_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onMouseDragging_2), (void*)value);
	}
};


// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_tC686698F780074E32D69A3F95DA362BD5A9D4618  : public RuntimeObject
{
public:
	// System.Int32 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0::mouseButton
	int32_t ___mouseButton_0;
	// System.Action`1<UnityEngine.Vector3> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0::onMouseClick
	Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * ___onMouseClick_1;

public:
	inline static int32_t get_offset_of_mouseButton_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass66_0_tC686698F780074E32D69A3F95DA362BD5A9D4618, ___mouseButton_0)); }
	inline int32_t get_mouseButton_0() const { return ___mouseButton_0; }
	inline int32_t* get_address_of_mouseButton_0() { return &___mouseButton_0; }
	inline void set_mouseButton_0(int32_t value)
	{
		___mouseButton_0 = value;
	}

	inline static int32_t get_offset_of_onMouseClick_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass66_0_tC686698F780074E32D69A3F95DA362BD5A9D4618, ___onMouseClick_1)); }
	inline Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * get_onMouseClick_1() const { return ___onMouseClick_1; }
	inline Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B ** get_address_of_onMouseClick_1() { return &___onMouseClick_1; }
	inline void set_onMouseClick_1(Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * value)
	{
		___onMouseClick_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onMouseClick_1), (void*)value);
	}
};


// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_t79B2C050D23A2BFD40438DB1166F088A3188826C  : public RuntimeObject
{
public:
	// System.Action CodeMonkey.Utils.UtilsClass/<>c__DisplayClass77_0::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_t79B2C050D23A2BFD40438DB1166F088A3188826C, ___action_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_0() const { return ___action_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}
};


// CodeMonkey.Utils.UtilsClass/JsonDictionary
struct JsonDictionary_t592D0C6A5E99A2EE36E2EE7843341EE12042A6BE  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> CodeMonkey.Utils.UtilsClass/JsonDictionary::keyList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___keyList_0;
	// System.Collections.Generic.List`1<System.String> CodeMonkey.Utils.UtilsClass/JsonDictionary::valueList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___valueList_1;

public:
	inline static int32_t get_offset_of_keyList_0() { return static_cast<int32_t>(offsetof(JsonDictionary_t592D0C6A5E99A2EE36E2EE7843341EE12042A6BE, ___keyList_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_keyList_0() const { return ___keyList_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_keyList_0() { return &___keyList_0; }
	inline void set_keyList_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___keyList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyList_0), (void*)value);
	}

	inline static int32_t get_offset_of_valueList_1() { return static_cast<int32_t>(offsetof(JsonDictionary_t592D0C6A5E99A2EE36E2EE7843341EE12042A6BE, ___valueList_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_valueList_1() const { return ___valueList_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_valueList_1() { return &___valueList_1; }
	inline void set_valueList_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___valueList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueList_1), (void*)value);
	}
};


// CodeMonkey.Utils.UtilsClass/ReflectionTools
struct ReflectionTools_t694716A3DCBA2EB35CD59C0E5937B4F3809B9C8C  : public RuntimeObject
{
public:

public:
};


// CodeMonkey.Utils.World_Mesh/UVCoords
struct UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C  : public RuntimeObject
{
public:
	// System.Int32 CodeMonkey.Utils.World_Mesh/UVCoords::x
	int32_t ___x_0;
	// System.Int32 CodeMonkey.Utils.World_Mesh/UVCoords::y
	int32_t ___y_1;
	// System.Int32 CodeMonkey.Utils.World_Mesh/UVCoords::width
	int32_t ___width_2;
	// System.Int32 CodeMonkey.Utils.World_Mesh/UVCoords::height
	int32_t ___height_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}
};


// CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0  : public RuntimeObject
{
public:
	// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0::<>4__this
	World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * ___U3CU3E4__this_0;
	// System.Func`1<UnityEngine.Vector3> CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0::getLocalPosition
	Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * ___getLocalPosition_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0, ___U3CU3E4__this_0)); }
	inline World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_getLocalPosition_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0, ___getLocalPosition_1)); }
	inline Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * get_getLocalPosition_1() const { return ___getLocalPosition_1; }
	inline Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 ** get_address_of_getLocalPosition_1() { return &___getLocalPosition_1; }
	inline void set_getLocalPosition_1(Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * value)
	{
		___getLocalPosition_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getLocalPosition_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=104
struct __StaticArrayInitTypeSizeU3D104_tB71F1AD887763AA07E5F5C9ED0C1DCE5A893F9DE 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D104_tB71F1AD887763AA07E5F5C9ED0C1DCE5A893F9DE__padding[104];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct __StaticArrayInitTypeSizeU3D112_t366701DE02350ED8C8A65F92A137F54409B95542 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t366701DE02350ED8C8A65F92A137F54409B95542__padding[112];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tD78937C26C99B5FDF514E7F2EB4F8F2367B4C05A 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tD78937C26C99B5FDF514E7F2EB4F8F2367B4C05A__padding[120];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=136
struct __StaticArrayInitTypeSizeU3D136_t87A39F2387ACAD01A78B961E121C8210B933BE71 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D136_t87A39F2387ACAD01A78B961E121C8210B933BE71__padding[136];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66__padding[16];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160
struct __StaticArrayInitTypeSizeU3D160_t01D8A735071F3884433FD17606956ED602F11B27 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D160_t01D8A735071F3884433FD17606956ED602F11B27__padding[160];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2__padding[24];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F__padding[32];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_tEADC5D82E308542CB0A95168FC156FE53D85DB4F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_tEADC5D82E308542CB0A95168FC156FE53D85DB4F__padding[40];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tFD8B246DD801288DF862F996D7F0915222433AD7 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tFD8B246DD801288DF862F996D7F0915222433AD7__padding[48];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct __StaticArrayInitTypeSizeU3D56_tEBF9CCD8C2A1E8B12AE6EDE1B31598793DD01186 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_tEBF9CCD8C2A1E8B12AE6EDE1B31598793DD01186__padding[56];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C__padding[64];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_t2005207C3F6F7C1227A5084885E3320B238A2489 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t2005207C3F6F7C1227A5084885E3320B238A2489__padding[72];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80
struct __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625__padding[80];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88
struct __StaticArrayInitTypeSizeU3D88_t4C9F0619769B65D1722D44A3ECB97AAEB2791C16 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D88_t4C9F0619769B65D1722D44A3ECB97AAEB2791C16__padding[88];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_tADB23F3DA94DC89452F2BC0884B51C90615CDCD5 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tADB23F3DA94DC89452F2BC0884B51C90615CDCD5__padding[96];
	};

public:
};


// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 
{
public:
	// T System.Nullable`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___value_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_0() const { return ___value_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.TextAlignment
struct TextAlignment_t23BC9C82BA84BEC0BFE7426C26FE96C7DE0EF8F4 
{
public:
	// System.Int32 UnityEngine.TextAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignment_t23BC9C82BA84BEC0BFE7426C26FE96C7DE0EF8F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CodeMonkey.Utils.Button_Sprite/HoverBehaviour
struct HoverBehaviour_t91D8693BEF49EA5830AC490DBEB2D5944E6C842A 
{
public:
	// System.Int32 CodeMonkey.Utils.Button_Sprite/HoverBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HoverBehaviour_t91D8693BEF49EA5830AC490DBEB2D5944E6C842A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CodeMonkey.Utils.Button_UI/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_tE0B826C3E82158E1B70A6685D69BF43F8C7A418D  : public RuntimeObject
{
public:
	// UnityEngine.Color CodeMonkey.Utils.Button_UI/<>c__DisplayClass41_0::colorOver
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorOver_0;
	// UnityEngine.Color CodeMonkey.Utils.Button_UI/<>c__DisplayClass41_0::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	// CodeMonkey.Utils.Button_UI CodeMonkey.Utils.Button_UI/<>c__DisplayClass41_0::<>4__this
	Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_colorOver_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_tE0B826C3E82158E1B70A6685D69BF43F8C7A418D, ___colorOver_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorOver_0() const { return ___colorOver_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorOver_0() { return &___colorOver_0; }
	inline void set_colorOver_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorOver_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_tE0B826C3E82158E1B70A6685D69BF43F8C7A418D, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_tE0B826C3E82158E1B70A6685D69BF43F8C7A418D, ___U3CU3E4__this_2)); }
	inline Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// CodeMonkey.Utils.Button_UI/HoverBehaviour
struct HoverBehaviour_t22D0799ED2D8F79AE9BB64BD44B96F035ACA1CEC 
{
public:
	// System.Int32 CodeMonkey.Utils.Button_UI/HoverBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HoverBehaviour_t22D0799ED2D8F79AE9BB64BD44B96F035ACA1CEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CodeMonkey.CMDebug/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t87FAA324BE8CF408780FDA2305E83B6EF8568698  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 CodeMonkey.CMDebug/<>c__DisplayClass11_0::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_0;
	// UnityEngine.Vector3 CodeMonkey.CMDebug/<>c__DisplayClass11_0::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_1;
	// System.Single CodeMonkey.CMDebug/<>c__DisplayClass11_0::projectileSize
	float ___projectileSize_2;
	// UnityEngine.Vector3 CodeMonkey.CMDebug/<>c__DisplayClass11_0::to
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to_3;
	// System.Single CodeMonkey.CMDebug/<>c__DisplayClass11_0::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t87FAA324BE8CF408780FDA2305E83B6EF8568698, ___pos_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_0() const { return ___pos_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t87FAA324BE8CF408780FDA2305E83B6EF8568698, ___dir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_1() const { return ___dir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_projectileSize_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t87FAA324BE8CF408780FDA2305E83B6EF8568698, ___projectileSize_2)); }
	inline float get_projectileSize_2() const { return ___projectileSize_2; }
	inline float* get_address_of_projectileSize_2() { return &___projectileSize_2; }
	inline void set_projectileSize_2(float value)
	{
		___projectileSize_2 = value;
	}

	inline static int32_t get_offset_of_to_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t87FAA324BE8CF408780FDA2305E83B6EF8568698, ___to_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_to_3() const { return ___to_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_to_3() { return &___to_3; }
	inline void set_to_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___to_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t87FAA324BE8CF408780FDA2305E83B6EF8568698, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// CodeMonkey.CMDebug/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t2AA139612845657BD1D96B4C0F8A14C2556248AD  : public RuntimeObject
{
public:
	// UnityEngine.GameObject CodeMonkey.CMDebug/<>c__DisplayClass13_0::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
	// UnityEngine.Transform CodeMonkey.CMDebug/<>c__DisplayClass13_0::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_1;
	// UnityEngine.Vector3 CodeMonkey.CMDebug/<>c__DisplayClass13_0::moveAmount
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___moveAmount_2;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t2AA139612845657BD1D96B4C0F8A14C2556248AD, ___gameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t2AA139612845657BD1D96B4C0F8A14C2556248AD, ___transform_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_1() const { return ___transform_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_1), (void*)value);
	}

	inline static int32_t get_offset_of_moveAmount_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t2AA139612845657BD1D96B4C0F8A14C2556248AD, ___moveAmount_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_moveAmount_2() const { return ___moveAmount_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_moveAmount_2() { return &___moveAmount_2; }
	inline void set_moveAmount_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___moveAmount_2 = value;
	}
};


// CodeMonkey.CMDebug/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tCA159636BB4F0001C2E47FB9461910BE3BFC80F6  : public RuntimeObject
{
public:
	// UnityEngine.GameObject CodeMonkey.CMDebug/<>c__DisplayClass9_0::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
	// UnityEngine.Vector3 CodeMonkey.CMDebug/<>c__DisplayClass9_0::positionOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionOffset_1;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tCA159636BB4F0001C2E47FB9461910BE3BFC80F6, ___gameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_positionOffset_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tCA159636BB4F0001C2E47FB9461910BE3BFC80F6, ___positionOffset_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionOffset_1() const { return ___positionOffset_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionOffset_1() { return &___positionOffset_1; }
	inline void set_positionOffset_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionOffset_1 = value;
	}
};


// CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tCBE9BF1E43FD204DF61CE5C906118D208040757C  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0::cameraFollowPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cameraFollowPosition_0;

public:
	inline static int32_t get_offset_of_cameraFollowPosition_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tCBE9BF1E43FD204DF61CE5C906118D208040757C, ___cameraFollowPosition_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cameraFollowPosition_0() const { return ___cameraFollowPosition_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cameraFollowPosition_0() { return &___cameraFollowPosition_0; }
	inline void set_cameraFollowPosition_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cameraFollowPosition_0 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RoomGrnerator/Direction
struct Direction_t64333F61480EDAB066FD94EE72E1002F166FFFC9 
{
public:
	// System.Int32 RoomGrnerator/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t64333F61480EDAB066FD94EE72E1002F166FFFC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CodeMonkey.Utils.UI_Bar/Outline
struct Outline_tDE54FB55CDC069176B6F15C1B7DFE0367257DB2D  : public RuntimeObject
{
public:
	// System.Single CodeMonkey.Utils.UI_Bar/Outline::size
	float ___size_0;
	// UnityEngine.Color CodeMonkey.Utils.UI_Bar/Outline::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(Outline_tDE54FB55CDC069176B6F15C1B7DFE0367257DB2D, ___size_0)); }
	inline float get_size_0() const { return ___size_0; }
	inline float* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(float value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(Outline_tDE54FB55CDC069176B6F15C1B7DFE0367257DB2D, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}
};


// CodeMonkey.Utils.UI_BarMultiple/Outline
struct Outline_t30C9845191591806D84BD6D7809A8405397E0D8A  : public RuntimeObject
{
public:
	// System.Single CodeMonkey.Utils.UI_BarMultiple/Outline::size
	float ___size_0;
	// UnityEngine.Color CodeMonkey.Utils.UI_BarMultiple/Outline::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(Outline_t30C9845191591806D84BD6D7809A8405397E0D8A, ___size_0)); }
	inline float get_size_0() const { return ___size_0; }
	inline float* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(float value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(Outline_t30C9845191591806D84BD6D7809A8405397E0D8A, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}
};


// CodeMonkey.Utils.UI_Sprite/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tDCF69252FA6291E8ADCF558083FE58B74597A960  : public RuntimeObject
{
public:
	// CodeMonkey.Utils.UI_Sprite CodeMonkey.Utils.UI_Sprite/<>c__DisplayClass10_0::uiSprite
	UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6 * ___uiSprite_0;
	// UnityEngine.Color CodeMonkey.Utils.UI_Sprite/<>c__DisplayClass10_0::colorOver
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorOver_1;
	// UnityEngine.Color CodeMonkey.Utils.UI_Sprite/<>c__DisplayClass10_0::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_2;

public:
	inline static int32_t get_offset_of_uiSprite_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tDCF69252FA6291E8ADCF558083FE58B74597A960, ___uiSprite_0)); }
	inline UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6 * get_uiSprite_0() const { return ___uiSprite_0; }
	inline UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6 ** get_address_of_uiSprite_0() { return &___uiSprite_0; }
	inline void set_uiSprite_0(UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6 * value)
	{
		___uiSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_colorOver_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tDCF69252FA6291E8ADCF558083FE58B74597A960, ___colorOver_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorOver_1() const { return ___colorOver_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorOver_1() { return &___colorOver_1; }
	inline void set_colorOver_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorOver_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tDCF69252FA6291E8ADCF558083FE58B74597A960, ___color_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_2() const { return ___color_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_2 = value;
	}
};


// CodeMonkey.Utils.UI_TextComplex/Icon
struct Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE 
{
public:
	// UnityEngine.Sprite CodeMonkey.Utils.UI_TextComplex/Icon::sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite_0;
	// UnityEngine.Vector2 CodeMonkey.Utils.UI_TextComplex/Icon::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_1;
	// UnityEngine.Color CodeMonkey.Utils.UI_TextComplex/Icon::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_2;

public:
	inline static int32_t get_offset_of_sprite_0() { return static_cast<int32_t>(offsetof(Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE, ___sprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_sprite_0() const { return ___sprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_sprite_0() { return &___sprite_0; }
	inline void set_sprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___sprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE, ___size_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_1() const { return ___size_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE, ___color_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_2() const { return ___color_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_2 = value;
	}
};

// Native definition for P/Invoke marshalling of CodeMonkey.Utils.UI_TextComplex/Icon
struct Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_2;
};
// Native definition for COM marshalling of CodeMonkey.Utils.UI_TextComplex/Icon
struct Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_2;
};

// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tF68643E48E1C849FFA5D7EEC5C2BD4701B0B5202  : public RuntimeObject
{
public:
	// UnityEngine.Transform CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_0;
	// UnityEngine.Vector3 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0::moveAmount
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___moveAmount_1;
	// System.Single CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0::popupTime
	float ___popupTime_2;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF68643E48E1C849FFA5D7EEC5C2BD4701B0B5202, ___transform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_0() const { return ___transform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_0), (void*)value);
	}

	inline static int32_t get_offset_of_moveAmount_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF68643E48E1C849FFA5D7EEC5C2BD4701B0B5202, ___moveAmount_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_moveAmount_1() const { return ___moveAmount_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_moveAmount_1() { return &___moveAmount_1; }
	inline void set_moveAmount_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___moveAmount_1 = value;
	}

	inline static int32_t get_offset_of_popupTime_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF68643E48E1C849FFA5D7EEC5C2BD4701B0B5202, ___popupTime_2)); }
	inline float get_popupTime_2() const { return ___popupTime_2; }
	inline float* get_address_of_popupTime_2() { return &___popupTime_2; }
	inline void set_popupTime_2(float value)
	{
		___popupTime_2 = value;
	}
};


// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_tE4F124901A91B675508FADF11B14139950C0B06B  : public RuntimeObject
{
public:
	// System.Int32 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::state
	int32_t ___state_0;
	// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::onWaitingForToPosition
	Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * ___onWaitingForToPosition_1;
	// UnityEngine.Vector3 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::from
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from_2;
	// System.Int32 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::cancelMouseButton
	int32_t ___cancelMouseButton_3;
	// System.Int32 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::mouseButton
	int32_t ___mouseButton_4;
	// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::onMouseClickFromTo
	Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * ___onMouseClickFromTo_5;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_tE4F124901A91B675508FADF11B14139950C0B06B, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_onWaitingForToPosition_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_tE4F124901A91B675508FADF11B14139950C0B06B, ___onWaitingForToPosition_1)); }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * get_onWaitingForToPosition_1() const { return ___onWaitingForToPosition_1; }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 ** get_address_of_onWaitingForToPosition_1() { return &___onWaitingForToPosition_1; }
	inline void set_onWaitingForToPosition_1(Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * value)
	{
		___onWaitingForToPosition_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaitingForToPosition_1), (void*)value);
	}

	inline static int32_t get_offset_of_from_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_tE4F124901A91B675508FADF11B14139950C0B06B, ___from_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_from_2() const { return ___from_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_from_2() { return &___from_2; }
	inline void set_from_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___from_2 = value;
	}

	inline static int32_t get_offset_of_cancelMouseButton_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_tE4F124901A91B675508FADF11B14139950C0B06B, ___cancelMouseButton_3)); }
	inline int32_t get_cancelMouseButton_3() const { return ___cancelMouseButton_3; }
	inline int32_t* get_address_of_cancelMouseButton_3() { return &___cancelMouseButton_3; }
	inline void set_cancelMouseButton_3(int32_t value)
	{
		___cancelMouseButton_3 = value;
	}

	inline static int32_t get_offset_of_mouseButton_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_tE4F124901A91B675508FADF11B14139950C0B06B, ___mouseButton_4)); }
	inline int32_t get_mouseButton_4() const { return ___mouseButton_4; }
	inline int32_t* get_address_of_mouseButton_4() { return &___mouseButton_4; }
	inline void set_mouseButton_4(int32_t value)
	{
		___mouseButton_4 = value;
	}

	inline static int32_t get_offset_of_onMouseClickFromTo_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_tE4F124901A91B675508FADF11B14139950C0B06B, ___onMouseClickFromTo_5)); }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * get_onMouseClickFromTo_5() const { return ___onMouseClickFromTo_5; }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 ** get_address_of_onMouseClickFromTo_5() { return &___onMouseClickFromTo_5; }
	inline void set_onMouseClickFromTo_5(Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * value)
	{
		___onMouseClickFromTo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onMouseClickFromTo_5), (void*)value);
	}
};


// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0
struct U3CU3Ec__DisplayClass76_0_t38C189DA6C17BB3391CDADBC1129653DFEB5267F  : public RuntimeObject
{
public:
	// System.Single CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0::timer
	float ___timer_0;
	// System.Single CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0::intensity
	float ___intensity_1;
	// UnityEngine.Vector3 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0::lastCameraMovement
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastCameraMovement_2;

public:
	inline static int32_t get_offset_of_timer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t38C189DA6C17BB3391CDADBC1129653DFEB5267F, ___timer_0)); }
	inline float get_timer_0() const { return ___timer_0; }
	inline float* get_address_of_timer_0() { return &___timer_0; }
	inline void set_timer_0(float value)
	{
		___timer_0 = value;
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t38C189DA6C17BB3391CDADBC1129653DFEB5267F, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}

	inline static int32_t get_offset_of_lastCameraMovement_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t38C189DA6C17BB3391CDADBC1129653DFEB5267F, ___lastCameraMovement_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastCameraMovement_2() const { return ___lastCameraMovement_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastCameraMovement_2() { return &___lastCameraMovement_2; }
	inline void set_lastCameraMovement_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastCameraMovement_2 = value;
	}
};


// CodeMonkey.Utils.World_Bar/Outline
struct Outline_t4491BB7682DAC745DBF9DE70A9B99B0F67A6B136  : public RuntimeObject
{
public:
	// System.Single CodeMonkey.Utils.World_Bar/Outline::size
	float ___size_0;
	// UnityEngine.Color CodeMonkey.Utils.World_Bar/Outline::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(Outline_t4491BB7682DAC745DBF9DE70A9B99B0F67A6B136, ___size_0)); }
	inline float get_size_0() const { return ___size_0; }
	inline float* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(float value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(Outline_t4491BB7682DAC745DBF9DE70A9B99B0F67A6B136, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}
};


// CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34  : public RuntimeObject
{
public:
	// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::worldSprite
	World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * ___worldSprite_0;
	// UnityEngine.Color CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::colorOver
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorOver_1;
	// UnityEngine.Color CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_2;

public:
	inline static int32_t get_offset_of_worldSprite_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34, ___worldSprite_0)); }
	inline World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * get_worldSprite_0() const { return ___worldSprite_0; }
	inline World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 ** get_address_of_worldSprite_0() { return &___worldSprite_0; }
	inline void set_worldSprite_0(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * value)
	{
		___worldSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_colorOver_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34, ___colorOver_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorOver_1() const { return ___colorOver_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorOver_1() { return &___colorOver_1; }
	inline void set_colorOver_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorOver_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34, ___color_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_2() const { return ___color_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_tA68F688B0EB182279B44DDAAA0C5E5199A3663FD  : public RuntimeObject
{
public:
	// UnityEngine.KeyCode CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0::keyCode
	int32_t ___keyCode_0;
	// System.Action CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0::onKeyDown
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onKeyDown_1;

public:
	inline static int32_t get_offset_of_keyCode_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_tA68F688B0EB182279B44DDAAA0C5E5199A3663FD, ___keyCode_0)); }
	inline int32_t get_keyCode_0() const { return ___keyCode_0; }
	inline int32_t* get_address_of_keyCode_0() { return &___keyCode_0; }
	inline void set_keyCode_0(int32_t value)
	{
		___keyCode_0 = value;
	}

	inline static int32_t get_offset_of_onKeyDown_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_tA68F688B0EB182279B44DDAAA0C5E5199A3663FD, ___onKeyDown_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onKeyDown_1() const { return ___onKeyDown_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onKeyDown_1() { return &___onKeyDown_1; }
	inline void set_onKeyDown_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onKeyDown_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKeyDown_1), (void*)value);
	}
};


// System.Action`1<UnityEngine.Vector3>
struct Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<UnityEngine.Vector3>
struct Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// CodeMonkey.Assets
struct Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite CodeMonkey.Assets::s_White
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___s_White_5;
	// UnityEngine.Sprite CodeMonkey.Assets::s_Circle
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___s_Circle_6;
	// UnityEngine.Material CodeMonkey.Assets::m_White
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_White_7;

public:
	inline static int32_t get_offset_of_s_White_5() { return static_cast<int32_t>(offsetof(Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF, ___s_White_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_s_White_5() const { return ___s_White_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_s_White_5() { return &___s_White_5; }
	inline void set_s_White_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___s_White_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_White_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Circle_6() { return static_cast<int32_t>(offsetof(Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF, ___s_Circle_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_s_Circle_6() const { return ___s_Circle_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_s_Circle_6() { return &___s_Circle_6; }
	inline void set_s_Circle_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___s_Circle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Circle_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_White_7() { return static_cast<int32_t>(offsetof(Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF, ___m_White_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_White_7() const { return ___m_White_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_White_7() { return &___m_White_7; }
	inline void set_m_White_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_White_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_White_7), (void*)value);
	}
};

struct Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF_StaticFields
{
public:
	// CodeMonkey.Assets CodeMonkey.Assets::_i
	Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * ____i_4;

public:
	inline static int32_t get_offset_of__i_4() { return static_cast<int32_t>(offsetof(Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF_StaticFields, ____i_4)); }
	inline Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * get__i_4() const { return ____i_4; }
	inline Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF ** get_address_of__i_4() { return &____i_4; }
	inline void set__i_4(Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * value)
	{
		____i_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____i_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// CodeMonkey.Utils.Button_Sprite
struct Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action CodeMonkey.Utils.Button_Sprite::ClickFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___ClickFunc_5;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseRightDownOnceFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseRightDownOnceFunc_6;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseRightDownFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseRightDownFunc_7;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseRightUpFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseRightUpFunc_8;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseDownOnceFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseDownOnceFunc_9;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseUpOnceFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseUpOnceFunc_10;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseOverOnceFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOverOnceFunc_11;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseOutOnceFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOutOnceFunc_12;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseOverOnceTooltipFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOverOnceTooltipFunc_13;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseOutOnceTooltipFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOutOnceTooltipFunc_14;
	// System.Boolean CodeMonkey.Utils.Button_Sprite::draggingMouseRight
	bool ___draggingMouseRight_15;
	// UnityEngine.Vector3 CodeMonkey.Utils.Button_Sprite::mouseRightDragStart
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mouseRightDragStart_16;
	// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> CodeMonkey.Utils.Button_Sprite::MouseRightDragFunc
	Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * ___MouseRightDragFunc_17;
	// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> CodeMonkey.Utils.Button_Sprite::MouseRightDragUpdateFunc
	Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * ___MouseRightDragUpdateFunc_18;
	// System.Boolean CodeMonkey.Utils.Button_Sprite::triggerMouseRightDragOnEnter
	bool ___triggerMouseRightDragOnEnter_19;
	// CodeMonkey.Utils.Button_Sprite/HoverBehaviour CodeMonkey.Utils.Button_Sprite::hoverBehaviourType
	int32_t ___hoverBehaviourType_20;
	// System.Action CodeMonkey.Utils.Button_Sprite::hoverBehaviourFunc_Enter
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___hoverBehaviourFunc_Enter_21;
	// System.Action CodeMonkey.Utils.Button_Sprite::hoverBehaviourFunc_Exit
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___hoverBehaviourFunc_Exit_22;
	// UnityEngine.Color CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Color_Enter
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___hoverBehaviour_Color_Enter_23;
	// UnityEngine.Color CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Color_Exit
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___hoverBehaviour_Color_Exit_24;
	// UnityEngine.SpriteRenderer CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Image
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___hoverBehaviour_Image_25;
	// UnityEngine.Sprite CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Sprite_Exit
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___hoverBehaviour_Sprite_Exit_26;
	// UnityEngine.Sprite CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Sprite_Enter
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___hoverBehaviour_Sprite_Enter_27;
	// System.Boolean CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Move
	bool ___hoverBehaviour_Move_28;
	// UnityEngine.Vector2 CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Move_Amount
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___hoverBehaviour_Move_Amount_29;
	// UnityEngine.Vector3 CodeMonkey.Utils.Button_Sprite::posExit
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___posExit_30;
	// UnityEngine.Vector3 CodeMonkey.Utils.Button_Sprite::posEnter
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___posEnter_31;
	// System.Boolean CodeMonkey.Utils.Button_Sprite::triggerMouseOutFuncOnClick
	bool ___triggerMouseOutFuncOnClick_32;
	// System.Boolean CodeMonkey.Utils.Button_Sprite::clickThroughUI
	bool ___clickThroughUI_33;
	// System.Action CodeMonkey.Utils.Button_Sprite::internalOnMouseDownFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___internalOnMouseDownFunc_34;
	// System.Action CodeMonkey.Utils.Button_Sprite::internalOnMouseEnterFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___internalOnMouseEnterFunc_35;
	// System.Action CodeMonkey.Utils.Button_Sprite::internalOnMouseExitFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___internalOnMouseExitFunc_36;

public:
	inline static int32_t get_offset_of_ClickFunc_5() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___ClickFunc_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_ClickFunc_5() const { return ___ClickFunc_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_ClickFunc_5() { return &___ClickFunc_5; }
	inline void set_ClickFunc_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___ClickFunc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClickFunc_5), (void*)value);
	}

	inline static int32_t get_offset_of_MouseRightDownOnceFunc_6() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseRightDownOnceFunc_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseRightDownOnceFunc_6() const { return ___MouseRightDownOnceFunc_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseRightDownOnceFunc_6() { return &___MouseRightDownOnceFunc_6; }
	inline void set_MouseRightDownOnceFunc_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseRightDownOnceFunc_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseRightDownOnceFunc_6), (void*)value);
	}

	inline static int32_t get_offset_of_MouseRightDownFunc_7() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseRightDownFunc_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseRightDownFunc_7() const { return ___MouseRightDownFunc_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseRightDownFunc_7() { return &___MouseRightDownFunc_7; }
	inline void set_MouseRightDownFunc_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseRightDownFunc_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseRightDownFunc_7), (void*)value);
	}

	inline static int32_t get_offset_of_MouseRightUpFunc_8() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseRightUpFunc_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseRightUpFunc_8() const { return ___MouseRightUpFunc_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseRightUpFunc_8() { return &___MouseRightUpFunc_8; }
	inline void set_MouseRightUpFunc_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseRightUpFunc_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseRightUpFunc_8), (void*)value);
	}

	inline static int32_t get_offset_of_MouseDownOnceFunc_9() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseDownOnceFunc_9)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseDownOnceFunc_9() const { return ___MouseDownOnceFunc_9; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseDownOnceFunc_9() { return &___MouseDownOnceFunc_9; }
	inline void set_MouseDownOnceFunc_9(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseDownOnceFunc_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseDownOnceFunc_9), (void*)value);
	}

	inline static int32_t get_offset_of_MouseUpOnceFunc_10() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseUpOnceFunc_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseUpOnceFunc_10() const { return ___MouseUpOnceFunc_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseUpOnceFunc_10() { return &___MouseUpOnceFunc_10; }
	inline void set_MouseUpOnceFunc_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseUpOnceFunc_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseUpOnceFunc_10), (void*)value);
	}

	inline static int32_t get_offset_of_MouseOverOnceFunc_11() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseOverOnceFunc_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseOverOnceFunc_11() const { return ___MouseOverOnceFunc_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseOverOnceFunc_11() { return &___MouseOverOnceFunc_11; }
	inline void set_MouseOverOnceFunc_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseOverOnceFunc_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseOverOnceFunc_11), (void*)value);
	}

	inline static int32_t get_offset_of_MouseOutOnceFunc_12() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseOutOnceFunc_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseOutOnceFunc_12() const { return ___MouseOutOnceFunc_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseOutOnceFunc_12() { return &___MouseOutOnceFunc_12; }
	inline void set_MouseOutOnceFunc_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseOutOnceFunc_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseOutOnceFunc_12), (void*)value);
	}

	inline static int32_t get_offset_of_MouseOverOnceTooltipFunc_13() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseOverOnceTooltipFunc_13)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseOverOnceTooltipFunc_13() const { return ___MouseOverOnceTooltipFunc_13; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseOverOnceTooltipFunc_13() { return &___MouseOverOnceTooltipFunc_13; }
	inline void set_MouseOverOnceTooltipFunc_13(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseOverOnceTooltipFunc_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseOverOnceTooltipFunc_13), (void*)value);
	}

	inline static int32_t get_offset_of_MouseOutOnceTooltipFunc_14() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseOutOnceTooltipFunc_14)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseOutOnceTooltipFunc_14() const { return ___MouseOutOnceTooltipFunc_14; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseOutOnceTooltipFunc_14() { return &___MouseOutOnceTooltipFunc_14; }
	inline void set_MouseOutOnceTooltipFunc_14(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseOutOnceTooltipFunc_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseOutOnceTooltipFunc_14), (void*)value);
	}

	inline static int32_t get_offset_of_draggingMouseRight_15() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___draggingMouseRight_15)); }
	inline bool get_draggingMouseRight_15() const { return ___draggingMouseRight_15; }
	inline bool* get_address_of_draggingMouseRight_15() { return &___draggingMouseRight_15; }
	inline void set_draggingMouseRight_15(bool value)
	{
		___draggingMouseRight_15 = value;
	}

	inline static int32_t get_offset_of_mouseRightDragStart_16() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___mouseRightDragStart_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mouseRightDragStart_16() const { return ___mouseRightDragStart_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mouseRightDragStart_16() { return &___mouseRightDragStart_16; }
	inline void set_mouseRightDragStart_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mouseRightDragStart_16 = value;
	}

	inline static int32_t get_offset_of_MouseRightDragFunc_17() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseRightDragFunc_17)); }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * get_MouseRightDragFunc_17() const { return ___MouseRightDragFunc_17; }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 ** get_address_of_MouseRightDragFunc_17() { return &___MouseRightDragFunc_17; }
	inline void set_MouseRightDragFunc_17(Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * value)
	{
		___MouseRightDragFunc_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseRightDragFunc_17), (void*)value);
	}

	inline static int32_t get_offset_of_MouseRightDragUpdateFunc_18() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___MouseRightDragUpdateFunc_18)); }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * get_MouseRightDragUpdateFunc_18() const { return ___MouseRightDragUpdateFunc_18; }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 ** get_address_of_MouseRightDragUpdateFunc_18() { return &___MouseRightDragUpdateFunc_18; }
	inline void set_MouseRightDragUpdateFunc_18(Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * value)
	{
		___MouseRightDragUpdateFunc_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseRightDragUpdateFunc_18), (void*)value);
	}

	inline static int32_t get_offset_of_triggerMouseRightDragOnEnter_19() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___triggerMouseRightDragOnEnter_19)); }
	inline bool get_triggerMouseRightDragOnEnter_19() const { return ___triggerMouseRightDragOnEnter_19; }
	inline bool* get_address_of_triggerMouseRightDragOnEnter_19() { return &___triggerMouseRightDragOnEnter_19; }
	inline void set_triggerMouseRightDragOnEnter_19(bool value)
	{
		___triggerMouseRightDragOnEnter_19 = value;
	}

	inline static int32_t get_offset_of_hoverBehaviourType_20() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___hoverBehaviourType_20)); }
	inline int32_t get_hoverBehaviourType_20() const { return ___hoverBehaviourType_20; }
	inline int32_t* get_address_of_hoverBehaviourType_20() { return &___hoverBehaviourType_20; }
	inline void set_hoverBehaviourType_20(int32_t value)
	{
		___hoverBehaviourType_20 = value;
	}

	inline static int32_t get_offset_of_hoverBehaviourFunc_Enter_21() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___hoverBehaviourFunc_Enter_21)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_hoverBehaviourFunc_Enter_21() const { return ___hoverBehaviourFunc_Enter_21; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_hoverBehaviourFunc_Enter_21() { return &___hoverBehaviourFunc_Enter_21; }
	inline void set_hoverBehaviourFunc_Enter_21(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___hoverBehaviourFunc_Enter_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverBehaviourFunc_Enter_21), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviourFunc_Exit_22() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___hoverBehaviourFunc_Exit_22)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_hoverBehaviourFunc_Exit_22() const { return ___hoverBehaviourFunc_Exit_22; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_hoverBehaviourFunc_Exit_22() { return &___hoverBehaviourFunc_Exit_22; }
	inline void set_hoverBehaviourFunc_Exit_22(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___hoverBehaviourFunc_Exit_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverBehaviourFunc_Exit_22), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviour_Color_Enter_23() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___hoverBehaviour_Color_Enter_23)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_hoverBehaviour_Color_Enter_23() const { return ___hoverBehaviour_Color_Enter_23; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_hoverBehaviour_Color_Enter_23() { return &___hoverBehaviour_Color_Enter_23; }
	inline void set_hoverBehaviour_Color_Enter_23(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___hoverBehaviour_Color_Enter_23 = value;
	}

	inline static int32_t get_offset_of_hoverBehaviour_Color_Exit_24() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___hoverBehaviour_Color_Exit_24)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_hoverBehaviour_Color_Exit_24() const { return ___hoverBehaviour_Color_Exit_24; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_hoverBehaviour_Color_Exit_24() { return &___hoverBehaviour_Color_Exit_24; }
	inline void set_hoverBehaviour_Color_Exit_24(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___hoverBehaviour_Color_Exit_24 = value;
	}

	inline static int32_t get_offset_of_hoverBehaviour_Image_25() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___hoverBehaviour_Image_25)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_hoverBehaviour_Image_25() const { return ___hoverBehaviour_Image_25; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_hoverBehaviour_Image_25() { return &___hoverBehaviour_Image_25; }
	inline void set_hoverBehaviour_Image_25(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___hoverBehaviour_Image_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverBehaviour_Image_25), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviour_Sprite_Exit_26() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___hoverBehaviour_Sprite_Exit_26)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_hoverBehaviour_Sprite_Exit_26() const { return ___hoverBehaviour_Sprite_Exit_26; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_hoverBehaviour_Sprite_Exit_26() { return &___hoverBehaviour_Sprite_Exit_26; }
	inline void set_hoverBehaviour_Sprite_Exit_26(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___hoverBehaviour_Sprite_Exit_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverBehaviour_Sprite_Exit_26), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviour_Sprite_Enter_27() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___hoverBehaviour_Sprite_Enter_27)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_hoverBehaviour_Sprite_Enter_27() const { return ___hoverBehaviour_Sprite_Enter_27; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_hoverBehaviour_Sprite_Enter_27() { return &___hoverBehaviour_Sprite_Enter_27; }
	inline void set_hoverBehaviour_Sprite_Enter_27(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___hoverBehaviour_Sprite_Enter_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverBehaviour_Sprite_Enter_27), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviour_Move_28() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___hoverBehaviour_Move_28)); }
	inline bool get_hoverBehaviour_Move_28() const { return ___hoverBehaviour_Move_28; }
	inline bool* get_address_of_hoverBehaviour_Move_28() { return &___hoverBehaviour_Move_28; }
	inline void set_hoverBehaviour_Move_28(bool value)
	{
		___hoverBehaviour_Move_28 = value;
	}

	inline static int32_t get_offset_of_hoverBehaviour_Move_Amount_29() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___hoverBehaviour_Move_Amount_29)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_hoverBehaviour_Move_Amount_29() const { return ___hoverBehaviour_Move_Amount_29; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_hoverBehaviour_Move_Amount_29() { return &___hoverBehaviour_Move_Amount_29; }
	inline void set_hoverBehaviour_Move_Amount_29(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___hoverBehaviour_Move_Amount_29 = value;
	}

	inline static int32_t get_offset_of_posExit_30() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___posExit_30)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_posExit_30() const { return ___posExit_30; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_posExit_30() { return &___posExit_30; }
	inline void set_posExit_30(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___posExit_30 = value;
	}

	inline static int32_t get_offset_of_posEnter_31() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___posEnter_31)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_posEnter_31() const { return ___posEnter_31; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_posEnter_31() { return &___posEnter_31; }
	inline void set_posEnter_31(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___posEnter_31 = value;
	}

	inline static int32_t get_offset_of_triggerMouseOutFuncOnClick_32() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___triggerMouseOutFuncOnClick_32)); }
	inline bool get_triggerMouseOutFuncOnClick_32() const { return ___triggerMouseOutFuncOnClick_32; }
	inline bool* get_address_of_triggerMouseOutFuncOnClick_32() { return &___triggerMouseOutFuncOnClick_32; }
	inline void set_triggerMouseOutFuncOnClick_32(bool value)
	{
		___triggerMouseOutFuncOnClick_32 = value;
	}

	inline static int32_t get_offset_of_clickThroughUI_33() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___clickThroughUI_33)); }
	inline bool get_clickThroughUI_33() const { return ___clickThroughUI_33; }
	inline bool* get_address_of_clickThroughUI_33() { return &___clickThroughUI_33; }
	inline void set_clickThroughUI_33(bool value)
	{
		___clickThroughUI_33 = value;
	}

	inline static int32_t get_offset_of_internalOnMouseDownFunc_34() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___internalOnMouseDownFunc_34)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_internalOnMouseDownFunc_34() const { return ___internalOnMouseDownFunc_34; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_internalOnMouseDownFunc_34() { return &___internalOnMouseDownFunc_34; }
	inline void set_internalOnMouseDownFunc_34(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___internalOnMouseDownFunc_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalOnMouseDownFunc_34), (void*)value);
	}

	inline static int32_t get_offset_of_internalOnMouseEnterFunc_35() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___internalOnMouseEnterFunc_35)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_internalOnMouseEnterFunc_35() const { return ___internalOnMouseEnterFunc_35; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_internalOnMouseEnterFunc_35() { return &___internalOnMouseEnterFunc_35; }
	inline void set_internalOnMouseEnterFunc_35(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___internalOnMouseEnterFunc_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalOnMouseEnterFunc_35), (void*)value);
	}

	inline static int32_t get_offset_of_internalOnMouseExitFunc_36() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066, ___internalOnMouseExitFunc_36)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_internalOnMouseExitFunc_36() const { return ___internalOnMouseExitFunc_36; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_internalOnMouseExitFunc_36() { return &___internalOnMouseExitFunc_36; }
	inline void set_internalOnMouseExitFunc_36(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___internalOnMouseExitFunc_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalOnMouseExitFunc_36), (void*)value);
	}
};

struct Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066_StaticFields
{
public:
	// System.Func`1<UnityEngine.Camera> CodeMonkey.Utils.Button_Sprite::GetWorldCamera
	Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 * ___GetWorldCamera_4;

public:
	inline static int32_t get_offset_of_GetWorldCamera_4() { return static_cast<int32_t>(offsetof(Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066_StaticFields, ___GetWorldCamera_4)); }
	inline Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 * get_GetWorldCamera_4() const { return ___GetWorldCamera_4; }
	inline Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 ** get_address_of_GetWorldCamera_4() { return &___GetWorldCamera_4; }
	inline void set_GetWorldCamera_4(Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 * value)
	{
		___GetWorldCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetWorldCamera_4), (void*)value);
	}
};


// CodeMonkey.Utils.Button_UI
struct Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action CodeMonkey.Utils.Button_UI::ClickFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___ClickFunc_4;
	// System.Action CodeMonkey.Utils.Button_UI::MouseRightClickFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseRightClickFunc_5;
	// System.Action CodeMonkey.Utils.Button_UI::MouseMiddleClickFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseMiddleClickFunc_6;
	// System.Action CodeMonkey.Utils.Button_UI::MouseDownOnceFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseDownOnceFunc_7;
	// System.Action CodeMonkey.Utils.Button_UI::MouseUpFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseUpFunc_8;
	// System.Action CodeMonkey.Utils.Button_UI::MouseOverOnceTooltipFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOverOnceTooltipFunc_9;
	// System.Action CodeMonkey.Utils.Button_UI::MouseOutOnceTooltipFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOutOnceTooltipFunc_10;
	// System.Action CodeMonkey.Utils.Button_UI::MouseOverOnceFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOverOnceFunc_11;
	// System.Action CodeMonkey.Utils.Button_UI::MouseOutOnceFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOutOnceFunc_12;
	// System.Action CodeMonkey.Utils.Button_UI::MouseOverFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOverFunc_13;
	// System.Action CodeMonkey.Utils.Button_UI::MouseOverPerSecFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOverPerSecFunc_14;
	// System.Action CodeMonkey.Utils.Button_UI::MouseUpdate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseUpdate_15;
	// System.Action`1<UnityEngine.EventSystems.PointerEventData> CodeMonkey.Utils.Button_UI::OnPointerClickFunc
	Action_1_tA2DD7F6E11491D13B5BD6A51C36682B60C1F578B * ___OnPointerClickFunc_16;
	// CodeMonkey.Utils.Button_UI/HoverBehaviour CodeMonkey.Utils.Button_UI::hoverBehaviourType
	int32_t ___hoverBehaviourType_17;
	// System.Action CodeMonkey.Utils.Button_UI::hoverBehaviourFunc_Enter
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___hoverBehaviourFunc_Enter_18;
	// System.Action CodeMonkey.Utils.Button_UI::hoverBehaviourFunc_Exit
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___hoverBehaviourFunc_Exit_19;
	// UnityEngine.Color CodeMonkey.Utils.Button_UI::hoverBehaviour_Color_Enter
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___hoverBehaviour_Color_Enter_20;
	// UnityEngine.Color CodeMonkey.Utils.Button_UI::hoverBehaviour_Color_Exit
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___hoverBehaviour_Color_Exit_21;
	// UnityEngine.UI.Image CodeMonkey.Utils.Button_UI::hoverBehaviour_Image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___hoverBehaviour_Image_22;
	// UnityEngine.Sprite CodeMonkey.Utils.Button_UI::hoverBehaviour_Sprite_Exit
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___hoverBehaviour_Sprite_Exit_23;
	// UnityEngine.Sprite CodeMonkey.Utils.Button_UI::hoverBehaviour_Sprite_Enter
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___hoverBehaviour_Sprite_Enter_24;
	// System.Boolean CodeMonkey.Utils.Button_UI::hoverBehaviour_Move
	bool ___hoverBehaviour_Move_25;
	// UnityEngine.Vector2 CodeMonkey.Utils.Button_UI::hoverBehaviour_Move_Amount
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___hoverBehaviour_Move_Amount_26;
	// UnityEngine.Vector2 CodeMonkey.Utils.Button_UI::posExit
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___posExit_27;
	// UnityEngine.Vector2 CodeMonkey.Utils.Button_UI::posEnter
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___posEnter_28;
	// System.Boolean CodeMonkey.Utils.Button_UI::triggerMouseOutFuncOnClick
	bool ___triggerMouseOutFuncOnClick_29;
	// System.Boolean CodeMonkey.Utils.Button_UI::mouseOver
	bool ___mouseOver_30;
	// System.Single CodeMonkey.Utils.Button_UI::mouseOverPerSecFuncTimer
	float ___mouseOverPerSecFuncTimer_31;
	// System.Action CodeMonkey.Utils.Button_UI::internalOnPointerEnterFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___internalOnPointerEnterFunc_32;
	// System.Action CodeMonkey.Utils.Button_UI::internalOnPointerExitFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___internalOnPointerExitFunc_33;
	// System.Action CodeMonkey.Utils.Button_UI::internalOnPointerClickFunc
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___internalOnPointerClickFunc_34;

public:
	inline static int32_t get_offset_of_ClickFunc_4() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___ClickFunc_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_ClickFunc_4() const { return ___ClickFunc_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_ClickFunc_4() { return &___ClickFunc_4; }
	inline void set_ClickFunc_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___ClickFunc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClickFunc_4), (void*)value);
	}

	inline static int32_t get_offset_of_MouseRightClickFunc_5() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseRightClickFunc_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseRightClickFunc_5() const { return ___MouseRightClickFunc_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseRightClickFunc_5() { return &___MouseRightClickFunc_5; }
	inline void set_MouseRightClickFunc_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseRightClickFunc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseRightClickFunc_5), (void*)value);
	}

	inline static int32_t get_offset_of_MouseMiddleClickFunc_6() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseMiddleClickFunc_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseMiddleClickFunc_6() const { return ___MouseMiddleClickFunc_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseMiddleClickFunc_6() { return &___MouseMiddleClickFunc_6; }
	inline void set_MouseMiddleClickFunc_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseMiddleClickFunc_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseMiddleClickFunc_6), (void*)value);
	}

	inline static int32_t get_offset_of_MouseDownOnceFunc_7() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseDownOnceFunc_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseDownOnceFunc_7() const { return ___MouseDownOnceFunc_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseDownOnceFunc_7() { return &___MouseDownOnceFunc_7; }
	inline void set_MouseDownOnceFunc_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseDownOnceFunc_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseDownOnceFunc_7), (void*)value);
	}

	inline static int32_t get_offset_of_MouseUpFunc_8() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseUpFunc_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseUpFunc_8() const { return ___MouseUpFunc_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseUpFunc_8() { return &___MouseUpFunc_8; }
	inline void set_MouseUpFunc_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseUpFunc_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseUpFunc_8), (void*)value);
	}

	inline static int32_t get_offset_of_MouseOverOnceTooltipFunc_9() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseOverOnceTooltipFunc_9)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseOverOnceTooltipFunc_9() const { return ___MouseOverOnceTooltipFunc_9; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseOverOnceTooltipFunc_9() { return &___MouseOverOnceTooltipFunc_9; }
	inline void set_MouseOverOnceTooltipFunc_9(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseOverOnceTooltipFunc_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseOverOnceTooltipFunc_9), (void*)value);
	}

	inline static int32_t get_offset_of_MouseOutOnceTooltipFunc_10() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseOutOnceTooltipFunc_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseOutOnceTooltipFunc_10() const { return ___MouseOutOnceTooltipFunc_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseOutOnceTooltipFunc_10() { return &___MouseOutOnceTooltipFunc_10; }
	inline void set_MouseOutOnceTooltipFunc_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseOutOnceTooltipFunc_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseOutOnceTooltipFunc_10), (void*)value);
	}

	inline static int32_t get_offset_of_MouseOverOnceFunc_11() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseOverOnceFunc_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseOverOnceFunc_11() const { return ___MouseOverOnceFunc_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseOverOnceFunc_11() { return &___MouseOverOnceFunc_11; }
	inline void set_MouseOverOnceFunc_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseOverOnceFunc_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseOverOnceFunc_11), (void*)value);
	}

	inline static int32_t get_offset_of_MouseOutOnceFunc_12() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseOutOnceFunc_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseOutOnceFunc_12() const { return ___MouseOutOnceFunc_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseOutOnceFunc_12() { return &___MouseOutOnceFunc_12; }
	inline void set_MouseOutOnceFunc_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseOutOnceFunc_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseOutOnceFunc_12), (void*)value);
	}

	inline static int32_t get_offset_of_MouseOverFunc_13() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseOverFunc_13)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseOverFunc_13() const { return ___MouseOverFunc_13; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseOverFunc_13() { return &___MouseOverFunc_13; }
	inline void set_MouseOverFunc_13(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseOverFunc_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseOverFunc_13), (void*)value);
	}

	inline static int32_t get_offset_of_MouseOverPerSecFunc_14() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseOverPerSecFunc_14)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseOverPerSecFunc_14() const { return ___MouseOverPerSecFunc_14; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseOverPerSecFunc_14() { return &___MouseOverPerSecFunc_14; }
	inline void set_MouseOverPerSecFunc_14(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseOverPerSecFunc_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseOverPerSecFunc_14), (void*)value);
	}

	inline static int32_t get_offset_of_MouseUpdate_15() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___MouseUpdate_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_MouseUpdate_15() const { return ___MouseUpdate_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_MouseUpdate_15() { return &___MouseUpdate_15; }
	inline void set_MouseUpdate_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___MouseUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MouseUpdate_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnPointerClickFunc_16() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___OnPointerClickFunc_16)); }
	inline Action_1_tA2DD7F6E11491D13B5BD6A51C36682B60C1F578B * get_OnPointerClickFunc_16() const { return ___OnPointerClickFunc_16; }
	inline Action_1_tA2DD7F6E11491D13B5BD6A51C36682B60C1F578B ** get_address_of_OnPointerClickFunc_16() { return &___OnPointerClickFunc_16; }
	inline void set_OnPointerClickFunc_16(Action_1_tA2DD7F6E11491D13B5BD6A51C36682B60C1F578B * value)
	{
		___OnPointerClickFunc_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerClickFunc_16), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviourType_17() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___hoverBehaviourType_17)); }
	inline int32_t get_hoverBehaviourType_17() const { return ___hoverBehaviourType_17; }
	inline int32_t* get_address_of_hoverBehaviourType_17() { return &___hoverBehaviourType_17; }
	inline void set_hoverBehaviourType_17(int32_t value)
	{
		___hoverBehaviourType_17 = value;
	}

	inline static int32_t get_offset_of_hoverBehaviourFunc_Enter_18() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___hoverBehaviourFunc_Enter_18)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_hoverBehaviourFunc_Enter_18() const { return ___hoverBehaviourFunc_Enter_18; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_hoverBehaviourFunc_Enter_18() { return &___hoverBehaviourFunc_Enter_18; }
	inline void set_hoverBehaviourFunc_Enter_18(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___hoverBehaviourFunc_Enter_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverBehaviourFunc_Enter_18), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviourFunc_Exit_19() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___hoverBehaviourFunc_Exit_19)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_hoverBehaviourFunc_Exit_19() const { return ___hoverBehaviourFunc_Exit_19; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_hoverBehaviourFunc_Exit_19() { return &___hoverBehaviourFunc_Exit_19; }
	inline void set_hoverBehaviourFunc_Exit_19(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___hoverBehaviourFunc_Exit_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverBehaviourFunc_Exit_19), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviour_Color_Enter_20() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___hoverBehaviour_Color_Enter_20)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_hoverBehaviour_Color_Enter_20() const { return ___hoverBehaviour_Color_Enter_20; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_hoverBehaviour_Color_Enter_20() { return &___hoverBehaviour_Color_Enter_20; }
	inline void set_hoverBehaviour_Color_Enter_20(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___hoverBehaviour_Color_Enter_20 = value;
	}

	inline static int32_t get_offset_of_hoverBehaviour_Color_Exit_21() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___hoverBehaviour_Color_Exit_21)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_hoverBehaviour_Color_Exit_21() const { return ___hoverBehaviour_Color_Exit_21; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_hoverBehaviour_Color_Exit_21() { return &___hoverBehaviour_Color_Exit_21; }
	inline void set_hoverBehaviour_Color_Exit_21(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___hoverBehaviour_Color_Exit_21 = value;
	}

	inline static int32_t get_offset_of_hoverBehaviour_Image_22() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___hoverBehaviour_Image_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_hoverBehaviour_Image_22() const { return ___hoverBehaviour_Image_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_hoverBehaviour_Image_22() { return &___hoverBehaviour_Image_22; }
	inline void set_hoverBehaviour_Image_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___hoverBehaviour_Image_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverBehaviour_Image_22), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviour_Sprite_Exit_23() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___hoverBehaviour_Sprite_Exit_23)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_hoverBehaviour_Sprite_Exit_23() const { return ___hoverBehaviour_Sprite_Exit_23; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_hoverBehaviour_Sprite_Exit_23() { return &___hoverBehaviour_Sprite_Exit_23; }
	inline void set_hoverBehaviour_Sprite_Exit_23(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___hoverBehaviour_Sprite_Exit_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverBehaviour_Sprite_Exit_23), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviour_Sprite_Enter_24() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___hoverBehaviour_Sprite_Enter_24)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_hoverBehaviour_Sprite_Enter_24() const { return ___hoverBehaviour_Sprite_Enter_24; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_hoverBehaviour_Sprite_Enter_24() { return &___hoverBehaviour_Sprite_Enter_24; }
	inline void set_hoverBehaviour_Sprite_Enter_24(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___hoverBehaviour_Sprite_Enter_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverBehaviour_Sprite_Enter_24), (void*)value);
	}

	inline static int32_t get_offset_of_hoverBehaviour_Move_25() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___hoverBehaviour_Move_25)); }
	inline bool get_hoverBehaviour_Move_25() const { return ___hoverBehaviour_Move_25; }
	inline bool* get_address_of_hoverBehaviour_Move_25() { return &___hoverBehaviour_Move_25; }
	inline void set_hoverBehaviour_Move_25(bool value)
	{
		___hoverBehaviour_Move_25 = value;
	}

	inline static int32_t get_offset_of_hoverBehaviour_Move_Amount_26() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___hoverBehaviour_Move_Amount_26)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_hoverBehaviour_Move_Amount_26() const { return ___hoverBehaviour_Move_Amount_26; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_hoverBehaviour_Move_Amount_26() { return &___hoverBehaviour_Move_Amount_26; }
	inline void set_hoverBehaviour_Move_Amount_26(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___hoverBehaviour_Move_Amount_26 = value;
	}

	inline static int32_t get_offset_of_posExit_27() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___posExit_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_posExit_27() const { return ___posExit_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_posExit_27() { return &___posExit_27; }
	inline void set_posExit_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___posExit_27 = value;
	}

	inline static int32_t get_offset_of_posEnter_28() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___posEnter_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_posEnter_28() const { return ___posEnter_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_posEnter_28() { return &___posEnter_28; }
	inline void set_posEnter_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___posEnter_28 = value;
	}

	inline static int32_t get_offset_of_triggerMouseOutFuncOnClick_29() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___triggerMouseOutFuncOnClick_29)); }
	inline bool get_triggerMouseOutFuncOnClick_29() const { return ___triggerMouseOutFuncOnClick_29; }
	inline bool* get_address_of_triggerMouseOutFuncOnClick_29() { return &___triggerMouseOutFuncOnClick_29; }
	inline void set_triggerMouseOutFuncOnClick_29(bool value)
	{
		___triggerMouseOutFuncOnClick_29 = value;
	}

	inline static int32_t get_offset_of_mouseOver_30() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___mouseOver_30)); }
	inline bool get_mouseOver_30() const { return ___mouseOver_30; }
	inline bool* get_address_of_mouseOver_30() { return &___mouseOver_30; }
	inline void set_mouseOver_30(bool value)
	{
		___mouseOver_30 = value;
	}

	inline static int32_t get_offset_of_mouseOverPerSecFuncTimer_31() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___mouseOverPerSecFuncTimer_31)); }
	inline float get_mouseOverPerSecFuncTimer_31() const { return ___mouseOverPerSecFuncTimer_31; }
	inline float* get_address_of_mouseOverPerSecFuncTimer_31() { return &___mouseOverPerSecFuncTimer_31; }
	inline void set_mouseOverPerSecFuncTimer_31(float value)
	{
		___mouseOverPerSecFuncTimer_31 = value;
	}

	inline static int32_t get_offset_of_internalOnPointerEnterFunc_32() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___internalOnPointerEnterFunc_32)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_internalOnPointerEnterFunc_32() const { return ___internalOnPointerEnterFunc_32; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_internalOnPointerEnterFunc_32() { return &___internalOnPointerEnterFunc_32; }
	inline void set_internalOnPointerEnterFunc_32(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___internalOnPointerEnterFunc_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalOnPointerEnterFunc_32), (void*)value);
	}

	inline static int32_t get_offset_of_internalOnPointerExitFunc_33() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___internalOnPointerExitFunc_33)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_internalOnPointerExitFunc_33() const { return ___internalOnPointerExitFunc_33; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_internalOnPointerExitFunc_33() { return &___internalOnPointerExitFunc_33; }
	inline void set_internalOnPointerExitFunc_33(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___internalOnPointerExitFunc_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalOnPointerExitFunc_33), (void*)value);
	}

	inline static int32_t get_offset_of_internalOnPointerClickFunc_34() { return static_cast<int32_t>(offsetof(Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1, ___internalOnPointerClickFunc_34)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_internalOnPointerClickFunc_34() const { return ___internalOnPointerClickFunc_34; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_internalOnPointerClickFunc_34() { return &___internalOnPointerClickFunc_34; }
	inline void set_internalOnPointerClickFunc_34(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___internalOnPointerClickFunc_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalOnPointerClickFunc_34), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] GameManager::lives
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___lives_4;
	// UnityEngine.UI.Text GameManager::textScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textScore_5;
	// UnityEngine.GameObject GameManager::final
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___final_6;
	// System.Object GameManager::tags
	RuntimeObject * ___tags_10;

public:
	inline static int32_t get_offset_of_lives_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___lives_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_lives_4() const { return ___lives_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_lives_4() { return &___lives_4; }
	inline void set_lives_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___lives_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lives_4), (void*)value);
	}

	inline static int32_t get_offset_of_textScore_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___textScore_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textScore_5() const { return ___textScore_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textScore_5() { return &___textScore_5; }
	inline void set_textScore_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textScore_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textScore_5), (void*)value);
	}

	inline static int32_t get_offset_of_final_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___final_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_final_6() const { return ___final_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_final_6() { return &___final_6; }
	inline void set_final_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___final_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___final_6), (void*)value);
	}

	inline static int32_t get_offset_of_tags_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___tags_10)); }
	inline RuntimeObject * get_tags_10() const { return ___tags_10; }
	inline RuntimeObject ** get_address_of_tags_10() { return &___tags_10; }
	inline void set_tags_10(RuntimeObject * value)
	{
		___tags_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tags_10), (void*)value);
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// System.Int32 GameManager::enemyCount
	int32_t ___enemyCount_7;
	// System.Int32 GameManager::live
	int32_t ___live_8;
	// System.Int32 GameManager::score
	int32_t ___score_9;

public:
	inline static int32_t get_offset_of_enemyCount_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___enemyCount_7)); }
	inline int32_t get_enemyCount_7() const { return ___enemyCount_7; }
	inline int32_t* get_address_of_enemyCount_7() { return &___enemyCount_7; }
	inline void set_enemyCount_7(int32_t value)
	{
		___enemyCount_7 = value;
	}

	inline static int32_t get_offset_of_live_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___live_8)); }
	inline int32_t get_live_8() const { return ___live_8; }
	inline int32_t* get_address_of_live_8() { return &___live_8; }
	inline void set_live_8(int32_t value)
	{
		___live_8 = value;
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___score_9)); }
	inline int32_t get_score_9() const { return ___score_9; }
	inline int32_t* get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(int32_t value)
	{
		___score_9 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// article
struct article_t24309762A688BEBA5D9AE214DBCCACEB88C43F11  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// player2
struct player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject player2::spells
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spells_4;
	// UnityEngine.AudioClip player2::soundFire
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___soundFire_5;
	// System.Int32 player2::live
	int32_t ___live_6;
	// System.Single player2::speed
	float ___speed_7;
	// UnityEngine.Transform player2::point
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___point_8;
	// System.Int32 player2::Speedspelles
	int32_t ___Speedspelles_9;
	// System.Boolean player2::inPortal
	bool ___inPortal_10;
	// UnityEngine.Rigidbody2D player2::rig
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rig_11;
	// UnityEngine.AudioSource player2::aud
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___aud_12;
	// UnityEngine.Animator player2::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_13;
	// GameManager player2::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_14;
	// System.Boolean player2::inDoor
	bool ___inDoor_15;

public:
	inline static int32_t get_offset_of_spells_4() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___spells_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spells_4() const { return ___spells_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spells_4() { return &___spells_4; }
	inline void set_spells_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spells_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spells_4), (void*)value);
	}

	inline static int32_t get_offset_of_soundFire_5() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___soundFire_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_soundFire_5() const { return ___soundFire_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_soundFire_5() { return &___soundFire_5; }
	inline void set_soundFire_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___soundFire_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundFire_5), (void*)value);
	}

	inline static int32_t get_offset_of_live_6() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___live_6)); }
	inline int32_t get_live_6() const { return ___live_6; }
	inline int32_t* get_address_of_live_6() { return &___live_6; }
	inline void set_live_6(int32_t value)
	{
		___live_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_point_8() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___point_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_point_8() const { return ___point_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_point_8() { return &___point_8; }
	inline void set_point_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___point_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___point_8), (void*)value);
	}

	inline static int32_t get_offset_of_Speedspelles_9() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___Speedspelles_9)); }
	inline int32_t get_Speedspelles_9() const { return ___Speedspelles_9; }
	inline int32_t* get_address_of_Speedspelles_9() { return &___Speedspelles_9; }
	inline void set_Speedspelles_9(int32_t value)
	{
		___Speedspelles_9 = value;
	}

	inline static int32_t get_offset_of_inPortal_10() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___inPortal_10)); }
	inline bool get_inPortal_10() const { return ___inPortal_10; }
	inline bool* get_address_of_inPortal_10() { return &___inPortal_10; }
	inline void set_inPortal_10(bool value)
	{
		___inPortal_10 = value;
	}

	inline static int32_t get_offset_of_rig_11() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___rig_11)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rig_11() const { return ___rig_11; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rig_11() { return &___rig_11; }
	inline void set_rig_11(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rig_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rig_11), (void*)value);
	}

	inline static int32_t get_offset_of_aud_12() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___aud_12)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_aud_12() const { return ___aud_12; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_aud_12() { return &___aud_12; }
	inline void set_aud_12(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___aud_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aud_12), (void*)value);
	}

	inline static int32_t get_offset_of_anim_13() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___anim_13)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_13() const { return ___anim_13; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_13() { return &___anim_13; }
	inline void set_anim_13(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_13), (void*)value);
	}

	inline static int32_t get_offset_of_gm_14() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___gm_14)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_14() const { return ___gm_14; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_14() { return &___gm_14; }
	inline void set_gm_14(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_14), (void*)value);
	}

	inline static int32_t get_offset_of_inDoor_15() { return static_cast<int32_t>(offsetof(player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F, ___inDoor_15)); }
	inline bool get_inDoor_15() const { return ___inDoor_15; }
	inline bool* get_address_of_inDoor_15() { return &___inDoor_15; }
	inline void set_inDoor_15(bool value)
	{
		___inDoor_15 = value;
	}
};


// CodeMonkey.Utils.FunctionPeriodic/MonoBehaviourHook
struct MonoBehaviourHook_t5CF272546F6BB863E2500DF31F7BA75F44F969DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action CodeMonkey.Utils.FunctionPeriodic/MonoBehaviourHook::OnUpdate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnUpdate_4;

public:
	inline static int32_t get_offset_of_OnUpdate_4() { return static_cast<int32_t>(offsetof(MonoBehaviourHook_t5CF272546F6BB863E2500DF31F7BA75F44F969DF, ___OnUpdate_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnUpdate_4() const { return ___OnUpdate_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnUpdate_4() { return &___OnUpdate_4; }
	inline void set_OnUpdate_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnUpdate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUpdate_4), (void*)value);
	}
};


// CodeMonkey.Utils.FunctionTimer/MonoBehaviourHook
struct MonoBehaviourHook_tD91D26718582FADB653D271568B86BBF0FF146A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action CodeMonkey.Utils.FunctionTimer/MonoBehaviourHook::OnUpdate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnUpdate_4;

public:
	inline static int32_t get_offset_of_OnUpdate_4() { return static_cast<int32_t>(offsetof(MonoBehaviourHook_tD91D26718582FADB653D271568B86BBF0FF146A6, ___OnUpdate_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnUpdate_4() const { return ___OnUpdate_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnUpdate_4() { return &___OnUpdate_4; }
	inline void set_OnUpdate_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnUpdate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUpdate_4), (void*)value);
	}
};


// CodeMonkey.Utils.FunctionUpdater/MonoBehaviourHook
struct MonoBehaviourHook_t91E87D3D400E6903AA423FA2AE3A07349A8EB692  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action CodeMonkey.Utils.FunctionUpdater/MonoBehaviourHook::OnUpdate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnUpdate_4;

public:
	inline static int32_t get_offset_of_OnUpdate_4() { return static_cast<int32_t>(offsetof(MonoBehaviourHook_t91E87D3D400E6903AA423FA2AE3A07349A8EB692, ___OnUpdate_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnUpdate_4() const { return ___OnUpdate_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnUpdate_4() { return &___OnUpdate_4; }
	inline void set_OnUpdate_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnUpdate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUpdate_4), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_gshared (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mFF0F9038A26E4D8772CC7DABE8604FC6B53A8F55_gshared (Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m728FB332AD1A2628A9FC76F9F0D6FFCE83CED99D_gshared (Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___arg10, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___arg21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Func`1<UnityEngine.Vector3>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Func_1_Invoke_m99A062A5D6783FEB51E6513F24C21788A92638EB_gshared (Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Mesh::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Material,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh__ctor_m5AF079E1453039C853B33203D9C646256DCABA11 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale2, float ___eulerZ3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material4, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices5, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uv6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles7, int32_t ___sortingOrderOffset8, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Mesh::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh__ctor_m9E5020FAD10922DA1D55D14B74BE95ED70D1B25A (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale2, float ___eulerZ3, float ___meshWidth4, float ___meshHeight5, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material6, UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * ___uvCoords7, int32_t ___sortingOrderOffset8, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * World_Mesh_Create_m4D36EB17BCB043821CF6FB288B19EB18B538ADBC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lowerLeftCorner0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upperRightCorner1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material2, UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * ___uvCoords3, int32_t ___sortingOrderOffset4, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Mesh/UVCoords::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVCoords__ctor_m80FB28FDF84C2D071314BDEA7EF73D0782120307 (UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method);
// UnityEngine.Vector2[] CodeMonkey.Utils.World_Mesh::GetUVRectangleFromPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* World_Mesh_GetUVRectangleFromPixels_mD317932BFCF9EE5AEBA4FEAD6567E515A1A52790 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___textureWidth4, int32_t ___textureHeight5, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Mesh::ApplyUVToUVArray(UnityEngine.Vector2[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_ApplyUVToUVArray_mAE708CFD4C8232AB56B7C05DBE8AE74F82D8C5F3 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uv0, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___mainUV1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___components1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Mesh::SetSortingOrderOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetSortingOrderOffset_mF559E506A4AB7C2C004AFE10185D864CE18291A7 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, int32_t ___sortingOrderOffset0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 CodeMonkey.Utils.World_Mesh::ConvertPixelsToUVCoordinates(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  World_Mesh_ConvertPixelsToUVCoordinates_m7B2193937B0D41BDB65AE490183BC01E9E7453FF (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, int32_t ___x0, int32_t ___y1, int32_t ___textureWidth2, int32_t ___textureHeight3, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 CodeMonkey.Utils.World_Mesh::GetSortingOrder(UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Mesh_GetSortingOrder_m0486F703BDA36D49D270065B216327B4F81F9EDA (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, int32_t ___offset1, int32_t ___baseSortingOrder2, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Mesh::SetSortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetSortingOrder_m23F97BD9374A66EA19F209916A74918F03BEEC21 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, int32_t ___sortingOrder0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_mAABE4F8F9B158068C8A1582ACE0BFEA3CF499139 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// CodeMonkey.Assets CodeMonkey.Assets::get_i()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * Assets_get_i_m355F3DBBE3E318A922BAA29CE0F629DB67C4F51F (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Sprite::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale2, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite3, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color4, int32_t ___sortingOrderOffset5, const RuntimeMethod* method);
// CodeMonkey.Utils.Button_Sprite CodeMonkey.Utils.World_Sprite::AddButton(System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * World_Sprite_AddButton_m58AA3CFE0F2EAD87DC7456DEF88E907999393D1A (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___ClickFunc0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOverOnceFunc1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOutOnceFunc2, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m6522001EE4D2AC2212D70FC1EF587C0038D0BD55 (U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(!0)
inline void Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_gshared)(__this, ___value0, method);
}
// UnityEngine.TextMesh CodeMonkey.Utils.UtilsClass::CreateWorldText(System.String,UnityEngine.Transform,UnityEngine.Vector3,System.Int32,System.Nullable`1<UnityEngine.Color>,UnityEngine.TextAnchor,UnityEngine.TextAlignment,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * UtilsClass_CreateWorldText_m0C7CC8B271549F491C053D3F70E9C25E2BF86CDD (String_t* ___text0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition2, int32_t ___fontSize3, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color4, int32_t ___textAnchor5, int32_t ___textAlignment6, int32_t ___sortingOrder7, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color CodeMonkey.Utils.UtilsClass::GetColorFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  UtilsClass_GetColorFromString_mE5AAC167A9F8BC00F92DA3D226EC4413D26C3F4F (String_t* ___color0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Int32 CodeMonkey.Utils.World_Sprite::GetSortingOrder(UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Sprite_GetSortingOrder_m7A160DDB1FD1D6FA2F11D6590A2AB8928BA9EB4C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, int32_t ___offset1, int32_t ___baseSortingOrder2, const RuntimeMethod* method);
// UnityEngine.GameObject CodeMonkey.Utils.UtilsClass::CreateWorldSprite(UnityEngine.Transform,System.String,UnityEngine.Sprite,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * UtilsClass_CreateWorldSprite_m7E9D521A08EB8CE5B2880B274A15FA7F92ACB57C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, String_t* ___name1, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale4, int32_t ___sortingOrder5, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color6, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Sprite::SetSortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetSortingOrder_m8AF54E018FDEF7C59AEEB2344D0638F0C1077975 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, int32_t ___sortingOrder0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Sprite::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetParent_m764848C1B87082E7C7BA7144C772CFB618FFABD3 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mAF8E5C15FEAADC84FE18CBB618F8556C2E8072CC (U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0 * __this, const RuntimeMethod* method);
// CodeMonkey.Utils.FunctionUpdater CodeMonkey.Utils.FunctionUpdater::Create(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B * FunctionUpdater_Create_mBE873685E30A7B7B14CE107DFCE7A60AD3BAE8E0 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___updateFunc0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipY_m7DFB2D1118142BE6C76470474F2ECAED234B0A01 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<CodeMonkey.Utils.Button_Sprite>()
inline Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * GameObject_AddComponent_TisButton_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066_mE3BF674C6CEE3F66C70832D360C703499A6FBA1E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59 (const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void player2::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_Move_mF08EF779FCE492F896DB8E4D4A9460FCE39EB98B (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void player2::Spell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_Spell_mF10A77BE61F354720D24E260BB6140E17572A693 (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, const RuntimeMethod* method);
// System.Void player2::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_NextLevel_m035261E0A08E196A54B30B5B107166D21E4D3116 (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void GameManager::PlayerDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayerDead_m6B74B77858242A02119D0172D5AE9C72DA118312 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void player2::Dead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_Dead_m06652D252ABAFAC9477E88B6A09CF460DBEF985F (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, String_t* ___obj0, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.Button_Sprite/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA2E428D83B252D4DEAD0C8E830746E172A44F554 (U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared)(__this, method);
}
// System.Void CodeMonkey.Utils.Button_UI/InterceptActionHandler::RemoveIntercept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptActionHandler_RemoveIntercept_m36DC3B13AC17729742A1D16FC072EAFB51E870E8 (InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m18DD512D802A3988C4E8FA9FBD47003951B719CF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Vector3 CodeMonkey.Utils.UtilsClass::GetMouseWorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UtilsClass_GetMouseWorldPosition_m8356FA96C641E22FA1420C4860715CDF8CF1C2BE (const RuntimeMethod* method);
// System.Void CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8B25D5CE34A5DF9FDAACC66E0F6E57D3863A7DE3 (U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4 * __this, const RuntimeMethod* method);
// System.Boolean CodeMonkey.Utils.FunctionTimer/FunctionTimerObject::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FunctionTimerObject_Update_m1A265B344A5427731E213BE647C5CBCD2F56A550 (FunctionTimerObject_tCBCB54F994F9B94192127BE13BD3C37154F37739 * __this, float ___deltaTime0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.UI_Sprite::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Sprite_SetColor_mCCB19EB07021FD2AA192E0CC6C04C09980D48F27 (UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// System.Void CodeMonkey.Utils.UI_TextComplex/Icon::.ctor(UnityEngine.Sprite,UnityEngine.Vector2,System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Icon__ctor_m366B63E73B074CA36DDAEA31FDDD563C0DE2AD10 (Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size1, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color2, const RuntimeMethod* method);
// !0 System.Func`1<System.String>::Invoke()
inline String_t* Func_1_Invoke_m67ACBA85BD6ABA0E3DAEB3BA6FAD566FAF3ED7FC (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(!0)
inline void Action_1_Invoke_mFF0F9038A26E4D8772CC7DABE8604FC6B53A8F55 (Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Action_1_Invoke_mFF0F9038A26E4D8772CC7DABE8604FC6B53A8F55_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3>::Invoke(!0,!1)
inline void Action_2_Invoke_m728FB332AD1A2628A9FC76F9F0D6FFCE83CED99D (Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___arg10, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Action_2_Invoke_m728FB332AD1A2628A9FC76F9F0D6FFCE83CED99D_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean CodeMonkey.Utils.UtilsClass::IsPointerOverUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UtilsClass_IsPointerOverUI_m21DD0DAB4C812EFBD6564C0FA7902C1C2DA888E6 (const RuntimeMethod* method);
// UnityEngine.Vector3 CodeMonkey.Utils.UtilsClass::GetWorldPositionFromUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UtilsClass_GetWorldPositionFromUI_m1EE127FFC5102DD491A87A4B9F56CB5121EBFC4D (const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetNestedType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetNestedType_m3172372453F53F3B67496B40D75FE8468CE89280 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// !0 System.Func`1<UnityEngine.Vector3>::Invoke()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Func_1_Invoke_m99A062A5D6783FEB51E6513F24C21788A92638EB (Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 *, const RuntimeMethod*))Func_1_Invoke_m99A062A5D6783FEB51E6513F24C21788A92638EB_gshared)(__this, method);
}
// System.Void CodeMonkey.Utils.World_Sprite::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetColor_mF6CF9224148CBB79167239FB76797CCEBD0C2E86 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::CreateEmpty(UnityEngine.Vector3,System.Single,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * World_Mesh_CreateEmpty_m10E79FA4A278707E7EDE8B8FD36625E1CEA78514 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___eulerZ1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material2, int32_t ___sortingOrderOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Mesh(null, position, Vector3.one, eulerZ, material, new Vector3[0], new Vector2[0], new int[0], sortingOrderOffset);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_2 = ___eulerZ1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___material2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)0);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)0);
		int32_t L_7 = ___sortingOrderOffset3;
		World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * L_8 = (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 *)il2cpp_codegen_object_new(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21_il2cpp_TypeInfo_var);
		World_Mesh__ctor_m5AF079E1453039C853B33203D9C646256DCABA11(L_8, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::Create(UnityEngine.Vector3,System.Single,UnityEngine.Material,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * World_Mesh_Create_m77CBBFBBB18257C6C55DC3F73E50823DBC2F3B25 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___eulerZ1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material2, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices3, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uv4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles5, int32_t ___sortingOrderOffset6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Mesh(null, position, Vector3.one, eulerZ, material, vertices, uv, triangles, sortingOrderOffset);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_2 = ___eulerZ1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___material2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = ___vertices3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = ___uv4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ___triangles5;
		int32_t L_7 = ___sortingOrderOffset6;
		World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * L_8 = (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 *)il2cpp_codegen_object_new(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21_il2cpp_TypeInfo_var);
		World_Mesh__ctor_m5AF079E1453039C853B33203D9C646256DCABA11(L_8, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::Create(UnityEngine.Vector3,System.Single,System.Single,System.Single,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * World_Mesh_Create_m4DCFA4FF3227A55AEF967A45478DDA552875FBFB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___eulerZ1, float ___meshWidth2, float ___meshHeight3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material4, UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * ___uvCoords5, int32_t ___sortingOrderOffset6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Mesh(null, position, Vector3.one, eulerZ, meshWidth, meshHeight, material, uvCoords, sortingOrderOffset);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_2 = ___eulerZ1;
		float L_3 = ___meshWidth2;
		float L_4 = ___meshHeight3;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = ___material4;
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_6 = ___uvCoords5;
		int32_t L_7 = ___sortingOrderOffset6;
		World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * L_8 = (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 *)il2cpp_codegen_object_new(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21_il2cpp_TypeInfo_var);
		World_Mesh__ctor_m9E5020FAD10922DA1D55D14B74BE95ED70D1B25A(L_8, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::Create(UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * World_Mesh_Create_m892B01D621406E45BB488B50A2DD346B8F1E2A72 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lowerLeftCorner0, float ___width1, float ___height2, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material3, UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * ___uvCoords4, int32_t ___sortingOrderOffset5, const RuntimeMethod* method)
{
	{
		// return Create(lowerLeftCorner, lowerLeftCorner + new Vector3(width, height), material, uvCoords, sortingOrderOffset);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lowerLeftCorner0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___lowerLeftCorner0;
		float L_2 = ___width1;
		float L_3 = ___height2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_4, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = ___material3;
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_7 = ___uvCoords4;
		int32_t L_8 = ___sortingOrderOffset5;
		World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * L_9;
		L_9 = World_Mesh_Create_m4D36EB17BCB043821CF6FB288B19EB18B538ADBC(L_0, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * World_Mesh_Create_m4D36EB17BCB043821CF6FB288B19EB18B538ADBC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lowerLeftCorner0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upperRightCorner1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material2, UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * ___uvCoords3, int32_t ___sortingOrderOffset4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float width = upperRightCorner.x - lowerLeftCorner.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___upperRightCorner1;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___lowerLeftCorner0;
		float L_3 = L_2.get_x_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		// float height = upperRightCorner.y - lowerLeftCorner.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___upperRightCorner1;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___lowerLeftCorner0;
		float L_7 = L_6.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		// Vector3 localScale = upperRightCorner - lowerLeftCorner;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___upperRightCorner1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___lowerLeftCorner0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// Vector3 position = lowerLeftCorner + localScale * .5f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___lowerLeftCorner0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// return new World_Mesh(null, position, Vector3.one, 0f, width, height, material, uvCoords, sortingOrderOffset);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_17 = V_0;
		float L_18 = V_1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = ___material2;
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_20 = ___uvCoords3;
		int32_t L_21 = ___sortingOrderOffset4;
		World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * L_22 = (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 *)il2cpp_codegen_object_new(World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21_il2cpp_TypeInfo_var);
		World_Mesh__ctor_m9E5020FAD10922DA1D55D14B74BE95ED70D1B25A(L_22, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_15, L_16, (0.0f), L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Int32 CodeMonkey.Utils.World_Mesh::GetSortingOrder(UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Mesh_GetSortingOrder_m0486F703BDA36D49D270065B216327B4F81F9EDA (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, int32_t ___offset1, int32_t ___baseSortingOrder2, const RuntimeMethod* method)
{
	{
		// return (int)(baseSortingOrder - position.y) + offset;
		int32_t L_0 = ___baseSortingOrder2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position0;
		float L_2 = L_1.get_y_3();
		int32_t L_3 = ___offset1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)((float)((float)L_0)), (float)L_2)))), (int32_t)L_3));
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh__ctor_m9E5020FAD10922DA1D55D14B74BE95ED70D1B25A (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale2, float ___eulerZ3, float ___meshWidth4, float ___meshHeight5, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material6, UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * ___uvCoords7, int32_t ___sortingOrderOffset8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_2 = NULL;
	{
		// public World_Mesh(Transform parent, Vector3 localPosition, Vector3 localScale, float eulerZ, float meshWidth, float meshHeight, Material material, UVCoords uvCoords, int sortingOrderOffset) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.material = material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___material6;
		__this->set_material_3(L_0);
		// vertices = new Vector3[4];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_vertices_4(L_1);
		// uv = new Vector2[4];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_2 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_uv_5(L_2);
		// triangles = new int[6];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_triangles_6(L_3);
		// float meshWidthHalf  = meshWidth  / 2f;
		float L_4 = ___meshWidth4;
		V_0 = ((float)((float)L_4/(float)(2.0f)));
		// float meshHeightHalf = meshHeight / 2f;
		float L_5 = ___meshHeight5;
		V_1 = ((float)((float)L_5/(float)(2.0f)));
		// vertices[0] = new Vector3(-meshWidthHalf,  meshHeightHalf);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = __this->get_vertices_4();
		float L_7 = V_0;
		float L_8 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_9), ((-L_7)), L_8, /*hidden argument*/NULL);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_9);
		// vertices[1] = new Vector3( meshWidthHalf,  meshHeightHalf);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = __this->get_vertices_4();
		float L_11 = V_0;
		float L_12 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_13), L_11, L_12, /*hidden argument*/NULL);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_13);
		// vertices[2] = new Vector3(-meshWidthHalf, -meshHeightHalf);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = __this->get_vertices_4();
		float L_15 = V_0;
		float L_16 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_17), ((-L_15)), ((-L_16)), /*hidden argument*/NULL);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_17);
		// vertices[3] = new Vector3( meshWidthHalf, -meshHeightHalf);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_18 = __this->get_vertices_4();
		float L_19 = V_0;
		float L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_21), L_19, ((-L_20)), /*hidden argument*/NULL);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_21);
		// if (uvCoords == null) {
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_22 = ___uvCoords7;
		if (L_22)
		{
			goto IL_00b9;
		}
	}
	{
		// uvCoords = new UVCoords(0, 0, material.mainTexture.width, material.mainTexture.height);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23 = ___material6;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_24;
		L_24 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_23, /*hidden argument*/NULL);
		int32_t L_25;
		L_25 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = ___material6;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_27;
		L_27 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_26, /*hidden argument*/NULL);
		int32_t L_28;
		L_28 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_27);
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_29 = (UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C *)il2cpp_codegen_object_new(UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C_il2cpp_TypeInfo_var);
		UVCoords__ctor_m80FB28FDF84C2D071314BDEA7EF73D0782120307(L_29, 0, 0, L_25, L_28, /*hidden argument*/NULL);
		___uvCoords7 = L_29;
	}

IL_00b9:
	{
		// Vector2[] uvArray = GetUVRectangleFromPixels(uvCoords.x, uvCoords.y, uvCoords.width, uvCoords.height, material.mainTexture.width, material.mainTexture.height);
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_30 = ___uvCoords7;
		int32_t L_31 = L_30->get_x_0();
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_32 = ___uvCoords7;
		int32_t L_33 = L_32->get_y_1();
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_34 = ___uvCoords7;
		int32_t L_35 = L_34->get_width_2();
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_36 = ___uvCoords7;
		int32_t L_37 = L_36->get_height_3();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_38 = ___material6;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_39;
		L_39 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_38, /*hidden argument*/NULL);
		int32_t L_40;
		L_40 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_39);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_41 = ___material6;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_42;
		L_42 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_41, /*hidden argument*/NULL);
		int32_t L_43;
		L_43 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_42);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_44;
		L_44 = World_Mesh_GetUVRectangleFromPixels_mD317932BFCF9EE5AEBA4FEAD6567E515A1A52790(__this, L_31, L_33, L_35, L_37, L_40, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
		// ApplyUVToUVArray(uvArray, ref uv);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_45 = V_2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_46 = __this->get_address_of_uv_5();
		World_Mesh_ApplyUVToUVArray_mAE708CFD4C8232AB56B7C05DBE8AE74F82D8C5F3(__this, L_45, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_46, /*hidden argument*/NULL);
		// triangles[0] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_47 = __this->get_triangles_6();
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// triangles[1] = 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = __this->get_triangles_6();
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		// triangles[2] = 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = __this->get_triangles_6();
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)2);
		// triangles[3] = 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = __this->get_triangles_6();
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)2);
		// triangles[4] = 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = __this->get_triangles_6();
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (int32_t)1);
		// triangles[5] = 3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = __this->get_triangles_6();
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (int32_t)3);
		// mesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_53 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_53, /*hidden argument*/NULL);
		__this->set_mesh_7(L_53);
		// mesh.vertices = vertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_54 = __this->get_mesh_7();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_55 = __this->get_vertices_4();
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_54, L_55, /*hidden argument*/NULL);
		// mesh.uv = uv;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_56 = __this->get_mesh_7();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_57 = __this->get_uv_5();
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_56, L_57, /*hidden argument*/NULL);
		// mesh.triangles = triangles;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_58 = __this->get_mesh_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = __this->get_triangles_6();
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_58, L_59, /*hidden argument*/NULL);
		// gameObject = new GameObject("Mesh", typeof(MeshFilter), typeof(MeshRenderer));
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_60 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_61 = L_60;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_62 = { reinterpret_cast<intptr_t> (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_63;
		L_63 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_62, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_63);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_64 = L_61;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_65 = { reinterpret_cast<intptr_t> (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_0_0_0_var) };
		Type_t * L_66;
		L_66 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_65, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_66);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8(L_67, _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821, L_64, /*hidden argument*/NULL);
		__this->set_gameObject_1(L_67);
		// gameObject.transform.parent = parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_68, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70 = ___parent0;
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_69, L_70, /*hidden argument*/NULL);
		// gameObject.transform.localPosition = localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_71, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73 = ___localPosition1;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_72, L_73, /*hidden argument*/NULL);
		// gameObject.transform.localScale = localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_74, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = ___localScale2;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_75, L_76, /*hidden argument*/NULL);
		// gameObject.transform.localEulerAngles = new Vector3(0, 0, eulerZ);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_77, /*hidden argument*/NULL);
		float L_79 = ___eulerZ3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_80), (0.0f), (0.0f), L_79, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_78, L_80, /*hidden argument*/NULL);
		// gameObject.GetComponent<MeshFilter>().mesh = mesh;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = __this->get_gameObject_1();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_82;
		L_82 = GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4(L_81, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_83 = __this->get_mesh_7();
		MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC(L_82, L_83, /*hidden argument*/NULL);
		// gameObject.GetComponent<MeshRenderer>().material = material;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = __this->get_gameObject_1();
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_85;
		L_85 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_84, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_86 = ___material6;
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_85, L_86, /*hidden argument*/NULL);
		// transform = gameObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88;
		L_88 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_87, /*hidden argument*/NULL);
		__this->set_transform_2(L_88);
		// SetSortingOrderOffset(sortingOrderOffset);
		int32_t L_89 = ___sortingOrderOffset8;
		World_Mesh_SetSortingOrderOffset_mF559E506A4AB7C2C004AFE10185D864CE18291A7(__this, L_89, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Material,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh__ctor_m5AF079E1453039C853B33203D9C646256DCABA11 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale2, float ___eulerZ3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material4, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices5, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uv6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles7, int32_t ___sortingOrderOffset8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public World_Mesh(Transform parent, Vector3 localPosition, Vector3 localScale, float eulerZ, Material material, Vector3[] vertices, Vector2[] uv, int[] triangles, int sortingOrderOffset) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.material = material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___material4;
		__this->set_material_3(L_0);
		// this.vertices = vertices;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = ___vertices5;
		__this->set_vertices_4(L_1);
		// this.uv = uv;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_2 = ___uv6;
		__this->set_uv_5(L_2);
		// this.triangles = triangles;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ___triangles7;
		__this->set_triangles_6(L_3);
		// mesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_4, /*hidden argument*/NULL);
		__this->set_mesh_7(L_4);
		// mesh.vertices = vertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5 = __this->get_mesh_7();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = ___vertices5;
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_5, L_6, /*hidden argument*/NULL);
		// mesh.uv = uv;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7 = __this->get_mesh_7();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_8 = ___uv6;
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_7, L_8, /*hidden argument*/NULL);
		// mesh.triangles = triangles;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_9 = __this->get_mesh_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = ___triangles7;
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_9, L_10, /*hidden argument*/NULL);
		// gameObject = new GameObject("Mesh", typeof(MeshFilter), typeof(MeshRenderer));
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_11 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = L_11;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_14);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_15 = L_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_0_0_0_var) };
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_16, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8(L_18, _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821, L_15, /*hidden argument*/NULL);
		__this->set_gameObject_1(L_18);
		// gameObject.transform.parent = parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = ___parent0;
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_20, L_21, /*hidden argument*/NULL);
		// gameObject.transform.localPosition = localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___localPosition1;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_23, L_24, /*hidden argument*/NULL);
		// gameObject.transform.localScale = localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___localScale2;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_26, L_27, /*hidden argument*/NULL);
		// gameObject.transform.localEulerAngles = new Vector3(0, 0, eulerZ);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		float L_30 = ___eulerZ3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_31), (0.0f), (0.0f), L_30, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_29, L_31, /*hidden argument*/NULL);
		// gameObject.GetComponent<MeshFilter>().mesh = mesh;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_gameObject_1();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_33;
		L_33 = GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4(L_32, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_34 = __this->get_mesh_7();
		MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC(L_33, L_34, /*hidden argument*/NULL);
		// gameObject.GetComponent<MeshRenderer>().material = material;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_gameObject_1();
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_36;
		L_36 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_35, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = ___material4;
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_36, L_37, /*hidden argument*/NULL);
		// transform = gameObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		__this->set_transform_2(L_39);
		// SetSortingOrderOffset(sortingOrderOffset);
		int32_t L_40 = ___sortingOrderOffset8;
		World_Mesh_SetSortingOrderOffset_mF559E506A4AB7C2C004AFE10185D864CE18291A7(__this, L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 CodeMonkey.Utils.World_Mesh::ConvertPixelsToUVCoordinates(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  World_Mesh_ConvertPixelsToUVCoordinates_m7B2193937B0D41BDB65AE490183BC01E9E7453FF (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, int32_t ___x0, int32_t ___y1, int32_t ___textureWidth2, int32_t ___textureHeight3, const RuntimeMethod* method)
{
	{
		// return new Vector2((float)x / textureWidth, (float)y / textureHeight);
		int32_t L_0 = ___x0;
		int32_t L_1 = ___textureWidth2;
		int32_t L_2 = ___y1;
		int32_t L_3 = ___textureHeight3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((float)((float)((float)((float)L_0))/(float)((float)((float)L_1)))), ((float)((float)((float)((float)L_2))/(float)((float)((float)L_3)))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2[] CodeMonkey.Utils.World_Mesh::GetUVRectangleFromPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* World_Mesh_GetUVRectangleFromPixels_mD317932BFCF9EE5AEBA4FEAD6567E515A1A52790 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___textureWidth4, int32_t ___textureHeight5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector2[] {
		//     ConvertPixelsToUVCoordinates(x, y + height, textureWidth, textureHeight),
		//     ConvertPixelsToUVCoordinates(x + width, y + height, textureWidth, textureHeight),
		//     ConvertPixelsToUVCoordinates(x, y, textureWidth, textureHeight),
		//     ConvertPixelsToUVCoordinates(x + width, y, textureWidth, textureHeight)
		// };
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = L_0;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		int32_t L_4 = ___height3;
		int32_t L_5 = ___textureWidth4;
		int32_t L_6 = ___textureHeight5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = World_Mesh_ConvertPixelsToUVCoordinates_m7B2193937B0D41BDB65AE490183BC01E9E7453FF(__this, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), L_5, L_6, /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_7);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_8 = L_1;
		int32_t L_9 = ___x0;
		int32_t L_10 = ___width2;
		int32_t L_11 = ___y1;
		int32_t L_12 = ___height3;
		int32_t L_13 = ___textureWidth4;
		int32_t L_14 = ___textureHeight5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = World_Mesh_ConvertPixelsToUVCoordinates_m7B2193937B0D41BDB65AE490183BC01E9E7453FF(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), L_13, L_14, /*hidden argument*/NULL);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_15);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_16 = L_8;
		int32_t L_17 = ___x0;
		int32_t L_18 = ___y1;
		int32_t L_19 = ___textureWidth4;
		int32_t L_20 = ___textureHeight5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = World_Mesh_ConvertPixelsToUVCoordinates_m7B2193937B0D41BDB65AE490183BC01E9E7453FF(__this, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_21);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_22 = L_16;
		int32_t L_23 = ___x0;
		int32_t L_24 = ___width2;
		int32_t L_25 = ___y1;
		int32_t L_26 = ___textureWidth4;
		int32_t L_27 = ___textureHeight5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = World_Mesh_ConvertPixelsToUVCoordinates_m7B2193937B0D41BDB65AE490183BC01E9E7453FF(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24)), L_25, L_26, L_27, /*hidden argument*/NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_28);
		return L_22;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::ApplyUVToUVArray(UnityEngine.Vector2[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_ApplyUVToUVArray_mAE708CFD4C8232AB56B7C05DBE8AE74F82D8C5F3 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uv0, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___mainUV1, const RuntimeMethod* method)
{
	{
		// if (uv == null || uv.Length < 4 || mainUV == null || mainUV.Length < 4) throw new System.Exception();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = ___uv0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = ___uv0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) < ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_2 = ___mainUV1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_3 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_2);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_4 = ___mainUV1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_4);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		// if (uv == null || uv.Length < 4 || mainUV == null || mainUV.Length < 4) throw new System.Exception();
		Exception_t * L_6 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&World_Mesh_ApplyUVToUVArray_mAE708CFD4C8232AB56B7C05DBE8AE74F82D8C5F3_RuntimeMethod_var)));
	}

IL_001a:
	{
		// mainUV[0] = uv[0];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_7 = ___mainUV1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_8 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_7);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_9 = ___uv0;
		int32_t L_10 = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_11);
		// mainUV[1] = uv[1];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_12 = ___mainUV1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_12);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14 = ___uv0;
		int32_t L_15 = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_16);
		// mainUV[2] = uv[2];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_17 = ___mainUV1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_18 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_17);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_19 = ___uv0;
		int32_t L_20 = 2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_21);
		// mainUV[3] = uv[3];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_22 = ___mainUV1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_23 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_22);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_24 = ___uv0;
		int32_t L_25 = 3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_26);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::SetUVCoords(CodeMonkey.Utils.World_Mesh/UVCoords)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetUVCoords_mB24C7ECABA2211CB208F20E32DD3E18AC50197F0 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * ___uvCoords0, const RuntimeMethod* method)
{
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_0 = NULL;
	{
		// Vector2[] uvArray = GetUVRectangleFromPixels(uvCoords.x, uvCoords.y, uvCoords.width, uvCoords.height, material.mainTexture.width, material.mainTexture.height);
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_0 = ___uvCoords0;
		int32_t L_1 = L_0->get_x_0();
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_2 = ___uvCoords0;
		int32_t L_3 = L_2->get_y_1();
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_4 = ___uvCoords0;
		int32_t L_5 = L_4->get_width_2();
		UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * L_6 = ___uvCoords0;
		int32_t L_7 = L_6->get_height_3();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_material_3();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_9;
		L_9 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_8, /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_material_3();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_12;
		L_12 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_11, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14;
		L_14 = World_Mesh_GetUVRectangleFromPixels_mD317932BFCF9EE5AEBA4FEAD6567E515A1A52790(__this, L_1, L_3, L_5, L_7, L_10, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// ApplyUVToUVArray(uvArray, ref uv);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_15 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_16 = __this->get_address_of_uv_5();
		World_Mesh_ApplyUVToUVArray_mAE708CFD4C8232AB56B7C05DBE8AE74F82D8C5F3(__this, L_15, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_16, /*hidden argument*/NULL);
		// mesh.uv = uv;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_17 = __this->get_mesh_7();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_18 = __this->get_uv_5();
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::SetSortingOrderOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetSortingOrderOffset_mF559E506A4AB7C2C004AFE10185D864CE18291A7 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, int32_t ___sortingOrderOffset0, const RuntimeMethod* method)
{
	{
		// SetSortingOrder(GetSortingOrder(gameObject.transform.position, sortingOrderOffset));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___sortingOrderOffset0;
		int32_t L_4;
		L_4 = World_Mesh_GetSortingOrder_m0486F703BDA36D49D270065B216327B4F81F9EDA(L_2, L_3, ((int32_t)5000), /*hidden argument*/NULL);
		World_Mesh_SetSortingOrder_m23F97BD9374A66EA19F209916A74918F03BEEC21(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::SetSortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetSortingOrder_m23F97BD9374A66EA19F209916A74918F03BEEC21 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, int32_t ___sortingOrder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<Renderer>().sortingOrder = sortingOrder;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		int32_t L_2 = ___sortingOrder0;
		Renderer_set_sortingOrder_mAABE4F8F9B158068C8A1582ACE0BFEA3CF499139(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::SetLocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetLocalScale_m213BEB0438E0516B8A2ED4F9E22F4E6F0EE10A3B (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale0, const RuntimeMethod* method)
{
	{
		// transform.localScale = localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localScale0;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetPosition_m12F3C7D05BA710AB81585FAFA1A677D9E671BA6D (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method)
{
	{
		// transform.localPosition = localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localPosition0;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::AddPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_AddPosition_m13C132DF1EA741F6FBE13A424B0F6C61AAA2FE08 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___addPosition0, const RuntimeMethod* method)
{
	{
		// transform.localPosition += addPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___addPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_1, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 CodeMonkey.Utils.World_Mesh::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  World_Mesh_GetPosition_m9414E8E6536D9E33A99E1A7CCDDE17F0ADC6EEFA (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, const RuntimeMethod* method)
{
	{
		// return transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 CodeMonkey.Utils.World_Mesh::GetSortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Mesh_GetSortingOrder_m150D086E1CF1F77E7E15733F06BC8C9BAFD9D766 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObject.GetComponent<Renderer>().sortingOrder;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Mesh CodeMonkey.Utils.World_Mesh::GetMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * World_Mesh_GetMesh_m854F9086D7FF16C06DC309552100EBD44A4E566C (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, const RuntimeMethod* method)
{
	{
		// return mesh;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_mesh_7();
		return L_0;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_Show_m615697DF58EA6DBCB444835698B855904E223445 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_Hide_mE4C5415D67CC1B6B04EE2FFE8D61D1BDADA07872 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_DestroySelf_m36A9E20A9C886A476EB8F78463535C84AE6848F0 (World_Mesh_t7B68756052371EBBEA6D5140CB6F83DE41241A21 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Object.Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::CreateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_CreateMesh_m647EE1989ED73F2FA8978805245C01D426A14BD0 (const RuntimeMethod* method)
{
	{
		// }
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
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::CreateDebugButton(UnityEngine.Vector3,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_CreateDebugButton_m4DD7B0D0AD278607F5952F4B81CE4BB73C5C737F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___ClickFunc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// World_Sprite worldSprite = new World_Sprite(null, position, new Vector3(10, 10), Assets.i.s_White, Color.green, sortingOrderDefault);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_1), (10.0f), (10.0f), /*hidden argument*/NULL);
		Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * L_2;
		L_2 = Assets_get_i_m355F3DBBE3E318A922BAA29CE0F629DB67C4F51F(/*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = L_2->get_s_White_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_5 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_5, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_3, L_4, ((int32_t)5000), /*hidden argument*/NULL);
		// worldSprite.AddButton(ClickFunc, null, null);
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_6 = L_5;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = ___ClickFunc1;
		Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * L_8;
		L_8 = World_Sprite_AddButton_m58AA3CFE0F2EAD87DC7456DEF88E907999393D1A(L_6, L_7, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, /*hidden argument*/NULL);
		// return worldSprite;
		return L_6;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::CreateDebugButton(UnityEngine.Transform,UnityEngine.Vector3,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_CreateDebugButton_m4CF2E76F920950D440B33AAB6CEEB9090185DC9B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___ClickFunc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// World_Sprite worldSprite = new World_Sprite(parent, localPosition, new Vector3(10, 10), Assets.i.s_White, Color.green, sortingOrderDefault);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___parent0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_2), (10.0f), (10.0f), /*hidden argument*/NULL);
		Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * L_3;
		L_3 = Assets_get_i_m355F3DBBE3E318A922BAA29CE0F629DB67C4F51F(/*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = L_3->get_s_White_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_6 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_6, L_0, L_1, L_2, L_4, L_5, ((int32_t)5000), /*hidden argument*/NULL);
		// worldSprite.AddButton(ClickFunc, null, null);
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_7 = L_6;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___ClickFunc2;
		Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * L_9;
		L_9 = World_Sprite_AddButton_m58AA3CFE0F2EAD87DC7456DEF88E907999393D1A(L_7, L_8, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, /*hidden argument*/NULL);
		// return worldSprite;
		return L_7;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::CreateDebugButton(UnityEngine.Transform,UnityEngine.Vector3,System.String,System.Action,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_CreateDebugButton_m7697CC29F37F68E3CEE7520F67D9CDCE4179495A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition1, String_t* ___text2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___ClickFunc3, int32_t ___fontSize4, float ___paddingX5, float ___paddingY6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__0_mF97183B5AE787305771D5CBB5B266DC64D2FD7A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__1_mBE26EC0FDC9F274A79E3F19F2E2FF3C22CE123D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE2AA3A701649CC43A2E9341CC61243714522AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6A3463C3F0A237C6D59BD191E963BE8C8E0E6D3);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_0 = (U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m6522001EE4D2AC2212D70FC1EF587C0038D0BD55(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// GameObject gameObject = new GameObject("DebugButton");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, _stringLiteralF6A3463C3F0A237C6D59BD191E963BE8C8E0E6D3, /*hidden argument*/NULL);
		V_1 = L_1;
		// gameObject.transform.parent = parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___parent0;
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_3, L_4, /*hidden argument*/NULL);
		// gameObject.transform.localPosition = localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___localPosition1;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_6, L_7, /*hidden argument*/NULL);
		// TextMesh textMesh = UtilsClass.CreateWorldText(text, gameObject.transform, Vector3.zero, fontSize, Color.white, TextAnchor.MiddleCenter, TextAlignment.Center, 20000);
		String_t* L_8 = ___text2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		int32_t L_12 = ___fontSize4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_14), L_13, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_15;
		L_15 = UtilsClass_CreateWorldText_m0C7CC8B271549F491C053D3F70E9C25E2BF86CDD(L_8, L_10, L_11, L_12, L_14, 4, 1, ((int32_t)20000), /*hidden argument*/NULL);
		// Bounds rendererBounds = textMesh.GetComponent<MeshRenderer>().bounds;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_16;
		L_16 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_15, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_17;
		L_17 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// Color color = UtilsClass.GetColorFromString("00BA00FF");
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_18 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = UtilsClass_GetColorFromString_mE5AAC167A9F8BC00F92DA3D226EC4413D26C3F4F(_stringLiteral9FE2AA3A701649CC43A2E9341CC61243714522AC, /*hidden argument*/NULL);
		L_18->set_color_2(L_19);
		// if (color.r >= 1f) color.r = .9f;
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_20 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_21 = L_20->get_address_of_color_2();
		float L_22 = L_21->get_r_0();
		if ((!(((float)L_22) >= ((float)(1.0f)))))
		{
			goto IL_008a;
		}
	}
	{
		// if (color.r >= 1f) color.r = .9f;
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_23 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_24 = L_23->get_address_of_color_2();
		L_24->set_r_0((0.899999976f));
	}

IL_008a:
	{
		// if (color.g >= 1f) color.g = .9f;
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_25 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_26 = L_25->get_address_of_color_2();
		float L_27 = L_26->get_g_1();
		if ((!(((float)L_27) >= ((float)(1.0f)))))
		{
			goto IL_00ac;
		}
	}
	{
		// if (color.g >= 1f) color.g = .9f;
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_28 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_29 = L_28->get_address_of_color_2();
		L_29->set_g_1((0.899999976f));
	}

IL_00ac:
	{
		// if (color.b >= 1f) color.b = .9f;
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_30 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_31 = L_30->get_address_of_color_2();
		float L_32 = L_31->get_b_2();
		if ((!(((float)L_32) >= ((float)(1.0f)))))
		{
			goto IL_00ce;
		}
	}
	{
		// if (color.b >= 1f) color.b = .9f;
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_33 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_34 = L_33->get_address_of_color_2();
		L_34->set_b_2((0.899999976f));
	}

IL_00ce:
	{
		// Color colorOver = color * 1.1f; // button over color lighter
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_35 = V_0;
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_36 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37 = L_36->get_color_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D(L_37, (1.10000002f), /*hidden argument*/NULL);
		L_35->set_colorOver_1(L_38);
		// World_Sprite worldSprite = new World_Sprite(gameObject.transform, Vector3.zero, rendererBounds.size + new Vector3(paddingX, paddingY), Assets.i.s_White, color, sortingOrderDefault);
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_39 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_2), /*hidden argument*/NULL);
		float L_44 = ___paddingX5;
		float L_45 = ___paddingY6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_46), L_44, L_45, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_43, L_46, /*hidden argument*/NULL);
		Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * L_48;
		L_48 = Assets_get_i_m355F3DBBE3E318A922BAA29CE0F629DB67C4F51F(/*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_49 = L_48->get_s_White_5();
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_50 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51 = L_50->get_color_2();
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_52 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_52, L_41, L_42, L_47, L_49, L_51, ((int32_t)5000), /*hidden argument*/NULL);
		L_39->set_worldSprite_0(L_52);
		// worldSprite.AddButton(ClickFunc, () => worldSprite.SetColor(colorOver), () => worldSprite.SetColor(color));
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_53 = V_0;
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_54 = L_53->get_worldSprite_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_55 = ___ClickFunc3;
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_56 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_57 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_57, L_56, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__0_mF97183B5AE787305771D5CBB5B266DC64D2FD7A6_RuntimeMethod_var), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_58 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_59 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_59, L_58, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__1_mBE26EC0FDC9F274A79E3F19F2E2FF3C22CE123D3_RuntimeMethod_var), /*hidden argument*/NULL);
		Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * L_60;
		L_60 = World_Sprite_AddButton_m58AA3CFE0F2EAD87DC7456DEF88E907999393D1A(L_54, L_55, L_57, L_59, /*hidden argument*/NULL);
		// return worldSprite;
		U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * L_61 = V_0;
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_62 = L_61->get_worldSprite_0();
		return L_62;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_Create_m0EB658929F76D16BD7BEE74F19EB49CCBC5588F3 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale2, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite3, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color4, int32_t ___sortingOrderOffset5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(parent, localPosition, localScale, sprite, color, sortingOrderOffset);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___parent0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___localScale2;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = ___sprite3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___color4;
		int32_t L_5 = ___sortingOrderOffset5;
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_6 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_6, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,System.Nullable`1<UnityEngine.Color>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_Create_m6B500A4FBDEF827CA5E166835105B20F5982A3A1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale2, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite3, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color4, int32_t ___sortingOrderOffset5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sprite == null) {
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = ___sprite3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// sprite = Assets.i.s_White;
		Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * L_2;
		L_2 = Assets_get_i_m355F3DBBE3E318A922BAA29CE0F629DB67C4F51F(/*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = L_2->get_s_White_5();
		___sprite3 = L_3;
	}

IL_0015:
	{
		// if (color == null) {
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___color4), /*hidden argument*/Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___color4), L_5, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
	}

IL_002a:
	{
		// return new World_Sprite(parent, localPosition, localScale, sprite, (Color)color, sortingOrderOffset);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___parent0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___localPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___localScale2;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = ___sprite3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___color4), /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		int32_t L_11 = ___sortingOrderOffset5;
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_12 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_12, L_6, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_Create_mA01C8AC4C9D5E40A4F9CBB4CF48A5F57B2A6DB06 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, new Vector3(1, 1, 1), sprite, Color.white, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___worldPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = ___sprite1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_4 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_4, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_Create_m8B28593473C6C4B4CB70FCD980B485EC7BE3B070 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale1, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color3, int32_t ___sortingOrderOffset4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, sprite, color, sortingOrderOffset);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___worldPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localScale1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = ___sprite2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___color3;
		int32_t L_4 = ___sortingOrderOffset4;
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_5 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_5, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_Create_mE3486CF9D124B24108294D4194AE8AEE449D28C6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale1, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, sprite, color, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___worldPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localScale1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = ___sprite2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___color3;
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_4 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_4, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_Create_m3582E1D8A6C32669527A55F10449A142EC6A984B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, Assets.i.s_White, color, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___worldPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localScale1;
		Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * L_2;
		L_2 = Assets_get_i_m355F3DBBE3E318A922BAA29CE0F629DB67C4F51F(/*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = L_2->get_s_White_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___color2;
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_5 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_5, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_3, L_4, 0, /*hidden argument*/NULL);
		return L_5;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_Create_m0346CAC12105D8CC4D7775F8C4DCA1B008AF6B0C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, int32_t ___sortingOrderOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, Assets.i.s_White, color, sortingOrderOffset);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___worldPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localScale1;
		Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * L_2;
		L_2 = Assets_get_i_m355F3DBBE3E318A922BAA29CE0F629DB67C4F51F(/*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = L_2->get_s_White_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___color2;
		int32_t L_5 = ___sortingOrderOffset3;
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_6 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_6, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_Create_mBB51E6FC3F884A7FE26E7A90EB32FC0797410153 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, Assets.i.s_White, Color.white, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___worldPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localScale1;
		Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * L_2;
		L_2 = Assets_get_i_m355F3DBBE3E318A922BAA29CE0F629DB67C4F51F(/*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = L_2->get_s_White_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_5 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_5, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_3, L_4, 0, /*hidden argument*/NULL);
		return L_5;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * World_Sprite_Create_m8F2DFE690DF810FF36119BDA2E31807206C0EE07 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale1, int32_t ___sortingOrderOffset2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, Assets.i.s_White, Color.white, sortingOrderOffset);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___worldPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localScale1;
		Assets_t7FE0675EA2A650B2849544042F6CBAA23BA9AFFF * L_2;
		L_2 = Assets_get_i_m355F3DBBE3E318A922BAA29CE0F629DB67C4F51F(/*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = L_2->get_s_White_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		int32_t L_5 = ___sortingOrderOffset2;
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_6 = (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 *)il2cpp_codegen_object_new(World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66_il2cpp_TypeInfo_var);
		World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2(L_6, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 CodeMonkey.Utils.World_Sprite::GetSortingOrder(UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Sprite_GetSortingOrder_m7A160DDB1FD1D6FA2F11D6590A2AB8928BA9EB4C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, int32_t ___offset1, int32_t ___baseSortingOrder2, const RuntimeMethod* method)
{
	{
		// return (int)(baseSortingOrder - position.y) + offset;
		int32_t L_0 = ___baseSortingOrder2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position0;
		float L_2 = L_1.get_y_3();
		int32_t L_3 = ___offset1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)((float)((float)L_0)), (float)L_2)))), (int32_t)L_3));
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite__ctor_m2E3946F2B8C9A19BAA91161A51039FBDE43396E2 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale2, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite3, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color4, int32_t ___sortingOrderOffset5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public World_Sprite(Transform parent, Vector3 localPosition, Vector3 localScale, Sprite sprite, Color color, int sortingOrderOffset) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Vector3 position = localPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___localPosition1;
		V_0 = L_0;
		// if (parent != null) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___parent0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// position = parent.TransformPoint(position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___parent0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0019:
	{
		// int sortingOrder = GetSortingOrder(position, sortingOrderOffset);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		int32_t L_7 = ___sortingOrderOffset5;
		int32_t L_8;
		L_8 = World_Sprite_GetSortingOrder_m7A160DDB1FD1D6FA2F11D6590A2AB8928BA9EB4C(L_6, L_7, ((int32_t)5000), /*hidden argument*/NULL);
		V_1 = L_8;
		// gameObject = UtilsClass.CreateWorldSprite(parent, "Sprite", sprite, localPosition, localScale, sortingOrder, color);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = ___parent0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = ___sprite3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___localPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___localScale2;
		int32_t L_13 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = ___color4;
		IL2CPP_RUNTIME_CLASS_INIT(UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = UtilsClass_CreateWorldSprite_m7E9D521A08EB8CE5B2880B274A15FA7F92ACB57C(L_9, _stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B, L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		__this->set_gameObject_1(L_15);
		// transform = gameObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		__this->set_transform_2(L_17);
		// spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_gameObject_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_19;
		L_19 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_18, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_spriteRenderer_3(L_19);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetActive_m92753CBE70D979AF8BE45C5A2A32F510E1F446A3 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, bool ___isActive0, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(isActive);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		bool L_1 = ___isActive0;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.SpriteRenderer CodeMonkey.Utils.World_Sprite::GetSpriteRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * World_Sprite_GetSpriteRenderer_mEF8865BE3A22E98068566B058A7AAB65C3E2064A (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, const RuntimeMethod* method)
{
	{
		// return spriteRenderer;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spriteRenderer_3();
		return L_0;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetName_mF1FC55E1C5E1F0317AF583D1B3BD27E5394583B7 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// gameObject.name = name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		String_t* L_1 = ___name0;
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetSortingOrderOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetSortingOrderOffset_m789FAE6647B539D00A3B9126ADDA82F303CD7C5E (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, int32_t ___sortingOrderOffset0, const RuntimeMethod* method)
{
	{
		// SetSortingOrder(GetSortingOrder(gameObject.transform.position, sortingOrderOffset));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___sortingOrderOffset0;
		int32_t L_4;
		L_4 = World_Sprite_GetSortingOrder_m7A160DDB1FD1D6FA2F11D6590A2AB8928BA9EB4C(L_2, L_3, ((int32_t)5000), /*hidden argument*/NULL);
		World_Sprite_SetSortingOrder_m8AF54E018FDEF7C59AEEB2344D0638F0C1077975(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetSortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetSortingOrder_m8AF54E018FDEF7C59AEEB2344D0638F0C1077975 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, int32_t ___sortingOrder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<SpriteRenderer>().sortingOrder = sortingOrder;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		int32_t L_2 = ___sortingOrder0;
		Renderer_set_sortingOrder_mAABE4F8F9B158068C8A1582ACE0BFEA3CF499139(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetSortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetSortingLayerName_mA3BCCE8C571B6C744C3245106B04BA9BF5E99B78 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, String_t* ___layerName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<SpriteRenderer>().sortingLayerName = layerName;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		String_t* L_2 = ___layerName0;
		Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CodeMonkey.Utils.World_Sprite::GetSortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Sprite_GetSortingOrder_m7486CA7B904E0DFC1B0224B0C3714BBB30497B4E (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObject.GetComponent<SpriteRenderer>().sortingOrder;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetParent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetParent_m7576C0923290E493EA7B64A48688F8BDB445B45D (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___parentGameObject0, const RuntimeMethod* method)
{
	{
		// SetParent(parentGameObject.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___parentGameObject0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		World_Sprite_SetParent_m764848C1B87082E7C7BA7144C772CFB618FFABD3(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetParent_m764848C1B87082E7C7BA7144C772CFB618FFABD3 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method)
{
	{
		// transform.parent = parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___parent0;
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetLocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetLocalScale_mC8645B68287BE05047CD0DB2AB2ABB686B890D27 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale0, const RuntimeMethod* method)
{
	{
		// transform.localScale = localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localScale0;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetPosition_m9D2DD727B21A29C45B0742282D40B71F6ABB799B (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method)
{
	{
		// transform.localPosition = localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___localPosition0;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetPosition(System.Func`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetPosition_mBFAD9DCC4F8434A88C847DEA0B5EF07CA85FF3AB (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * ___getLocalPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CSetPositionU3Eb__0_m587562D9C5363C1D5E5226266F1F5F2B5B3DDEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0 * L_0 = (U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass29_0__ctor_mAF8E5C15FEAADC84FE18CBB618F8556C2E8072CC(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0 * L_1 = L_0;
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0 * L_2 = L_1;
		Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * L_3 = ___getLocalPosition0;
		L_2->set_getLocalPosition_1(L_3);
		// FunctionUpdater.Create(() => {
		//     transform.localPosition = getLocalPosition();
		// });
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, L_2, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass29_0_U3CSetPositionU3Eb__0_m587562D9C5363C1D5E5226266F1F5F2B5B3DDEA6_RuntimeMethod_var), /*hidden argument*/NULL);
		FunctionUpdater_t9F52D6F0E3282134F6DD821597A48069C3C4958B * L_5;
		L_5 = FunctionUpdater_Create_mBE873685E30A7B7B14CE107DFCE7A60AD3BAE8E0(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 CodeMonkey.Utils.World_Sprite::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  World_Sprite_GetPosition_mA166301460911FE22CE8904FE09511D3977CCFF2 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, const RuntimeMethod* method)
{
	{
		// return transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 CodeMonkey.Utils.World_Sprite::GetLocalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  World_Sprite_GetLocalScale_m28C9B31E3E4AA515033181F81B86858911FFA674 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, const RuntimeMethod* method)
{
	{
		// return transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CodeMonkey.Utils.World_Sprite::GetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float World_Sprite_GetRotation_m2CDE88FAE587B35D36C5C12F6C4B31D13AE0E949 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, const RuntimeMethod* method)
{
	{
		// return transform.localEulerAngles.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		return L_2;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetRotation_m9AAD3390889F553E751A76DD24F939D942CAB5B9 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, float ___rotation0, const RuntimeMethod* method)
{
	{
		// transform.localEulerAngles = new Vector3(0, 0, rotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_2();
		float L_1 = ___rotation0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetColor_mF6CF9224148CBB79167239FB76797CCEBD0C2E86 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method)
{
	{
		// spriteRenderer.color = color;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spriteRenderer_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___color0;
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetSprite_m651939F0ED08335EDEB6B390BB5441912EF93184 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite0, const RuntimeMethod* method)
{
	{
		// spriteRenderer.sprite = sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spriteRenderer_3();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = ___sprite0;
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetFlip(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetFlip_m524D27DAD183A3C8A7E4CEBBA2D52EFA6BE7F21A (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, bool ___flipX0, bool ___flipY1, const RuntimeMethod* method)
{
	{
		// spriteRenderer.flipX = flipX;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spriteRenderer_3();
		bool L_1 = ___flipX0;
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_0, L_1, /*hidden argument*/NULL);
		// spriteRenderer.flipY = flipY;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get_spriteRenderer_3();
		bool L_3 = ___flipY1;
		SpriteRenderer_set_flipY_m7DFB2D1118142BE6C76470474F2ECAED234B0A01(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_Show_mBE06E8C188ED6BB3E3213C7EA6553F9A08CCEC02 (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_Hide_m599C0D56F0BF0F8AEC2EEFE85C57FB155C63930F (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// CodeMonkey.Utils.Button_Sprite CodeMonkey.Utils.World_Sprite::AddButton(System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * World_Sprite_AddButton_m58AA3CFE0F2EAD87DC7456DEF88E907999393D1A (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___ClickFunc0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOverOnceFunc1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___MouseOutOnceFunc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisButton_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066_mE3BF674C6CEE3F66C70832D360C703499A6FBA1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * V_0 = NULL;
	{
		// gameObject.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_0, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// Button_Sprite buttonSprite = gameObject.AddComponent<Button_Sprite>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_gameObject_1();
		Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * L_3;
		L_3 = GameObject_AddComponent_TisButton_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066_mE3BF674C6CEE3F66C70832D360C703499A6FBA1E(L_2, /*hidden argument*/GameObject_AddComponent_TisButton_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066_mE3BF674C6CEE3F66C70832D360C703499A6FBA1E_RuntimeMethod_var);
		V_0 = L_3;
		// if (ClickFunc != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ___ClickFunc0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// buttonSprite.ClickFunc = ClickFunc;
		Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ___ClickFunc0;
		L_5->set_ClickFunc_5(L_6);
	}

IL_0022:
	{
		// if (MouseOverOnceFunc != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = ___MouseOverOnceFunc1;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		// buttonSprite.MouseOverOnceFunc = MouseOverOnceFunc;
		Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = ___MouseOverOnceFunc1;
		L_8->set_MouseOverOnceFunc_11(L_9);
	}

IL_002c:
	{
		// if (MouseOutOnceFunc != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = ___MouseOutOnceFunc2;
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		// buttonSprite.MouseOutOnceFunc = MouseOutOnceFunc;
		Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * L_11 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = ___MouseOutOnceFunc2;
		L_11->set_MouseOutOnceFunc_12(L_12);
	}

IL_0036:
	{
		// return buttonSprite;
		Button_Sprite_t1A80668E3BFD74357BECF5406C96BE29503FA066 * L_13 = V_0;
		return L_13;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_DestroySelf_mCE2DB4520B4525D0034FF33FD4296382A1DE1F0C (World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
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
// System.Void article::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void article_Start_m497D8E5CD18AEFEE1190AC467F783A1620F681B8 (article_t24309762A688BEBA5D9AE214DBCCACEB88C43F11 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void article::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void article_Update_mAC6CE115172E5F1B1136A6705FA7B47BF940D2DB (article_t24309762A688BEBA5D9AE214DBCCACEB88C43F11 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void article::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void article__ctor_mBB6191849448A12140485575D67628AFCA1F5FE7 (article_t24309762A688BEBA5D9AE214DBCCACEB88C43F11 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void player2::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_Awake_m3773EB00089FF750F97482D31F6E921E3E12ADEB (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rig = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rig_11(L_0);
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_13(L_1);
		// aud = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_aud_12(L_2);
		// gm = FindObjectOfType<GameManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3;
		L_3 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		__this->set_gm_14(L_3);
		// }
		return;
	}
}
// System.Void player2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_Update_m2558199EF82BFD6F0B37AB9A97D015E836CCB513 (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Move();
		player2_Move_mF08EF779FCE492F896DB8E4D4A9460FCE39EB98B(__this, /*hidden argument*/NULL);
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// anim.SetBool("attack", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_anim_13();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, (bool)1, /*hidden argument*/NULL);
		// Spell();
		player2_Spell_mF10A77BE61F354720D24E260BB6140E17572A693(__this, /*hidden argument*/NULL);
		// }
		goto IL_0038;
	}

IL_0027:
	{
		// anim.SetBool("attack", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_anim_13();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, (bool)0, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// NextLevel();
		player2_NextLevel_m035261E0A08E196A54B30B5B107166D21E4D3116(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player2::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_NextLevel_m035261E0A08E196A54B30B5B107166D21E4D3116 (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (inPortal && Input.GetKeyDown(KeyCode.R))                    //�p�G�b���̭�
		bool L_0 = __this->get_inPortal_10();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// int lvIndex = SceneManager.GetActiveScene().buildIndex;     //���o���e�����s��
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		// lvIndex++;                                                  //�s���[�@
		// SceneManager.LoadScene(lvIndex);                            //���J�U�@��
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void player2::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_Move_mF08EF779FCE492F896DB8E4D4A9460FCE39EB98B (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float h = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_0;
		// float v = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_1;
		// rig.velocity = new Vector3(-v * speed, rig.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2 = __this->get_rig_11();
		float L_3 = V_1;
		float L_4 = __this->get_speed_7();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = __this->get_rig_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_8), ((float)il2cpp_codegen_multiply((float)((-L_3)), (float)L_4)), L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_2, L_9, /*hidden argument*/NULL);
		// rig.velocity = new Vector3(h * speed, rig.velocity.x);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10 = __this->get_rig_11();
		float L_11 = V_0;
		float L_12 = __this->get_speed_7();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_13 = __this->get_rig_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_16), ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_16, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_10, L_17, /*hidden argument*/NULL);
		// anim.SetBool("walk", h != 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = __this->get_anim_13();
		float L_19 = V_0;
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_18, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)((((int32_t)((((float)L_19) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_20;
		L_20 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)100), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b4;
		}
	}
	{
		// transform.eulerAngles = new Vector3(0, 180, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_23;
		L_23 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		// transform.eulerAngles = new Vector3(0, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		// }
		return;
	}
}
// System.Void player2::Spell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_Spell_mF10A77BE61F354720D24E260BB6140E17572A693 (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Mouse0))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)323), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0065;
		}
	}
	{
		// aud.PlayOneShot(soundFire);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_aud_12();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_soundFire_5();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
		// GameObject temp = Instantiate(spells, point.position, point.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_spells_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_point_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_point_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_3, L_5, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// temp.GetComponent<Rigidbody2D>().AddForce(transform.right * (-Speedspelles));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9;
		L_9 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_8, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_10, /*hidden argument*/NULL);
		int32_t L_12 = __this->get_Speedspelles_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, ((float)((float)((-L_12)))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_9, L_14, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void player2::Dead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_Dead_m06652D252ABAFAC9477E88B6A09CF460DBEF985F (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E40FD816FA06BF4A96B5DAC0C15D881442F7C7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2619A50D640D12F7EAED94CD5A39DFCD03B99E2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE6FC00E66878771A5D97FE8E877FFB625457E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD043BF74961BDB48374C3FF0B17827DBBF6C7F2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED46F57488487C31729552B22A6ECB873B8FD2C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == "���`�ϰ�" || obj == "�ĤH����")
		String_t* L_0 = ___obj0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral0E40FD816FA06BF4A96B5DAC0C15D881442F7C7D, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = ___obj0;
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralD043BF74961BDB48374C3FF0B17827DBBF6C7F2A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0068;
		}
	}

IL_001a:
	{
		// if (anim.GetBool("���`�}��")) return;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_anim_13();
		bool L_5;
		L_5 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_4, _stringLiteralED46F57488487C31729552B22A6ECB873B8FD2C7, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// if (anim.GetBool("���`�}��")) return;
		return;
	}

IL_002d:
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// anim.SetBool("dead", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_anim_13();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteral2619A50D640D12F7EAED94CD5A39DFCD03B99E2A, (bool)1, /*hidden argument*/NULL);
		// if(GameManager.live  >1) Invoke("Replay", 2);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_7 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_live_8();
		if ((((int32_t)L_7) <= ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		// if(GameManager.live  >1) Invoke("Replay", 2);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralBEE6FC00E66878771A5D97FE8E877FFB625457E5, (2.0f), /*hidden argument*/NULL);
	}

IL_005d:
	{
		// gm.PlayerDead();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = __this->get_gm_14();
		GameManager_PlayerDead_m6B74B77858242A02119D0172D5AE9C72DA118312(L_8, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void player2::Replay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_Replay_m0516B4E7C7C247DE567D0C253BF47274AD044424 (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player2::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_OnTriggerEnter2D_m122908B530FAB151318FB539FFF33B6E6153406D (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD766DFC9DAFE8A53336C517FCAA7EDC54BE79778);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.name== "�ǰe��") inDoor = true;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralD766DFC9DAFE8A53336C517FCAA7EDC54BE79778, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// if (collision.name== "�ǰe��") inDoor = true;
		__this->set_inDoor_15((bool)1);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void player2::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_OnTriggerExit2D_m175E261A25873B01BE724C9471C81051B23677C5 (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD766DFC9DAFE8A53336C517FCAA7EDC54BE79778);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.name== "�ǰe��") inDoor = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralD766DFC9DAFE8A53336C517FCAA7EDC54BE79778, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// if (collision.name== "�ǰe��") inDoor = false;
		__this->set_inDoor_15((bool)0);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void player2::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2_OnCollisionEnter2D_m3ED0A6DAA3576E34695323AB3E09311FE85619BD (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	{
		// Dead(collision.gameObject.tag);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		player2_Dead_m06652D252ABAFAC9477E88B6A09CF460DBEF985F(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player2__ctor_m8ADF2384147EC6CF5AB67CEE4F45EB439C03A7FD (player2_tDA5DFF7CC520CA1E6A01D6D1EF8F2C3BA6C8B90F * __this, const RuntimeMethod* method)
{
	{
		// public int live = 3;
		__this->set_live_6(3);
		// public int Speedspelles = 500;
		__this->set_Speedspelles_9(((int32_t)500));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CodeMonkey.Utils.Button_Sprite/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2A0228E867225E811A773C953DD88F524F16BD30 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B * L_0 = (U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B *)il2cpp_codegen_object_new(U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA2E428D83B252D4DEAD0C8E830746E172A44F554(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void CodeMonkey.Utils.Button_Sprite/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA2E428D83B252D4DEAD0C8E830746E172A44F554 (U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Camera CodeMonkey.Utils.Button_Sprite/<>c::<Awake>b__43_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * U3CU3Ec_U3CAwakeU3Eb__43_0_mC79FA7E0B3FB4A8D69D28639DEA247F4694E0A3A (U3CU3Ec_t107E0289567BC9905B349EAF9C9F04A9F2AEE06B * __this, const RuntimeMethod* method)
{
	{
		// if (GetWorldCamera == null) SetGetWorldCamera(() => Camera.main); // Set default World Camera
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CodeMonkey.Utils.Button_UI/<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_m599489CA729CB2E2FC831859823B4A425272F57A (U3CU3Ec__DisplayClass41_0_tE0B826C3E82158E1B70A6685D69BF43F8C7A418D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.Button_UI/<>c__DisplayClass41_0::<SetHoverBehaviourType>b__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0_U3CSetHoverBehaviourTypeU3Eb__6_m269F4EAD38805937F571739BD83792AF99EBDD5B (U3CU3Ec__DisplayClass41_0_tE0B826C3E82158E1B70A6685D69BF43F8C7A418D * __this, const RuntimeMethod* method)
{
	{
		// hoverBehaviourFunc_Enter = delegate () { hoverBehaviour_Image.color = colorOver; };
		Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 * L_0 = __this->get_U3CU3E4__this_2();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = L_0->get_hoverBehaviour_Image_22();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_colorOver_0();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// hoverBehaviourFunc_Enter = delegate () { hoverBehaviour_Image.color = colorOver; };
		return;
	}
}
// System.Void CodeMonkey.Utils.Button_UI/<>c__DisplayClass41_0::<SetHoverBehaviourType>b__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0_U3CSetHoverBehaviourTypeU3Eb__7_mA87B23860188D466F4D8346505506483F699C487 (U3CU3Ec__DisplayClass41_0_tE0B826C3E82158E1B70A6685D69BF43F8C7A418D * __this, const RuntimeMethod* method)
{
	{
		// hoverBehaviourFunc_Exit = delegate () { hoverBehaviour_Image.color = color; };
		Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 * L_0 = __this->get_U3CU3E4__this_2();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = L_0->get_hoverBehaviour_Image_22();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_color_1();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// hoverBehaviourFunc_Exit = delegate () { hoverBehaviour_Image.color = color; };
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
// System.Void CodeMonkey.Utils.Button_UI/<>c__DisplayClass46_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0__ctor_m16CA4DD84FCDCFFBA1339F0F7882CD97DAFE0BBE (U3CU3Ec__DisplayClass46_0_tDAE4BF0FAB94027AD3EC75AD4E8A8A7BCAB91BA6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.Button_UI/<>c__DisplayClass46_0::<InterceptAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0_U3CInterceptActionU3Eb__0_mD3DFC8D264C0981CC2530269B8C62EA8DDDCE319 (U3CU3Ec__DisplayClass46_0_tDAE4BF0FAB94027AD3EC75AD4E8A8A7BCAB91BA6 * __this, const RuntimeMethod* method)
{
	{
		// InterceptActionHandler interceptActionHandler = new InterceptActionHandler(() => fieldInfo.SetValue(this, backFunc));
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		Button_UI_t4E629B49AF7A27B2E963D8805E12B85AA46DADB1 * L_1 = __this->get_U3CU3E4__this_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = __this->get_backFunc_2();
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.Button_UI/<>c__DisplayClass46_0::<InterceptAction>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0_U3CInterceptActionU3Eb__1_m6D885F08B84A57C319A145A01197F7B3452E6B45 (U3CU3Ec__DisplayClass46_0_tDAE4BF0FAB94027AD3EC75AD4E8A8A7BCAB91BA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (testPassthroughFunc()) {
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = __this->get_testPassthroughFunc_3();
		bool L_1;
		L_1 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_0, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// interceptActionHandler.RemoveIntercept();
		InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1 * L_2 = __this->get_interceptActionHandler_4();
		InterceptActionHandler_RemoveIntercept_m36DC3B13AC17729742A1D16FC072EAFB51E870E8(L_2, /*hidden argument*/NULL);
		// backFunc();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = __this->get_backFunc_2();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// });
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
// System.Void CodeMonkey.Utils.Button_UI/InterceptActionHandler::.ctor(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptActionHandler__ctor_mDAD55522A189C78E1F3E633D97753D63B04422AA (InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___removeInterceptFunc0, const RuntimeMethod* method)
{
	{
		// public InterceptActionHandler(Action removeInterceptFunc) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.removeInterceptFunc = removeInterceptFunc;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___removeInterceptFunc0;
		__this->set_removeInterceptFunc_0(L_0);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.Button_UI/InterceptActionHandler::RemoveIntercept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptActionHandler_RemoveIntercept_m36DC3B13AC17729742A1D16FC072EAFB51E870E8 (InterceptActionHandler_t91EBC8BDBC2AF565EE22B0037C7EBD8C2B8FF1E1 * __this, const RuntimeMethod* method)
{
	{
		// removeInterceptFunc();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_removeInterceptFunc_0();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// }
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
// System.Void CodeMonkey.CMDebug/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m3D014039D11309DAF7DAA1135B5FE036EA78D383 (U3CU3Ec__DisplayClass11_0_t87FAA324BE8CF408780FDA2305E83B6EF8568698 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.CMDebug/<>c__DisplayClass11_0::<DebugProjectile>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass11_0_U3CDebugProjectileU3Eb__0_m2EA3E39C4DB2B49EBB307A1F0F326DB4B7971D1D (U3CU3Ec__DisplayClass11_0_t87FAA324BE8CF408780FDA2305E83B6EF8568698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// Debug.DrawLine(pos, pos + dir * projectileSize);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_pos_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_pos_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_dir_1();
		float L_3 = __this->get_projectileSize_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawLine_m18DD512D802A3988C4E8FA9FBD47003951B719CF(L_0, L_5, /*hidden argument*/NULL);
		// float distanceBefore = Vector3.Distance(pos, to);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_pos_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_to_3();
		float L_8;
		L_8 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_6, L_7, /*hidden argument*/NULL);
		// pos += dir * speed * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_pos_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_dir_1();
		float L_11 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_14, /*hidden argument*/NULL);
		__this->set_pos_0(L_15);
		// float distanceAfter = Vector3.Distance(pos, to);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_pos_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_to_3();
		float L_18;
		L_18 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_16, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// if (distanceBefore < distanceAfter) {
		float L_19 = V_0;
		if ((!(((float)L_8) < ((float)L_19))))
		{
			goto IL_007b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_007b:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.CMDebug/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mF64DB59DEB65CAF549BA3AEE3D7852E51C49D396 (U3CU3Ec__DisplayClass13_0_t2AA139612845657BD1D96B4C0F8A14C2556248AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.CMDebug/<>c__DisplayClass13_0::<SpritePopup>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CSpritePopupU3Eb__0_mEBB1C95745D60FFD09CEC5157145DDF945983237 (U3CU3Ec__DisplayClass13_0_t2AA139612845657BD1D96B4C0F8A14C2556248AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject == null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0010:
	{
		// transform.position += moveAmount * Time.unscaledDeltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_transform_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_moveAmount_2();
		float L_6;
		L_6 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_7, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_8, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.CMDebug/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mE5A1ED5B55AAC5CB9683605254B43B678917A24E (U3CU3Ec__DisplayClass17_0_t608E5A0118B75FAF76695472685B88BFE5BDD636 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.CMDebug/<>c__DisplayClass17_0::<DrawSpriteTimedAlpha>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CDrawSpriteTimedAlphaU3Eb__0_m038E256C11146391B98A8F58F43D0310C9F56377 (U3CU3Ec__DisplayClass17_0_t608E5A0118B75FAF76695472685B88BFE5BDD636 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject == null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0010:
	{
		// currentTime += Time.unscaledDeltaTime;
		float L_2 = __this->get_currentTime_1();
		float L_3;
		L_3 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		__this->set_currentTime_1(((float)il2cpp_codegen_add((float)L_2, (float)L_3)));
		// if (currentTime >= startAlphaDecayTime) {
		float L_4 = __this->get_currentTime_1();
		float L_5 = __this->get_startAlphaDecayTime_2();
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0078;
		}
	}
	{
		// spriteRenderer.color = new Color(1, 1, 1, Mathf.Lerp(1f, 0f, 1 - ((timer - currentTime) / totalAlphaDecayTime)));
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_spriteRenderer_3();
		float L_7 = __this->get_timer_4();
		float L_8 = __this->get_currentTime_1();
		float L_9 = __this->get_totalAlphaDecayTime_5();
		float L_10;
		L_10 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((1.0f), (0.0f), ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8))/(float)L_9)))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), (1.0f), (1.0f), (1.0f), L_10, /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_6, L_11, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.CMDebug/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m577BA1A8C4282E9B9E0F7464E81E6DC6CFE59DC0 (U3CU3Ec__DisplayClass9_0_tCA159636BB4F0001C2E47FB9461910BE3BFC80F6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.CMDebug/<>c__DisplayClass9_0::<MouseTextUpdater>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CMouseTextUpdaterU3Eb__0_m0D49B79FF15E3DD521BBF6DAA3235B3A8EA4F793 (U3CU3Ec__DisplayClass9_0_tCA159636BB4F0001C2E47FB9461910BE3BFC80F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.transform.position = UtilsClass.GetMouseWorldPosition() + positionOffset;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = UtilsClass_GetMouseWorldPosition_m8356FA96C641E22FA1420C4860715CDF8CF1C2BE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_positionOffset_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_4, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mF1004AFF9446F7F1CCC22360884B90817D25C637 (U3CU3Ec__DisplayClass11_0_t94B4F15EC46E27A859852A456FAB26A909AB0C33 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0::<SetCameraZoom>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass11_0_U3CSetCameraZoomU3Eb__0_m7179E2CCBCC4A41D1F785CA5217B74123CBDA5A6 (U3CU3Ec__DisplayClass11_0_t94B4F15EC46E27A859852A456FAB26A909AB0C33 * __this, const RuntimeMethod* method)
{
	{
		// SetGetCameraZoomFunc(() => cameraZoom);
		float L_0 = __this->get_cameraZoom_0();
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
// System.Void CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mCF5F57810C33D46A363A734938C0FD7946932CCC (U3CU3Ec__DisplayClass9_0_tCBE9BF1E43FD204DF61CE5C906118D208040757C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0::<SetCameraFollowPosition>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass9_0_U3CSetCameraFollowPositionU3Eb__0_m27CE03812AD0A3CB757D57D55D7AC8150F691CD8 (U3CU3Ec__DisplayClass9_0_tCBE9BF1E43FD204DF61CE5C906118D208040757C * __this, const RuntimeMethod* method)
{
	{
		// SetGetCameraFollowPositionFunc(() => cameraFollowPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_cameraFollowPosition_0();
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
// System.Void CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m25D8CE0F5CD160AB3EF7FC58CEF8F061E26AF708 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4 * L_0 = (U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4 *)il2cpp_codegen_object_new(U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8B25D5CE34A5DF9FDAACC66E0F6E57D3863A7DE3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8B25D5CE34A5DF9FDAACC66E0F6E57D3863A7DE3 (U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::<Start>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec_U3CStartU3Eb__3_0_m3B74C1AC0C142CBD46B2AD9AF4852687D7A45287 (U3CU3Ec_tF39F8DEA92B74F9DE9E502A8E802BC225039B5F4 * __this, const RuntimeMethod* method)
{
	{
		// cameraFollow.Setup(() => Vector3.zero, () => zoom, true, true);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
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
// System.Void CodeMonkey.Utils.FunctionPeriodic/MonoBehaviourHook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourHook_Update_mF8FCDD223E2A4E6134929D60A10AD5886AE75583 (MonoBehaviourHook_t5CF272546F6BB863E2500DF31F7BA75F44F969DF * __this, const RuntimeMethod* method)
{
	{
		// if (OnUpdate != null) OnUpdate();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnUpdate_4();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (OnUpdate != null) OnUpdate();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnUpdate_4();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.FunctionPeriodic/MonoBehaviourHook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourHook__ctor_mFB918BA300C7BE4B249798BA9B8E5F4BB13E232B (MonoBehaviourHook_t5CF272546F6BB863E2500DF31F7BA75F44F969DF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CodeMonkey.Utils.FunctionTimer/FunctionTimerObject::.ctor(System.Action,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionTimerObject__ctor_m9567C18BE4FC3E30DD6CE668270872D25D9D2C26 (FunctionTimerObject_tCBCB54F994F9B94192127BE13BD3C37154F37739 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, float ___timer1, const RuntimeMethod* method)
{
	{
		// public FunctionTimerObject(Action callback, float timer) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.callback = callback;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___callback0;
		__this->set_callback_1(L_0);
		// this.timer = timer;
		float L_1 = ___timer1;
		__this->set_timer_0(L_1);
		// }
		return;
	}
}
// System.Boolean CodeMonkey.Utils.FunctionTimer/FunctionTimerObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FunctionTimerObject_Update_mECEECB44C71EAE266AEF1146187B94329C1A4FEC (FunctionTimerObject_tCBCB54F994F9B94192127BE13BD3C37154F37739 * __this, const RuntimeMethod* method)
{
	{
		// return Update(Time.deltaTime);
		float L_0;
		L_0 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		bool L_1;
		L_1 = FunctionTimerObject_Update_m1A265B344A5427731E213BE647C5CBCD2F56A550(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CodeMonkey.Utils.FunctionTimer/FunctionTimerObject::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FunctionTimerObject_Update_m1A265B344A5427731E213BE647C5CBCD2F56A550 (FunctionTimerObject_tCBCB54F994F9B94192127BE13BD3C37154F37739 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	{
		// timer -= deltaTime;
		float L_0 = __this->get_timer_0();
		float L_1 = ___deltaTime0;
		__this->set_timer_0(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (timer <= 0) {
		float L_2 = __this->get_timer_0();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// callback();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = __this->get_callback_1();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_3, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.FunctionTimer/MonoBehaviourHook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourHook_Update_m51C595C588F89EB1462BF97A27F07705E7A501FC (MonoBehaviourHook_tD91D26718582FADB653D271568B86BBF0FF146A6 * __this, const RuntimeMethod* method)
{
	{
		// if (OnUpdate != null) OnUpdate();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnUpdate_4();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (OnUpdate != null) OnUpdate();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnUpdate_4();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.FunctionTimer/MonoBehaviourHook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourHook__ctor_mD6C7E024D739B413AD3CB7E776B6CA31607FEB63 (MonoBehaviourHook_tD91D26718582FADB653D271568B86BBF0FF146A6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CodeMonkey.Utils.FunctionUpdater/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m199CC2ADFFB3766DE6FC60AB70069E0D405679E2 (U3CU3Ec__DisplayClass4_0_t529908B2241F66C86C3B4B7DD1BB889F547E39D9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.FunctionUpdater/<>c__DisplayClass4_0::<Create>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CCreateU3Eb__0_mC9CB6BB56728102170B005EF67FEB47759DD383E (U3CU3Ec__DisplayClass4_0_t529908B2241F66C86C3B4B7DD1BB889F547E39D9 * __this, const RuntimeMethod* method)
{
	{
		// return Create(() => { updateFunc(); return false; }, "", true, false);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_updateFunc_0();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// return Create(() => { updateFunc(); return false; }, "", true, false);
		return (bool)0;
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
// System.Void CodeMonkey.Utils.FunctionUpdater/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m94252AABF405E9E26B212D1D7A49D4D4A2ADE1D5 (U3CU3Ec__DisplayClass5_0_t4A998D3A4CDA5F3777A69DC2D62C14FF2913EB67 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.FunctionUpdater/<>c__DisplayClass5_0::<Create>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CCreateU3Eb__0_mA85225A6EEE3AAA2062104972CAA9C47A52BF529 (U3CU3Ec__DisplayClass5_0_t4A998D3A4CDA5F3777A69DC2D62C14FF2913EB67 * __this, const RuntimeMethod* method)
{
	{
		// return Create(() => { updateFunc(); return false; }, functionName, true, false);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_updateFunc_0();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// return Create(() => { updateFunc(); return false; }, functionName, true, false);
		return (bool)0;
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
// System.Void CodeMonkey.Utils.FunctionUpdater/MonoBehaviourHook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourHook_Update_m1D98AC4FAF6BBF80D18446B2F3D95852493A489E (MonoBehaviourHook_t91E87D3D400E6903AA423FA2AE3A07349A8EB692 * __this, const RuntimeMethod* method)
{
	{
		// if (OnUpdate != null) OnUpdate();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnUpdate_4();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (OnUpdate != null) OnUpdate();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnUpdate_4();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.FunctionUpdater/MonoBehaviourHook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourHook__ctor_mA42F5576ADF61C45AD63E78413366A16A79FB8F9 (MonoBehaviourHook_t91E87D3D400E6903AA423FA2AE3A07349A8EB692 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CodeMonkey.Utils.UI_Bar/Outline::.ctor(System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline__ctor_m7EE95B82B0CE257BAC5FD7B812C306F5A060F71E (Outline_tDE54FB55CDC069176B6F15C1B7DFE0367257DB2D * __this, float ___size0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	{
		// public float size = 1f;
		__this->set_size_0((1.0f));
		// public Color color = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_color_1(L_0);
		// public Outline(float size, Color color) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.size = size;
		float L_1 = ___size0;
		__this->set_size_0(L_1);
		// this.color = color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color1;
		__this->set_color_1(L_2);
		// }
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
// System.Void CodeMonkey.Utils.UI_BarMultiple/Outline::.ctor(System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline__ctor_m62B786B628CB85C5C4BEF27066E2F258FCA82981 (Outline_t30C9845191591806D84BD6D7809A8405397E0D8A * __this, float ___size0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	{
		// public float size = 1f;
		__this->set_size_0((1.0f));
		// public Color color = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_color_1(L_0);
		// public Outline(float size, Color color) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.size = size;
		float L_1 = ___size0;
		__this->set_size_0(L_1);
		// this.color = color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color1;
		__this->set_color_1(L_2);
		// }
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
// System.Void CodeMonkey.Utils.UI_Sprite/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mDA06E1615219419B3CAAD8DF2658B501075E5312 (U3CU3Ec__DisplayClass10_0_tDCF69252FA6291E8ADCF558083FE58B74597A960 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.UI_Sprite/<>c__DisplayClass10_0::<CreateDebugButton>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CCreateDebugButtonU3Eb__0_m64D10C0A2BE92B546531E6744ACE03D7BDE9F28D (U3CU3Ec__DisplayClass10_0_tDCF69252FA6291E8ADCF558083FE58B74597A960 * __this, const RuntimeMethod* method)
{
	{
		// uiSprite.AddButton(ClickFunc, () => uiSprite.SetColor(colorOver), () => uiSprite.SetColor(color));
		UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6 * L_0 = __this->get_uiSprite_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_colorOver_1();
		UI_Sprite_SetColor_mCCB19EB07021FD2AA192E0CC6C04C09980D48F27(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.UI_Sprite/<>c__DisplayClass10_0::<CreateDebugButton>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CCreateDebugButtonU3Eb__1_mD78376F1A3F666130A3B4BBD92E1695FC0B6AB52 (U3CU3Ec__DisplayClass10_0_tDCF69252FA6291E8ADCF558083FE58B74597A960 * __this, const RuntimeMethod* method)
{
	{
		// uiSprite.AddButton(ClickFunc, () => uiSprite.SetColor(colorOver), () => uiSprite.SetColor(color));
		UI_Sprite_t283D6AB65B15CA750FF075DF76560522B1D6EBA6 * L_0 = __this->get_uiSprite_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_color_2();
		UI_Sprite_SetColor_mCCB19EB07021FD2AA192E0CC6C04C09980D48F27(L_0, L_1, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: CodeMonkey.Utils.UI_TextComplex/Icon
IL2CPP_EXTERN_C void Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshal_pinvoke(const Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE& unmarshaled, Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'Icon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
IL2CPP_EXTERN_C void Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshal_pinvoke_back(const Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshaled_pinvoke& marshaled, Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE& unmarshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'Icon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: CodeMonkey.Utils.UI_TextComplex/Icon
IL2CPP_EXTERN_C void Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshal_pinvoke_cleanup(Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CodeMonkey.Utils.UI_TextComplex/Icon
IL2CPP_EXTERN_C void Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshal_com(const Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE& unmarshaled, Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshaled_com& marshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'Icon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
IL2CPP_EXTERN_C void Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshal_com_back(const Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshaled_com& marshaled, Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE& unmarshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'Icon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: CodeMonkey.Utils.UI_TextComplex/Icon
IL2CPP_EXTERN_C void Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshal_com_cleanup(Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE_marshaled_com& marshaled)
{
}
// System.Void CodeMonkey.Utils.UI_TextComplex/Icon::.ctor(UnityEngine.Sprite,UnityEngine.Vector2,System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Icon__ctor_m366B63E73B074CA36DDAEA31FDDD563C0DE2AD10 (Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size1, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.sprite = sprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = ___sprite0;
		__this->set_sprite_0(L_0);
		// this.size = size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___size1;
		__this->set_size_1(L_1);
		// if (color == null) {
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___color2), /*hidden argument*/Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// this.color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_color_2(L_3);
		// } else {
		return;
	}

IL_0023:
	{
		// this.color = (Color) color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___color2), /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		__this->set_color_2(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Icon__ctor_m366B63E73B074CA36DDAEA31FDDD563C0DE2AD10_AdjustorThunk (RuntimeObject * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size1, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE * _thisAdjusted = reinterpret_cast<Icon_t2BD347FD377A9A7F238C3C081A8513C31A3408EE *>(__this + _offset);
	Icon__ctor_m366B63E73B074CA36DDAEA31FDDD563C0DE2AD10(_thisAdjusted, ___sprite0, ___size1, ___color2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mC98C384E0A7E02C0377FD682A3676913C7D7B5F8 (U3CU3Ec__DisplayClass12_0_tF6CFA44B8730A2B65B02EAAF3564587770EC5B01 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0::<CreateWorldTextUpdater>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CCreateWorldTextUpdaterU3Eb__0_m3826BD32A7315D8CFE4ED47EDD4B85A77E058EED (U3CU3Ec__DisplayClass12_0_tF6CFA44B8730A2B65B02EAAF3564587770EC5B01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m67ACBA85BD6ABA0E3DAEB3BA6FAD566FAF3ED7FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textMesh.text = GetTextFunc();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_0 = __this->get_textMesh_0();
		Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_1 = __this->get_GetTextFunc_1();
		String_t* L_2;
		L_2 = Func_1_Invoke_m67ACBA85BD6ABA0E3DAEB3BA6FAD566FAF3ED7FC(L_1, /*hidden argument*/Func_1_Invoke_m67ACBA85BD6ABA0E3DAEB3BA6FAD566FAF3ED7FC_RuntimeMethod_var);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_0, L_2, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mE7DAC72E1F7C3D97035044DDEBC37D1E4843B138 (U3CU3Ec__DisplayClass16_0_tF68643E48E1C849FFA5D7EEC5C2BD4701B0B5202 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0::<CreateWorldTextPopup>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CCreateWorldTextPopupU3Eb__0_m22955CC1F955EDC35CBE1006283C9B8DBA6F95AD (U3CU3Ec__DisplayClass16_0_tF68643E48E1C849FFA5D7EEC5C2BD4701B0B5202 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position += moveAmount * Time.unscaledDeltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_moveAmount_1();
		float L_4;
		L_4 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_5, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_6, /*hidden argument*/NULL);
		// popupTime -= Time.unscaledDeltaTime;
		float L_7 = __this->get_popupTime_2();
		float L_8;
		L_8 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		__this->set_popupTime_2(((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)));
		// if (popupTime <= 0f) {
		float L_9 = __this->get_popupTime_2();
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		// UnityEngine.Object.Destroy(transform.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_transform_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mACC739C15E5F73A009E4E6637BFFE2028533A3E1 (U3CU3Ec__DisplayClass17_0_t7D0114B0F864BEA8AF5826CA24096433BB46424A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0::<CreateUITextUpdater>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CCreateUITextUpdaterU3Eb__0_m6A89F6986C51668E4AF8422CC5F8D9220BCEA6D2 (U3CU3Ec__DisplayClass17_0_t7D0114B0F864BEA8AF5826CA24096433BB46424A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m67ACBA85BD6ABA0E3DAEB3BA6FAD566FAF3ED7FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = GetTextFunc();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_0();
		Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_1 = __this->get_GetTextFunc_1();
		String_t* L_2;
		L_2 = Func_1_Invoke_m67ACBA85BD6ABA0E3DAEB3BA6FAD566FAF3ED7FC(L_1, /*hidden argument*/Func_1_Invoke_m67ACBA85BD6ABA0E3DAEB3BA6FAD566FAF3ED7FC_RuntimeMethod_var);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m970DB601BE681291C8202AA12727A43721C46194 (U3CU3Ec__DisplayClass62_0_t9187C1FD66B2DFE407761F382CE5FDE65DE6F806 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0::<CreateMouseDraggingAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass62_0_U3CCreateMouseDraggingActionU3Eb__0_mB36422BC3DC5443B06BACCCF649D724504975CF5 (U3CU3Ec__DisplayClass62_0_t9187C1FD66B2DFE407761F382CE5FDE65DE6F806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mFF0F9038A26E4D8772CC7DABE8604FC6B53A8F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(mouseButton)) {
		int32_t L_0 = __this->get_mouseButton_0();
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// dragging = true;
		__this->set_dragging_1((bool)1);
	}

IL_0014:
	{
		// if (Input.GetMouseButtonUp(mouseButton)) {
		int32_t L_2 = __this->get_mouseButton_0();
		bool L_3;
		L_3 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// dragging = false;
		__this->set_dragging_1((bool)0);
	}

IL_0028:
	{
		// if (dragging) {
		bool L_4 = __this->get_dragging_1();
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// onMouseDragging(UtilsClass.GetMouseWorldPosition());
		Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * L_5 = __this->get_onMouseDragging_2();
		IL2CPP_RUNTIME_CLASS_INIT(UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = UtilsClass_GetMouseWorldPosition_m8356FA96C641E22FA1420C4860715CDF8CF1C2BE(/*hidden argument*/NULL);
		Action_1_Invoke_mFF0F9038A26E4D8772CC7DABE8604FC6B53A8F55(L_5, L_6, /*hidden argument*/Action_1_Invoke_mFF0F9038A26E4D8772CC7DABE8604FC6B53A8F55_RuntimeMethod_var);
	}

IL_0040:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass64_0__ctor_mE561280BBDFC611A44CBFCC512FF32BAC9DE6984 (U3CU3Ec__DisplayClass64_0_tE4F124901A91B675508FADF11B14139950C0B06B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::<CreateMouseClickFromToAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass64_0_U3CCreateMouseClickFromToActionU3Eb__0_m3A90CCAC7EDB7B0446ABF31C73465267894B4C30 (U3CU3Ec__DisplayClass64_0_tE4F124901A91B675508FADF11B14139950C0B06B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m728FB332AD1A2628A9FC76F9F0D6FFCE83CED99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state == 1) {
		int32_t L_0 = __this->get_state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		// if (onWaitingForToPosition != null) onWaitingForToPosition(from, UtilsClass.GetMouseWorldPosition());
		Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * L_1 = __this->get_onWaitingForToPosition_1();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// if (onWaitingForToPosition != null) onWaitingForToPosition(from, UtilsClass.GetMouseWorldPosition());
		Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * L_2 = __this->get_onWaitingForToPosition_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_from_2();
		IL2CPP_RUNTIME_CLASS_INIT(UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = UtilsClass_GetMouseWorldPosition_m8356FA96C641E22FA1420C4860715CDF8CF1C2BE(/*hidden argument*/NULL);
		Action_2_Invoke_m728FB332AD1A2628A9FC76F9F0D6FFCE83CED99D(L_2, L_3, L_4, /*hidden argument*/Action_2_Invoke_m728FB332AD1A2628A9FC76F9F0D6FFCE83CED99D_RuntimeMethod_var);
	}

IL_0027:
	{
		// if (state == 1 && Input.GetMouseButtonDown(cancelMouseButton)) {
		int32_t L_5 = __this->get_state_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_6 = __this->get_cancelMouseButton_3();
		bool L_7;
		L_7 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// state = 0;
		__this->set_state_0(0);
	}

IL_0044:
	{
		// if (Input.GetMouseButtonDown(mouseButton) && !UtilsClass.IsPointerOverUI()) {
		int32_t L_8 = __this->get_mouseButton_4();
		bool L_9;
		L_9 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = UtilsClass_IsPointerOverUI_m21DD0DAB4C812EFBD6564C0FA7902C1C2DA888E6(/*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0091;
		}
	}
	{
		// if (state == 0) {
		int32_t L_11 = __this->get_state_0();
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		// state = 1;
		__this->set_state_0(1);
		// from = UtilsClass.GetMouseWorldPosition();
		IL2CPP_RUNTIME_CLASS_INIT(UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = UtilsClass_GetMouseWorldPosition_m8356FA96C641E22FA1420C4860715CDF8CF1C2BE(/*hidden argument*/NULL);
		__this->set_from_2(L_12);
		// } else {
		goto IL_0091;
	}

IL_0074:
	{
		// state = 0;
		__this->set_state_0(0);
		// onMouseClickFromTo(from, UtilsClass.GetMouseWorldPosition());
		Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * L_13 = __this->get_onMouseClickFromTo_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_from_2();
		IL2CPP_RUNTIME_CLASS_INIT(UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = UtilsClass_GetMouseWorldPosition_m8356FA96C641E22FA1420C4860715CDF8CF1C2BE(/*hidden argument*/NULL);
		Action_2_Invoke_m728FB332AD1A2628A9FC76F9F0D6FFCE83CED99D(L_13, L_14, L_15, /*hidden argument*/Action_2_Invoke_m728FB332AD1A2628A9FC76F9F0D6FFCE83CED99D_RuntimeMethod_var);
	}

IL_0091:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0__ctor_m405D03AB7BE2C695432BB15046F337D0065051FD (U3CU3Ec__DisplayClass66_0_tC686698F780074E32D69A3F95DA362BD5A9D4618 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0::<CreateMouseClickAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass66_0_U3CCreateMouseClickActionU3Eb__0_m916F86F6A9FD8A1B21C49FAD045D661A846EA6EF (U3CU3Ec__DisplayClass66_0_tC686698F780074E32D69A3F95DA362BD5A9D4618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mFF0F9038A26E4D8772CC7DABE8604FC6B53A8F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(mouseButton)) {
		int32_t L_0 = __this->get_mouseButton_0();
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// onMouseClick(GetWorldPositionFromUI());
		Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * L_2 = __this->get_onMouseClick_1();
		IL2CPP_RUNTIME_CLASS_INIT(UtilsClass_t481CE72FCE20A470CE1539216E1BF8E0B6383164_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = UtilsClass_GetWorldPositionFromUI_m1EE127FFC5102DD491A87A4B9F56CB5121EBFC4D(/*hidden argument*/NULL);
		Action_1_Invoke_mFF0F9038A26E4D8772CC7DABE8604FC6B53A8F55(L_2, L_3, /*hidden argument*/Action_1_Invoke_mFF0F9038A26E4D8772CC7DABE8604FC6B53A8F55_RuntimeMethod_var);
	}

IL_001d:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_mF29864942ACED6BF6F980953F3ACB9743F497CC0 (U3CU3Ec__DisplayClass67_0_tA68F688B0EB182279B44DDAAA0C5E5199A3663FD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0::<CreateKeyCodeAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass67_0_U3CCreateKeyCodeActionU3Eb__0_m33F10B356EE3528C5F6BA6A9073EC8D3F61BA4BA (U3CU3Ec__DisplayClass67_0_tA68F688B0EB182279B44DDAAA0C5E5199A3663FD * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(keyCode)) {
		int32_t L_0 = __this->get_keyCode_0();
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// onKeyDown();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = __this->get_onKeyDown_1();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass76_0__ctor_mE685CA88B76461F01C0EA86FF8AEE7DBC9F36DA9 (U3CU3Ec__DisplayClass76_0_t38C189DA6C17BB3391CDADBC1129653DFEB5267F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0::<ShakeCamera>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass76_0_U3CShakeCameraU3Eb__0_mD580DEACA9C2505F1FB15A50647601708A217F8D (U3CU3Ec__DisplayClass76_0_t38C189DA6C17BB3391CDADBC1129653DFEB5267F * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// timer -= Time.unscaledDeltaTime;
		float L_0 = __this->get_timer_0();
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		__this->set_timer_0(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// Vector3 randomMovement = new Vector3(UnityEngine.Random.Range(-1f, 1f), UnityEngine.Random.Range(-1f, 1f)).normalized * intensity;
		float L_2;
		L_2 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_3;
		L_3 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		float L_6 = __this->get_intensity_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Camera.main.transform.position = Camera.main.transform.position - lastCameraMovement + randomMovement;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
		L_8 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10;
		L_10 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_lastCameraMovement_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_14, L_15, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_16, /*hidden argument*/NULL);
		// lastCameraMovement = randomMovement;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		__this->set_lastCameraMovement_2(L_17);
		// return timer <= 0f;
		float L_18 = __this->get_timer_0();
		return (bool)((((int32_t)((!(((float)L_18) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass77_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0__ctor_mD228DF62C9AB0E841C90BA0FE67DCF2929171EC2 (U3CU3Ec__DisplayClass77_0_t79B2C050D23A2BFD40438DB1166F088A3188826C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass77_0::<ActionNextFrame>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass77_0_U3CActionNextFrameU3Eb__0_mFEA8D81BE3A28890D0088CD7F56BEA9B710318FD (U3CU3Ec__DisplayClass77_0_t79B2C050D23A2BFD40438DB1166F088A3188826C * __this, const RuntimeMethod* method)
{
	{
		// action();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_action_0();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
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
// System.Void CodeMonkey.Utils.UtilsClass/JsonDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDictionary__ctor_m8B950BECE1C9B3C45F362FC461890B06B4EC333B (JsonDictionary_t592D0C6A5E99A2EE36E2EE7843341EE12042A6BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> keyList = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keyList_0(L_0);
		// public List<string> valueList = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_1, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_valueList_1(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Object CodeMonkey.Utils.UtilsClass/ReflectionTools::CallMethod(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionTools_CallMethod_mEF25DDDF4D0F003BBC2A64DB6E93BC5707739EE7 (String_t* ___typeName0, String_t* ___methodName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_CallMethod_mEF25DDDF4D0F003BBC2A64DB6E93BC5707739EE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return System.Type.GetType(typeName).GetMethod(methodName).Invoke(null, null);
		String_t* L_0 = ___typeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_0, ReflectionTools_CallMethod_mEF25DDDF4D0F003BBC2A64DB6E93BC5707739EE7_RuntimeMethod_var);
		String_t* L_2 = ___methodName1;
		MethodInfo_t * L_3;
		L_3 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_1, L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4;
		L_4 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_3, NULL, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object CodeMonkey.Utils.UtilsClass/ReflectionTools::GetField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionTools_GetField_m6ED3DCB83822E593AD9D2B9703311743A97B2935 (String_t* ___typeName0, String_t* ___fieldName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_GetField_m6ED3DCB83822E593AD9D2B9703311743A97B2935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// System.Reflection.FieldInfo fieldInfo = System.Type.GetType(typeName).GetField(fieldName);
		String_t* L_0 = ___typeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_0, ReflectionTools_GetField_m6ED3DCB83822E593AD9D2B9703311743A97B2935_RuntimeMethod_var);
		String_t* L_2 = ___fieldName1;
		FieldInfo_t * L_3;
		L_3 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_1, L_2, /*hidden argument*/NULL);
		// return fieldInfo.GetValue(null);
		RuntimeObject * L_4;
		L_4 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_3, NULL);
		return L_4;
	}
}
// System.Type CodeMonkey.Utils.UtilsClass/ReflectionTools::GetNestedType(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ReflectionTools_GetNestedType_mF18944F7EE973BB6946E476492F782AC6FB703BD (String_t* ___typeName0, String_t* ___nestedTypeName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_GetNestedType_mF18944F7EE973BB6946E476492F782AC6FB703BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return System.Type.GetType(typeName).GetNestedType(nestedTypeName);
		String_t* L_0 = ___typeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_0, ReflectionTools_GetNestedType_mF18944F7EE973BB6946E476492F782AC6FB703BD_RuntimeMethod_var);
		String_t* L_2 = ___nestedTypeName1;
		Type_t * L_3;
		L_3 = Type_GetNestedType_m3172372453F53F3B67496B40D75FE8468CE89280(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void CodeMonkey.Utils.World_Bar/Outline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline__ctor_m7AEB409983EB7FA0CAD4D7054B9306C713630308 (Outline_t4491BB7682DAC745DBF9DE70A9B99B0F67A6B136 * __this, const RuntimeMethod* method)
{
	{
		// public float size = 1f;
		__this->set_size_0((1.0f));
		// public Color color = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_color_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void CodeMonkey.Utils.World_Mesh/UVCoords::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVCoords__ctor_m80FB28FDF84C2D071314BDEA7EF73D0782120307 (UVCoords_t8E02896C2DE5967707FAE9FD04D386360C38D06C * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method)
{
	{
		// public UVCoords(int x, int y, int width, int height) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.x = x;
		int32_t L_0 = ___x0;
		__this->set_x_0(L_0);
		// this.y = y;
		int32_t L_1 = ___y1;
		__this->set_y_1(L_1);
		// this.width = width;
		int32_t L_2 = ___width2;
		__this->set_width_2(L_2);
		// this.height = height;
		int32_t L_3 = ___height3;
		__this->set_height_3(L_3);
		// }
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
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mAF8E5C15FEAADC84FE18CBB618F8556C2E8072CC (U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0::<SetPosition>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CSetPositionU3Eb__0_m587562D9C5363C1D5E5226266F1F5F2B5B3DDEA6 (U3CU3Ec__DisplayClass29_0_t7BDBE1618F2A48FA9D61F96705338C1E8A5653F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m99A062A5D6783FEB51E6513F24C21788A92638EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.localPosition = getLocalPosition();
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_0 = __this->get_U3CU3E4__this_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_transform_2();
		Func_1_tCB04C3373498E63E5CF98451A2B09545B1A98C08 * L_2 = __this->get_getLocalPosition_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Func_1_Invoke_m99A062A5D6783FEB51E6513F24C21788A92638EB(L_2, /*hidden argument*/Func_1_Invoke_m99A062A5D6783FEB51E6513F24C21788A92638EB_RuntimeMethod_var);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_1, L_3, /*hidden argument*/NULL);
		// });
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
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m6522001EE4D2AC2212D70FC1EF587C0038D0BD55 (U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::<CreateDebugButton>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__0_mF97183B5AE787305771D5CBB5B266DC64D2FD7A6 (U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * __this, const RuntimeMethod* method)
{
	{
		// worldSprite.AddButton(ClickFunc, () => worldSprite.SetColor(colorOver), () => worldSprite.SetColor(color));
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_0 = __this->get_worldSprite_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_colorOver_1();
		World_Sprite_SetColor_mF6CF9224148CBB79167239FB76797CCEBD0C2E86(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::<CreateDebugButton>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__1_mBE26EC0FDC9F274A79E3F19F2E2FF3C22CE123D3 (U3CU3Ec__DisplayClass6_0_t3C9E0B83B2CEC008AC6DEFFF881DE07FC0FADA34 * __this, const RuntimeMethod* method)
{
	{
		// worldSprite.AddButton(ClickFunc, () => worldSprite.SetColor(colorOver), () => worldSprite.SetColor(color));
		World_Sprite_t7B1E88250C263C5993F8D815DDC483D7F5838B66 * L_0 = __this->get_worldSprite_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_color_2();
		World_Sprite_SetColor_mF6CF9224148CBB79167239FB76797CCEBD0C2E86(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}

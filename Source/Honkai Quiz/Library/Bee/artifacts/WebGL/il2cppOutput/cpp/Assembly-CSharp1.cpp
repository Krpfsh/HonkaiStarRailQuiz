#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2*, T3*, T4*, T5*, T6*, T7>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7 p7)
	{
		void* params[7] = { p1, p2, p3, p4, p5, p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8 p8)
	{
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, &p8 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<MaterialUI.EZStruct>
struct List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// MaterialUI.EZStruct[]
struct EZStructU5BU5D_tE446D0C6B77ECDB949E40969B551D2844CF73E63;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.UI.LayoutGroup[]
struct LayoutGroupU5BU5D_t3322578226E09FC899731C905814C7521FD81EF4;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// YG.LeaderboardYG/PlayersData[]
struct PlayersDataU5BU5D_t37CBCC977EB5624B6534C8EDD67EC305F80F8691;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// MaterialUI.Anim
struct Anim_tE614A6A08851DB6FAF681BEB3A508E33195EF7AA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// MaterialUI.ButtonInteractableControl
struct ButtonInteractableControl_t5EFE754163BB43650DAE0707A8FDF46730036DB9;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// MaterialUI.CheckBoxToggler
struct CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626;
// MaterialUI.CheckboxConfig
struct CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2;
// MaterialUI.ColorCopier
struct ColorCopier_t7560BDB7967C98A00AF760E99B290B3BA8EFF776;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// YG.Insides.ConfigYG
struct ConfigYG_tA2D268B4AEDEB43A2899137C3B754999D11A8801;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// YG.Example.DebugViewing
struct DebugViewing_tFCACE0EC9D417C353028E41BFAFBAB5DE382BF5D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// MaterialUI.DialogBoxConfig
struct DialogBoxConfig_t3378B6285D1AD18F703D5279A082FE1F0697201A;
// MaterialUI.EZAnim
struct EZAnim_t40E3023265066D852607853E55933FB879CEF38C;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// MaterialUI.FPSCounter
struct FPSCounter_t0FFC63427F1B0BDA40ADE16D96ADCA91109E3F27;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// YG.Example.GetLederboardData
struct GetLederboardData_tA23B182CD2C1A9BF41840F1B88D71DDAB2627EC5;
// YG.Example.GetPlayerData
struct GetPlayerData_t54755AC7EB8730B15B64E228BCD3BDCEA5CC49A9;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// YG.ImageLoadYG
struct ImageLoadYG_t2628D720C7083E1DDC9E53F2124D32709C154CB7;
// YG.InfoYG
struct InfoYG_t2F18C3DC89E34D2ADF9CEEA69D22BE4D03773EF4;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// MaterialUI.InputFieldConfig
struct InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE;
// YG.Example.LanguageExample
struct LanguageExample_t8198AA6B921C7197E71B213B0F303ABA8259AA58;
// YG.LeaderboardYG
struct LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7;
// UnityEngine.UI.Mask
struct Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MaterialUI.MaterialGlobals
struct MaterialGlobals_tA9ABC4A265C7E8335FD8B070FE6A198C0B9C2E1C;
// MaterialUI.MaterialUIScaler
struct MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// MaterialUI.MenuArrowAnim
struct MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MaterialUI.NavDrawerConfig
struct NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE;
// YG.Example.NewResultLeaderboard
struct NewResultLeaderboard_t21DE385E0550472E4DF3F07215456A586EA4F669;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// YG.Example.OpenAuthorizationDialog
struct OpenAuthorizationDialog_t05A5975254F1E4A036D705FF956AC9438199820A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// YG.Purchase
struct Purchase_t5E0066DC410F062B08750C5CE865AA6A72B1C1FA;
// MaterialUI.RadioConfig
struct RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// YG.Example.RewardedAd
struct RewardedAd_tB4E322B8B8F957778834668CEF81518F0BC37099;
// MaterialUI.RippleAnim
struct RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92;
// MaterialUI.RippleConfig
struct RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// YG.Example.SaverTest
struct SaverTest_tFB9B24486D8B4C45F7E7F26FB4C08859B704676D;
// YG.SavesYG
struct SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// YG.Example.SwitchSceneTest
struct SwitchSceneTest_t9BCE6AA8D0D5E63CF634DDE4DBF10F9993F6A04C;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// YG.Example.YandexMetricaExample
struct YandexMetricaExample_t0B0B8EAF41A768E9ECC3F75D5BD0975EDD5E7B13;
// MaterialUI.Anim/Cube
struct Cube_tC0197ED59DFE1FF01107550DD1B6479723A7E063;
// MaterialUI.Anim/Quint
struct Quint_t1096DA87950930A9458B4DF5E51F2B61E53B843E;
// MaterialUI.Anim/Sept
struct Sept_tF1DCFD486B683FF34FC7E291DFEB9EE3797F0D7E;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// MaterialUI.EZAnim/<delayedCall>d__18
struct U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// YG.InfoYG/CSVTranslate
struct CSVTranslate_t4AE69C45CF29AF93E2CFCCA4D7D9DD31C8D9DC7E;
// YG.InfoYG/Fonts
struct Fonts_tFECA93184C7617664A4FD9A64A7E21AE2C5A4D90;
// YG.InfoYG/FontsSizeCorrect
struct FontsSizeCorrect_t61293704FF5905E8038117AE6FF6A6D32A15AAA9;
// YG.InfoYG/Languages
struct Languages_t85169F202E15523752F31A740C9EA9DCDCCA695C;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// MaterialUI.InputFieldConfig/<DelayedHeight>d__30
struct U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81;
// YG.LeaderboardYG/PlayersData
struct PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// YG.YandexGame/JsonAuth
struct JsonAuth_t9FFFF967780865B60F1CA6916B313AD586BC307B;
// YG.YandexGame/JsonEnvironmentData
struct JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638;
// YG.YandexGame/JsonLB
struct JsonLB_tF8D632D5951EBA590900F7F0F1DE1E0A9C2FED32;
// YG.YandexGame/JsonPayments
struct JsonPayments_tD09184E4255ED908B15C3B9917DA72E52D1891A4;
// YG.YandexGame/UpdateLB
struct UpdateLB_tE4168E8D801F67070C64299280A153FC81118266;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1846B4DDA524F81CCA0CAA7BBB8F523C4C4CF9DB;
IL2CPP_EXTERN_C String_t* _stringLiteral1A42D4129737B9D8C1DEE75879B6AA83C8F74D22;
IL2CPP_EXTERN_C String_t* _stringLiteral25709CE8A6D5A8A75AAB438AE13FF6ED3C59EA9E;
IL2CPP_EXTERN_C String_t* _stringLiteral2A83441420CAA0EA7C1516EF1BB92AA43B8880A9;
IL2CPP_EXTERN_C String_t* _stringLiteral2ED8FC1B7A3592C368CA6BBC276CC0B958608FFC;
IL2CPP_EXTERN_C String_t* _stringLiteral3222DFD3887F2D0D1F532C50001E697740B3F1E6;
IL2CPP_EXTERN_C String_t* _stringLiteral35FA7EC05BA14E9CC38AC240741774D8D99798AD;
IL2CPP_EXTERN_C String_t* _stringLiteral3675804A90499E72614FEA8D6788ACE536F9BA0A;
IL2CPP_EXTERN_C String_t* _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85;
IL2CPP_EXTERN_C String_t* _stringLiteral39AF3D436C99C728A2956F740562617A0F75553E;
IL2CPP_EXTERN_C String_t* _stringLiteral3AA78F14AF0E43B106AC5092A57B31432896E68D;
IL2CPP_EXTERN_C String_t* _stringLiteral3C2DABDBEC93A43CC0C82B00164E4BEF8D42F349;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4718DB1F64DE5DC92D2021D8F848FE1B73B315;
IL2CPP_EXTERN_C String_t* _stringLiteral3C574849AC8373215CDEA5269699313E06E70469;
IL2CPP_EXTERN_C String_t* _stringLiteral3CA027B17827714E4AA28C138746095B4E13F2F0;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF16C4E3271CE82A848EA3ADDFE04F19165786C;
IL2CPP_EXTERN_C String_t* _stringLiteral41FBFE14FAB6BE5EF2CC97EAA03D721420B0665F;
IL2CPP_EXTERN_C String_t* _stringLiteral46411911C63B70CCE39A3B13289A336EB7AD127F;
IL2CPP_EXTERN_C String_t* _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025;
IL2CPP_EXTERN_C String_t* _stringLiteral5F432EAD79A818B27FB30625FF1E3577AC0637C9;
IL2CPP_EXTERN_C String_t* _stringLiteral62677D235409E0AC0B92C2B397104B7E9FB709D5;
IL2CPP_EXTERN_C String_t* _stringLiteral632CB49BD282DCC95D1409C254F376C751EB8B69;
IL2CPP_EXTERN_C String_t* _stringLiteral6650691DA8A8A8D7250B362BC51BA2A5C574E531;
IL2CPP_EXTERN_C String_t* _stringLiteral692F9EDB80CC8842B9939724FA3E8A31D1C0EAD9;
IL2CPP_EXTERN_C String_t* _stringLiteral6983E709078D363974472C571FA9B1B634EABBB6;
IL2CPP_EXTERN_C String_t* _stringLiteral6CF17FD7D4BB340F939802560C46AC4C23AC2555;
IL2CPP_EXTERN_C String_t* _stringLiteral6FC01DF3685163D2FF38663839E23168CF564FE1;
IL2CPP_EXTERN_C String_t* _stringLiteral71135BB29FE493E864F08B56F1CB539C59868A2F;
IL2CPP_EXTERN_C String_t* _stringLiteral7E9A8C1BAE891CEE28459B0BE4DD7FCE66ECADD9;
IL2CPP_EXTERN_C String_t* _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral8330107D62A11E200AC478F20F66FA878264B3D7;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral855DE519A7928264477F861BCF043E006219C06F;
IL2CPP_EXTERN_C String_t* _stringLiteral9A4BCEB1579BC7F1BAB456075E85A3B0E38AAA2B;
IL2CPP_EXTERN_C String_t* _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA33660A4B327726AB5AE4E4A9C690ED69567BC8D;
IL2CPP_EXTERN_C String_t* _stringLiteralA4FDB95127E13C5A6EE35E465C184E86F9C46BB2;
IL2CPP_EXTERN_C String_t* _stringLiteralA536017036AF16FB495A2C312870A637969FF371;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE65A4C44BC0A777AAA942AE6EAFE149E8D52A6;
IL2CPP_EXTERN_C String_t* _stringLiteralAF16F576AF07FAC0B9B685AB926BA18DE8ED7F0E;
IL2CPP_EXTERN_C String_t* _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892;
IL2CPP_EXTERN_C String_t* _stringLiteralB619C1048D1A63A6FCB4598721F38419CFB0005D;
IL2CPP_EXTERN_C String_t* _stringLiteralB8905CB8397FB05DB48D636D4EB7B450F6E09A26;
IL2CPP_EXTERN_C String_t* _stringLiteralBBF2A2F54E128A6B9540F0C64D36FCD00BE169F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC66E4E22D4B2659AA643E1B215EAF6F6620015DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC9083AD61E325F62D95434D141517AB6D92F2BBB;
IL2CPP_EXTERN_C String_t* _stringLiteralCBA6AD1BD7CA93FC8E30FE165A97DC06C550553A;
IL2CPP_EXTERN_C String_t* _stringLiteralCC3D91506BA6CACBADB94459BC4247D0A1F068CB;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5B296CCA9EC238F63F6EDC015F03054E22309D;
IL2CPP_EXTERN_C String_t* _stringLiteralCFAAF3B3B2482804BB0C52BB984697D4F757A73E;
IL2CPP_EXTERN_C String_t* _stringLiteralD734D87988B4FA89B05AA1003CFFC20E2C72EF53;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB41D02FAEC024FEA204D29ED11CEF86220D2386;
IL2CPP_EXTERN_C String_t* _stringLiteralE2ADE6AD9F7F5F3F396FD1C782618370B149FA84;
IL2CPP_EXTERN_C String_t* _stringLiteralE5EC15E0503C9130659101D6E0CBA4B37EB89C24;
IL2CPP_EXTERN_C String_t* _stringLiteralE646BC59AFE8DA4F6891DF3042A6724ABC49BF35;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CE4732396C9B26BE161F0743C87ECA151A1D67;
IL2CPP_EXTERN_C String_t* _stringLiteralE83E271EB04638AE5B6BEDA2238BF84588CAF51F;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEA7A676433CAB71F816C191BA6205A79CA64BAF8;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF61FCA4BCA56B214565F66BF596F0C73197FB422;
IL2CPP_EXTERN_C String_t* _stringLiteralF72BCCE2CD89F30C61098993BD0C17C8A8BA7189;
IL2CPP_EXTERN_C String_t* _stringLiteralFA00CB7B7D55E48031B91C07E02C363112E00654;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA40684A862A788AA950C9C00D1EC777B1A593A;
IL2CPP_EXTERN_C String_t* _stringLiteralFE7DFF224E501849893EB942073D0C77D91B3ABD;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_mF37E1C928AF195AD949836E650B9E7646D1BBA47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GetPlayerData_DebugData_mDA3167B17E6FE9B3EFAEE92DE75325D414091C8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LanguageExample_SwitchLanguage_mC6FFE3D60BB27918BD1E00627410FA6EB123116C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_Rewarded_m093BAC95D29A4E5E79FAB4A5752D5A6253E0C590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SaverTest_GetLoad_mE8CC3DF9A605B61E207D5886DFD3C8BCBCA67DAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedHeightU3Ed__30_System_Collections_IEnumerator_Reset_m4D6E70959301CA99CF6BA0053EC96585F18B47E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CdelayedCallU3Ed__18_System_Collections_IEnumerator_Reset_mAD240670FADF9CB8AD40BCFB17DE95F7135BA44D_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;
struct PlayersDataU5BU5D_t37CBCC977EB5624B6534C8EDD67EC305F80F8691;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<MaterialUI.EZStruct>
struct List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EZStructU5BU5D_tE446D0C6B77ECDB949E40969B551D2844CF73E63* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EZStructU5BU5D_tE446D0C6B77ECDB949E40969B551D2844CF73E63* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// YG.Insides.JsonUtils
struct JsonUtils_tA50605303FA0917CEA1369641448947BCA667CCA  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// YG.Purchase
struct Purchase_t5E0066DC410F062B08750C5CE865AA6A72B1C1FA  : public RuntimeObject
{
	// System.Int32 YG.Purchase::numArray
	int32_t ___numArray_0;
	// System.String YG.Purchase::id
	String_t* ___id_1;
	// System.String YG.Purchase::title
	String_t* ___title_2;
	// System.String YG.Purchase::description
	String_t* ___description_3;
	// System.String YG.Purchase::imageURI
	String_t* ___imageURI_4;
	// System.String YG.Purchase::priceValue
	String_t* ___priceValue_5;
	// System.Int32 YG.Purchase::purchased
	int32_t ___purchased_6;
};

// YG.SavesYG
struct SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA  : public RuntimeObject
{
	// System.Int32 YG.SavesYG::idSave
	int32_t ___idSave_0;
	// System.Boolean YG.SavesYG::isFirstSession
	bool ___isFirstSession_1;
	// System.String YG.SavesYG::language
	String_t* ___language_2;
	// System.Boolean YG.SavesYG::promptDone
	bool ___promptDone_3;
	// System.Int32 YG.SavesYG::money
	int32_t ___money_4;
	// System.String YG.SavesYG::newPlayerName
	String_t* ___newPlayerName_5;
	// System.Boolean[] YG.SavesYG::openLevels
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___openLevels_6;
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

// YG.YandexMetrica
struct YandexMetrica_t92E754ABC428C16A255FBE2C7B1F2D71743680A7  : public RuntimeObject
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

// MaterialUI.Anim/Cube
struct Cube_tC0197ED59DFE1FF01107550DD1B6479723A7E063  : public RuntimeObject
{
};

// MaterialUI.Anim/Quint
struct Quint_t1096DA87950930A9458B4DF5E51F2B61E53B843E  : public RuntimeObject
{
};

// MaterialUI.Anim/Sept
struct Sept_tF1DCFD486B683FF34FC7E291DFEB9EE3797F0D7E  : public RuntimeObject
{
};

// MaterialUI.EZAnim/<delayedCall>d__18
struct U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C  : public RuntimeObject
{
	// System.Int32 MaterialUI.EZAnim/<delayedCall>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MaterialUI.EZAnim/<delayedCall>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MaterialUI.EZAnim MaterialUI.EZAnim/<delayedCall>d__18::<>4__this
	EZAnim_t40E3023265066D852607853E55933FB879CEF38C* ___U3CU3E4__this_2;
};

// MaterialUI.InputFieldConfig/<DelayedHeight>d__30
struct U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81  : public RuntimeObject
{
	// System.Int32 MaterialUI.InputFieldConfig/<DelayedHeight>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MaterialUI.InputFieldConfig/<DelayedHeight>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MaterialUI.InputFieldConfig MaterialUI.InputFieldConfig/<DelayedHeight>d__30::<>4__this
	InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* ___U3CU3E4__this_2;
};

// YG.LeaderboardYG/PlayersData
struct PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44  : public RuntimeObject
{
	// System.String YG.LeaderboardYG/PlayersData::name
	String_t* ___name_0;
	// System.Int32 YG.LeaderboardYG/PlayersData::rank
	int32_t ___rank_1;
	// System.Int32 YG.LeaderboardYG/PlayersData::score
	int32_t ___score_2;
	// System.String YG.LeaderboardYG/PlayersData::photo
	String_t* ___photo_3;
};

// YG.YandexGame/JsonAuth
struct JsonAuth_t9FFFF967780865B60F1CA6916B313AD586BC307B  : public RuntimeObject
{
	// System.String YG.YandexGame/JsonAuth::playerAuth
	String_t* ___playerAuth_0;
	// System.String YG.YandexGame/JsonAuth::playerName
	String_t* ___playerName_1;
	// System.String YG.YandexGame/JsonAuth::playerId
	String_t* ___playerId_2;
	// System.String YG.YandexGame/JsonAuth::playerPhoto
	String_t* ___playerPhoto_3;
};

// YG.YandexGame/JsonEnvironmentData
struct JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638  : public RuntimeObject
{
	// System.String YG.YandexGame/JsonEnvironmentData::language
	String_t* ___language_0;
	// System.String YG.YandexGame/JsonEnvironmentData::domain
	String_t* ___domain_1;
	// System.String YG.YandexGame/JsonEnvironmentData::deviceType
	String_t* ___deviceType_2;
	// System.Boolean YG.YandexGame/JsonEnvironmentData::isMobile
	bool ___isMobile_3;
	// System.Boolean YG.YandexGame/JsonEnvironmentData::isDesktop
	bool ___isDesktop_4;
	// System.Boolean YG.YandexGame/JsonEnvironmentData::isTablet
	bool ___isTablet_5;
	// System.Boolean YG.YandexGame/JsonEnvironmentData::isTV
	bool ___isTV_6;
	// System.String YG.YandexGame/JsonEnvironmentData::appID
	String_t* ___appID_7;
	// System.String YG.YandexGame/JsonEnvironmentData::browserLang
	String_t* ___browserLang_8;
	// System.String YG.YandexGame/JsonEnvironmentData::payload
	String_t* ___payload_9;
	// System.Boolean YG.YandexGame/JsonEnvironmentData::promptCanShow
	bool ___promptCanShow_10;
	// System.Boolean YG.YandexGame/JsonEnvironmentData::reviewCanShow
	bool ___reviewCanShow_11;
};

// YG.YandexGame/JsonLB
struct JsonLB_tF8D632D5951EBA590900F7F0F1DE1E0A9C2FED32  : public RuntimeObject
{
	// System.String YG.YandexGame/JsonLB::nameLB
	String_t* ___nameLB_0;
	// System.String YG.YandexGame/JsonLB::entries
	String_t* ___entries_1;
	// System.Int32[] YG.YandexGame/JsonLB::rank
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rank_2;
	// System.String[] YG.YandexGame/JsonLB::photo
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___photo_3;
	// System.String[] YG.YandexGame/JsonLB::playersName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playersName_4;
	// System.Int32[] YG.YandexGame/JsonLB::scorePlayers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scorePlayers_5;
};

// YG.YandexGame/JsonPayments
struct JsonPayments_tD09184E4255ED908B15C3B9917DA72E52D1891A4  : public RuntimeObject
{
	// System.String[] YG.YandexGame/JsonPayments::id
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___id_0;
	// System.String[] YG.YandexGame/JsonPayments::title
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___title_1;
	// System.String[] YG.YandexGame/JsonPayments::description
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___description_2;
	// System.String[] YG.YandexGame/JsonPayments::imageURI
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___imageURI_3;
	// System.String[] YG.YandexGame/JsonPayments::priceValue
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___priceValue_4;
	// System.Int32[] YG.YandexGame/JsonPayments::purchased
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___purchased_5;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// MaterialUI.HSBColor
struct HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A 
{
	// System.Single MaterialUI.HSBColor::h
	float ___h_0;
	// System.Single MaterialUI.HSBColor::s
	float ___s_1;
	// System.Single MaterialUI.HSBColor::b
	float ___b_2;
	// System.Single MaterialUI.HSBColor::a
	float ___a_3;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
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

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
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

// MaterialUI.EZStruct
struct EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 
{
	// System.String MaterialUI.EZStruct::animName
	String_t* ___animName_0;
	// System.String MaterialUI.EZStruct::animTag
	String_t* ___animTag_1;
	// UnityEngine.GameObject MaterialUI.EZStruct::targetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetGameObject_2;
	// System.String MaterialUI.EZStruct::targetComponent
	String_t* ___targetComponent_3;
	// System.String MaterialUI.EZStruct::targetVariable
	String_t* ___targetVariable_4;
	// UnityEngine.Component MaterialUI.EZStruct::RealComponent
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___RealComponent_5;
	// System.Reflection.FieldInfo MaterialUI.EZStruct::realField
	FieldInfo_t* ___realField_6;
	// System.Reflection.PropertyInfo MaterialUI.EZStruct::realProperty
	PropertyInfo_t* ___realProperty_7;
	// MaterialUI.AnimType MaterialUI.EZStruct::animationType
	int32_t ___animationType_8;
	// System.String MaterialUI.EZStruct::variableType
	String_t* ___variableType_9;
	// MaterialUI.ValType MaterialUI.EZStruct::valueType
	int32_t ___valueType_10;
	// System.Single MaterialUI.EZStruct::duration
	float ___duration_11;
	// System.Boolean MaterialUI.EZStruct::isField
	bool ___isField_12;
	// System.Int32 MaterialUI.EZStruct::initialInt
	int32_t ___initialInt_13;
	// System.Int32 MaterialUI.EZStruct::targetInt
	int32_t ___targetInt_14;
	// System.Single MaterialUI.EZStruct::initialFloat
	float ___initialFloat_15;
	// System.Single MaterialUI.EZStruct::targetFloat
	float ___targetFloat_16;
	// UnityEngine.Vector2 MaterialUI.EZStruct::initialVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialVector2_17;
	// UnityEngine.Vector2 MaterialUI.EZStruct::targetVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetVector2_18;
	// UnityEngine.Vector3 MaterialUI.EZStruct::initialVector3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialVector3_19;
	// UnityEngine.Vector3 MaterialUI.EZStruct::targetVector3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetVector3_20;
	// UnityEngine.Vector4 MaterialUI.EZStruct::initialVector4
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___initialVector4_21;
	// UnityEngine.Vector4 MaterialUI.EZStruct::targetVector4
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___targetVector4_22;
	// UnityEngine.Rect MaterialUI.EZStruct::initialRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___initialRect_23;
	// UnityEngine.Rect MaterialUI.EZStruct::targetRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___targetRect_24;
	// UnityEngine.Color MaterialUI.EZStruct::initialColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___initialColor_25;
	// UnityEngine.Color MaterialUI.EZStruct::targetColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___targetColor_26;
	// UnityEngine.Material MaterialUI.EZStruct::initialMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_27;
	// UnityEngine.Material MaterialUI.EZStruct::targetMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___targetMaterial_28;
	// System.Boolean MaterialUI.EZStruct::modifyParameter1
	bool ___modifyParameter1_29;
	// System.Boolean MaterialUI.EZStruct::modifyParameter2
	bool ___modifyParameter2_30;
	// System.Boolean MaterialUI.EZStruct::modifyParameter3
	bool ___modifyParameter3_31;
	// System.Boolean MaterialUI.EZStruct::modifyParameter4
	bool ___modifyParameter4_32;
	// System.Single MaterialUI.EZStruct::animStartTime
	float ___animStartTime_33;
	// System.Single MaterialUI.EZStruct::animDeltaTime
	float ___animDeltaTime_34;
	// System.Single MaterialUI.EZStruct::animationDuration
	float ___animationDuration_35;
	// System.Boolean MaterialUI.EZStruct::methodOnEnd
	bool ___methodOnEnd_36;
	// UnityEngine.GameObject MaterialUI.EZStruct::methodTargetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___methodTargetGameObject_37;
	// System.String MaterialUI.EZStruct::methodTargetComponent
	String_t* ___methodTargetComponent_38;
	// System.String MaterialUI.EZStruct::methodTargetMethod
	String_t* ___methodTargetMethod_39;
	// UnityEngine.Component MaterialUI.EZStruct::methodRealComponent
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___methodRealComponent_40;
	// System.Reflection.MethodInfo MaterialUI.EZStruct::methodRealMethod
	MethodInfo_t* ___methodRealMethod_41;
	// System.String MaterialUI.EZStruct::methodParam
	String_t* ___methodParam_42;
	// System.Boolean MaterialUI.EZStruct::called
	bool ___called_43;
	// System.Single MaterialUI.EZStruct::delay
	float ___delay_44;
	// System.Single MaterialUI.EZStruct::delayValue
	float ___delayValue_45;
};
// Native definition for P/Invoke marshalling of MaterialUI.EZStruct
struct EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshaled_pinvoke
{
	char* ___animName_0;
	char* ___animTag_1;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetGameObject_2;
	char* ___targetComponent_3;
	char* ___targetVariable_4;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___RealComponent_5;
	FieldInfo_t* ___realField_6;
	PropertyInfo_t* ___realProperty_7;
	int32_t ___animationType_8;
	char* ___variableType_9;
	int32_t ___valueType_10;
	float ___duration_11;
	int32_t ___isField_12;
	int32_t ___initialInt_13;
	int32_t ___targetInt_14;
	float ___initialFloat_15;
	float ___targetFloat_16;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialVector2_17;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetVector2_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialVector3_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetVector3_20;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___initialVector4_21;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___targetVector4_22;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___initialRect_23;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___targetRect_24;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___initialColor_25;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___targetColor_26;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_27;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___targetMaterial_28;
	int32_t ___modifyParameter1_29;
	int32_t ___modifyParameter2_30;
	int32_t ___modifyParameter3_31;
	int32_t ___modifyParameter4_32;
	float ___animStartTime_33;
	float ___animDeltaTime_34;
	float ___animationDuration_35;
	int32_t ___methodOnEnd_36;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___methodTargetGameObject_37;
	char* ___methodTargetComponent_38;
	char* ___methodTargetMethod_39;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___methodRealComponent_40;
	MethodInfo_t* ___methodRealMethod_41;
	char* ___methodParam_42;
	int32_t ___called_43;
	float ___delay_44;
	float ___delayValue_45;
};
// Native definition for COM marshalling of MaterialUI.EZStruct
struct EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshaled_com
{
	Il2CppChar* ___animName_0;
	Il2CppChar* ___animTag_1;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetGameObject_2;
	Il2CppChar* ___targetComponent_3;
	Il2CppChar* ___targetVariable_4;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___RealComponent_5;
	FieldInfo_t* ___realField_6;
	PropertyInfo_t* ___realProperty_7;
	int32_t ___animationType_8;
	Il2CppChar* ___variableType_9;
	int32_t ___valueType_10;
	float ___duration_11;
	int32_t ___isField_12;
	int32_t ___initialInt_13;
	int32_t ___targetInt_14;
	float ___initialFloat_15;
	float ___targetFloat_16;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialVector2_17;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetVector2_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialVector3_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetVector3_20;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___initialVector4_21;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___targetVector4_22;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___initialRect_23;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___targetRect_24;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___initialColor_25;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___targetColor_26;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_27;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___targetMaterial_28;
	int32_t ___modifyParameter1_29;
	int32_t ___modifyParameter2_30;
	int32_t ___modifyParameter3_31;
	int32_t ___modifyParameter4_32;
	float ___animStartTime_33;
	float ___animDeltaTime_34;
	float ___animationDuration_35;
	int32_t ___methodOnEnd_36;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___methodTargetGameObject_37;
	Il2CppChar* ___methodTargetComponent_38;
	Il2CppChar* ___methodTargetMethod_39;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___methodRealComponent_40;
	MethodInfo_t* ___methodRealMethod_41;
	Il2CppChar* ___methodParam_42;
	int32_t ___called_43;
	float ___delay_44;
	float ___delayValue_45;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// YG.InfoYG
struct InfoYG_t2F18C3DC89E34D2ADF9CEEA69D22BE4D03773EF4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean YG.InfoYG::scopes
	bool ___scopes_4;
	// YG.InfoYG/PlayerPhotoSize YG.InfoYG::playerPhotoSize
	int32_t ___playerPhotoSize_5;
	// System.Boolean YG.InfoYG::leaderboardEnable
	bool ___leaderboardEnable_6;
	// System.Boolean YG.InfoYG::saveCloud
	bool ___saveCloud_7;
	// System.Boolean YG.InfoYG::flush
	bool ___flush_8;
	// System.Boolean YG.InfoYG::localSaveSync
	bool ___localSaveSync_9;
	// System.Int32 YG.InfoYG::saveCloudInterval
	int32_t ___saveCloudInterval_10;
	// System.Boolean YG.InfoYG::metricaEnable
	bool ___metricaEnable_11;
	// System.Int32 YG.InfoYG::metricaCounterID
	int32_t ___metricaCounterID_12;
	// System.Boolean YG.InfoYG::AdWhenLoadingScene
	bool ___AdWhenLoadingScene_13;
	// System.Boolean YG.InfoYG::showFirstAd
	bool ___showFirstAd_14;
	// YG.InfoYG/AdCallsMode YG.InfoYG::adDisplayCalls
	int32_t ___adDisplayCalls_15;
	// System.Int32 YG.InfoYG::fullscreenAdInterval
	int32_t ___fullscreenAdInterval_16;
	// System.Single YG.InfoYG::durationOfAdSimulation
	float ___durationOfAdSimulation_17;
	// System.Boolean YG.InfoYG::LocalizationEnable
	bool ___LocalizationEnable_18;
	// YG.InfoYG/CallingLanguageCheck YG.InfoYG::callingLanguageCheck
	int32_t ___callingLanguageCheck_19;
	// YG.InfoYG/TranslateMethod YG.InfoYG::translateMethod
	int32_t ___translateMethod_20;
	// System.String YG.InfoYG::domainAutoLocalization
	String_t* ___domainAutoLocalization_21;
	// YG.InfoYG/CSVTranslate YG.InfoYG::CSVFileTranslate
	CSVTranslate_t4AE69C45CF29AF93E2CFCCA4D7D9DD31C8D9DC7E* ___CSVFileTranslate_22;
	// YG.InfoYG/Languages YG.InfoYG::languages
	Languages_t85169F202E15523752F31A740C9EA9DCDCCA695C* ___languages_23;
	// YG.InfoYG/Fonts YG.InfoYG::fonts
	Fonts_tFECA93184C7617664A4FD9A64A7E21AE2C5A4D90* ___fonts_24;
	// YG.InfoYG/FontsSizeCorrect YG.InfoYG::fontsSizeCorrect
	FontsSizeCorrect_t61293704FF5905E8038117AE6FF6A6D32A15AAA9* ___fontsSizeCorrect_25;
	// System.Boolean YG.InfoYG::debug
	bool ___debug_26;
	// System.Boolean YG.InfoYG::archivingBuild
	bool ___archivingBuild_27;
	// YG.InfoYG/BakcgroundImage YG.InfoYG::bakcgroundImage
	int32_t ___bakcgroundImage_28;
	// System.Boolean YG.InfoYG::pixelRatioEnable
	bool ___pixelRatioEnable_29;
	// System.Single YG.InfoYG::pixelRatioValue
	float ___pixelRatioValue_30;
	// System.Int32 YG.InfoYG::SDKStartDelay
	int32_t ___SDKStartDelay_31;
	// System.Boolean YG.InfoYG::staticRBTInGame
	bool ___staticRBTInGame_32;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// YG.YandexGame/UpdateLB
struct UpdateLB_tE4168E8D801F67070C64299280A153FC81118266  : public MulticastDelegate_t
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// MaterialUI.Anim
struct Anim_tE614A6A08851DB6FAF681BEB3A508E33195EF7AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MaterialUI.ButtonInteractableControl
struct ButtonInteractableControl_t5EFE754163BB43650DAE0707A8FDF46730036DB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CanvasGroup MaterialUI.ButtonInteractableControl::canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___canvasGroup_4;
	// UnityEngine.UI.Button MaterialUI.ButtonInteractableControl::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_5;
	// System.Boolean MaterialUI.ButtonInteractableControl::lastInteractableState
	bool ___lastInteractableState_6;
	// UnityEngine.CanvasGroup MaterialUI.ButtonInteractableControl::shadows
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___shadows_7;
};

// MaterialUI.CheckBoxToggler
struct CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle MaterialUI.CheckBoxToggler::theToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___theToggle_4;
};

// MaterialUI.CheckboxConfig
struct CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MaterialUI.CheckboxConfig::animationDuration
	float ___animationDuration_4;
	// UnityEngine.Color MaterialUI.CheckboxConfig::onColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___onColor_5;
	// UnityEngine.Color MaterialUI.CheckboxConfig::offColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___offColor_6;
	// UnityEngine.Color MaterialUI.CheckboxConfig::disabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___disabledColor_7;
	// System.Boolean MaterialUI.CheckboxConfig::changeTextColor
	bool ___changeTextColor_8;
	// UnityEngine.Color MaterialUI.CheckboxConfig::textNormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textNormalColor_9;
	// UnityEngine.Color MaterialUI.CheckboxConfig::textDisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textDisabledColor_10;
	// System.Boolean MaterialUI.CheckboxConfig::changeRippleColor
	bool ___changeRippleColor_11;
	// UnityEngine.UI.Image MaterialUI.CheckboxConfig::checkImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___checkImage_12;
	// UnityEngine.UI.Image MaterialUI.CheckboxConfig::frameImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___frameImage_13;
	// UnityEngine.UI.Text MaterialUI.CheckboxConfig::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_14;
	// UnityEngine.RectTransform MaterialUI.CheckboxConfig::checkRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___checkRectTransform_15;
	// UnityEngine.CanvasGroup MaterialUI.CheckboxConfig::frameCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___frameCanvasGroup_16;
	// MaterialUI.CheckBoxToggler MaterialUI.CheckboxConfig::checkBoxToggler
	CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* ___checkBoxToggler_17;
	// MaterialUI.RippleConfig MaterialUI.CheckboxConfig::rippleConfig
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* ___rippleConfig_18;
	// UnityEngine.UI.Toggle MaterialUI.CheckboxConfig::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_19;
	// System.Boolean MaterialUI.CheckboxConfig::lastToggleInteractableState
	bool ___lastToggleInteractableState_20;
	// System.Boolean MaterialUI.CheckboxConfig::lastToggleState
	bool ___lastToggleState_21;
	// System.Single MaterialUI.CheckboxConfig::currentCheckSize
	float ___currentCheckSize_22;
	// UnityEngine.Color MaterialUI.CheckboxConfig::currentColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentColor_23;
	// UnityEngine.Color MaterialUI.CheckboxConfig::currentTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentTextColor_24;
	// System.Single MaterialUI.CheckboxConfig::currentFrameAlpha
	float ___currentFrameAlpha_25;
	// UnityEngine.Vector3 MaterialUI.CheckboxConfig::tempVector3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempVector3_26;
	// UnityEngine.Color MaterialUI.CheckboxConfig::tempColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tempColor_27;
	// System.Int32 MaterialUI.CheckboxConfig::state
	int32_t ___state_28;
	// System.Single MaterialUI.CheckboxConfig::animStartTime
	float ___animStartTime_29;
	// System.Single MaterialUI.CheckboxConfig::animDeltaTime
	float ___animDeltaTime_30;
};

// MaterialUI.ColorCopier
struct ColorCopier_t7560BDB7967C98A00AF760E99B290B3BA8EFF776  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image MaterialUI.ColorCopier::sourceImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___sourceImage_4;
	// UnityEngine.UI.Text MaterialUI.ColorCopier::sourceText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___sourceText_5;
	// UnityEngine.UI.Image MaterialUI.ColorCopier::thisImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___thisImage_6;
	// UnityEngine.UI.Text MaterialUI.ColorCopier::thisText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___thisText_7;
	// UnityEngine.Color MaterialUI.ColorCopier::lastColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lastColor_8;
};

// YG.Insides.ConfigYG
struct ConfigYG_tA2D268B4AEDEB43A2899137C3B754999D11A8801  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// YG.Example.DebugViewing
struct DebugViewing_tFCACE0EC9D417C353028E41BFAFBAB5DE382BF5D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform YG.Example.DebugViewing::cubeRotation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cubeRotation_4;
	// UnityEngine.UI.Text YG.Example.DebugViewing::timeScale
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___timeScale_5;
	// UnityEngine.UI.Text YG.Example.DebugViewing::audioPause
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___audioPause_6;
};

// MaterialUI.DialogBoxConfig
struct DialogBoxConfig_t3378B6285D1AD18F703D5279A082FE1F0697201A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MaterialUI.DialogBoxConfig::darkenBackground
	bool ___darkenBackground_4;
	// System.Boolean MaterialUI.DialogBoxConfig::canClickBackgroundToCancel
	bool ___canClickBackgroundToCancel_5;
	// System.Single MaterialUI.DialogBoxConfig::animationDuration
	float ___animationDuration_6;
	// UnityEngine.RectTransform MaterialUI.DialogBoxConfig::backgroundTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___backgroundTransform_7;
	// System.Int32 MaterialUI.DialogBoxConfig::state
	int32_t ___state_8;
	// System.Single MaterialUI.DialogBoxConfig::animStartTime
	float ___animStartTime_9;
	// System.Single MaterialUI.DialogBoxConfig::animDeltaTime
	float ___animDeltaTime_10;
	// UnityEngine.RectTransform MaterialUI.DialogBoxConfig::thisRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRectTransform_11;
	// UnityEngine.CanvasGroup MaterialUI.DialogBoxConfig::backroundCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___backroundCanvasGroup_12;
	// System.Single MaterialUI.DialogBoxConfig::currentBackgroundAlpha
	float ___currentBackgroundAlpha_13;
	// System.Single MaterialUI.DialogBoxConfig::currentPivotY
	float ___currentPivotY_14;
	// System.Single MaterialUI.DialogBoxConfig::currentAnchorMinY
	float ___currentAnchorMinY_15;
	// System.Single MaterialUI.DialogBoxConfig::currentAnchorMaxY
	float ___currentAnchorMaxY_16;
	// UnityEngine.Vector2 MaterialUI.DialogBoxConfig::tempVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tempVector2_17;
};

// MaterialUI.EZAnim
struct EZAnim_t40E3023265066D852607853E55933FB879CEF38C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<MaterialUI.EZStruct> MaterialUI.EZAnim::theStructs
	List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* ___theStructs_4;
	// System.Boolean[] MaterialUI.EZAnim::activeList
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___activeList_5;
	// MaterialUI.EZStruct MaterialUI.EZAnim::tempStruct
	EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 ___tempStruct_6;
	// MaterialUI.EZStruct MaterialUI.EZAnim::oldStruct
	EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 ___oldStruct_7;
	// System.Single MaterialUI.EZAnim::tempFloat
	float ___tempFloat_8;
	// UnityEngine.Vector2 MaterialUI.EZAnim::tempVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tempVector2_9;
	// UnityEngine.Vector3 MaterialUI.EZAnim::tempVector3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempVector3_10;
	// UnityEngine.Rect MaterialUI.EZAnim::tempRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___tempRect_11;
	// UnityEngine.Color MaterialUI.EZAnim::tempColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tempColor_12;
	// UnityEngine.Material MaterialUI.EZAnim::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
};

// MaterialUI.FPSCounter
struct FPSCounter_t0FFC63427F1B0BDA40ADE16D96ADCA91109E3F27  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MaterialUI.FPSCounter::updateInterval
	float ___updateInterval_4;
	// System.Single MaterialUI.FPSCounter::deltaFps
	float ___deltaFps_5;
	// System.Int32 MaterialUI.FPSCounter::frames
	int32_t ___frames_6;
	// System.Single MaterialUI.FPSCounter::timeleft
	float ___timeleft_7;
	// UnityEngine.UI.Text MaterialUI.FPSCounter::theText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___theText_8;
};

// YG.Example.GetLederboardData
struct GetLederboardData_tA23B182CD2C1A9BF41840F1B88D71DDAB2627EC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// YG.LeaderboardYG YG.Example.GetLederboardData::leaderboardYG
	LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* ___leaderboardYG_4;
};

// YG.Example.GetPlayerData
struct GetPlayerData_t54755AC7EB8730B15B64E228BCD3BDCEA5CC49A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// YG.ImageLoadYG YG.Example.GetPlayerData::imageLoad
	ImageLoadYG_t2628D720C7083E1DDC9E53F2124D32709C154CB7* ___imageLoad_4;
	// UnityEngine.UI.Text YG.Example.GetPlayerData::textPlayerData
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textPlayerData_5;
	// UnityEngine.UI.Text YG.Example.GetPlayerData::textEnvirData
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textEnvirData_6;
};

// YG.ImageLoadYG
struct ImageLoadYG_t2628D720C7083E1DDC9E53F2124D32709C154CB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean YG.ImageLoadYG::startLoad
	bool ___startLoad_4;
	// UnityEngine.UI.RawImage YG.ImageLoadYG::rawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___rawImage_5;
	// UnityEngine.UI.Image YG.ImageLoadYG::spriteImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___spriteImage_6;
	// System.String YG.ImageLoadYG::urlImage
	String_t* ___urlImage_7;
	// UnityEngine.GameObject YG.ImageLoadYG::loadAnimObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loadAnimObj_8;
	// System.Boolean YG.ImageLoadYG::debug
	bool ___debug_9;
};

// MaterialUI.InputFieldConfig
struct InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color MaterialUI.InputFieldConfig::activeColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___activeColor_4;
	// System.Boolean MaterialUI.InputFieldConfig::dynamicHeight
	bool ___dynamicHeight_5;
	// System.Boolean MaterialUI.InputFieldConfig::selected
	bool ___selected_6;
	// System.Single MaterialUI.InputFieldConfig::animationDuration
	float ___animationDuration_7;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::parentRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___parentRect_8;
	// UnityEngine.UI.Text MaterialUI.InputFieldConfig::placeholderText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___placeholderText_9;
	// UnityEngine.UI.Text MaterialUI.InputFieldConfig::inputText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___inputText_10;
	// UnityEngine.UI.Text MaterialUI.InputFieldConfig::displayText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___displayText_11;
	// UnityEngine.UI.Image MaterialUI.InputFieldConfig::activeLine
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___activeLine_12;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::textRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___textRect_13;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::displayTextRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___displayTextRect_14;
	// UnityEngine.UI.InputField MaterialUI.InputFieldConfig::inputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField_15;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::activeLineRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___activeLineRect_16;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::placeholderRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___placeholderRect_17;
	// UnityEngine.Color MaterialUI.InputFieldConfig::placeholderOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___placeholderOffColor_18;
	// UnityEngine.Color MaterialUI.InputFieldConfig::placeholderColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___placeholderColor_19;
	// System.Single MaterialUI.InputFieldConfig::placeholderScale
	float ___placeholderScale_20;
	// System.Single MaterialUI.InputFieldConfig::placeholderPivot
	float ___placeholderPivot_21;
	// System.Single MaterialUI.InputFieldConfig::activeLineAlpha
	float ___activeLineAlpha_22;
	// System.Single MaterialUI.InputFieldConfig::activeLinePos
	float ___activeLinePos_23;
	// System.Single MaterialUI.InputFieldConfig::animStartTime
	float ___animStartTime_24;
	// System.Single MaterialUI.InputFieldConfig::animDeltaTime
	float ___animDeltaTime_25;
	// System.Boolean MaterialUI.InputFieldConfig::selectedBefore
	bool ___selectedBefore_26;
	// System.Int32 MaterialUI.InputFieldConfig::state
	int32_t ___state_27;
};

// YG.Example.LanguageExample
struct LanguageExample_t8198AA6B921C7197E71B213B0F303ABA8259AA58  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String YG.Example.LanguageExample::ru
	String_t* ___ru_4;
	// System.String YG.Example.LanguageExample::en
	String_t* ___en_5;
	// System.String YG.Example.LanguageExample::tr
	String_t* ___tr_6;
	// UnityEngine.UI.Text YG.Example.LanguageExample::textObj
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textObj_7;
};

// YG.LeaderboardYG
struct LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String YG.LeaderboardYG::nameLB
	String_t* ___nameLB_4;
	// System.Int32 YG.LeaderboardYG::maxQuantityPlayers
	int32_t ___maxQuantityPlayers_5;
	// System.Int32 YG.LeaderboardYG::quantityTop
	int32_t ___quantityTop_6;
	// System.Int32 YG.LeaderboardYG::quantityAround
	int32_t ___quantityAround_7;
	// YG.LeaderboardYG/UpdateLBMethod YG.LeaderboardYG::updateLBMethod
	int32_t ___updateLBMethod_8;
	// UnityEngine.UI.Text YG.LeaderboardYG::entriesText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___entriesText_9;
	// System.Boolean YG.LeaderboardYG::advanced
	bool ___advanced_10;
	// YG.LeaderboardYG/PlayerPhoto YG.LeaderboardYG::playerPhoto
	int32_t ___playerPhoto_11;
	// UnityEngine.Sprite YG.LeaderboardYG::isHiddenPlayerPhoto
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___isHiddenPlayerPhoto_12;
	// System.Boolean YG.LeaderboardYG::timeTypeConvert
	bool ___timeTypeConvert_13;
	// System.Int32 YG.LeaderboardYG::decimalSize
	int32_t ___decimalSize_14;
	// UnityEngine.Events.UnityEvent YG.LeaderboardYG::onUpdateData
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onUpdateData_15;
	// YG.LeaderboardYG/PlayersData[] YG.LeaderboardYG::playersData
	PlayersDataU5BU5D_t37CBCC977EB5624B6534C8EDD67EC305F80F8691* ___playersData_16;
	// System.String YG.LeaderboardYG::photoSize
	String_t* ___photoSize_17;
};

// MaterialUI.MaterialGlobals
struct MaterialGlobals_tA9ABC4A265C7E8335FD8B070FE6A198C0B9C2E1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct MaterialGlobals_tA9ABC4A265C7E8335FD8B070FE6A198C0B9C2E1C_StaticFields
{
	// UnityEngine.Vector4 MaterialUI.MaterialGlobals::shadowSpriteBorder
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___shadowSpriteBorder_4;
	// System.Single MaterialUI.MaterialGlobals::uiScale
	float ___uiScale_5;
};

// MaterialUI.MaterialUIScaler
struct MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 MaterialUI.MaterialUIScaler::referenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___referenceResolution_4;
	// UnityEngine.Vector2 MaterialUI.MaterialUIScaler::currentResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentResolution_5;
	// System.Single MaterialUI.MaterialUIScaler::<scaleFactor>k__BackingField
	float ___U3CscaleFactorU3Ek__BackingField_6;
	// UnityEngine.UI.CanvasScaler MaterialUI.MaterialUIScaler::scaler
	CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* ___scaler_7;
};

// MaterialUI.MenuArrowAnim
struct MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MaterialUI.MenuArrowAnim::state
	int32_t ___state_4;
	// System.Single MaterialUI.MenuArrowAnim::animStartTime
	float ___animStartTime_5;
	// System.Single MaterialUI.MenuArrowAnim::animDeltaTime
	float ___animDeltaTime_6;
	// System.Single MaterialUI.MenuArrowAnim::animationDuration
	float ___animationDuration_7;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::thisTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisTransform_8;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::topTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___topTransform_9;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::middleTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___middleTransform_10;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::bottomTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___bottomTransform_11;
	// UnityEngine.Vector2 MaterialUI.MenuArrowAnim::tempVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tempVector2_12;
	// UnityEngine.Vector3 MaterialUI.MenuArrowAnim::tempVector3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempVector3_13;
	// UnityEngine.Quaternion MaterialUI.MenuArrowAnim::tempQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___tempQuaternion_14;
	// System.Boolean MaterialUI.MenuArrowAnim::isArrow
	bool ___isArrow_15;
};

// MaterialUI.NavDrawerConfig
struct NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MaterialUI.NavDrawerConfig::maxPosition
	float ___maxPosition_4;
	// System.Single MaterialUI.NavDrawerConfig::minPosition
	float ___minPosition_5;
	// UnityEngine.RectTransform MaterialUI.NavDrawerConfig::thisRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRectTransform_6;
	// UnityEngine.UI.Image MaterialUI.NavDrawerConfig::backgroundImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___backgroundImage_7;
	// UnityEngine.RectTransform MaterialUI.NavDrawerConfig::backgroundRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___backgroundRectTransform_8;
	// UnityEngine.CanvasGroup MaterialUI.NavDrawerConfig::backgroundCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___backgroundCanvasGroup_9;
	// UnityEngine.UI.Image MaterialUI.NavDrawerConfig::ShadowImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ShadowImage_10;
	// UnityEngine.CanvasGroup MaterialUI.NavDrawerConfig::shadowCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___shadowCanvasGroup_11;
	// System.Boolean MaterialUI.NavDrawerConfig::darkenBackground
	bool ___darkenBackground_12;
	// System.Boolean MaterialUI.NavDrawerConfig::tapBackgroundToClose
	bool ___tapBackgroundToClose_13;
	// System.Byte MaterialUI.NavDrawerConfig::state
	uint8_t ___state_14;
	// System.Single MaterialUI.NavDrawerConfig::animStartTime
	float ___animStartTime_15;
	// System.Single MaterialUI.NavDrawerConfig::animDeltaTime
	float ___animDeltaTime_16;
	// System.Single MaterialUI.NavDrawerConfig::animationDuration
	float ___animationDuration_17;
	// UnityEngine.Vector2 MaterialUI.NavDrawerConfig::currentPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentPos_18;
	// System.Single MaterialUI.NavDrawerConfig::currentBackgroundAlpha
	float ___currentBackgroundAlpha_19;
	// System.Single MaterialUI.NavDrawerConfig::currentShadowAlpha
	float ___currentShadowAlpha_20;
	// UnityEngine.Vector2 MaterialUI.NavDrawerConfig::tempVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tempVector2_21;
	// System.Single MaterialUI.NavDrawerConfig::positionCompensation
	float ___positionCompensation_22;
};

// YG.Example.NewResultLeaderboard
struct NewResultLeaderboard_t21DE385E0550472E4DF3F07215456A586EA4F669  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// YG.LeaderboardYG YG.Example.NewResultLeaderboard::leaderboardYG
	LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* ___leaderboardYG_4;
	// UnityEngine.UI.InputField YG.Example.NewResultLeaderboard::nameLbInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___nameLbInputField_5;
	// UnityEngine.UI.InputField YG.Example.NewResultLeaderboard::scoreLbInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___scoreLbInputField_6;
};

// YG.Example.OpenAuthorizationDialog
struct OpenAuthorizationDialog_t05A5975254F1E4A036D705FF956AC9438199820A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MaterialUI.RadioConfig
struct RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MaterialUI.RadioConfig::animationDuration
	float ___animationDuration_4;
	// UnityEngine.Color MaterialUI.RadioConfig::onColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___onColor_5;
	// UnityEngine.Color MaterialUI.RadioConfig::offColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___offColor_6;
	// UnityEngine.Color MaterialUI.RadioConfig::disabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___disabledColor_7;
	// System.Boolean MaterialUI.RadioConfig::changeTextColor
	bool ___changeTextColor_8;
	// UnityEngine.Color MaterialUI.RadioConfig::textNormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textNormalColor_9;
	// UnityEngine.Color MaterialUI.RadioConfig::textDisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textDisabledColor_10;
	// System.Boolean MaterialUI.RadioConfig::changeRippleColor
	bool ___changeRippleColor_11;
	// UnityEngine.UI.Image MaterialUI.RadioConfig::dotImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___dotImage_12;
	// UnityEngine.UI.Image MaterialUI.RadioConfig::ringImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ringImage_13;
	// UnityEngine.UI.Text MaterialUI.RadioConfig::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_14;
	// UnityEngine.RectTransform MaterialUI.RadioConfig::dotRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___dotRectTransform_15;
	// MaterialUI.CheckBoxToggler MaterialUI.RadioConfig::checkBoxToggler
	CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* ___checkBoxToggler_16;
	// MaterialUI.RippleConfig MaterialUI.RadioConfig::rippleConfig
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* ___rippleConfig_17;
	// UnityEngine.UI.Toggle MaterialUI.RadioConfig::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_18;
	// UnityEngine.UI.ToggleGroup MaterialUI.RadioConfig::toggleGroup
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___toggleGroup_19;
	// System.Boolean MaterialUI.RadioConfig::lastToggleInteractableState
	bool ___lastToggleInteractableState_20;
	// System.Boolean MaterialUI.RadioConfig::lastToggleState
	bool ___lastToggleState_21;
	// System.Single MaterialUI.RadioConfig::currentDotSize
	float ___currentDotSize_22;
	// UnityEngine.Color MaterialUI.RadioConfig::currentColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentColor_23;
	// UnityEngine.Color MaterialUI.RadioConfig::currentTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentTextColor_24;
	// UnityEngine.Vector3 MaterialUI.RadioConfig::tempVector3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempVector3_25;
	// UnityEngine.Color MaterialUI.RadioConfig::tempColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tempColor_26;
	// System.Int32 MaterialUI.RadioConfig::state
	int32_t ___state_27;
	// System.Single MaterialUI.RadioConfig::animStartTime
	float ___animStartTime_28;
	// System.Single MaterialUI.RadioConfig::animDeltaTime
	float ___animDeltaTime_29;
};

// YG.Example.RewardedAd
struct RewardedAd_tB4E322B8B8F957778834668CEF81518F0BC37099  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 YG.Example.RewardedAd::AdID
	int32_t ___AdID_4;
	// UnityEngine.UI.Text YG.Example.RewardedAd::textMoney
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textMoney_5;
	// System.Int32 YG.Example.RewardedAd::moneyCount
	int32_t ___moneyCount_6;
};

// MaterialUI.RippleConfig
struct RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MaterialUI.RippleConfig::autoSize
	bool ___autoSize_4;
	// System.Single MaterialUI.RippleConfig::sizePercentage
	float ___sizePercentage_5;
	// System.Int32 MaterialUI.RippleConfig::rippleSize
	int32_t ___rippleSize_6;
	// System.Single MaterialUI.RippleConfig::rippleSpeed
	float ___rippleSpeed_7;
	// UnityEngine.Color MaterialUI.RippleConfig::rippleColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rippleColor_8;
	// System.Single MaterialUI.RippleConfig::rippleStartAlpha
	float ___rippleStartAlpha_9;
	// System.Single MaterialUI.RippleConfig::rippleEndAlpha
	float ___rippleEndAlpha_10;
	// UnityEngine.UI.LayoutGroup[] MaterialUI.RippleConfig::groups
	LayoutGroupU5BU5D_t3322578226E09FC899731C905814C7521FD81EF4* ___groups_11;
	// System.Boolean[] MaterialUI.RippleConfig::groupBools
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___groupBools_12;
	// MaterialUI.RippleConfig/HighlightActive MaterialUI.RippleConfig::highlightWhen
	int32_t ___highlightWhen_13;
	// System.Boolean MaterialUI.RippleConfig::moveTowardCenter
	bool ___moveTowardCenter_14;
	// System.Boolean MaterialUI.RippleConfig::toggleMask
	bool ___toggleMask_15;
	// System.Boolean MaterialUI.RippleConfig::dontRippleOnScroll
	bool ___dontRippleOnScroll_16;
	// System.Single MaterialUI.RippleConfig::scrollDelayCheckTime
	float ___scrollDelayCheckTime_17;
	// System.Boolean MaterialUI.RippleConfig::hasLifted
	bool ___hasLifted_18;
	// UnityEngine.Vector2 MaterialUI.RippleConfig::mousePos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mousePos_19;
	// MaterialUI.RippleAnim MaterialUI.RippleConfig::currentRippleAnim
	RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* ___currentRippleAnim_20;
	// UnityEngine.UI.Mask MaterialUI.RippleConfig::thisMask
	Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* ___thisMask_21;
	// UnityEngine.Canvas MaterialUI.RippleConfig::theCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___theCanvas_22;
	// UnityEngine.Camera MaterialUI.RippleConfig::theCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___theCamera_23;
	// UnityEngine.UI.Image MaterialUI.RippleConfig::thisImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___thisImage_24;
	// System.Boolean MaterialUI.RippleConfig::worldSpace
	bool ___worldSpace_25;
	// UnityEngine.Color MaterialUI.RippleConfig::normalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___normalColor_26;
	// UnityEngine.Color MaterialUI.RippleConfig::highlightColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___highlightColor_27;
	// UnityEngine.Color MaterialUI.RippleConfig::tempColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tempColor_28;
	// UnityEngine.Color MaterialUI.RippleConfig::currentColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentColor_29;
	// System.Int32 MaterialUI.RippleConfig::state
	int32_t ___state_30;
	// System.Single MaterialUI.RippleConfig::animStartTime
	float ___animStartTime_31;
	// System.Single MaterialUI.RippleConfig::animDeltaTime
	float ___animDeltaTime_32;
	// System.Single MaterialUI.RippleConfig::animationDuration
	float ___animationDuration_33;
	// UnityEngine.Rect MaterialUI.RippleConfig::sizeReferenceRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___sizeReferenceRect_34;
};

// YG.Example.SaverTest
struct SaverTest_tFB9B24486D8B4C45F7E7F26FB4C08859B704676D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField YG.Example.SaverTest::integerText
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___integerText_4;
	// UnityEngine.UI.InputField YG.Example.SaverTest::stringifyText
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___stringifyText_5;
	// UnityEngine.UI.Text YG.Example.SaverTest::systemSavesText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___systemSavesText_6;
	// UnityEngine.UI.Toggle[] YG.Example.SaverTest::booleanArrayToggle
	ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ___booleanArrayToggle_7;
};

// YG.Example.SwitchSceneTest
struct SwitchSceneTest_t9BCE6AA8D0D5E63CF634DDE4DBF10F9993F6A04C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// YG.YandexGame
struct YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// YG.InfoYG YG.YandexGame::infoYG
	InfoYG_t2F18C3DC89E34D2ADF9CEEA69D22BE4D03773EF4* ___infoYG_4;
	// System.Boolean YG.YandexGame::singleton
	bool ___singleton_5;
	// UnityEngine.Events.UnityEvent YG.YandexGame::ResolvedAuthorization
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___ResolvedAuthorization_6;
	// UnityEngine.Events.UnityEvent YG.YandexGame::RejectedAuthorization
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___RejectedAuthorization_7;
	// UnityEngine.Events.UnityEvent YG.YandexGame::OpenFullscreenAd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OpenFullscreenAd_8;
	// UnityEngine.Events.UnityEvent YG.YandexGame::CloseFullscreenAd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___CloseFullscreenAd_9;
	// UnityEngine.Events.UnityEvent YG.YandexGame::ErrorFullscreenAd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___ErrorFullscreenAd_10;
	// UnityEngine.Events.UnityEvent YG.YandexGame::OpenVideoAd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OpenVideoAd_11;
	// UnityEngine.Events.UnityEvent YG.YandexGame::CloseVideoAd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___CloseVideoAd_12;
	// UnityEngine.Events.UnityEvent YG.YandexGame::RewardVideoAd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___RewardVideoAd_13;
	// UnityEngine.Events.UnityEvent YG.YandexGame::ErrorVideoAd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___ErrorVideoAd_14;
	// UnityEngine.Events.UnityEvent YG.YandexGame::PurchaseSuccess
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___PurchaseSuccess_15;
	// UnityEngine.Events.UnityEvent YG.YandexGame::PurchaseFailed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___PurchaseFailed_16;
	// UnityEngine.Events.UnityEvent YG.YandexGame::PromptDo
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___PromptDo_17;
	// UnityEngine.Events.UnityEvent YG.YandexGame::PromptFail
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___PromptFail_18;
	// UnityEngine.Events.UnityEvent YG.YandexGame::ReviewDo
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___ReviewDo_19;
	// YG.YandexGame/JsonAuth YG.YandexGame::jsonAuth
	JsonAuth_t9FFFF967780865B60F1CA6916B313AD586BC307B* ___jsonAuth_48;
	// YG.YandexGame/JsonLB YG.YandexGame::jsonLB
	JsonLB_tF8D632D5951EBA590900F7F0F1DE1E0A9C2FED32* ___jsonLB_50;
	// System.Int32[] YG.YandexGame::rank
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rank_51;
	// System.String[] YG.YandexGame::photo
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___photo_52;
	// System.String[] YG.YandexGame::playersName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playersName_53;
	// System.Int32[] YG.YandexGame::scorePlayers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scorePlayers_54;
	// System.Int32 YG.YandexGame::delayFirstCalls
	int32_t ___delayFirstCalls_61;
};

struct YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields
{
	// System.Boolean YG.YandexGame::_SDKEnabled
	bool ____SDKEnabled_20;
	// System.Boolean YG.YandexGame::_startGame
	bool ____startGame_21;
	// System.Boolean YG.YandexGame::_auth
	bool ____auth_22;
	// System.Boolean YG.YandexGame::_initializedLB
	bool ____initializedLB_23;
	// System.String YG.YandexGame::_playerName
	String_t* ____playerName_24;
	// System.String YG.YandexGame::_playerId
	String_t* ____playerId_25;
	// System.String YG.YandexGame::_playerPhoto
	String_t* ____playerPhoto_26;
	// System.String YG.YandexGame::_photoSize
	String_t* ____photoSize_27;
	// System.Boolean YG.YandexGame::_leaderboardEnable
	bool ____leaderboardEnable_28;
	// System.Boolean YG.YandexGame::_debug
	bool ____debug_29;
	// System.Boolean YG.YandexGame::_scopes
	bool ____scopes_30;
	// System.Boolean YG.YandexGame::nowFullAd
	bool ___nowFullAd_31;
	// System.Boolean YG.YandexGame::nowVideoAd
	bool ___nowVideoAd_32;
	// YG.SavesYG YG.YandexGame::savesData
	SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* ___savesData_33;
	// YG.YandexGame/JsonEnvironmentData YG.YandexGame::EnvironmentData
	JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* ___EnvironmentData_34;
	// YG.YandexGame/JsonPayments YG.YandexGame::PaymentsData
	JsonPayments_tD09184E4255ED908B15C3B9917DA72E52D1891A4* ___PaymentsData_35;
	// YG.YandexGame YG.YandexGame::Instance
	YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A* ___Instance_36;
	// System.String YG.YandexGame::pathSaves
	String_t* ___pathSaves_37;
	// System.Action YG.YandexGame::GetDataEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___GetDataEvent_38;
	// System.Action YG.YandexGame::onResetProgress
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onResetProgress_39;
	// System.Action`1<System.String> YG.YandexGame::SwitchLangEvent
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___SwitchLangEvent_40;
	// System.Action YG.YandexGame::OpenFullAdEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OpenFullAdEvent_41;
	// System.Action YG.YandexGame::CloseFullAdEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___CloseFullAdEvent_42;
	// System.Action YG.YandexGame::ErrorFullAdEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ErrorFullAdEvent_43;
	// System.Action YG.YandexGame::OpenVideoEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OpenVideoEvent_44;
	// System.Action YG.YandexGame::CloseVideoEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___CloseVideoEvent_45;
	// System.Action`1<System.Int32> YG.YandexGame::RewardVideoEvent
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___RewardVideoEvent_46;
	// System.Action YG.YandexGame::ErrorVideoEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ErrorVideoEvent_47;
	// YG.YandexGame/UpdateLB YG.YandexGame::UpdateLbEvent
	UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* ___UpdateLbEvent_49;
	// System.Action YG.YandexGame::GetPaymentsEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___GetPaymentsEvent_55;
	// System.Action`1<System.String> YG.YandexGame::PurchaseSuccessEvent
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___PurchaseSuccessEvent_56;
	// System.Action`1<System.String> YG.YandexGame::PurchaseFailedEvent
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___PurchaseFailedEvent_57;
	// System.Action`1<System.Boolean> YG.YandexGame::ReviewSentEvent
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___ReviewSentEvent_58;
	// System.Action YG.YandexGame::PromptSuccessEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PromptSuccessEvent_59;
	// System.Action YG.YandexGame::PromptFailEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PromptFailEvent_60;
	// System.Single YG.YandexGame::timerShowAd
	float ___timerShowAd_62;
	// System.Single YG.YandexGame::timerSaveCloud
	float ___timerSaveCloud_63;
};

// YG.Example.YandexMetricaExample
struct YandexMetricaExample_t0B0B8EAF41A768E9ECC3F75D5BD0975EDD5E7B13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
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

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* ___m_Toggles_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_23;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_24;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_25;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_26;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_27;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_28;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_29;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_30;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_31;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_32;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_33;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_34;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_35;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_37;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_38;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_39;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_40;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_42;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_43;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_46;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_47;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_48;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_49;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_50;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_51;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_52;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_53;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_54;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_55;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_56;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_59;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_60;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_63;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_64;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_65;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_66;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_67;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_68;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_69;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_70;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_73;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// YG.LeaderboardYG/PlayersData[]
struct PlayersDataU5BU5D_t37CBCC977EB5624B6534C8EDD67EC305F80F8691  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44* m_Items[1];

	inline PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098  : public RuntimeArray
{
	ALIGN_FIELD (8) Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* m_Items[1];

	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<MaterialUI.EZStruct>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_gshared_inline (List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<MaterialUI.EZStruct>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_gshared (List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MaterialUI.EZStruct>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D_gshared (List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* __this, int32_t ___index0, EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 ___value1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void YG.YandexMetrica::YandexMetricaSend(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetrica_YandexMetricaSend_m7F6D36F5F72403B33D29246438E076EE2A857585 (String_t* ___eventName0, String_t* ___eventData1, const RuntimeMethod* method) ;
// System.Void YG.YandexMetrica::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetrica_Send_m8230AD0B4B166341914472B36ED4C1EE4775B558 (String_t* ___eventName0, const RuntimeMethod* method) ;
// System.String YG.Insides.JsonUtils::ToJson(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtils_ToJson_m3E3F70313FB40E96BD8EDE934F5F4FA593F5C622 (RuntimeObject* ___dictionary0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean YG.YandexMetrica::YandexMetricaSendInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YandexMetrica_YandexMetricaSendInternal_mAA079F57DBE98A1F8C4D9197E56D53BA2AE0BE3E (String_t* ___eventName0, String_t* ___eventData1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.String YG.Insides.JsonUtils::GetValueString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtils_GetValueString_mF521F4DCA88CE04855E0AB8FD2C4643C3E402FB8 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___value0, bool* ___result1, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioListener::get_pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioListener_get_pause_mD5DE01AAFDE5CB1F747762091F18FF95963FF473 (const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String YG.LeaderboardYG::TimeTypeConvert(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeaderboardYG_TimeTypeConvert_m2210FE73695FEE2BE654450809C8EF32BE8BB5E5 (LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* __this, int32_t ___score0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean YG.YandexGame::get_SDKEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool YandexGame_get_SDKEnabled_mDE2A25B7CA3B547ADC0468C5329BA9DB79A4B25B_inline (const RuntimeMethod* method) ;
// System.Void YG.Example.GetPlayerData::DebugData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerData_DebugData_mDA3167B17E6FE9B3EFAEE92DE75325D414091C8C (GetPlayerData_t54755AC7EB8730B15B64E228BCD3BDCEA5CC49A9* __this, const RuntimeMethod* method) ;
// System.String YG.YandexGame::get_playerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* YandexGame_get_playerId_m6DBD844F8285EDB9C60CCA925E27B4FA71681445_inline (const RuntimeMethod* method) ;
// System.String YG.YandexGame::get_playerName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* YandexGame_get_playerName_mE314B9E33058B62F776846B3582040E6276FDF19_inline (const RuntimeMethod* method) ;
// System.Boolean YG.YandexGame::get_auth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool YandexGame_get_auth_m054367937F060417384038F64ABFEA7A086E4E8E_inline (const RuntimeMethod* method) ;
// System.Boolean YG.YandexGame::get_initializedLB()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool YandexGame_get_initializedLB_m9E3819F6AB97B1137A58B6627C1D9EC77659B685_inline (const RuntimeMethod* method) ;
// System.String YG.YandexGame::get_photoSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* YandexGame_get_photoSize_mD14EE12CD4224E85546A40C9FFE3937D8C8A2A04_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String YG.YandexGame::get_playerPhoto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* YandexGame_get_playerPhoto_m8DABC3711A533145D551AF8EB1ADD0520DA80CEF_inline (const RuntimeMethod* method) ;
// System.Void YG.ImageLoadYG::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageLoadYG_Load_mDDAF59108D3F83F52E9FFEF8C8DE333C05EF2905 (ImageLoadYG_t2628D720C7083E1DDC9E53F2124D32709C154CB7* __this, String_t* ___url0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void YG.Example.LanguageExample::SwitchLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageExample_SwitchLanguage_mC6FFE3D60BB27918BD1E00627410FA6EB123116C (LanguageExample_t8198AA6B921C7197E71B213B0F303ABA8259AA58* __this, String_t* ___lang0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void YG.YandexGame::AuthDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexGame_AuthDialog_m943AAA7181A824EA8E50D145F42DE3C60D9ED45C (const RuntimeMethod* method) ;
// System.Void YG.Example.RewardedAd::AdMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_AdMoney_m36B37DBD87E8EE089CCCCAFCEC1548C0A17A7BC1 (RewardedAd_tB4E322B8B8F957778834668CEF81518F0BC37099* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___object0, ___method1, method);
}
// System.Void YG.Example.SaverTest::GetLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaverTest_GetLoad_mE8CC3DF9A605B61E207D5886DFD3C8BCBCA67DAE (SaverTest_tFB9B24486D8B4C45F7E7F26FB4C08859B704676D* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void YG.YandexGame::SaveProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexGame_SaveProgress_m3A9BCE3DCA54FC5CE43C0F6A69DE4B22C403255E (const RuntimeMethod* method) ;
// System.Void YG.YandexGame::LoadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexGame_LoadProgress_m20B9CE214903C04A7FB703443B0960B145C934E9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void YG.Example.YandexMetricaExample::TestSend1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetricaExample_TestSend1_m8DFB7D24550A67DC36422EA0FAC9AEE780ADD062 (YandexMetricaExample_t0B0B8EAF41A768E9ECC3F75D5BD0975EDD5E7B13* __this, String_t* ___someEvent0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void YG.YandexMetrica::Send(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetrica_Send_m6DE3AA2A49B399C5A0DFC65BE60C908EF257E1A5 (String_t* ___eventName0, RuntimeObject* ___eventParams1, const RuntimeMethod* method) ;
// System.Void YG.LeaderboardYG::UpdateLB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardYG_UpdateLB_m09B71C106830D4B0E92FE7FF43B1F4FE63142FBE (LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* __this, const RuntimeMethod* method) ;
// System.Void YG.YandexGame::NewLeaderboardScores(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexGame_NewLeaderboardScores_m0FEB3AB3DA3AF0D14FCD8E3304B9F3512392E09F (String_t* ___nameLB0, int32_t ___score1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void YG.YandexGame::NewLBScoreTimeConvert(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexGame_NewLBScoreTimeConvert_m6992F03973F4381ECFC78F2BCFAAA52DF0EEBB38 (String_t* ___nameLB0, float ___secondsScore1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim::Sin(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E (float ___startValue0, float ___amplitude1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim::Overshoot(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim::Bounce(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Cube::In(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Cube::Out(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Cube::InOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Cube::SoftOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Quint::In(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Quint::Out(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Quint::InOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Quint::SoftOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Sept::In(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sept_In_mD51BE44E422134702A5229440245544360EE5B37 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Sept::Out(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Sept::InOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Sept::SoftOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<MaterialUI.CheckBoxToggler>()
inline CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<MaterialUI.RippleConfig>()
inline RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MaterialUI.CheckboxConfig::TurnOnSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_TurnOnSilent_m511E263F700C6F1A7D55E091234C88FA4B04E077 (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.CheckboxConfig::TurnOffSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_TurnOffSilent_m34E5B63CC5639FCD0B69DCEA30ABF3B2DE716D89 (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.CheckboxConfig::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_TurnOn_m8D0DAD69F987C9DEAE736E955FFF5F2808AC8B5B (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.CheckboxConfig::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_TurnOff_mEA177F1B77BEFA12A15719B72B84EC832138817D (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MaterialUI.Anim::Overshoot(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Anim_Overshoot_m4306436AF6F04B5753F5CA2C96CE3A1E60A6CA3B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// UnityEngine.Color MaterialUI.Anim/Quint::SoftOut(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MaterialUI.Anim/Sept::InOut(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Sept_InOut_m9A697497142F6DEDAE999DC4999072B2B0E9AB1B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// UnityEngine.Color MaterialUI.Anim/Sept::InOut(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Sept_InOut_m446BE1F1757BF0591F1F052F9C0031165BB5812D (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Void MaterialUI.CheckboxConfig::EnableCheckbox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_EnableCheckbox_m79B39ADA3D9E0D0E4A457999F4C42ACDCEFDF4C7 (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.CheckboxConfig::DisableCheckbox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_DisableCheckbox_mBAA65705FA713A6780EA6B385C20998315941C5D (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void MaterialUI.DialogBoxConfig::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogBoxConfig_Close_mCF3E4548B33E3106BC335C60F9896B91A9B791C8 (DialogBoxConfig_t3378B6285D1AD18F703D5279A082FE1F0697201A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<MaterialUI.EZStruct>::get_Count()
inline int32_t List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_inline (List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C*, const RuntimeMethod*))List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<MaterialUI.EZStruct>::get_Item(System.Int32)
inline EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32 (List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 (*) (List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C*, int32_t, const RuntimeMethod*))List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_gshared)(__this, ___index0, method);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponent_m77E0D94E1307893530781656765A4EA09BB63B45 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___type0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MaterialUI.EZStruct>::set_Item(System.Int32,T)
inline void List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D (List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* __this, int32_t ___index0, EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C*, int32_t, EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3, const RuntimeMethod*))List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D_gshared)(__this, ___index0, ___value1, method);
}
// System.Void MaterialUI.EZAnim::AnimStruct(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EZAnim_AnimStruct_m96049A6E546D180F7EA9BD8BC6AC94E51F2365D1 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Single MaterialUI.EZAnim::UpdateAnimation(System.Single,System.Single,System.Single,System.Single,MaterialUI.AnimType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, float ___initialValue0, float ___targetValue1, float ___time2, float ___duration3, int32_t ___animationType4, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MaterialUI.EZAnim::delayedCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EZAnim_delayedCall_m01972B48F38A11B986461A1C8F5237913645DE90 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void MaterialUI.EZAnim/<delayedCall>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayedCallU3Ed__18__ctor_mE181F23277E367A31FE1A139CEAA8552F79EBC43 (U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void MaterialUI.HSBColor::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSBColor__ctor_mBA48AF0F21BDAD5FB4CC615F853D7BA9D23AF0E7 (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* __this, float ___h0, float ___s1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void MaterialUI.HSBColor::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSBColor__ctor_mD6417C57586E9EFB3DDE0DEBBFFBD77E5B69D35D (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* __this, float ___h0, float ___s1, float ___b2, const RuntimeMethod* method) ;
// MaterialUI.HSBColor MaterialUI.HSBColor::FromColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A HSBColor_FromColor_m70EF18BA22C46F43BD47ACC0D7976862A291D05A (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void MaterialUI.HSBColor::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___col0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color MaterialUI.HSBColor::ToColor(MaterialUI.HSBColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSBColor_ToColor_mBF4D235881CF9E626E2DB5E2EE780798C4269607 (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A ___hsbColor0, const RuntimeMethod* method) ;
// UnityEngine.Color MaterialUI.HSBColor::ToColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSBColor_ToColor_mD4D6095D9BD0D9456915100DEE51AD32701A37FF (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* __this, const RuntimeMethod* method) ;
// System.String MaterialUI.HSBColor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HSBColor_ToString_m3854EA49BD60D3F16FF37A9FCF8A5D5EF4074D64 (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m0653422E15193C2E4A4E5AF05236B6315C789C23_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.String UnityEngine.Color::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Font UnityEngine.UI.Text::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* Text_get_font_mBF98ED39D5C5081AF14A64170EC3391D206CCAFD (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___value0, const RuntimeMethod* method) ;
// UnityEngine.FontStyle UnityEngine.UI.Text::get_fontStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Text_get_fontStyle_m7684B5FFE1DC8237FB573A012B482DDB04E3BA47 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Text::get_lineSpacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Text_get_lineSpacing_m124405CE023E0E23D9040BAA84318408248DF9CF (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_lineSpacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_lineSpacing_m36CE565189BAF89DB1DA1E0DE5786521D4763D0E (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Text::get_supportRichText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Text_get_supportRichText_mE5B61670099BB2611BB60D84ADB72C9A54BAC68B (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_supportRichText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_supportRichText_mB4DB141150AEBCCADEFFF4EC7A799F85FD075265 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextAnchor UnityEngine.UI.Text::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Text_get_alignment_m01C4D0437DF8A2E05BE4489779A8BEF231A2F2CC (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.Text::get_horizontalOverflow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Text_get_horizontalOverflow_mC909085F76EF49D62A70A8E503C5BC14C30176F1 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_horizontalOverflow_m10AAFBA65FD7F4B1934B5D628B3E70D75D02FFD6 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Text::get_resizeTextForBestFit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Text_get_resizeTextForBestFit_mA4EEC57C4C188C1598187D1E11A83B950883B011 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputField_get_lineType_m6CEA63D8FCACAEC05D3499577ED0771EFFF33377_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MaterialUI.InputFieldConfig::DelayedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputFieldConfig_DelayedHeight_m89E4535B7C3563EDC94F772282429D8992D65747 (InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void MaterialUI.InputFieldConfig/<DelayedHeight>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedHeightU3Ed__30__ctor_m920598C14F7240D76E977A08165066A2853B9075 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.CanvasScaler>()
inline CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::get_uiScaleMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CanvasScaler_get_uiScaleMode_m8E92609E011796E8CC23B1739F95CE7BE2631525_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::get_referenceResolution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.MaterialUIScaler::set_scaleFactor(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MaterialUIScaler_set_scaleFactor_mBF1565B38029BD9B57F1E14247410963043C30DD_inline (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.CanvasScaler::get_scaleFactor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CanvasScaler_get_scaleFactor_mB2BFA22B99AEC96F09886F490DA9EE2F825D3431_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.MenuArrowAnim::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Menu_m37C9A517D399F0B23E42E0C9D99FFDF76AFB6E27 (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.MenuArrowAnim::Arrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Arrow_m8B506BC0C1668C55235038C6AA10CD1569FD8A9E (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 MaterialUI.Anim/Quint::SoftOut(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Void MaterialUI.NavDrawerConfig::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Close_mA02B61D4C1AEFD33D4A761A90FADCB1B72610272 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 MaterialUI.Anim/Quint::Out(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Quint_Out_m0D5446E0799ABEEEBD1C16AD2D273BCB4246B6A0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.NavDrawerConfig::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Open_m447C2165290EACA621D8EA4964A71CB618E6B7BD (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.ToggleGroup>()
inline ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* Component_GetComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_mF37E1C928AF195AD949836E650B9E7646D1BBA47 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_group_mEE85FE3AB2ACFF9056DA613239DBACECA588507B (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___value0, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::TurnOnSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOnSilent_m5AC09AD9FFB688EC2F9B0A6AD0BB8D4252208EA8 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::TurnOffSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOffSilent_mCA5BF60941B25B4A5551DC9DF4E49406E835845C (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOn_m055CBC4E91A4A14CF0E270B60B4D29AAE92341A1 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOff_mE6BBFD85DDD02E70E6E974350EE76FC13EC74B7B (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::EnableRadioButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_EnableRadioButton_mFEABED3ED154238C697F1FB4C8CE38504F997044 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::DisableRadioButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_DisableRadioButton_mA7A9EDBAE4C57EE8273EFC4644C811CB4E659BF3 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL YandexMetricaSendInternal(char*, char*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D_Multicast(UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* __this, String_t* ___name0, String_t* ___description1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rank2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___photo3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playersName4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scorePlayers5, bool ___auth6, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* currentDelegate = reinterpret_cast<UpdateLB_tE4168E8D801F67070C64299280A153FC81118266*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___name0, ___description1, ___rank2, ___photo3, ___playersName4, ___scorePlayers5, ___auth6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D_OpenInst(UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* __this, String_t* ___name0, String_t* ___description1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rank2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___photo3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playersName4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scorePlayers5, bool ___auth6, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___name0, ___description1, ___rank2, ___photo3, ___playersName4, ___scorePlayers5, ___auth6, method);
}
void UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D_OpenStatic(UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* __this, String_t* ___name0, String_t* ___description1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rank2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___photo3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playersName4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scorePlayers5, bool ___auth6, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___name0, ___description1, ___rank2, ___photo3, ___playersName4, ___scorePlayers5, ___auth6, method);
}
void UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D_OpenStaticInvoker(UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* __this, String_t* ___name0, String_t* ___description1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rank2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___photo3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playersName4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scorePlayers5, bool ___auth6, const RuntimeMethod* method)
{
	InvokerActionInvoker7< String_t*, String_t*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___name0, ___description1, ___rank2, ___photo3, ___playersName4, ___scorePlayers5, ___auth6);
}
void UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D_ClosedStaticInvoker(UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* __this, String_t* ___name0, String_t* ___description1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rank2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___photo3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playersName4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scorePlayers5, bool ___auth6, const RuntimeMethod* method)
{
	InvokerActionInvoker8< RuntimeObject*, String_t*, String_t*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___name0, ___description1, ___rank2, ___photo3, ___playersName4, ___scorePlayers5, ___auth6);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateLB_tE4168E8D801F67070C64299280A153FC81118266 (UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* __this, String_t* ___name0, String_t* ___description1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rank2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___photo3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playersName4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scorePlayers5, bool ___auth6, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, int32_t*, char**, char**, int32_t*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter '___description1' to native representation
	char* ____description1_marshaled = NULL;
	____description1_marshaled = il2cpp_codegen_marshal_string(___description1);

	// Marshaling of parameter '___rank2' to native representation
	int32_t* ____rank2_marshaled = NULL;
	if (___rank2 != NULL)
	{
		____rank2_marshaled = reinterpret_cast<int32_t*>((___rank2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___photo3' to native representation
	char** ____photo3_marshaled = NULL;
	if (___photo3 != NULL)
	{
		il2cpp_array_size_t ____photo3_Length = (___photo3)->max_length;
		____photo3_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____photo3_Length + 1);
		(____photo3_marshaled)[____photo3_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____photo3_Length); i++)
		{
			(____photo3_marshaled)[i] = il2cpp_codegen_marshal_string((___photo3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____photo3_marshaled = NULL;
	}

	// Marshaling of parameter '___playersName4' to native representation
	char** ____playersName4_marshaled = NULL;
	if (___playersName4 != NULL)
	{
		il2cpp_array_size_t ____playersName4_Length = (___playersName4)->max_length;
		____playersName4_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____playersName4_Length + 1);
		(____playersName4_marshaled)[____playersName4_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____playersName4_Length); i++)
		{
			(____playersName4_marshaled)[i] = il2cpp_codegen_marshal_string((___playersName4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____playersName4_marshaled = NULL;
	}

	// Marshaling of parameter '___scorePlayers5' to native representation
	int32_t* ____scorePlayers5_marshaled = NULL;
	if (___scorePlayers5 != NULL)
	{
		____scorePlayers5_marshaled = reinterpret_cast<int32_t*>((___scorePlayers5)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____name0_marshaled, ____description1_marshaled, ____rank2_marshaled, ____photo3_marshaled, ____playersName4_marshaled, ____scorePlayers5_marshaled, static_cast<int32_t>(___auth6));

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter '___description1' native representation
	il2cpp_codegen_marshal_free(____description1_marshaled);
	____description1_marshaled = NULL;

	// Marshaling cleanup of parameter '___photo3' native representation
	if (____photo3_marshaled != NULL)
	{
		const il2cpp_array_size_t ____photo3_marshaled_CleanupLoopCount = (___photo3 != NULL) ? (___photo3)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____photo3_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____photo3_marshaled)[i]);
			(____photo3_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____photo3_marshaled);
		____photo3_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___playersName4' native representation
	if (____playersName4_marshaled != NULL)
	{
		const il2cpp_array_size_t ____playersName4_marshaled_CleanupLoopCount = (___playersName4 != NULL) ? (___playersName4)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____playersName4_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____playersName4_marshaled)[i]);
			(____playersName4_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____playersName4_marshaled);
		____playersName4_marshaled = NULL;
	}

}
// System.Void YG.YandexGame/UpdateLB::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateLB__ctor_m7EDD7F4A2EF3ED76C13D3681527A5A1A932FF57F (UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 7;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D_Multicast;
}
// System.Void YG.YandexGame/UpdateLB::Invoke(System.String,System.String,System.Int32[],System.String[],System.String[],System.Int32[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateLB_Invoke_mFB88416618D81E5B2164CDE6CB018430197D9F0D (UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* __this, String_t* ___name0, String_t* ___description1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rank2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___photo3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playersName4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scorePlayers5, bool ___auth6, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___name0, ___description1, ___rank2, ___photo3, ___playersName4, ___scorePlayers5, ___auth6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult YG.YandexGame/UpdateLB::BeginInvoke(System.String,System.String,System.Int32[],System.String[],System.String[],System.Int32[],System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateLB_BeginInvoke_mA4E941F7A9FAD6DA6E2F20EAC2971477891E4396 (UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* __this, String_t* ___name0, String_t* ___description1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rank2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___photo3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playersName4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scorePlayers5, bool ___auth6, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback7, RuntimeObject* ___object8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = ___name0;
	__d_args[1] = ___description1;
	__d_args[2] = ___rank2;
	__d_args[3] = ___photo3;
	__d_args[4] = ___playersName4;
	__d_args[5] = ___scorePlayers5;
	__d_args[6] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___auth6);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);
}
// System.Void YG.YandexGame/UpdateLB::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateLB_EndInvoke_m749DDD463353355229061A672C1971E32E6A59A4 (UpdateLB_tE4168E8D801F67070C64299280A153FC81118266* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YG.YandexGame/JsonAuth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonAuth__ctor_m5B0FC90262503687CB11833D240628684632A537 (JsonAuth_t9FFFF967780865B60F1CA6916B313AD586BC307B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void YG.YandexGame/JsonLB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonLB__ctor_m328187947405EAC4959E5DCA82B4C7BEE656D5AB (JsonLB_tF8D632D5951EBA590900F7F0F1DE1E0A9C2FED32* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void YG.YandexGame/JsonEnvironmentData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonEnvironmentData__ctor_m22E45B0CBF55C9A5759A8AFE869FD271E8ED5C7D (JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4FDB95127E13C5A6EE35E465C184E86F9C46BB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string language = "ru";
		__this->___language_0 = _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___language_0), (void*)_stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37);
		// public string domain = "ru";
		__this->___domain_1 = _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___domain_1), (void*)_stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37);
		// public string deviceType = "desktop";
		__this->___deviceType_2 = _stringLiteralA4FDB95127E13C5A6EE35E465C184E86F9C46BB2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceType_2), (void*)_stringLiteralA4FDB95127E13C5A6EE35E465C184E86F9C46BB2);
		// public bool isDesktop = true;
		__this->___isDesktop_4 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void YG.YandexGame/JsonPayments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPayments__ctor_m9E7B9723D7115FFA22F07451B2057E5EADFA904F (JsonPayments_tD09184E4255ED908B15C3B9917DA72E52D1891A4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void YG.Purchase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Purchase__ctor_mBB8A2983D6C30FF1EF17F42B343EA3A82023E91F (Purchase_t5E0066DC410F062B08750C5CE865AA6A72B1C1FA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void YG.YandexMetrica::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetrica_Send_m8230AD0B4B166341914472B36ED4C1EE4775B558 (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YandexMetricaSend(eventName, string.Empty);
		String_t* L_0 = ___eventName0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		YandexMetrica_YandexMetricaSend_m7F6D36F5F72403B33D29246438E076EE2A857585(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void YG.YandexMetrica::Send(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetrica_Send_m6DE3AA2A49B399C5A0DFC65BE60C908EF257E1A5 (String_t* ___eventName0, RuntimeObject* ___eventParams1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (eventParams == null || eventParams.Count == 0)
		RuntimeObject* L_0 = ___eventParams1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___eventParams1;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}

IL_000b:
	{
		// Send(eventName);
		String_t* L_3 = ___eventName0;
		YandexMetrica_Send_m8230AD0B4B166341914472B36ED4C1EE4775B558(L_3, NULL);
		// return;
		return;
	}

IL_0012:
	{
		// var eventParamsJson = JsonUtils.ToJson(eventParams);
		RuntimeObject* L_4 = ___eventParams1;
		String_t* L_5;
		L_5 = JsonUtils_ToJson_m3E3F70313FB40E96BD8EDE934F5F4FA593F5C622(L_4, NULL);
		V_0 = L_5;
		// if (string.IsNullOrEmpty(eventParamsJson))
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		// Send(eventName);
		String_t* L_8 = ___eventName0;
		YandexMetrica_Send_m8230AD0B4B166341914472B36ED4C1EE4775B558(L_8, NULL);
		// return;
		return;
	}

IL_0028:
	{
		// YandexMetricaSend(eventName, eventParamsJson);
		String_t* L_9 = ___eventName0;
		String_t* L_10 = V_0;
		YandexMetrica_YandexMetricaSend_m7F6D36F5F72403B33D29246438E076EE2A857585(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean YG.YandexMetrica::YandexMetricaSendInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YandexMetrica_YandexMetricaSendInternal_mAA079F57DBE98A1F8C4D9197E56D53BA2AE0BE3E (String_t* ___eventName0, String_t* ___eventData1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___eventName0' to native representation
	char* ____eventName0_marshaled = NULL;
	____eventName0_marshaled = il2cpp_codegen_marshal_string(___eventName0);

	// Marshaling of parameter '___eventData1' to native representation
	char* ____eventData1_marshaled = NULL;
	____eventData1_marshaled = il2cpp_codegen_marshal_string(___eventData1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(YandexMetricaSendInternal)(____eventName0_marshaled, ____eventData1_marshaled);

	// Marshaling cleanup of parameter '___eventName0' native representation
	il2cpp_codegen_marshal_free(____eventName0_marshaled);
	____eventName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___eventData1' native representation
	il2cpp_codegen_marshal_free(____eventData1_marshaled);
	____eventData1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void YG.YandexMetrica::YandexMetricaSend(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetrica_YandexMetricaSend_m7F6D36F5F72403B33D29246438E076EE2A857585 (String_t* ___eventName0, String_t* ___eventData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (YandexGame.Instance.infoYG.metricaEnable)
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___Instance_36;
		InfoYG_t2F18C3DC89E34D2ADF9CEEA69D22BE4D03773EF4* L_1 = L_0->___infoYG_4;
		bool L_2 = L_1->___metricaEnable_11;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// YandexMetricaSendInternal(eventName, eventData);
		String_t* L_3 = ___eventName0;
		String_t* L_4 = ___eventData1;
		bool L_5;
		L_5 = YandexMetrica_YandexMetricaSendInternal_mAA079F57DBE98A1F8C4D9197E56D53BA2AE0BE3E(L_3, L_4, NULL);
	}

IL_0019:
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
// System.Void YG.SavesYG::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavesYG__ctor_mED5121897A503A13E6AF36F6AED104C16EDB3560 (SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A42D4129737B9D8C1DEE75879B6AA83C8F74D22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool isFirstSession = true;
		__this->___isFirstSession_1 = (bool)1;
		// public string language = "ru";
		__this->___language_2 = _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___language_2), (void*)_stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37);
		// public int money = 1;                       // ????? ?????? ????? ???????? ?? ?????????
		__this->___money_4 = 1;
		// public string newPlayerName = "Hello!";
		__this->___newPlayerName_5 = _stringLiteral1A42D4129737B9D8C1DEE75879B6AA83C8F74D22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___newPlayerName_5), (void*)_stringLiteral1A42D4129737B9D8C1DEE75879B6AA83C8F74D22);
		// public bool[] openLevels = new bool[3];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___openLevels_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___openLevels_6), (void*)L_0);
		// public SavesYG()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// openLevels[1] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->___openLevels_6;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (bool)1);
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
// System.Void YG.Insides.ConfigYG::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigYG__ctor_m91A63B8DB334084D846DCD76A89E24949ECD7F6E (ConfigYG_tA2D268B4AEDEB43A2899137C3B754999D11A8801* __this, const RuntimeMethod* method) 
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
// System.String YG.Insides.JsonUtils::ToJson(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtils_ToJson_m3E3F70313FB40E96BD8EDE934F5F4FA593F5C622 (RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var jsonString = "{";
		V_0 = _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
		// var kvpCount = 0;
		V_1 = 0;
		// foreach (var kvp in dictionary)
		RuntimeObject* L_0 = ___dictionary0;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_0);
		V_2 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_2;
					if (!L_2)
					{
						goto IL_008c;
					}
				}
				{
					RuntimeObject* L_3 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_008c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0079_1;
			}

IL_0011_1:
			{
				// foreach (var kvp in dictionary)
				RuntimeObject* L_4 = V_2;
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_4);
				V_3 = L_5;
				// if (string.IsNullOrEmpty(kvp.Key) || string.IsNullOrEmpty(kvp.Value)) continue;
				String_t* L_6;
				L_6 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				bool L_7;
				L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
				if (L_7)
				{
					goto IL_0079_1;
				}
			}
			{
				String_t* L_8;
				L_8 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				bool L_9;
				L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
				if (L_9)
				{
					goto IL_0079_1;
				}
			}
			{
				// jsonString += $"\"{kvp.Key}\":{GetValueString(kvp.Value)},";
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
				String_t* L_12 = V_0;
				ArrayElementTypeCheck (L_11, L_12);
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
				ArrayElementTypeCheck (L_13, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				ArrayElementTypeCheck (L_14, L_15);
				(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_15);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
				ArrayElementTypeCheck (L_16, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
				(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
				String_t* L_18;
				L_18 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				String_t* L_19;
				L_19 = JsonUtils_GetValueString_mF521F4DCA88CE04855E0AB8FD2C4643C3E402FB8(L_18, NULL);
				ArrayElementTypeCheck (L_17, L_19);
				(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_19);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
				ArrayElementTypeCheck (L_20, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
				(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
				String_t* L_21;
				L_21 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_20, NULL);
				V_0 = L_21;
				// kvpCount++;
				int32_t L_22 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
			}

IL_0079_1:
			{
				// foreach (var kvp in dictionary)
				RuntimeObject* L_23 = V_2;
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_008d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		// if (kvpCount == 0) return string.Empty;
		int32_t L_25 = V_1;
		if (L_25)
		{
			goto IL_0096;
		}
	}
	{
		// if (kvpCount == 0) return string.Empty;
		String_t* L_26 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_26;
	}

IL_0096:
	{
		// if (dictionary.Count > 0)
		RuntimeObject* L_27 = ___dictionary0;
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, L_27);
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		// jsonString = jsonString.Remove(jsonString.Length - 1);
		String_t* L_29 = V_0;
		String_t* L_30 = V_0;
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		String_t* L_32;
		L_32 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_29, ((int32_t)il2cpp_codegen_subtract(L_31, 1)), NULL);
		V_0 = L_32;
	}

IL_00ae:
	{
		// jsonString += "}";
		String_t* L_33 = V_0;
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_33, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_0 = L_34;
		// return jsonString;
		String_t* L_35 = V_0;
		return L_35;
	}
}
// System.String YG.Insides.JsonUtils::GetValueString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtils_GetValueString_mF521F4DCA88CE04855E0AB8FD2C4643C3E402FB8 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (int.TryParse(value, out var intValue))
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return intValue.ToString();
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		return L_2;
	}

IL_0012:
	{
		// if (float.TryParse(value, out var floatValue))
		String_t* L_3 = ___value0;
		bool L_4;
		L_4 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_3, (&V_1), NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// return floatValue.ToString(CultureInfo.InvariantCulture);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_6;
		L_6 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_1), L_5, NULL);
		return L_6;
	}

IL_0029:
	{
		// if (bool.TryParse(value, out var boolValue))
		String_t* L_7 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_7, (&V_2), NULL);
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// return boolValue.ToString().ToLower();
		String_t* L_9;
		L_9 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_2), NULL);
		String_t* L_10;
		L_10 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_9, NULL);
		return L_10;
	}

IL_0040:
	{
		// value = value.Replace("\\", "\\\\").Replace("\"", "\\\"");
		String_t* L_11 = ___value0;
		String_t* L_12;
		L_12 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		String_t* L_13;
		L_13 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_12, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		___value0 = L_13;
		// return $"\"{value}\"";
		String_t* L_14 = ___value0;
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_14, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		return L_15;
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
// System.Void YG.Example.DebugViewing::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewing_Update_mFA9C6740DA157514A1F5DFF086DD12832398F442 (DebugViewing_tFCACE0EC9D417C353028E41BFAFBAB5DE382BF5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9083AD61E325F62D95434D141517AB6D92F2BBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6CE4732396C9B26BE161F0743C87ECA151A1D67);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		// cubeRotation.Rotate(Vector3.up * 30 * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___cubeRotation_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (30.0f), NULL);
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_4, NULL);
		// timeScale.text = "timeScale: " + Time.timeScale;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___timeScale_5;
		float L_6;
		L_6 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC9083AD61E325F62D95434D141517AB6D92F2BBB, L_7, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// audioPause.text = "audioPause: " + AudioListener.pause;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___audioPause_6;
		bool L_10;
		L_10 = AudioListener_get_pause_mD5DE01AAFDE5CB1F747762091F18FF95963FF473(NULL);
		V_1 = L_10;
		String_t* L_11;
		L_11 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE6CE4732396C9B26BE161F0743C87ECA151A1D67, L_11, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
		// }
		return;
	}
}
// System.Void YG.Example.DebugViewing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewing__ctor_m0FA49B8662B8AB12F77837CDF05E7808EA0BF0AA (DebugViewing_tFCACE0EC9D417C353028E41BFAFBAB5DE382BF5D* __this, const RuntimeMethod* method) 
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
// System.Void YG.Example.GetLederboardData::DebugLederboardData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLederboardData_DebugLederboardData_m8EF3BBE3B1E7AB04BAE5D66C105D320E0158CDA1 (GetLederboardData_tA23B182CD2C1A9BF41840F1B88D71DDAB2627EC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3675804A90499E72614FEA8D6788ACE536F9BA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AA78F14AF0E43B106AC5092A57B31432896E68D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7DFF224E501849893EB942073D0C77D91B3ABD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	PlayersDataU5BU5D_t37CBCC977EB5624B6534C8EDD67EC305F80F8691* V_1 = NULL;
	int32_t V_2 = 0;
	PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// string debugData = $"Debug players data from the leaderboard '{leaderboardYG.name}':\n";
		LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* L_0 = __this->___leaderboardYG_4;
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFE7DFF224E501849893EB942073D0C77D91B3ABD, L_1, _stringLiteral3AA78F14AF0E43B106AC5092A57B31432896E68D, NULL);
		V_0 = L_2;
		// foreach (LeaderboardYG.PlayersData data in leaderboardYG.playersData)
		LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* L_3 = __this->___leaderboardYG_4;
		PlayersDataU5BU5D_t37CBCC977EB5624B6534C8EDD67EC305F80F8691* L_4 = L_3->___playersData_16;
		V_1 = L_4;
		V_2 = 0;
		goto IL_006a;
	}

IL_002b:
	{
		// foreach (LeaderboardYG.PlayersData data in leaderboardYG.playersData)
		PlayersDataU5BU5D_t37CBCC977EB5624B6534C8EDD67EC305F80F8691* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// string scoreTimeConvert = leaderboardYG.TimeTypeConvert(data.score);
		LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* L_9 = __this->___leaderboardYG_4;
		PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44* L_10 = V_3;
		int32_t L_11 = L_10->___score_2;
		String_t* L_12;
		L_12 = LeaderboardYG_TimeTypeConvert_m2210FE73695FEE2BE654450809C8EF32BE8BB5E5(L_9, L_11, NULL);
		V_4 = L_12;
		// debugData += $"{data.rank}. {data.name} {scoreTimeConvert}\n";
		String_t* L_13 = V_0;
		PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44* L_14 = V_3;
		int32_t L_15 = L_14->___rank_1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		PlayersData_tD0B30C46F067CA915B0E0DFA5010EB52F857AC44* L_18 = V_3;
		String_t* L_19 = L_18->___name_0;
		String_t* L_20 = V_4;
		String_t* L_21;
		L_21 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral3675804A90499E72614FEA8D6788ACE536F9BA0A, L_17, L_19, L_20, NULL);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_13, L_21, NULL);
		V_0 = L_22;
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_006a:
	{
		// foreach (LeaderboardYG.PlayersData data in leaderboardYG.playersData)
		int32_t L_24 = V_2;
		PlayersDataU5BU5D_t37CBCC977EB5624B6534C8EDD67EC305F80F8691* L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		// Debug.Log(debugData);
		String_t* L_26 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_26, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.GetLederboardData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLederboardData__ctor_mED4A751E8C0FB6898533D89F53896CA50F7DC48D (GetLederboardData_tA23B182CD2C1A9BF41840F1B88D71DDAB2627EC5* __this, const RuntimeMethod* method) 
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
// System.Void YG.Example.GetPlayerData::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerData_OnEnable_m12F6F48962F1D923C35EA17FB4F9707D6205870C (GetPlayerData_t54755AC7EB8730B15B64E228BCD3BDCEA5CC49A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetPlayerData_DebugData_mDA3167B17E6FE9B3EFAEE92DE75325D414091C8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnEnable() => YandexGame.GetDataEvent += DebugData;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)GetPlayerData_DebugData_mDA3167B17E6FE9B3EFAEE92DE75325D414091C8C_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void YG.Example.GetPlayerData::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerData_OnDisable_mAF7500A0CED2F3B88B71E6713777E8E569250514 (GetPlayerData_t54755AC7EB8730B15B64E228BCD3BDCEA5CC49A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetPlayerData_DebugData_mDA3167B17E6FE9B3EFAEE92DE75325D414091C8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnDisable() => YandexGame.GetDataEvent -= DebugData;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)GetPlayerData_DebugData_mDA3167B17E6FE9B3EFAEE92DE75325D414091C8C_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void YG.Example.GetPlayerData::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerData_Awake_m43F72EE0038FF1BB3A08E747F58558A878F3DE67 (GetPlayerData_t54755AC7EB8730B15B64E228BCD3BDCEA5CC49A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (YandexGame.SDKEnabled)
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = YandexGame_get_SDKEnabled_mDE2A25B7CA3B547ADC0468C5329BA9DB79A4B25B_inline(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// DebugData();
		GetPlayerData_DebugData_mDA3167B17E6FE9B3EFAEE92DE75325D414091C8C(__this, NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void YG.Example.GetPlayerData::DebugData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerData_DebugData_mDA3167B17E6FE9B3EFAEE92DE75325D414091C8C (GetPlayerData_t54755AC7EB8730B15B64E228BCD3BDCEA5CC49A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25709CE8A6D5A8A75AAB438AE13FF6ED3C59EA9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3222DFD3887F2D0D1F532C50001E697740B3F1E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39AF3D436C99C728A2956F740562617A0F75553E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C4718DB1F64DE5DC92D2021D8F848FE1B73B315);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F432EAD79A818B27FB30625FF1E3577AC0637C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral632CB49BD282DCC95D1409C254F376C751EB8B69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6650691DA8A8A8D7250B362BC51BA2A5C574E531);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral692F9EDB80CC8842B9939724FA3E8A31D1C0EAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6983E709078D363974472C571FA9B1B634EABBB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FC01DF3685163D2FF38663839E23168CF564FE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8330107D62A11E200AC478F20F66FA878264B3D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33660A4B327726AB5AE4E4A9C690ED69567BC8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA536017036AF16FB495A2C312870A637969FF371);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF5B296CCA9EC238F63F6EDC015F03054E22309D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD734D87988B4FA89B05AA1003CFFC20E2C72EF53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE83E271EB04638AE5B6BEDA2238BF84588CAF51F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF72BCCE2CD89F30C61098993BD0C17C8A8BA7189);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// string playerId = YandexGame.playerId;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = YandexGame_get_playerId_m6DBD844F8285EDB9C60CCA925E27B4FA71681445_inline(NULL);
		V_0 = L_0;
		// if (playerId.Length > 7)
		String_t* L_1 = V_0;
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)7)))
		{
			goto IL_0021;
		}
	}
	{
		// playerId = playerId.Remove(7) + "...";
		String_t* L_3 = V_0;
		String_t* L_4;
		L_4 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_3, 7, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, NULL);
		V_0 = L_5;
	}

IL_0021:
	{
		// textPlayerData.text = "playerName - " + YandexGame.playerName +
		//     "\nplayerId - " + playerId +
		//     "\nauth - " + YandexGame.auth +
		//     "\nSDKEnabled - " + YandexGame.SDKEnabled +
		//     "\ninitializedLB - " + YandexGame.initializedLB +
		//     "\nphotoSize - " + YandexGame.photoSize;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___textPlayerData_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral8330107D62A11E200AC478F20F66FA878264B3D7);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8330107D62A11E200AC478F20F66FA878264B3D7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = YandexGame_get_playerName_mE314B9E33058B62F776846B3582040E6276FDF19_inline(NULL);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		ArrayElementTypeCheck (L_11, _stringLiteral692F9EDB80CC8842B9939724FA3E8A31D1C0EAD9);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral692F9EDB80CC8842B9939724FA3E8A31D1C0EAD9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13 = V_0;
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		ArrayElementTypeCheck (L_14, _stringLiteralA536017036AF16FB495A2C312870A637969FF371);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA536017036AF16FB495A2C312870A637969FF371);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		bool L_16;
		L_16 = YandexGame_get_auth_m054367937F060417384038F64ABFEA7A086E4E8E_inline(NULL);
		V_1 = L_16;
		String_t* L_17;
		L_17 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_15;
		ArrayElementTypeCheck (L_18, _stringLiteral6983E709078D363974472C571FA9B1B634EABBB6);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral6983E709078D363974472C571FA9B1B634EABBB6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		bool L_20;
		L_20 = YandexGame_get_SDKEnabled_mDE2A25B7CA3B547ADC0468C5329BA9DB79A4B25B_inline(NULL);
		V_1 = L_20;
		String_t* L_21;
		L_21 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_19;
		ArrayElementTypeCheck (L_22, _stringLiteral3C4718DB1F64DE5DC92D2021D8F848FE1B73B315);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3C4718DB1F64DE5DC92D2021D8F848FE1B73B315);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		bool L_24;
		L_24 = YandexGame_get_initializedLB_m9E3819F6AB97B1137A58B6627C1D9EC77659B685_inline(NULL);
		V_1 = L_24;
		String_t* L_25;
		L_25 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_23;
		ArrayElementTypeCheck (L_26, _stringLiteral3222DFD3887F2D0D1F532C50001E697740B3F1E6);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral3222DFD3887F2D0D1F532C50001E697740B3F1E6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		String_t* L_28;
		L_28 = YandexGame_get_photoSize_mD14EE12CD4224E85546A40C9FFE3937D8C8A2A04_inline(NULL);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_28);
		String_t* L_29;
		L_29 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_27, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_29);
		// if (imageLoad != null && YandexGame.auth)
		ImageLoadYG_t2628D720C7083E1DDC9E53F2124D32709C154CB7* L_30 = __this->___imageLoad_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_00d4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = YandexGame_get_auth_m054367937F060417384038F64ABFEA7A086E4E8E_inline(NULL);
		if (!L_32)
		{
			goto IL_00d4;
		}
	}
	{
		// imageLoad.Load(YandexGame.playerPhoto);
		ImageLoadYG_t2628D720C7083E1DDC9E53F2124D32709C154CB7* L_33 = __this->___imageLoad_4;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = YandexGame_get_playerPhoto_m8DABC3711A533145D551AF8EB1ADD0520DA80CEF_inline(NULL);
		ImageLoadYG_Load_mDDAF59108D3F83F52E9FFEF8C8DE333C05EF2905(L_33, L_34, NULL);
	}

IL_00d4:
	{
		// textEnvirData.text = "domain - " + YandexGame.EnvironmentData.domain +
		//     "\ndeviceType - " + YandexGame.EnvironmentData.deviceType +
		//     "\nisMobile - " + YandexGame.EnvironmentData.isMobile +
		//     "\nisDesktop - " + YandexGame.EnvironmentData.isDesktop +
		//     "\nisTablet - " + YandexGame.EnvironmentData.isTablet +
		//     "\nisTV - " + YandexGame.EnvironmentData.isTV +
		//     "\nisTablet - " + YandexGame.EnvironmentData.isTablet +
		//     "\nappID - " + YandexGame.EnvironmentData.appID +
		//     "\nbrowserLang - " + YandexGame.EnvironmentData.browserLang +
		//     "\npayload - " + YandexGame.EnvironmentData.payload +
		//     "\npromptCanShow - " + YandexGame.EnvironmentData.promptCanShow +
		//     "\nreviewCanShow - " + YandexGame.EnvironmentData.reviewCanShow;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___textEnvirData_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		ArrayElementTypeCheck (L_37, _stringLiteral632CB49BD282DCC95D1409C254F376C751EB8B69);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral632CB49BD282DCC95D1409C254F376C751EB8B69);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_39 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		String_t* L_40 = L_39->___domain_1;
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_38;
		ArrayElementTypeCheck (L_41, _stringLiteral6650691DA8A8A8D7250B362BC51BA2A5C574E531);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6650691DA8A8A8D7250B362BC51BA2A5C574E531);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_43 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		String_t* L_44 = L_43->___deviceType_2;
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_42;
		ArrayElementTypeCheck (L_45, _stringLiteralCF5B296CCA9EC238F63F6EDC015F03054E22309D);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCF5B296CCA9EC238F63F6EDC015F03054E22309D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_47 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		bool* L_48 = (&L_47->___isMobile_3);
		String_t* L_49;
		L_49 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_48, NULL);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_46;
		ArrayElementTypeCheck (L_50, _stringLiteralF72BCCE2CD89F30C61098993BD0C17C8A8BA7189);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralF72BCCE2CD89F30C61098993BD0C17C8A8BA7189);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_50;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_52 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		bool* L_53 = (&L_52->___isDesktop_4);
		String_t* L_54;
		L_54 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_53, NULL);
		ArrayElementTypeCheck (L_51, L_54);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_54);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = L_51;
		ArrayElementTypeCheck (L_55, _stringLiteralD734D87988B4FA89B05AA1003CFFC20E2C72EF53);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralD734D87988B4FA89B05AA1003CFFC20E2C72EF53);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_55;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_57 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		bool* L_58 = (&L_57->___isTablet_5);
		String_t* L_59;
		L_59 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_58, NULL);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_59);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_56;
		ArrayElementTypeCheck (L_60, _stringLiteral39AF3D436C99C728A2956F740562617A0F75553E);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral39AF3D436C99C728A2956F740562617A0F75553E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_60;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_62 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		bool* L_63 = (&L_62->___isTV_6);
		String_t* L_64;
		L_64 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_63, NULL);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_61;
		ArrayElementTypeCheck (L_65, _stringLiteralD734D87988B4FA89B05AA1003CFFC20E2C72EF53);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralD734D87988B4FA89B05AA1003CFFC20E2C72EF53);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_67 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		bool* L_68 = (&L_67->___isTablet_5);
		String_t* L_69;
		L_69 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_68, NULL);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_69);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = L_66;
		ArrayElementTypeCheck (L_70, _stringLiteral5F432EAD79A818B27FB30625FF1E3577AC0637C9);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral5F432EAD79A818B27FB30625FF1E3577AC0637C9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_70;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_72 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		String_t* L_73 = L_72->___appID_7;
		ArrayElementTypeCheck (L_71, L_73);
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_71;
		ArrayElementTypeCheck (L_74, _stringLiteralA33660A4B327726AB5AE4E4A9C690ED69567BC8D);
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralA33660A4B327726AB5AE4E4A9C690ED69567BC8D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_74;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_76 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		String_t* L_77 = L_76->___browserLang_8;
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_77);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_75;
		ArrayElementTypeCheck (L_78, _stringLiteralE83E271EB04638AE5B6BEDA2238BF84588CAF51F);
		(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteralE83E271EB04638AE5B6BEDA2238BF84588CAF51F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_78;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_80 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		String_t* L_81 = L_80->___payload_9;
		ArrayElementTypeCheck (L_79, L_81);
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)L_81);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = L_79;
		ArrayElementTypeCheck (L_82, _stringLiteral25709CE8A6D5A8A75AAB438AE13FF6ED3C59EA9E);
		(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral25709CE8A6D5A8A75AAB438AE13FF6ED3C59EA9E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_82;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_84 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		bool* L_85 = (&L_84->___promptCanShow_10);
		String_t* L_86;
		L_86 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_85, NULL);
		ArrayElementTypeCheck (L_83, L_86);
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)L_86);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = L_83;
		ArrayElementTypeCheck (L_87, _stringLiteral6FC01DF3685163D2FF38663839E23168CF564FE1);
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral6FC01DF3685163D2FF38663839E23168CF564FE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = L_87;
		JsonEnvironmentData_t95604A70A7F5C525DD22276659678EEC5300D638* L_89 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___EnvironmentData_34;
		bool* L_90 = (&L_89->___reviewCanShow_11);
		String_t* L_91;
		L_91 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_90, NULL);
		ArrayElementTypeCheck (L_88, L_91);
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)L_91);
		String_t* L_92;
		L_92 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_88, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_92);
		// }
		return;
	}
}
// System.Void YG.Example.GetPlayerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerData__ctor_mFCB37F92DBCB4E2258442E16E283C3C3B5D3ACDB (GetPlayerData_t54755AC7EB8730B15B64E228BCD3BDCEA5CC49A9* __this, const RuntimeMethod* method) 
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
// System.Void YG.Example.LanguageExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageExample_Awake_mDA68D929FD8201F7AC06A8C6AC228D8FF048541B (LanguageExample_t8198AA6B921C7197E71B213B0F303ABA8259AA58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textObj = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___textObj_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textObj_7), (void*)L_0);
		// SwitchLanguage(YandexGame.savesData.language);
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* L_1 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___savesData_33;
		String_t* L_2 = L_1->___language_2;
		LanguageExample_SwitchLanguage_mC6FFE3D60BB27918BD1E00627410FA6EB123116C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.LanguageExample::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageExample_OnEnable_mD04CDDB75205D2EA27919F0E5F8CAF6033576EB6 (LanguageExample_t8198AA6B921C7197E71B213B0F303ABA8259AA58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguageExample_SwitchLanguage_mC6FFE3D60BB27918BD1E00627410FA6EB123116C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnEnable() => YandexGame.SwitchLangEvent += SwitchLanguage;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___SwitchLangEvent_40;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, __this, (intptr_t)((void*)LanguageExample_SwitchLanguage_mC6FFE3D60BB27918BD1E00627410FA6EB123116C_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___SwitchLangEvent_40 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___SwitchLangEvent_40), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void YG.Example.LanguageExample::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageExample_OnDisable_m769B17DB1552B9FA65C313BF49FA577E278B818F (LanguageExample_t8198AA6B921C7197E71B213B0F303ABA8259AA58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LanguageExample_SwitchLanguage_mC6FFE3D60BB27918BD1E00627410FA6EB123116C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnDisable() => YandexGame.SwitchLangEvent -= SwitchLanguage;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___SwitchLangEvent_40;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, __this, (intptr_t)((void*)LanguageExample_SwitchLanguage_mC6FFE3D60BB27918BD1E00627410FA6EB123116C_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___SwitchLangEvent_40 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___SwitchLangEvent_40), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void YG.Example.LanguageExample::SwitchLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageExample_SwitchLanguage_mC6FFE3D60BB27918BD1E00627410FA6EB123116C (LanguageExample_t8198AA6B921C7197E71B213B0F303ABA8259AA58* __this, String_t* ___lang0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___lang0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___lang0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0040;
	}

IL_001c:
	{
		// textObj.text = ru;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___textObj_7;
		String_t* L_5 = __this->___ru_4;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// break;
		return;
	}

IL_002e:
	{
		// textObj.text = tr;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___textObj_7;
		String_t* L_7 = __this->___tr_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// break;
		return;
	}

IL_0040:
	{
		// textObj.text = en;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___textObj_7;
		String_t* L_9 = __this->___en_5;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void YG.Example.LanguageExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageExample__ctor_m1B9A301A3A593AB5FABD36DF95710D2957DD6760 (LanguageExample_t8198AA6B921C7197E71B213B0F303ABA8259AA58* __this, const RuntimeMethod* method) 
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
// System.Void YG.Example.OpenAuthorizationDialog::OpenAuthDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenAuthorizationDialog_OpenAuthDialog_m845756AB13BB279B054AE8EB7545E7AE23648D1B (OpenAuthorizationDialog_t05A5975254F1E4A036D705FF956AC9438199820A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YandexGame.AuthDialog();
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		YandexGame_AuthDialog_m943AAA7181A824EA8E50D145F42DE3C60D9ED45C(NULL);
		// }
		return;
	}
}
// System.Void YG.Example.OpenAuthorizationDialog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenAuthorizationDialog__ctor_mAFD9A3E73704F506CB026EE4727E06319B3C0FDE (OpenAuthorizationDialog_t05A5975254F1E4A036D705FF956AC9438199820A* __this, const RuntimeMethod* method) 
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
// System.Void YG.Example.RewardedAd::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Awake_m8F2648E1A5D42A8129E20D8D7B9B206A2BA4B073 (RewardedAd_tB4E322B8B8F957778834668CEF81518F0BC37099* __this, const RuntimeMethod* method) 
{
	{
		// AdMoney(0);
		RewardedAd_AdMoney_m36B37DBD87E8EE089CCCCAFCEC1548C0A17A7BC1(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.RewardedAd::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_OnEnable_m883649A58C116CBD9A288CFDD989B17D83990E44 (RewardedAd_tB4E322B8B8F957778834668CEF81518F0BC37099* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_Rewarded_m093BAC95D29A4E5E79FAB4A5752D5A6253E0C590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnEnable() => YandexGame.RewardVideoEvent += Rewarded;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___RewardVideoEvent_46;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_1, __this, (intptr_t)((void*)RewardedAd_Rewarded_m093BAC95D29A4E5E79FAB4A5752D5A6253E0C590_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___RewardVideoEvent_46 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_2, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___RewardVideoEvent_46), (void*)((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_2, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void YG.Example.RewardedAd::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_OnDisable_m3D1D331B9BF2D4C85DC312DA810708BB5A4EFCA5 (RewardedAd_tB4E322B8B8F957778834668CEF81518F0BC37099* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_Rewarded_m093BAC95D29A4E5E79FAB4A5752D5A6253E0C590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnDisable() => YandexGame.RewardVideoEvent -= Rewarded;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___RewardVideoEvent_46;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_1, __this, (intptr_t)((void*)RewardedAd_Rewarded_m093BAC95D29A4E5E79FAB4A5752D5A6253E0C590_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___RewardVideoEvent_46 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_2, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___RewardVideoEvent_46), (void*)((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_2, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void YG.Example.RewardedAd::Rewarded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Rewarded_m093BAC95D29A4E5E79FAB4A5752D5A6253E0C590 (RewardedAd_tB4E322B8B8F957778834668CEF81518F0BC37099* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// if (id == AdID)
		int32_t L_0 = ___id0;
		int32_t L_1 = __this->___AdID_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		// AdMoney(1);
		RewardedAd_AdMoney_m36B37DBD87E8EE089CCCCAFCEC1548C0A17A7BC1(__this, 1, NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void YG.Example.RewardedAd::AdMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_AdMoney_m36B37DBD87E8EE089CCCCAFCEC1548C0A17A7BC1 (RewardedAd_tB4E322B8B8F957778834668CEF81518F0BC37099* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// moneyCount += count;
		int32_t L_0 = __this->___moneyCount_6;
		int32_t L_1 = ___count0;
		__this->___moneyCount_6 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// textMoney.text = "" + moneyCount;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___textMoney_5;
		int32_t* L_3 = (&__this->___moneyCount_6);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_2;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_2;
			goto IL_0028;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0028:
	{
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void YG.Example.RewardedAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m3643A42F6B007E58CE2E6FC6768968538EC832B9 (RewardedAd_tB4E322B8B8F957778834668CEF81518F0BC37099* __this, const RuntimeMethod* method) 
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
// System.Void YG.Example.SaverTest::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaverTest_OnEnable_mA6ABBA3A58C530F177617F5532E443B3FAE738E5 (SaverTest_tFB9B24486D8B4C45F7E7F26FB4C08859B704676D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaverTest_GetLoad_mE8CC3DF9A605B61E207D5886DFD3C8BCBCA67DAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnEnable() => YandexGame.GetDataEvent += GetLoad;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)SaverTest_GetLoad_mE8CC3DF9A605B61E207D5886DFD3C8BCBCA67DAE_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void YG.Example.SaverTest::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaverTest_OnDisable_m386039030181FCF99B23C0B3D2441FA803E4F41E (SaverTest_tFB9B24486D8B4C45F7E7F26FB4C08859B704676D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaverTest_GetLoad_mE8CC3DF9A605B61E207D5886DFD3C8BCBCA67DAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnDisable() => YandexGame.GetDataEvent -= GetLoad;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)SaverTest_GetLoad_mE8CC3DF9A605B61E207D5886DFD3C8BCBCA67DAE_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___GetDataEvent_38), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void YG.Example.SaverTest::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaverTest_Awake_m5592FD368DE20294C898DF40AA5922883B5D38CD (SaverTest_tFB9B24486D8B4C45F7E7F26FB4C08859B704676D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (YandexGame.SDKEnabled)
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = YandexGame_get_SDKEnabled_mDE2A25B7CA3B547ADC0468C5329BA9DB79A4B25B_inline(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// GetLoad();
		SaverTest_GetLoad_mE8CC3DF9A605B61E207D5886DFD3C8BCBCA67DAE(__this, NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void YG.Example.SaverTest::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaverTest_Save_m41179C1C3031FAE635FC977529D490751D3D6D6C (SaverTest_tFB9B24486D8B4C45F7E7F26FB4C08859B704676D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// YandexGame.savesData.money = int.Parse(integerText.text);
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___savesData_33;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___integerText_4;
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_1, NULL);
		int32_t L_3;
		L_3 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_2, NULL);
		L_0->___money_4 = L_3;
		// YandexGame.savesData.newPlayerName = stringifyText.text.ToString();
		SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* L_4 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___savesData_33;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___stringifyText_5;
		String_t* L_6;
		L_6 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_5, NULL);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		L_4->___newPlayerName_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___newPlayerName_5), (void*)L_7);
		// for (int i = 0; i < booleanArrayToggle.Length; i++)
		V_0 = 0;
		goto IL_0055;
	}

IL_0038:
	{
		// YandexGame.savesData.openLevels[i] = booleanArrayToggle[i].isOn;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* L_8 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___savesData_33;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = L_8->___openLevels_6;
		int32_t L_10 = V_0;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_11 = __this->___booleanArrayToggle_7;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_14, NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (bool)L_15);
		// for (int i = 0; i < booleanArrayToggle.Length; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < booleanArrayToggle.Length; i++)
		int32_t L_17 = V_0;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_18 = __this->___booleanArrayToggle_7;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0038;
		}
	}
	{
		// YandexGame.SaveProgress();
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		YandexGame_SaveProgress_m3A9BCE3DCA54FC5CE43C0F6A69DE4B22C403255E(NULL);
		// }
		return;
	}
}
// System.Void YG.Example.SaverTest::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaverTest_Load_m804185E046D2F7A670A625367380AB364B6974E8 (SaverTest_tFB9B24486D8B4C45F7E7F26FB4C08859B704676D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Load() => YandexGame.LoadProgress();
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		YandexGame_LoadProgress_m20B9CE214903C04A7FB703443B0960B145C934E9(NULL);
		return;
	}
}
// System.Void YG.Example.SaverTest::GetLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaverTest_GetLoad_mE8CC3DF9A605B61E207D5886DFD3C8BCBCA67DAE (SaverTest_tFB9B24486D8B4C45F7E7F26FB4C08859B704676D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF16C4E3271CE82A848EA3ADDFE04F19165786C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral855DE519A7928264477F861BCF043E006219C06F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF16F576AF07FAC0B9B685AB926BA18DE8ED7F0E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// integerText.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___integerText_4;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// stringifyText.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___stringifyText_5;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_2, L_3, NULL);
		// integerText.placeholder.GetComponent<Text>().text = YandexGame.savesData.money.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___integerText_4;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5;
		L_5 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_4, NULL);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6;
		L_6 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_5, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* L_7 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___savesData_33;
		int32_t* L_8 = (&L_7->___money_4);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// stringifyText.placeholder.GetComponent<Text>().text = YandexGame.savesData.newPlayerName;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_10 = __this->___stringifyText_5;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_11;
		L_11 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_10, NULL);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12;
		L_12 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_11, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* L_13 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___savesData_33;
		String_t* L_14 = L_13->___newPlayerName_5;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_14);
		// for (int i = 0; i < booleanArrayToggle.Length; i++)
		V_0 = 0;
		goto IL_0084;
	}

IL_0067:
	{
		// booleanArrayToggle[i].isOn = YandexGame.savesData.openLevels[i];
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_15 = __this->___booleanArrayToggle_7;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* L_19 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___savesData_33;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = L_19->___openLevels_6;
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		uint8_t L_23 = (uint8_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_18, (bool)L_23, NULL);
		// for (int i = 0; i < booleanArrayToggle.Length; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0084:
	{
		// for (int i = 0; i < booleanArrayToggle.Length; i++)
		int32_t L_25 = V_0;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_26 = __this->___booleanArrayToggle_7;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0067;
		}
	}
	{
		// systemSavesText.text = $"Language - {YandexGame.savesData.language}\n" +
		// $"First Session - {YandexGame.savesData.isFirstSession}\n" +
		// $"Prompt Done - {YandexGame.savesData.promptDone}\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___systemSavesText_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		ArrayElementTypeCheck (L_29, _stringLiteralAF16F576AF07FAC0B9B685AB926BA18DE8ED7F0E);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAF16F576AF07FAC0B9B685AB926BA18DE8ED7F0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* L_31 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___savesData_33;
		String_t* L_32 = L_31->___language_2;
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_30;
		ArrayElementTypeCheck (L_33, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* L_35 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___savesData_33;
		bool L_36 = L_35->___isFirstSession_1;
		bool L_37 = L_36;
		RuntimeObject* L_38 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39;
		L_39 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral855DE519A7928264477F861BCF043E006219C06F, L_38, NULL);
		ArrayElementTypeCheck (L_34, L_39);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_34;
		SavesYG_t690242EAB4C593E9C244E68284769CCC625E95BA* L_41 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->___savesData_33;
		bool L_42 = L_41->___promptDone_3;
		bool L_43 = L_42;
		RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3EF16C4E3271CE82A848EA3ADDFE04F19165786C, L_44, NULL);
		ArrayElementTypeCheck (L_40, L_45);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_45);
		String_t* L_46;
		L_46 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_40, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_46);
		// }
		return;
	}
}
// System.Void YG.Example.SaverTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaverTest__ctor_mB3780E5909D73114BDFF245038796464FAFE4F45 (SaverTest_tFB9B24486D8B4C45F7E7F26FB4C08859B704676D* __this, const RuntimeMethod* method) 
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
// System.Void YG.Example.SwitchSceneTest::SwitchScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchSceneTest_SwitchScene_m3738D986EC6984C5431202078AD75CB27927D5E3 (SwitchSceneTest_t9BCE6AA8D0D5E63CF634DDE4DBF10F9993F6A04C* __this, int32_t ___sceneID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneID);
		int32_t L_0 = ___sceneID0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.SwitchSceneTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchSceneTest__ctor_m61306C4855868F51C3987491C1D962CB6B0C9290 (SwitchSceneTest_t9BCE6AA8D0D5E63CF634DDE4DBF10F9993F6A04C* __this, const RuntimeMethod* method) 
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
// System.Void YG.Example.YandexMetricaExample::TestSend1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetricaExample_TestSend1_m8DFB7D24550A67DC36422EA0FAC9AEE780ADD062 (YandexMetricaExample_t0B0B8EAF41A768E9ECC3F75D5BD0975EDD5E7B13* __this, String_t* ___someEvent0, const RuntimeMethod* method) 
{
	{
		// YandexMetrica.Send(someEvent);
		String_t* L_0 = ___someEvent0;
		YandexMetrica_Send_m8230AD0B4B166341914472B36ED4C1EE4775B558(L_0, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.YandexMetricaExample::TestSend1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetricaExample_TestSend1_mACD2F6F5E58BCF00C2AA554FAC89275DDA550B50 (YandexMetricaExample_t0B0B8EAF41A768E9ECC3F75D5BD0975EDD5E7B13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41FBFE14FAB6BE5EF2CC97EAA03D721420B0665F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TestSend1("SomeEvent1");
		YandexMetricaExample_TestSend1_m8DFB7D24550A67DC36422EA0FAC9AEE780ADD062(__this, _stringLiteral41FBFE14FAB6BE5EF2CC97EAA03D721420B0665F, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.YandexMetricaExample::TestSend2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetricaExample_TestSend2_m092FF445440B5B2EB7554906AEE446348591C536 (YandexMetricaExample_t0B0B8EAF41A768E9ECC3F75D5BD0975EDD5E7B13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC3D91506BA6CACBADB94459BC4247D0A1F068CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA7A676433CAB71F816C191BA6205A79CA64BAF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA40684A862A788AA950C9C00D1EC777B1A593A);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		// var eventParams2 = new Dictionary<string, string>
		// {
		//     { "Complete", "1" },
		//     { "Money", "1500" },
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteralCC3D91506BA6CACBADB94459BC4247D0A1F068CB, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, _stringLiteralEA7A676433CAB71F816C191BA6205A79CA64BAF8, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		V_0 = L_2;
		// YandexMetrica.Send("SomeEvent2", eventParams2);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_0;
		YandexMetrica_Send_m6DE3AA2A49B399C5A0DFC65BE60C908EF257E1A5(_stringLiteralFDA40684A862A788AA950C9C00D1EC777B1A593A, L_3, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.YandexMetricaExample::TestSend3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetricaExample_TestSend3_m9FD1B3E30C61152EDFA0BE24F0F5498A2D4A33E2 (YandexMetricaExample_t0B0B8EAF41A768E9ECC3F75D5BD0975EDD5E7B13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46411911C63B70CCE39A3B13289A336EB7AD127F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71135BB29FE493E864F08B56F1CB539C59868A2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB619C1048D1A63A6FCB4598721F38419CFB0005D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBF2A2F54E128A6B9540F0C64D36FCD00BE169F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE646BC59AFE8DA4F6891DF3042A6724ABC49BF35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA00CB7B7D55E48031B91C07E02C363112E00654);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// var eventParams3 = new Dictionary<string, string>
		// {
		//     { "is_string", "RUB" },
		//     { "is_int", 1.ToString() },
		//     { "is_true", true.ToString() },
		//     { "is_false", false.ToString() },
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral71135BB29FE493E864F08B56F1CB539C59868A2F, _stringLiteralFA00CB7B7D55E48031B91C07E02C363112E00654, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		V_1 = 1;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteralB619C1048D1A63A6FCB4598721F38419CFB0005D, L_3, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = L_2;
		V_2 = (bool)1;
		String_t* L_5;
		L_5 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_2), NULL);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteral46411911C63B70CCE39A3B13289A336EB7AD127F, L_5, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = L_4;
		V_2 = (bool)0;
		String_t* L_7;
		L_7 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_2), NULL);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_6, _stringLiteralBBF2A2F54E128A6B9540F0C64D36FCD00BE169F8, L_7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		V_0 = L_6;
		// YandexMetrica.Send("SomeEvent3", eventParams3);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = V_0;
		YandexMetrica_Send_m6DE3AA2A49B399C5A0DFC65BE60C908EF257E1A5(_stringLiteralE646BC59AFE8DA4F6891DF3042A6724ABC49BF35, L_8, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.YandexMetricaExample::TestSend4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetricaExample_TestSend4_m1A4B67F61BD47E4AEAD9B15B4DE2576CF490590E (YandexMetricaExample_t0B0B8EAF41A768E9ECC3F75D5BD0975EDD5E7B13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ED8FC1B7A3592C368CA6BBC276CC0B958608FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C2DABDBEC93A43CC0C82B00164E4BEF8D42F349);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46411911C63B70CCE39A3B13289A336EB7AD127F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71135BB29FE493E864F08B56F1CB539C59868A2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A4BCEB1579BC7F1BAB456075E85A3B0E38AAA2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB619C1048D1A63A6FCB4598721F38419CFB0005D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBF2A2F54E128A6B9540F0C64D36FCD00BE169F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA00CB7B7D55E48031B91C07E02C363112E00654);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		// var eventParams3 = new Dictionary<string, string>
		// {
		//     { "is_string", "RUB" },
		//     { "is_int", 1.ToString() },
		//     { "is_float", 2.5f.ToString(CultureInfo.InvariantCulture) },
		//     { "is_true", true.ToString() },
		//     { "is_false", false.ToString() },
		//     { "null_value", null },  // ??????????????? ? ?? ????? ???????????
		//     { string.Empty, null }   // ??????????????? ? ?? ????? ???????????
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral71135BB29FE493E864F08B56F1CB539C59868A2F, _stringLiteralFA00CB7B7D55E48031B91C07E02C363112E00654, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		V_1 = 1;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteralB619C1048D1A63A6FCB4598721F38419CFB0005D, L_3, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = L_2;
		V_2 = (2.5f);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_6;
		L_6 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_2), L_5, NULL);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteral3C2DABDBEC93A43CC0C82B00164E4BEF8D42F349, L_6, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = L_4;
		V_3 = (bool)1;
		String_t* L_8;
		L_8 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_3), NULL);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_7, _stringLiteral46411911C63B70CCE39A3B13289A336EB7AD127F, L_8, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = L_7;
		V_3 = (bool)0;
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_3), NULL);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_9, _stringLiteralBBF2A2F54E128A6B9540F0C64D36FCD00BE169F8, L_10, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = L_9;
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_11, _stringLiteral9A4BCEB1579BC7F1BAB456075E85A3B0E38AAA2B, (String_t*)NULL, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = L_11;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_12, L_13, (String_t*)NULL, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		V_0 = L_12;
		// YandexMetrica.Send("SomeEvent4", eventParams3);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = V_0;
		YandexMetrica_Send_m6DE3AA2A49B399C5A0DFC65BE60C908EF257E1A5(_stringLiteral2ED8FC1B7A3592C368CA6BBC276CC0B958608FFC, L_14, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.YandexMetricaExample::TestSend5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetricaExample_TestSend5_m4A9630D7D041DAC5567F4EFA47FF59E882103AB2 (YandexMetricaExample_t0B0B8EAF41A768E9ECC3F75D5BD0975EDD5E7B13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A4BCEB1579BC7F1BAB456075E85A3B0E38AAA2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2ADE6AD9F7F5F3F396FD1C782618370B149FA84);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		// var eventParams3 = new Dictionary<string, string>
		// {
		//     { "null_value", null }
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral9A4BCEB1579BC7F1BAB456075E85A3B0E38AAA2B, (String_t*)NULL, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		V_0 = L_1;
		// YandexMetrica.Send("SomeEvent5", eventParams3);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = V_0;
		YandexMetrica_Send_m6DE3AA2A49B399C5A0DFC65BE60C908EF257E1A5(_stringLiteralE2ADE6AD9F7F5F3F396FD1C782618370B149FA84, L_2, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.YandexMetricaExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexMetricaExample__ctor_m2301A1A6F4D4D658A88D92D7FD8F3E64F5A5533C (YandexMetricaExample_t0B0B8EAF41A768E9ECC3F75D5BD0975EDD5E7B13* __this, const RuntimeMethod* method) 
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
// System.Void YG.Example.NewResultLeaderboard::NewName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewResultLeaderboard_NewName_mCAAF8BEB8B42F127E7403EF7D3162177B68AAF23 (NewResultLeaderboard_t21DE385E0550472E4DF3F07215456A586EA4F669* __this, const RuntimeMethod* method) 
{
	{
		// leaderboardYG.nameLB = nameLbInputField.text;
		LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* L_0 = __this->___leaderboardYG_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___nameLbInputField_5;
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_1, NULL);
		L_0->___nameLB_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___nameLB_4), (void*)L_2);
		// leaderboardYG.UpdateLB();
		LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* L_3 = __this->___leaderboardYG_4;
		LeaderboardYG_UpdateLB_m09B71C106830D4B0E92FE7FF43B1F4FE63142FBE(L_3, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.NewResultLeaderboard::NewScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewResultLeaderboard_NewScore_m5B4F56BFDF5AC567CD906D4A352AEF356BC0869B (NewResultLeaderboard_t21DE385E0550472E4DF3F07215456A586EA4F669* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YandexGame.NewLeaderboardScores(leaderboardYG.nameLB, int.Parse(scoreLbInputField.text));
		LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* L_0 = __this->___leaderboardYG_4;
		String_t* L_1 = L_0->___nameLB_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___scoreLbInputField_6;
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_2, NULL);
		int32_t L_4;
		L_4 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		YandexGame_NewLeaderboardScores_m0FEB3AB3DA3AF0D14FCD8E3304B9F3512392E09F(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.NewResultLeaderboard::NewScoreTimeConvert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewResultLeaderboard_NewScoreTimeConvert_mB21CA2F01A12011B47DDB020EDC65BA94A8A855A (NewResultLeaderboard_t21DE385E0550472E4DF3F07215456A586EA4F669* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YandexGame.NewLBScoreTimeConvert(leaderboardYG.nameLB, float.Parse(scoreLbInputField.text));
		LeaderboardYG_t1B7C66F29E1ABCE19CEDE0ACBEF04713A0DE7AA7* L_0 = __this->___leaderboardYG_4;
		String_t* L_1 = L_0->___nameLB_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___scoreLbInputField_6;
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_2, NULL);
		float L_4;
		L_4 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		YandexGame_NewLBScoreTimeConvert_m6992F03973F4381ECFC78F2BCFAAA52DF0EEBB38(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void YG.Example.NewResultLeaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewResultLeaderboard__ctor_m03242883571AD511C5F7DDD417F999CE1AE5C679 (NewResultLeaderboard_t21DE385E0550472E4DF3F07215456A586EA4F669* __this, const RuntimeMethod* method) 
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
// System.Single MaterialUI.Anim::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/L_6));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0021:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_002b:
	{
		// return differenceValue * time + startValue;
		float L_11 = V_0;
		float L_12 = ___time2;
		float L_13 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim::Linear(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Anim_Linear_m1039C6D61C3F6F58EB7BB668CB961180DFBD0E13 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = Linear(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = Linear(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim::Linear(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Anim_Linear_mEA00BE642A2584F94F47B360D23776761412A980 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = Linear(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = Linear(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = Linear(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim::Linear(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Anim_Linear_m8C237B59F4D5A5DBF840239B84A0DF84D9D75219 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = Linear(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = Linear(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = Linear(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = Linear(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim::Sin(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E (float ___startValue0, float ___amplitude1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	{
		// time /= duration;
		float L_0 = ___time2;
		float L_1 = ___duration3;
		___time2 = ((float)(L_0/L_1));
		// return Mathf.Cos(Mathf.PI * time) * amplitude + startValue;
		float L_2 = ___time2;
		float L_3;
		L_3 = cosf(((float)il2cpp_codegen_multiply((3.14159274f), L_2)));
		float L_4 = ___amplitude1;
		float L_5 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim::Sin(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Anim_Sin_m72701E77BB2D66CA0331E076297CBBB2FC08A40F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = Sin(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = Sin(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim::Sin(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Anim_Sin_mDA28BA3DED6EF8C02C608BBCA93C679AA5971462 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___amplitude1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = Sin(startValue.x, amplitude.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___amplitude1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = Sin(startValue.y, amplitude.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___amplitude1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = Sin(startValue.z, amplitude.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___amplitude1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim::Sin(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Anim_Sin_mEE8B737047E7717B22177C97C8FF00A8B90E9091 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___amplitude1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = Sin(startValue.r, amplitude.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___amplitude1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = Sin(startValue.g, amplitude.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___amplitude1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = Sin(startValue.b, amplitude.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___amplitude1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = Sin(startValue.a, amplitude.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___amplitude1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Anim_Sin_mB6149BFBCA5280BDA6B0C34DFF3BE1097E17DA8E(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim::Overshoot(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/L_6));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0021:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_002b:
	{
		// if (time < 0.6069f)
		float L_11 = ___time2;
		if ((!(((float)L_11) < ((float)(0.606899977f)))))
		{
			goto IL_0057;
		}
	}
	{
		// return differenceValue * (-(Mathf.Sin(2 * Mathf.PI * time * time)) / (2 * Mathf.PI * time * time) + 1) + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15;
		L_15 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((6.28318548f), L_13)), L_14)));
		float L_16 = ___time2;
		float L_17 = ___time2;
		float L_18 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, ((float)il2cpp_codegen_add(((float)(((-L_15))/((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((6.28318548f), L_16)), L_17)))), (1.0f))))), L_18));
	}

IL_0057:
	{
		// if (time < 0.8586f)
		float L_19 = ___time2;
		if ((!(((float)L_19) < ((float)(0.85860002f)))))
		{
			goto IL_0082;
		}
	}
	{
		// return differenceValue * (-(6.7f * (Mathf.Pow(time - 0.8567f, 2f))) + 1.1f) + startValue;
		float L_20 = V_0;
		float L_21 = ___time2;
		float L_22;
		L_22 = powf(((float)il2cpp_codegen_subtract(L_21, (0.856700003f))), (2.0f));
		float L_23 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_20, ((float)il2cpp_codegen_add(((-((float)il2cpp_codegen_multiply((6.69999981f), L_22)))), (1.10000002f))))), L_23));
	}

IL_0082:
	{
		// return differenceValue * ((5 * Mathf.Pow(time - 1f, 2f)) + 1) + startValue;
		float L_24 = V_0;
		float L_25 = ___time2;
		float L_26;
		L_26 = powf(((float)il2cpp_codegen_subtract(L_25, (1.0f))), (2.0f));
		float L_27 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_24, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((5.0f), L_26)), (1.0f))))), L_27));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim::Overshoot(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Anim_Overshoot_m5F60F22E41BECF3B81D98F389C88EB35CF0A42C0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = Overshoot(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = Overshoot(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim::Overshoot(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Anim_Overshoot_m4306436AF6F04B5753F5CA2C96CE3A1E60A6CA3B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = Overshoot(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = Overshoot(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = Overshoot(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim::Overshoot(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Anim_Overshoot_m74EC08F6922ED3AB6B4D6332AB4A73E4D954B7AC (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = Overshoot(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = Overshoot(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = Overshoot(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = Overshoot(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim::Bounce(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/L_6));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0021:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_002b:
	{
		// if (time < 0.75f)
		float L_11 = ___time2;
		if ((!(((float)L_11) < ((float)(0.75f)))))
		{
			goto IL_0045;
		}
	}
	{
		// return differenceValue * (3.16f * time * time * time * time) + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___time2;
		float L_17 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.16000009f), L_13)), L_14)), L_15)), L_16)))), L_17));
	}

IL_0045:
	{
		// return differenceValue * ((8 * Mathf.Pow(time - 0.875f, 2f)) + 0.875f) + startValue;
		float L_18 = V_0;
		float L_19 = ___time2;
		float L_20;
		L_20 = powf(((float)il2cpp_codegen_subtract(L_19, (0.875f))), (2.0f));
		float L_21 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_18, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((8.0f), L_20)), (0.875f))))), L_21));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim::Bounce(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Anim_Bounce_m2FB9CCBAD8ECB70E6C0A36E9A089CD8C9024737D (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = Bounce(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = Bounce(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim::Bounce(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Anim_Bounce_m8A895B3876AEA9675791A78B67B588FA858C3C59 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = Bounce(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = Bounce(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = Bounce(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim::Bounce(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Anim_Bounce_m408A337D2AFF123D4CA550A991E7A716F33E2109 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = Bounce(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = Bounce(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = Bounce(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = Bounce(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Void MaterialUI.Anim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Anim__ctor_m3991840AA7F93A179181DCAB057603D1A6AC9E7A (Anim_tE614A6A08851DB6FAF681BEB3A508E33195EF7AA* __this, const RuntimeMethod* method) 
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
// System.Single MaterialUI.Anim/Cube::In(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/L_6));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0021:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_002b:
	{
		// return differenceValue * time * time * time + startValue;
		float L_11 = V_0;
		float L_12 = ___time2;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13)), L_14)), L_15));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Cube::In(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Cube_In_m501D74DA5B2485028601FCC37B4EC399FC1801F3 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = In(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = In(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Cube::In(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Cube_In_m73643FFE3B30B44A4DD9B1B6B37BF0D86AF5A7F6 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = In(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = In(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = In(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Cube::In(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Cube_In_mB25C7DF83BE9528BC950AC289CEF004BD3D41434 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = In(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = In(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = In(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = In(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim/Cube::Out(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/L_6));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0021:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_002b:
	{
		// time--;
		float L_11 = ___time2;
		___time2 = ((float)il2cpp_codegen_subtract(L_11, (1.0f)));
		// return differenceValue * (time * time * time + 1) + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15)), (1.0f))))), L_16));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Cube::Out(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Cube_Out_m418AC18C3158E84B4041FA1D20DED0D866DD1DBB (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = Out(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = Out(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Cube::Out(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Cube_Out_m8B6D5FF3800C2A807AC9A6742E81B7B5C4168B60 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = Out(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = Out(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = Out(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Cube::Out(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Cube_Out_m64DCA38386BD1B36E357E4093A9B9DCF273A1C78 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = Out(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = Out(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = Out(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = Out(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim/Cube::InOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration / 2f;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/((float)(L_6/(2.0f)))));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0027:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_0031:
	{
		// if (time < 1f)
		float L_11 = ___time2;
		if ((!(((float)L_11) < ((float)(1.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// return differenceValue / 2 * time * time * time + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_12/(2.0f))), L_13)), L_14)), L_15)), L_16));
	}

IL_0049:
	{
		// time -= 2f;
		float L_17 = ___time2;
		___time2 = ((float)il2cpp_codegen_subtract(L_17, (2.0f)));
		// return differenceValue / 2 * (time * time * time + 2) + startValue;
		float L_18 = V_0;
		float L_19 = ___time2;
		float L_20 = ___time2;
		float L_21 = ___time2;
		float L_22 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_18/(2.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_19, L_20)), L_21)), (2.0f))))), L_22));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Cube::InOut(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Cube_InOut_m6DA2606FA33A83D3703EC5138A6382B6AAB43CF6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = InOut(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = InOut(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Cube::InOut(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Cube_InOut_m9C1644D7A66DB8C2400906A801AAEF5809D92101 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = InOut(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = InOut(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = InOut(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Cube::InOut(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Cube_InOut_m5A0B5A329459555D35A56D38770B60C9FCFD6D8B (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = InOut(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = InOut(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = InOut(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = InOut(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim/Cube::SoftOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration / 2f;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/((float)(L_6/(2.0f)))));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0027:
	{
		// if (time == 0.5f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(0.5f)))))
		{
			goto IL_0031;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_0031:
	{
		// if (time < 0.559f)
		float L_11 = ___time2;
		if ((!(((float)L_11) < ((float)(0.559000015f)))))
		{
			goto IL_0057;
		}
	}
	{
		// return differenceValue / 2 * time * time * time * time * time * time * time * 16 + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___time2;
		float L_17 = ___time2;
		float L_18 = ___time2;
		float L_19 = ___time2;
		float L_20 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_12/(2.0f))), L_13)), L_14)), L_15)), L_16)), L_17)), L_18)), L_19)), (16.0f))), L_20));
	}

IL_0057:
	{
		// time -= 2f;
		float L_21 = ___time2;
		___time2 = ((float)il2cpp_codegen_subtract(L_21, (2.0f)));
		// return differenceValue / 2 * (time * time * time * 0.5772f + 2) + startValue;
		float L_22 = V_0;
		float L_23 = ___time2;
		float L_24 = ___time2;
		float L_25 = ___time2;
		float L_26 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_22/(2.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_23, L_24)), L_25)), (0.577199996f))), (2.0f))))), L_26));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Cube::SoftOut(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Cube_SoftOut_m2A2D9B816D59E103DF52A5C814D775E580765784 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = SoftOut(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = SoftOut(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Cube::SoftOut(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Cube_SoftOut_m5E5BCE6049571322C862EE649564BF1C7AE766A5 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = SoftOut(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = SoftOut(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = SoftOut(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Cube::SoftOut(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Cube_SoftOut_mD8D0826F4BC5692FC4AD53C51659B0B4C11C0B12 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = SoftOut(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = SoftOut(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = SoftOut(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = SoftOut(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Void MaterialUI.Anim/Cube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cube__ctor_m9217F0900ADAEBFB26D070F6EFB62BDDCC1CDC56 (Cube_tC0197ED59DFE1FF01107550DD1B6479723A7E063* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single MaterialUI.Anim/Quint::In(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/L_6));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0021:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_002b:
	{
		// return differenceValue * time * time * time * time * time + startValue;
		float L_11 = V_0;
		float L_12 = ___time2;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___time2;
		float L_17 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13)), L_14)), L_15)), L_16)), L_17));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Quint::In(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Quint_In_mEAD7DF09A61E0B29F2F2C541DC45D9CFDC0641A6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = In(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = In(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Quint::In(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quint_In_m87966E41F70226F163E3181E8BCD2412DBFDD264 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = In(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = In(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = In(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Quint::In(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Quint_In_m907D9D8D1DED580C17D263181DABC9D3912F58C1 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = In(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = In(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = In(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = In(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim/Quint::Out(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/L_6));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0021:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_002b:
	{
		// time--;
		float L_11 = ___time2;
		___time2 = ((float)il2cpp_codegen_subtract(L_11, (1.0f)));
		// return differenceValue * (time * time * time * time * time + 1) + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___time2;
		float L_17 = ___time2;
		float L_18 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15)), L_16)), L_17)), (1.0f))))), L_18));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Quint::Out(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Quint_Out_m0D5446E0799ABEEEBD1C16AD2D273BCB4246B6A0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = Out(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = Out(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Quint::Out(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quint_Out_m1C335BA099DE2F05CD0C211AC547623DA94043E4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = Out(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = Out(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = Out(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Quint::Out(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Quint_Out_mDC1C9CCF37FC9B50A6895773873B7917B03AA27F (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = Out(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = Out(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = Out(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = Out(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim/Quint::InOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration / 2f;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/((float)(L_6/(2.0f)))));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0027:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_0031:
	{
		// if (time < 1f)
		float L_11 = ___time2;
		if ((!(((float)L_11) < ((float)(1.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// return differenceValue / 2 * time * time * time * time * time + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___time2;
		float L_17 = ___time2;
		float L_18 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_12/(2.0f))), L_13)), L_14)), L_15)), L_16)), L_17)), L_18));
	}

IL_004d:
	{
		// time -= 2f;
		float L_19 = ___time2;
		___time2 = ((float)il2cpp_codegen_subtract(L_19, (2.0f)));
		// return differenceValue / 2 * (time * time * time * time * time + 2) + startValue;
		float L_20 = V_0;
		float L_21 = ___time2;
		float L_22 = ___time2;
		float L_23 = ___time2;
		float L_24 = ___time2;
		float L_25 = ___time2;
		float L_26 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_20/(2.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_21, L_22)), L_23)), L_24)), L_25)), (2.0f))))), L_26));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Quint::InOut(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Quint_InOut_m788BC107A15F044FCF903CB48F3D3E7D6B7BCB35 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = InOut(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = InOut(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Quint::InOut(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quint_InOut_m75977FCD9454C3A784E5A229B4431370A52125EB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = InOut(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = InOut(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = InOut(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Quint::InOut(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Quint_InOut_m18FF66EE9CAF5ABB29AF9E6E4567E24F21281273 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = InOut(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = InOut(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = InOut(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = InOut(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim/Quint::SoftOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration / 2f;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/((float)(L_6/(2.0f)))));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0027:
	{
		// if (time == 0.5f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(0.5f)))))
		{
			goto IL_0031;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_0031:
	{
		// if (time < 0.497f)
		float L_11 = ___time2;
		if ((!(((float)L_11) < ((float)(0.497000009f)))))
		{
			goto IL_0053;
		}
	}
	{
		// return differenceValue / 2 * time * time * time * time * time * 16 + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___time2;
		float L_17 = ___time2;
		float L_18 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_12/(2.0f))), L_13)), L_14)), L_15)), L_16)), L_17)), (16.0f))), L_18));
	}

IL_0053:
	{
		// time -= 2f;
		float L_19 = ___time2;
		___time2 = ((float)il2cpp_codegen_subtract(L_19, (2.0f)));
		// return differenceValue / 2 * (time * time * time * time * time * 0.1975f + 2) + startValue;
		float L_20 = V_0;
		float L_21 = ___time2;
		float L_22 = ___time2;
		float L_23 = ___time2;
		float L_24 = ___time2;
		float L_25 = ___time2;
		float L_26 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_20/(2.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_21, L_22)), L_23)), L_24)), L_25)), (0.197500005f))), (2.0f))))), L_26));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Quint::SoftOut(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = SoftOut(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = SoftOut(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Quint::SoftOut(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quint_SoftOut_mC843C33419C1EA2EA7D645F99C6DD1990DA3C667 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = SoftOut(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = SoftOut(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = SoftOut(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Quint::SoftOut(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = SoftOut(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = SoftOut(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = SoftOut(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = SoftOut(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Void MaterialUI.Anim/Quint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quint__ctor_m27AEA16AA7BC399E3DAF79276FA5FE68950FEEB9 (Quint_t1096DA87950930A9458B4DF5E51F2B61E53B843E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single MaterialUI.Anim/Sept::In(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sept_In_mD51BE44E422134702A5229440245544360EE5B37 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/L_6));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0021:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_002b:
	{
		// return differenceValue * time * time * time * time * time * time * time + startValue;
		float L_11 = V_0;
		float L_12 = ___time2;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___time2;
		float L_17 = ___time2;
		float L_18 = ___time2;
		float L_19 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13)), L_14)), L_15)), L_16)), L_17)), L_18)), L_19));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Sept::In(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Sept_In_mDD0427D49A6C3E650D6BDB7C47C1A10BBDF26F61 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = In(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_In_mD51BE44E422134702A5229440245544360EE5B37(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = In(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_In_mD51BE44E422134702A5229440245544360EE5B37(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Sept::In(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Sept_In_m53A57309EC0EBAA679C1AF94D9C56CEA3EB84888 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = In(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_In_mD51BE44E422134702A5229440245544360EE5B37(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = In(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_In_mD51BE44E422134702A5229440245544360EE5B37(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = In(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Sept_In_mD51BE44E422134702A5229440245544360EE5B37(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Sept::In(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Sept_In_m513BE2182C9D3C91D0C841BD948F70C38CFD2205 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = In(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_In_mD51BE44E422134702A5229440245544360EE5B37(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = In(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_In_mD51BE44E422134702A5229440245544360EE5B37(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = In(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Sept_In_mD51BE44E422134702A5229440245544360EE5B37(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = In(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Sept_In_mD51BE44E422134702A5229440245544360EE5B37(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim/Sept::Out(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/L_6));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0021:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_002b:
	{
		// time--;
		float L_11 = ___time2;
		___time2 = ((float)il2cpp_codegen_subtract(L_11, (1.0f)));
		// return differenceValue * (time * time * time * time * time * time * time + 1) + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___time2;
		float L_17 = ___time2;
		float L_18 = ___time2;
		float L_19 = ___time2;
		float L_20 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15)), L_16)), L_17)), L_18)), L_19)), (1.0f))))), L_20));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Sept::Out(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Sept_Out_m5D92AADF8EB72723CFD3382482BC3659FE6C870F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = Out(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = Out(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Sept::Out(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Sept_Out_mD59A5DDE50DCB91ED61D79EC879E7B8375740BB1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = Out(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = Out(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = Out(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Sept::Out(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Sept_Out_m3E89EF84B1E95BFE798830CC0608C6DD44069152 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = Out(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = Out(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = Out(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = Out(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim/Sept::InOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration / 2f;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/((float)(L_6/(2.0f)))));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0027:
	{
		// if (time == 1f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_0031:
	{
		// if (time < 1f)
		float L_11 = ___time2;
		if ((!(((float)L_11) < ((float)(1.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// return differenceValue / 2 * time * time * time * time * time * time * time + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___time2;
		float L_17 = ___time2;
		float L_18 = ___time2;
		float L_19 = ___time2;
		float L_20 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_12/(2.0f))), L_13)), L_14)), L_15)), L_16)), L_17)), L_18)), L_19)), L_20));
	}

IL_0051:
	{
		// time -= 2f;
		float L_21 = ___time2;
		___time2 = ((float)il2cpp_codegen_subtract(L_21, (2.0f)));
		// return differenceValue / 2 * (time * time * time * time * time * time * time + 2) + startValue;
		float L_22 = V_0;
		float L_23 = ___time2;
		float L_24 = ___time2;
		float L_25 = ___time2;
		float L_26 = ___time2;
		float L_27 = ___time2;
		float L_28 = ___time2;
		float L_29 = ___time2;
		float L_30 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_22/(2.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_23, L_24)), L_25)), L_26)), L_27)), L_28)), L_29)), (2.0f))))), L_30));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Sept::InOut(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Sept_InOut_m780179C545230820C820B792863C255920427EFF (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = InOut(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = InOut(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Sept::InOut(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Sept_InOut_m9A697497142F6DEDAE999DC4999072B2B0E9AB1B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = InOut(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = InOut(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = InOut(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Sept::InOut(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Sept_InOut_m446BE1F1757BF0591F1F052F9C0031165BB5812D (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = InOut(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = InOut(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = InOut(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = InOut(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Single MaterialUI.Anim/Sept::SoftOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float differenceValue = endValue - startValue;
		float L_0 = ___endValue1;
		float L_1 = ___startValue0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// time = Mathf.Clamp(time, 0f, duration);
		float L_2 = ___time2;
		float L_3 = ___duration3;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), L_3, NULL);
		___time2 = L_4;
		// time /= duration / 2f;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		___time2 = ((float)(L_5/((float)(L_6/(2.0f)))));
		// if (time == 0f)
		float L_7 = ___time2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// return startValue;
		float L_8 = ___startValue0;
		return L_8;
	}

IL_0027:
	{
		// if (time == 0.5f)
		float L_9 = ___time2;
		if ((!(((float)L_9) == ((float)(0.5f)))))
		{
			goto IL_0031;
		}
	}
	{
		// return endValue;
		float L_10 = ___endValue1;
		return L_10;
	}

IL_0031:
	{
		// if (time < 0.341f)
		float L_11 = ___time2;
		if ((!(((float)L_11) < ((float)(0.340999991f)))))
		{
			goto IL_004f;
		}
	}
	{
		// return differenceValue / 2 * time * time * time * 16 + startValue;
		float L_12 = V_0;
		float L_13 = ___time2;
		float L_14 = ___time2;
		float L_15 = ___time2;
		float L_16 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_12/(2.0f))), L_13)), L_14)), L_15)), (16.0f))), L_16));
	}

IL_004f:
	{
		// time -= 2f;
		float L_17 = ___time2;
		___time2 = ((float)il2cpp_codegen_subtract(L_17, (2.0f)));
		// return differenceValue / 2 * (time * time * time * time * time * time * time * 0.03948f + 2) + startValue;
		float L_18 = V_0;
		float L_19 = ___time2;
		float L_20 = ___time2;
		float L_21 = ___time2;
		float L_22 = ___time2;
		float L_23 = ___time2;
		float L_24 = ___time2;
		float L_25 = ___time2;
		float L_26 = ___startValue0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_18/(2.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_19, L_20)), L_21)), L_22)), L_23)), L_24)), L_25)), (0.0394800007f))), (2.0f))))), L_26));
	}
}
// UnityEngine.Vector2 MaterialUI.Anim/Sept::SoftOut(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Sept_SoftOut_m4EE319F26C7AAA9424D26D36ECF33A4FCD95C02B (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 tempVector2 = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector2.x = SoftOut(startValue.x, endValue.x, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___startValue0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___endValue1;
		float L_4 = L_3.___x_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_0 = L_7;
		// tempVector2.y = SoftOut(startValue.y, endValue.y, time, duration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		float L_11 = L_10.___y_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_1 = L_14;
		// return tempVector2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 MaterialUI.Anim/Sept::SoftOut(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Sept_SoftOut_m9006F36DDDB114EAC8CB5B4171BDE76C705DBF98 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempVector3 = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startValue0;
		V_0 = L_0;
		// tempVector3.x = SoftOut(startValue.x, endValue.x, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startValue0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___endValue1;
		float L_4 = L_3.___x_2;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___x_2 = L_7;
		// tempVector3.y = SoftOut(startValue.y, endValue.y, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		float L_11 = L_10.___y_3;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___y_3 = L_14;
		// tempVector3.z = SoftOut(startValue.z, endValue.z, time, duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___startValue0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___endValue1;
		float L_18 = L_17.___z_4;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// return tempVector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Color MaterialUI.Anim/Sept::SoftOut(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Sept_SoftOut_m27411D8C182DACB3C8BB1093DC320E750B4019B4 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tempColor = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___startValue0;
		V_0 = L_0;
		// tempColor.r = SoftOut(startValue.r, endValue.r, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___startValue0;
		float L_2 = L_1.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___endValue1;
		float L_4 = L_3.___r_0;
		float L_5 = ___time2;
		float L_6 = ___duration3;
		float L_7;
		L_7 = Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A(L_2, L_4, L_5, L_6, NULL);
		(&V_0)->___r_0 = L_7;
		// tempColor.g = SoftOut(startValue.g, endValue.g, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		float L_9 = L_8.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		float L_11 = L_10.___g_1;
		float L_12 = ___time2;
		float L_13 = ___duration3;
		float L_14;
		L_14 = Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A(L_9, L_11, L_12, L_13, NULL);
		(&V_0)->___g_1 = L_14;
		// tempColor.b = SoftOut(startValue.b, endValue.b, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startValue0;
		float L_16 = L_15.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endValue1;
		float L_18 = L_17.___b_2;
		float L_19 = ___time2;
		float L_20 = ___duration3;
		float L_21;
		L_21 = Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A(L_16, L_18, L_19, L_20, NULL);
		(&V_0)->___b_2 = L_21;
		// tempColor.a = SoftOut(startValue.a, endValue.a, time, duration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___startValue0;
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___endValue1;
		float L_25 = L_24.___a_3;
		float L_26 = ___time2;
		float L_27 = ___duration3;
		float L_28;
		L_28 = Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A(L_23, L_25, L_26, L_27, NULL);
		(&V_0)->___a_3 = L_28;
		// return tempColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
// System.Void MaterialUI.Anim/Sept::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sept__ctor_m322B5EFBD35C2FA96762AFF6A9C34CB95D25CFDF (Sept_tF1DCFD486B683FF34FC7E291DFEB9EE3797F0D7E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Conversion methods for marshalling of: MaterialUI.EZStruct
IL2CPP_EXTERN_C void EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshal_pinvoke(const EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3& unmarshaled, EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___targetGameObject_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'targetGameObject' of type 'EZStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___targetGameObject_2Exception, NULL);
}
IL2CPP_EXTERN_C void EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshal_pinvoke_back(const EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshaled_pinvoke& marshaled, EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3& unmarshaled)
{
	Exception_t* ___targetGameObject_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'targetGameObject' of type 'EZStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___targetGameObject_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: MaterialUI.EZStruct
IL2CPP_EXTERN_C void EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshal_pinvoke_cleanup(EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MaterialUI.EZStruct
IL2CPP_EXTERN_C void EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshal_com(const EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3& unmarshaled, EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshaled_com& marshaled)
{
	Exception_t* ___targetGameObject_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'targetGameObject' of type 'EZStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___targetGameObject_2Exception, NULL);
}
IL2CPP_EXTERN_C void EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshal_com_back(const EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshaled_com& marshaled, EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3& unmarshaled)
{
	Exception_t* ___targetGameObject_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'targetGameObject' of type 'EZStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___targetGameObject_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: MaterialUI.EZStruct
IL2CPP_EXTERN_C void EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshal_com_cleanup(EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaterialUI.ButtonInteractableControl::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonInteractableControl_OnEnable_mE31D81CFE8C82239D99114D6A017EAD69E8F4340 (ButtonInteractableControl_t5EFE754163BB43650DAE0707A8FDF46730036DB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvasGroup = gameObject.GetComponent<CanvasGroup>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1;
		L_1 = GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD(L_0, GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		__this->___canvasGroup_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasGroup_4), (void*)L_1);
		// button = gameObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3;
		L_3 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_2, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___button_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___button_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void MaterialUI.ButtonInteractableControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonInteractableControl_Update_m39D01E3B63C80D5CD2603DEB41184DC1A030D3BF (ButtonInteractableControl_t5EFE754163BB43650DAE0707A8FDF46730036DB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lastInteractableState != button.interactable)
		bool L_0 = __this->___lastInteractableState_6;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___button_5;
		bool L_2;
		L_2 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_1, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_00a2;
		}
	}
	{
		// lastInteractableState = button.interactable;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___button_5;
		bool L_4;
		L_4 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_3, NULL);
		__this->___lastInteractableState_6 = L_4;
		// if (lastInteractableState)
		bool L_5 = __this->___lastInteractableState_6;
		if (!L_5)
		{
			goto IL_0069;
		}
	}
	{
		// canvasGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___canvasGroup_4;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_6, (1.0f), NULL);
		// canvasGroup.blocksRaycasts = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_7 = __this->___canvasGroup_4;
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_7, (bool)1, NULL);
		// if (shadows)
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8 = __this->___shadows_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_00a2;
		}
	}
	{
		// shadows.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_10 = __this->___shadows_7;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_10, (1.0f), NULL);
		return;
	}

IL_0069:
	{
		// canvasGroup.alpha = 0.5f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_11 = __this->___canvasGroup_4;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_11, (0.5f), NULL);
		// canvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_12 = __this->___canvasGroup_4;
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_12, (bool)0, NULL);
		// if (shadows)
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_13 = __this->___shadows_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_13, NULL);
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		// shadows.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_15 = __this->___shadows_7;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_15, (0.0f), NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ButtonInteractableControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonInteractableControl__ctor_m7FB3D9A2744B49A5DB4614051C3CBAAA819E5419 (ButtonInteractableControl_t5EFE754163BB43650DAE0707A8FDF46730036DB9* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.CheckboxConfig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_OnEnable_m06A72236F022CFEE346C24D42F9BCD59AE51E169 (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle = gameObject.GetComponent<Toggle>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1;
		L_1 = GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17(L_0, GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		__this->___toggle_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_19), (void*)L_1);
		// checkRectTransform = checkImage.GetComponent<RectTransform>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___checkImage_12;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_2, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___checkRectTransform_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkRectTransform_15), (void*)L_3);
		// frameCanvasGroup = frameImage.GetComponent<CanvasGroup>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___frameImage_13;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_5;
		L_5 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_4, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___frameCanvasGroup_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameCanvasGroup_16), (void*)L_5);
		// checkBoxToggler = text.GetComponent<CheckBoxToggler>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___text_14;
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_7;
		L_7 = Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5(L_6, Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5_RuntimeMethod_var);
		__this->___checkBoxToggler_17 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkBoxToggler_17), (void*)L_7);
		// rippleConfig = gameObject.GetComponent<RippleConfig>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_9;
		L_9 = GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995(L_8, GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		__this->___rippleConfig_18 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rippleConfig_18), (void*)L_9);
		// }
		return;
	}
}
// System.Void MaterialUI.CheckboxConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_Start_m1BD8704B20FEBE5711A19820D5F3CC0683D92EE4 (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	{
		// lastToggleInteractableState = toggle.interactable;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_19;
		bool L_1;
		L_1 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_0, NULL);
		__this->___lastToggleInteractableState_20 = L_1;
		// if (lastToggleInteractableState)
		bool L_2 = __this->___lastToggleInteractableState_20;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// if (lastToggleState != toggle.isOn)
		bool L_3 = __this->___lastToggleState_21;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->___toggle_19;
		bool L_5;
		L_5 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_4, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0053;
		}
	}
	{
		// lastToggleState = toggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = __this->___toggle_19;
		bool L_7;
		L_7 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_6, NULL);
		__this->___lastToggleState_21 = L_7;
		// if (lastToggleState)
		bool L_8 = __this->___lastToggleState_21;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// TurnOnSilent();
		CheckboxConfig_TurnOnSilent_m511E263F700C6F1A7D55E091234C88FA4B04E077(__this, NULL);
		goto IL_0053;
	}

IL_004d:
	{
		// TurnOffSilent();
		CheckboxConfig_TurnOffSilent_m34E5B63CC5639FCD0B69DCEA30ABF3B2DE716D89(__this, NULL);
	}

IL_0053:
	{
		// if (changeRippleColor)
		bool L_9 = __this->___changeRippleColor_11;
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		// rippleConfig.rippleColor = frameImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_10 = __this->___rippleConfig_18;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_11);
		L_10->___rippleColor_8 = L_12;
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.CheckboxConfig::ToggleCheckbox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_ToggleCheckbox_m7C402B6D76F739BC6108FD6519E5BC5331AB79F6 (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	{
		// if (toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_19;
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// TurnOn ();
		CheckboxConfig_TurnOn_m8D0DAD69F987C9DEAE736E955FFF5F2808AC8B5B(__this, NULL);
		return;
	}

IL_0014:
	{
		// TurnOff ();
		CheckboxConfig_TurnOff_mEA177F1B77BEFA12A15719B72B84EC832138817D(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.CheckboxConfig::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_TurnOn_m8D0DAD69F987C9DEAE736E955FFF5F2808AC8B5B (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	{
		// checkImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___checkImage_12;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// currentCheckSize = checkRectTransform.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___checkRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___currentCheckSize_22 = L_3;
		// currentColor = frameImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->___currentColor_23 = L_5;
		// currentTextColor = text.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		__this->___currentTextColor_24 = L_7;
		// currentFrameAlpha = frameCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8 = __this->___frameCanvasGroup_16;
		float L_9;
		L_9 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_8, NULL);
		__this->___currentFrameAlpha_25 = L_9;
		// animStartTime = Time.realtimeSinceStartup;
		float L_10;
		L_10 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_29 = L_10;
		// state = 1;
		__this->___state_28 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.CheckboxConfig::TurnOnSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_TurnOnSilent_m511E263F700C6F1A7D55E091234C88FA4B04E077 (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	{
		// checkImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___checkImage_12;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// if (checkRectTransform.localScale != new Vector3(1f, 1f, 1f))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___checkRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		bool L_4;
		L_4 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// checkRectTransform.localScale = new Vector3(1f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___checkRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
	}

IL_0051:
	{
		// frameCanvasGroup.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_7 = __this->___frameCanvasGroup_16;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_7, (0.0f), NULL);
		// if (lastToggleInteractableState)
		bool L_8 = __this->___lastToggleInteractableState_20;
		if (!L_8)
		{
			goto IL_00ac;
		}
	}
	{
		// frameImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// if (changeTextColor)
		bool L_11 = __this->___changeTextColor_8;
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
	}

IL_0093:
	{
		// if (changeRippleColor)
		bool L_14 = __this->___changeRippleColor_11;
		if (!L_14)
		{
			goto IL_00ac;
		}
	}
	{
		// rippleConfig.rippleColor = onColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_15 = __this->___rippleConfig_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___onColor_5;
		L_15->___rippleColor_8 = L_16;
	}

IL_00ac:
	{
		// frameImage.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___frameImage_13;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.CheckboxConfig::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_TurnOff_mEA177F1B77BEFA12A15719B72B84EC832138817D (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	{
		// frameImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___frameImage_13;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// currentCheckSize = checkRectTransform.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___checkRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___currentCheckSize_22 = L_3;
		// currentColor = frameImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->___currentColor_23 = L_5;
		// currentTextColor = text.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		__this->___currentTextColor_24 = L_7;
		// currentFrameAlpha = frameCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8 = __this->___frameCanvasGroup_16;
		float L_9;
		L_9 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_8, NULL);
		__this->___currentFrameAlpha_25 = L_9;
		// animStartTime = Time.realtimeSinceStartup;
		float L_10;
		L_10 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_29 = L_10;
		// state = 2;
		__this->___state_28 = 2;
		// }
		return;
	}
}
// System.Void MaterialUI.CheckboxConfig::TurnOffSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_TurnOffSilent_m34E5B63CC5639FCD0B69DCEA30ABF3B2DE716D89 (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	{
		// frameImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___frameImage_13;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// if (checkRectTransform.localScale != new Vector3(0f, 0f, 1f))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___checkRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		bool L_4;
		L_4 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// checkRectTransform.localScale = new Vector3(0f, 0f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___checkRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
	}

IL_0051:
	{
		// frameCanvasGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_7 = __this->___frameCanvasGroup_16;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_7, (1.0f), NULL);
		// if (lastToggleInteractableState)
		bool L_8 = __this->___lastToggleInteractableState_20;
		if (!L_8)
		{
			goto IL_00ac;
		}
	}
	{
		// frameImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___offColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// if (changeTextColor)
		bool L_11 = __this->___changeTextColor_8;
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___textNormalColor_9;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
	}

IL_0093:
	{
		// if (changeRippleColor)
		bool L_14 = __this->___changeRippleColor_11;
		if (!L_14)
		{
			goto IL_00ac;
		}
	}
	{
		// rippleConfig.rippleColor = offColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_15 = __this->___rippleConfig_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___offColor_6;
		L_15->___rippleColor_8 = L_16;
	}

IL_00ac:
	{
		// checkImage.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___checkImage_12;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.CheckboxConfig::EnableCheckbox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_EnableCheckbox_m79B39ADA3D9E0D0E4A457999F4C42ACDCEFDF4C7 (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	{
		// if (toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_19;
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		// frameImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// if (changeTextColor)
		bool L_4 = __this->___changeTextColor_8;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		goto IL_006e;
	}

IL_0039:
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___textNormalColor_9;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		goto IL_006e;
	}

IL_004c:
	{
		// frameImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___offColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___textNormalColor_9;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
	}

IL_006e:
	{
		// checkBoxToggler.enabled = true;
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_13 = __this->___checkBoxToggler_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
		// rippleConfig.enabled = true;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_14 = __this->___rippleConfig_18;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.CheckboxConfig::DisableCheckbox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_DisableCheckbox_mBAA65705FA713A6780EA6B385C20998315941C5D (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	{
		// frameImage.color = disabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___disabledColor_7;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// text.color = disabledColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___disabledColor_7;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// checkBoxToggler.enabled = false;
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_4 = __this->___checkBoxToggler_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// rippleConfig.enabled = false;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_5 = __this->___rippleConfig_18;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.CheckboxConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig_Update_mC4A5DA3E23EC9385D6D95C86F8A41FD3BCDD130F (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_29;
		__this->___animDeltaTime_30 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)
		int32_t L_2 = __this->___state_28;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_01a4;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_30;
		float L_4 = __this->___animationDuration_4;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_011a;
		}
	}
	{
		// checkRectTransform.localScale = Anim.Overshoot(new Vector3(currentCheckSize, currentCheckSize, 1f), new Vector3(1f, 1f, 1f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___checkRectTransform_15;
		float L_6 = __this->___currentCheckSize_22;
		float L_7 = __this->___currentCheckSize_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_6, L_7, (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		float L_10 = __this->___animDeltaTime_30;
		float L_11 = __this->___animationDuration_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Anim_Overshoot_m4306436AF6F04B5753F5CA2C96CE3A1E60A6CA3B(L_8, L_9, L_10, L_11, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_12, NULL);
		// frameImage.color = Anim.Quint.SoftOut(currentColor, onColor, animDeltaTime, animationDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___currentColor_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___onColor_5;
		float L_16 = __this->___animDeltaTime_30;
		float L_17 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_14, L_15, L_16, L_17, NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_18);
		// frameCanvasGroup.alpha = Anim.Cube.SoftOut(currentFrameAlpha, 0f, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_19 = __this->___frameCanvasGroup_16;
		float L_20 = __this->___currentFrameAlpha_25;
		float L_21 = __this->___animDeltaTime_30;
		float L_22 = __this->___animationDuration_4;
		float L_23;
		L_23 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_20, (0.0f), L_21, L_22, NULL);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_19, L_23, NULL);
		// if (changeTextColor)
		bool L_24 = __this->___changeTextColor_8;
		if (!L_24)
		{
			goto IL_00f4;
		}
	}
	{
		// text.color = Anim.Quint.SoftOut(currentTextColor, onColor, animDeltaTime, animationDuration);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = __this->___currentTextColor_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = __this->___onColor_5;
		float L_28 = __this->___animDeltaTime_30;
		float L_29 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_26, L_27, L_28, L_29, NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_30);
	}

IL_00f4:
	{
		// if (changeRippleColor)
		bool L_31 = __this->___changeRippleColor_11;
		if (!L_31)
		{
			goto IL_034f;
		}
	}
	{
		// rippleConfig.rippleColor = frameImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_32 = __this->___rippleConfig_18;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_33);
		L_32->___rippleColor_8 = L_34;
		goto IL_034f;
	}

IL_011a:
	{
		// checkRectTransform.localScale = new Vector3(1f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35 = __this->___checkRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_35, L_36, NULL);
		// frameImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_37, L_38);
		// frameCanvasGroup.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_39 = __this->___frameCanvasGroup_16;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_39, (0.0f), NULL);
		// if (changeTextColor)
		bool L_40 = __this->___changeTextColor_8;
		if (!L_40)
		{
			goto IL_0173;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_42);
	}

IL_0173:
	{
		// if (changeRippleColor)
		bool L_43 = __this->___changeRippleColor_11;
		if (!L_43)
		{
			goto IL_018c;
		}
	}
	{
		// rippleConfig.rippleColor = onColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_44 = __this->___rippleConfig_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45 = __this->___onColor_5;
		L_44->___rippleColor_8 = L_45;
	}

IL_018c:
	{
		// frameImage.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___frameImage_13;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_46, (bool)0, NULL);
		// state = 0;
		__this->___state_28 = 0;
		goto IL_034f;
	}

IL_01a4:
	{
		// else if (state == 2)
		int32_t L_47 = __this->___state_28;
		if ((!(((uint32_t)L_47) == ((uint32_t)2))))
		{
			goto IL_034f;
		}
	}
	{
		// if (animDeltaTime <= animationDuration * 0.75f)
		float L_48 = __this->___animDeltaTime_30;
		float L_49 = __this->___animationDuration_4;
		if ((!(((float)L_48) <= ((float)((float)il2cpp_codegen_multiply(L_49, (0.75f)))))))
		{
			goto IL_02ca;
		}
	}
	{
		// checkRectTransform.localScale = Anim.Sept.InOut(new Vector3(currentCheckSize, currentCheckSize, 1f), new Vector3(0f, 0f, 1f), animDeltaTime, animationDuration * 0.75f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50 = __this->___checkRectTransform_15;
		float L_51 = __this->___currentCheckSize_22;
		float L_52 = __this->___currentCheckSize_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_53), L_51, L_52, (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_54), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_55 = __this->___animDeltaTime_30;
		float L_56 = __this->___animationDuration_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Sept_InOut_m9A697497142F6DEDAE999DC4999072B2B0E9AB1B(L_53, L_54, L_55, ((float)il2cpp_codegen_multiply(L_56, (0.75f))), NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_50, L_57, NULL);
		// frameImage.color = Anim.Sept.InOut(currentColor, offColor, animDeltaTime, animationDuration * 0.75f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_58 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = __this->___currentColor_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60 = __this->___offColor_6;
		float L_61 = __this->___animDeltaTime_30;
		float L_62 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = Sept_InOut_m446BE1F1757BF0591F1F052F9C0031165BB5812D(L_59, L_60, L_61, ((float)il2cpp_codegen_multiply(L_62, (0.75f))), NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_58, L_63);
		// frameCanvasGroup.alpha = Anim.Sept.InOut(currentFrameAlpha, 1f, animDeltaTime, animationDuration * 0.75f);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_64 = __this->___frameCanvasGroup_16;
		float L_65 = __this->___currentFrameAlpha_25;
		float L_66 = __this->___animDeltaTime_30;
		float L_67 = __this->___animationDuration_4;
		float L_68;
		L_68 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_65, (1.0f), L_66, ((float)il2cpp_codegen_multiply(L_67, (0.75f))), NULL);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_64, L_68, NULL);
		// if (changeTextColor)
		bool L_69 = __this->___changeTextColor_8;
		if (!L_69)
		{
			goto IL_02a4;
		}
	}
	{
		// text.color = Anim.Quint.SoftOut(currentTextColor, textNormalColor, animDeltaTime, animationDuration * 0.75f);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_70 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_71 = __this->___currentTextColor_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_72 = __this->___textNormalColor_9;
		float L_73 = __this->___animDeltaTime_30;
		float L_74 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_75;
		L_75 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_71, L_72, L_73, ((float)il2cpp_codegen_multiply(L_74, (0.75f))), NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_70, L_75);
	}

IL_02a4:
	{
		// if (changeRippleColor)
		bool L_76 = __this->___changeRippleColor_11;
		if (!L_76)
		{
			goto IL_034f;
		}
	}
	{
		// rippleConfig.rippleColor = frameImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_77 = __this->___rippleConfig_18;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_78 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79;
		L_79 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_78);
		L_77->___rippleColor_8 = L_79;
		goto IL_034f;
	}

IL_02ca:
	{
		// checkRectTransform.localScale = new Vector3(0f, 0f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_80 = __this->___checkRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_81), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_80, L_81, NULL);
		// frameImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_83 = __this->___offColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_82, L_83);
		// frameCanvasGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_84 = __this->___frameCanvasGroup_16;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_84, (1.0f), NULL);
		// if (changeTextColor)
		bool L_85 = __this->___changeTextColor_8;
		if (!L_85)
		{
			goto IL_0323;
		}
	}
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_86 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87 = __this->___textNormalColor_9;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_86, L_87);
	}

IL_0323:
	{
		// if (changeRippleColor)
		bool L_88 = __this->___changeRippleColor_11;
		if (!L_88)
		{
			goto IL_033c;
		}
	}
	{
		// rippleConfig.rippleColor = offColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_89 = __this->___rippleConfig_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_90 = __this->___offColor_6;
		L_89->___rippleColor_8 = L_90;
	}

IL_033c:
	{
		// checkImage.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_91 = __this->___checkImage_12;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_91, (bool)0, NULL);
		// state = 0;
		__this->___state_28 = 0;
	}

IL_034f:
	{
		// if (lastToggleInteractableState != toggle.interactable)
		bool L_92 = __this->___lastToggleInteractableState_20;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_93 = __this->___toggle_19;
		bool L_94;
		L_94 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_93, NULL);
		if ((((int32_t)L_92) == ((int32_t)L_94)))
		{
			goto IL_0389;
		}
	}
	{
		// lastToggleInteractableState = toggle.interactable;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_95 = __this->___toggle_19;
		bool L_96;
		L_96 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_95, NULL);
		__this->___lastToggleInteractableState_20 = L_96;
		// if (lastToggleInteractableState)
		bool L_97 = __this->___lastToggleInteractableState_20;
		if (!L_97)
		{
			goto IL_0383;
		}
	}
	{
		// EnableCheckbox();
		CheckboxConfig_EnableCheckbox_m79B39ADA3D9E0D0E4A457999F4C42ACDCEFDF4C7(__this, NULL);
		goto IL_0389;
	}

IL_0383:
	{
		// DisableCheckbox();
		CheckboxConfig_DisableCheckbox_mBAA65705FA713A6780EA6B385C20998315941C5D(__this, NULL);
	}

IL_0389:
	{
		// if (!Application.isPlaying)
		bool L_98;
		L_98 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_98)
		{
			goto IL_03e8;
		}
	}
	{
		// if (lastToggleState != toggle.isOn)
		bool L_99 = __this->___lastToggleState_21;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_100 = __this->___toggle_19;
		bool L_101;
		L_101 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_100, NULL);
		if ((((int32_t)L_99) == ((int32_t)L_101)))
		{
			goto IL_03ca;
		}
	}
	{
		// lastToggleState = toggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_102 = __this->___toggle_19;
		bool L_103;
		L_103 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_102, NULL);
		__this->___lastToggleState_21 = L_103;
		// if (lastToggleState)
		bool L_104 = __this->___lastToggleState_21;
		if (!L_104)
		{
			goto IL_03c4;
		}
	}
	{
		// TurnOnSilent();
		CheckboxConfig_TurnOnSilent_m511E263F700C6F1A7D55E091234C88FA4B04E077(__this, NULL);
		goto IL_03ca;
	}

IL_03c4:
	{
		// TurnOffSilent();
		CheckboxConfig_TurnOffSilent_m34E5B63CC5639FCD0B69DCEA30ABF3B2DE716D89(__this, NULL);
	}

IL_03ca:
	{
		// if (changeRippleColor)
		bool L_105 = __this->___changeRippleColor_11;
		if (!L_105)
		{
			goto IL_03e8;
		}
	}
	{
		// rippleConfig.rippleColor = frameImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_106 = __this->___rippleConfig_18;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_107 = __this->___frameImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_108;
		L_108 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_107);
		L_106->___rippleColor_8 = L_108;
	}

IL_03e8:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.CheckboxConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckboxConfig__ctor_mFE1DF6ADBA19CD4ECD85AC732235164FAA88E5E3 (CheckboxConfig_t07F38B87C79E5AC8C3B7ED3199B2EE419E113BE2* __this, const RuntimeMethod* method) 
{
	{
		// public float animationDuration = 0.5f;
		__this->___animationDuration_4 = (0.5f);
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
// System.Void MaterialUI.CheckBoxToggler::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckBoxToggler_OnPointerClick_m3195C5040B12E07C8FA4D62EE42263C875A5C160 (CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// if (theToggle.interactable)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___theToggle_4;
		bool L_1;
		L_1 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// theToggle.isOn = !theToggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->___theToggle_4;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___theToggle_4;
		bool L_4;
		L_4 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_3, NULL);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_2, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.CheckBoxToggler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckBoxToggler__ctor_m7AD8849C17D17F0685A97DBAABE6FEC4B385AE11 (CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.ColorCopier::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCopier_OnEnable_m8908BC18C72444EA38CD90F65E1118F5EC206C76 (ColorCopier_t7560BDB7967C98A00AF760E99B290B3BA8EFF776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisImage = gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___thisImage_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisImage_6), (void*)L_1);
		// thisText = gameObject.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3;
		L_3 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_2, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___thisText_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisText_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void MaterialUI.ColorCopier::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCopier_LateUpdate_m7B1A70C11F00496B320A92D5EDF022098D6B9399 (ColorCopier_t7560BDB7967C98A00AF760E99B290B3BA8EFF776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sourceImage)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___sourceImage_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_00b3;
		}
	}
	{
		// if (thisImage)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___thisImage_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// if (sourceImage.color != lastColor)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___sourceImage_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___lastColor_8;
		bool L_7;
		L_7 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_015c;
		}
	}
	{
		// thisImage.color = sourceImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___thisImage_6;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___sourceImage_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_10);
		// lastColor = sourceImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___sourceImage_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_11);
		__this->___lastColor_8 = L_12;
		return;
	}

IL_0060:
	{
		// else if (thisText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___thisText_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_13, NULL);
		if (!L_14)
		{
			goto IL_015c;
		}
	}
	{
		// if (sourceImage.color != lastColor)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___sourceImage_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___lastColor_8;
		bool L_18;
		L_18 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_015c;
		}
	}
	{
		// thisText.color = sourceImage.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___thisText_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20 = __this->___sourceImage_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_21);
		// lastColor = sourceImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___sourceImage_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_22);
		__this->___lastColor_8 = L_23;
		return;
	}

IL_00b3:
	{
		// else if (sourceText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___sourceText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_24, NULL);
		if (!L_25)
		{
			goto IL_015c;
		}
	}
	{
		// if (thisImage)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___thisImage_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_26, NULL);
		if (!L_27)
		{
			goto IL_0110;
		}
	}
	{
		// if (sourceText.color != lastColor)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = __this->___sourceText_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_28);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = __this->___lastColor_8;
		bool L_31;
		L_31 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_29, L_30, NULL);
		if (!L_31)
		{
			goto IL_015c;
		}
	}
	{
		// thisImage.color = sourceText.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = __this->___thisImage_6;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = __this->___sourceText_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_33);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_34);
		// lastColor = sourceText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___sourceText_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		L_36 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_35);
		__this->___lastColor_8 = L_36;
		return;
	}

IL_0110:
	{
		// else if (thisText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_37 = __this->___thisText_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_37, NULL);
		if (!L_38)
		{
			goto IL_015c;
		}
	}
	{
		// if (sourceText.color != lastColor)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___sourceText_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = __this->___lastColor_8;
		bool L_42;
		L_42 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_40, L_41, NULL);
		if (!L_42)
		{
			goto IL_015c;
		}
	}
	{
		// thisText.color = sourceText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = __this->___thisText_7;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = __this->___sourceText_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45;
		L_45 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_44);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_43, L_45);
		// lastColor = sourceText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_46 = __this->___sourceText_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47;
		L_47 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_46);
		__this->___lastColor_8 = L_47;
	}

IL_015c:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ColorCopier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCopier__ctor_m5430569FD93CD6511711667AEDC645E9AD4B7801 (ColorCopier_t7560BDB7967C98A00AF760E99B290B3BA8EFF776* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.DialogBoxConfig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogBoxConfig_Awake_m0F38BD302D49CDBBF266FDDEE97DECA1C9BBBFA1 (DialogBoxConfig_t3378B6285D1AD18F703D5279A082FE1F0697201A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisRectTransform = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisRectTransform_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRectTransform_11), (void*)L_1);
		// backroundCanvasGroup = backgroundTransform.GetComponent<CanvasGroup>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___backgroundTransform_7;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3;
		L_3 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_2, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___backroundCanvasGroup_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backroundCanvasGroup_12), (void*)L_3);
		// }
		return;
	}
}
// System.Void MaterialUI.DialogBoxConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogBoxConfig_Start_m0F9EA74C7658BE1B8D9821FCFDE111FF2B45785A (DialogBoxConfig_t3378B6285D1AD18F703D5279A082FE1F0697201A* __this, const RuntimeMethod* method) 
{
	{
		// backgroundTransform.sizeDelta = new Vector2(Screen.width, Screen.height * 3f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___backgroundTransform_7;
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), ((float)L_1), ((float)il2cpp_codegen_multiply(((float)L_2), (3.0f))), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_0, L_3, NULL);
		// thisRectTransform.pivot = new Vector2(thisRectTransform.pivot.x, 1.1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___thisRectTransform_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_5, NULL);
		float L_7 = L_6.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_7, (1.10000002f), /*hidden argument*/NULL);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_4, L_8, NULL);
		// thisRectTransform.anchorMin = new Vector2(thisRectTransform.anchorMin.x, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___thisRectTransform_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03(L_10, NULL);
		float L_12 = L_11.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), L_12, (0.0f), /*hidden argument*/NULL);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_9, L_13, NULL);
		// thisRectTransform.anchorMax = new Vector2(thisRectTransform.anchorMax.x, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___thisRectTransform_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_15, NULL);
		float L_17 = L_16.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), L_17, (0.0f), /*hidden argument*/NULL);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_14, L_18, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.DialogBoxConfig::BackgroundClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogBoxConfig_BackgroundClick_mEFCA1A365C72C65F46A74B92D3C89B58CCD81773 (DialogBoxConfig_t3378B6285D1AD18F703D5279A082FE1F0697201A* __this, const RuntimeMethod* method) 
{
	{
		// if (canClickBackgroundToCancel)
		bool L_0 = __this->___canClickBackgroundToCancel_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Close ();
		DialogBoxConfig_Close_mCF3E4548B33E3106BC335C60F9896B91A9B791C8(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.DialogBoxConfig::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogBoxConfig_Open_mE03E8D345121527A4C41B62CD9366B39D52E178C (DialogBoxConfig_t3378B6285D1AD18F703D5279A082FE1F0697201A* __this, const RuntimeMethod* method) 
{
	{
		// currentBackgroundAlpha = backroundCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___backroundCanvasGroup_12;
		float L_1;
		L_1 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_0, NULL);
		__this->___currentBackgroundAlpha_13 = L_1;
		// currentPivotY = thisRectTransform.pivot.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_2, NULL);
		float L_4 = L_3.___y_1;
		__this->___currentPivotY_14 = L_4;
		// currentAnchorMinY = thisRectTransform.anchorMin.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03(L_5, NULL);
		float L_7 = L_6.___y_1;
		__this->___currentAnchorMinY_15 = L_7;
		// currentAnchorMaxY = thisRectTransform.anchorMax.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_8, NULL);
		float L_10 = L_9.___y_1;
		__this->___currentAnchorMaxY_16 = L_10;
		// backroundCanvasGroup.blocksRaycasts = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_11 = __this->___backroundCanvasGroup_12;
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_11, (bool)1, NULL);
		// animStartTime = Time.realtimeSinceStartup;
		float L_12;
		L_12 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_9 = L_12;
		// state = 1;
		__this->___state_8 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.DialogBoxConfig::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogBoxConfig_Close_mCF3E4548B33E3106BC335C60F9896B91A9B791C8 (DialogBoxConfig_t3378B6285D1AD18F703D5279A082FE1F0697201A* __this, const RuntimeMethod* method) 
{
	{
		// currentBackgroundAlpha = backroundCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___backroundCanvasGroup_12;
		float L_1;
		L_1 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_0, NULL);
		__this->___currentBackgroundAlpha_13 = L_1;
		// currentPivotY = thisRectTransform.pivot.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_2, NULL);
		float L_4 = L_3.___y_1;
		__this->___currentPivotY_14 = L_4;
		// currentAnchorMinY = thisRectTransform.anchorMin.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03(L_5, NULL);
		float L_7 = L_6.___y_1;
		__this->___currentAnchorMinY_15 = L_7;
		// currentAnchorMaxY = thisRectTransform.anchorMax.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_8, NULL);
		float L_10 = L_9.___y_1;
		__this->___currentAnchorMaxY_16 = L_10;
		// backroundCanvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_11 = __this->___backroundCanvasGroup_12;
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_11, (bool)0, NULL);
		// animStartTime = Time.realtimeSinceStartup;
		float L_12;
		L_12 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_9 = L_12;
		// state = 2;
		__this->___state_8 = 2;
		// }
		return;
	}
}
// System.Void MaterialUI.DialogBoxConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogBoxConfig_Update_mB3E80A8934F8F3AAD2F5E272E3ED733DDC0E5466 (DialogBoxConfig_t3378B6285D1AD18F703D5279A082FE1F0697201A* __this, const RuntimeMethod* method) 
{
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_9;
		__this->___animDeltaTime_10 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)
		int32_t L_2 = __this->___state_8;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_01b1;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_10;
		float L_4 = __this->___animationDuration_6;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_013a;
		}
	}
	{
		// if (darkenBackground)
		bool L_5 = __this->___darkenBackground_4;
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		// backroundCanvasGroup.alpha = Anim.Quint.Out(currentBackgroundAlpha, 1f, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___backroundCanvasGroup_12;
		float L_7 = __this->___currentBackgroundAlpha_13;
		float L_8 = __this->___animDeltaTime_10;
		float L_9 = __this->___animationDuration_6;
		float L_10;
		L_10 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_7, (1.0f), L_8, L_9, NULL);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_6, L_10, NULL);
	}

IL_005e:
	{
		// tempVector2 = thisRectTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_11, NULL);
		__this->___tempVector2_17 = L_12;
		// tempVector2.y = Anim.Quint.Out(currentPivotY, 0.5f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___tempVector2_17);
		float L_14 = __this->___currentPivotY_14;
		float L_15 = __this->___animDeltaTime_10;
		float L_16 = __this->___animationDuration_6;
		float L_17;
		L_17 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_14, (0.5f), L_15, L_16, NULL);
		L_13->___y_1 = L_17;
		// thisRectTransform.pivot = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = __this->___tempVector2_17;
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_18, L_19, NULL);
		// tempVector2 = thisRectTransform.anchorMin;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03(L_20, NULL);
		__this->___tempVector2_17 = L_21;
		// tempVector2.y = Anim.Quint.Out(currentAnchorMinY, 0.5f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___tempVector2_17);
		float L_23 = __this->___currentAnchorMinY_15;
		float L_24 = __this->___animDeltaTime_10;
		float L_25 = __this->___animationDuration_6;
		float L_26;
		L_26 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_23, (0.5f), L_24, L_25, NULL);
		L_22->___y_1 = L_26;
		// thisRectTransform.anchorMin = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___tempVector2_17;
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_27, L_28, NULL);
		// tempVector2 = thisRectTransform.anchorMax;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_29, NULL);
		__this->___tempVector2_17 = L_30;
		// tempVector2.y = Anim.Quint.Out(currentAnchorMaxY, 0.5f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&__this->___tempVector2_17);
		float L_32 = __this->___currentAnchorMaxY_16;
		float L_33 = __this->___animDeltaTime_10;
		float L_34 = __this->___animationDuration_6;
		float L_35;
		L_35 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_32, (0.5f), L_33, L_34, NULL);
		L_31->___y_1 = L_35;
		// thisRectTransform.anchorMax = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = __this->___tempVector2_17;
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_36, L_37, NULL);
		return;
	}

IL_013a:
	{
		// thisRectTransform.pivot = new Vector2(thisRectTransform.pivot.x, 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38 = __this->___thisRectTransform_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_39, NULL);
		float L_41 = L_40.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_42), L_41, (0.5f), /*hidden argument*/NULL);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_38, L_42, NULL);
		// thisRectTransform.anchorMin = new Vector2(thisRectTransform.anchorMin.x, 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43 = __this->___thisRectTransform_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03(L_44, NULL);
		float L_46 = L_45.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_47), L_46, (0.5f), /*hidden argument*/NULL);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_43, L_47, NULL);
		// thisRectTransform.anchorMax = new Vector2(thisRectTransform.anchorMax.x, 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48 = __this->___thisRectTransform_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_49, NULL);
		float L_51 = L_50.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), L_51, (0.5f), /*hidden argument*/NULL);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_48, L_52, NULL);
		// state = 0;
		__this->___state_8 = 0;
		return;
	}

IL_01b1:
	{
		// else if (state == 2)
		int32_t L_53 = __this->___state_8;
		if ((!(((uint32_t)L_53) == ((uint32_t)2))))
		{
			goto IL_0367;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_54 = __this->___animDeltaTime_10;
		float L_55 = __this->___animationDuration_6;
		if ((!(((float)L_54) <= ((float)L_55))))
		{
			goto IL_02f1;
		}
	}
	{
		// if (darkenBackground)
		bool L_56 = __this->___darkenBackground_4;
		if (!L_56)
		{
			goto IL_0203;
		}
	}
	{
		// backroundCanvasGroup.alpha = Anim.Quint.In(currentBackgroundAlpha, 0f, animDeltaTime, animationDuration * 0.75f);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_57 = __this->___backroundCanvasGroup_12;
		float L_58 = __this->___currentBackgroundAlpha_13;
		float L_59 = __this->___animDeltaTime_10;
		float L_60 = __this->___animationDuration_6;
		float L_61;
		L_61 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_58, (0.0f), L_59, ((float)il2cpp_codegen_multiply(L_60, (0.75f))), NULL);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_57, L_61, NULL);
	}

IL_0203:
	{
		// tempVector2 = thisRectTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_62 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_62, NULL);
		__this->___tempVector2_17 = L_63;
		// tempVector2.y = Anim.Quint.In(currentPivotY, 1.1f, animDeltaTime, animationDuration * 0.75f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_64 = (&__this->___tempVector2_17);
		float L_65 = __this->___currentPivotY_14;
		float L_66 = __this->___animDeltaTime_10;
		float L_67 = __this->___animationDuration_6;
		float L_68;
		L_68 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_65, (1.10000002f), L_66, ((float)il2cpp_codegen_multiply(L_67, (0.75f))), NULL);
		L_64->___y_1 = L_68;
		// thisRectTransform.pivot = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_69 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = __this->___tempVector2_17;
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_69, L_70, NULL);
		// tempVector2 = thisRectTransform.anchorMin;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_71 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03(L_71, NULL);
		__this->___tempVector2_17 = L_72;
		// tempVector2.y = Anim.Quint.In(currentAnchorMinY, 0f, animDeltaTime, animationDuration * 0.75f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_73 = (&__this->___tempVector2_17);
		float L_74 = __this->___currentAnchorMinY_15;
		float L_75 = __this->___animDeltaTime_10;
		float L_76 = __this->___animationDuration_6;
		float L_77;
		L_77 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_74, (0.0f), L_75, ((float)il2cpp_codegen_multiply(L_76, (0.75f))), NULL);
		L_73->___y_1 = L_77;
		// thisRectTransform.anchorMin = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_78 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = __this->___tempVector2_17;
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_78, L_79, NULL);
		// tempVector2 = thisRectTransform.anchorMax;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_80 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
		L_81 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_80, NULL);
		__this->___tempVector2_17 = L_81;
		// tempVector2.y = Anim.Quint.In(currentAnchorMaxY, 0f, animDeltaTime, animationDuration * 0.75f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_82 = (&__this->___tempVector2_17);
		float L_83 = __this->___currentAnchorMaxY_16;
		float L_84 = __this->___animDeltaTime_10;
		float L_85 = __this->___animationDuration_6;
		float L_86;
		L_86 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_83, (0.0f), L_84, ((float)il2cpp_codegen_multiply(L_85, (0.75f))), NULL);
		L_82->___y_1 = L_86;
		// thisRectTransform.anchorMax = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_87 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = __this->___tempVector2_17;
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_87, L_88, NULL);
		return;
	}

IL_02f1:
	{
		// thisRectTransform.pivot = new Vector2(thisRectTransform.pivot.x, 1.1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_89 = __this->___thisRectTransform_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_90 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91;
		L_91 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_90, NULL);
		float L_92 = L_91.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93;
		memset((&L_93), 0, sizeof(L_93));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_93), L_92, (1.10000002f), /*hidden argument*/NULL);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_89, L_93, NULL);
		// thisRectTransform.anchorMin = new Vector2(thisRectTransform.anchorMin.x, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_94 = __this->___thisRectTransform_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_95 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96;
		L_96 = RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03(L_95, NULL);
		float L_97 = L_96.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_98), L_97, (0.0f), /*hidden argument*/NULL);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_94, L_98, NULL);
		// thisRectTransform.anchorMax = new Vector2(thisRectTransform.anchorMax.x, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_99 = __this->___thisRectTransform_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_100 = __this->___thisRectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101;
		L_101 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_100, NULL);
		float L_102 = L_101.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_103), L_102, (0.0f), /*hidden argument*/NULL);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_99, L_103, NULL);
		// state = 0;
		__this->___state_8 = 0;
	}

IL_0367:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.DialogBoxConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogBoxConfig__ctor_m50E6C1F91C27BF210788A57428380760E0F876D6 (DialogBoxConfig_t3378B6285D1AD18F703D5279A082FE1F0697201A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool darkenBackground = true;
		__this->___darkenBackground_4 = (bool)1;
		// [SerializeField] private float animationDuration = 1f;
		__this->___animationDuration_6 = (1.0f);
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
// System.Void MaterialUI.EZAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EZAnim_Start_m472BB8D3DC1C951A6614CACA7BA91C3276D6E117 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// activeList = new bool[theStructs.Count];
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_0 = __this->___theStructs_4;
		int32_t L_1;
		L_1 = List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_inline(L_0, List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___activeList_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeList_5), (void*)L_2);
		// for (int i = 0; i < theStructs.Count; i++)
		V_0 = 0;
		goto IL_016a;
	}

IL_001d:
	{
		// tempStruct = theStructs[i];
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_3 = __this->___theStructs_4;
		int32_t L_4 = V_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 L_5;
		L_5 = List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32(L_3, L_4, List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var);
		__this->___tempStruct_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___animName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___animTag_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetGameObject_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetComponent_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetVariable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___RealComponent_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___realField_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___realProperty_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___variableType_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___initialMaterial_27), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetMaterial_28), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodTargetGameObject_37), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodTargetComponent_38), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodTargetMethod_39), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodRealComponent_40), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodRealMethod_41), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodParam_42), (void*)NULL);
		#endif
		// tempStruct.RealComponent = tempStruct.targetGameObject.GetComponent(tempStruct.targetComponent);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_6 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_7 = (&__this->___tempStruct_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___targetGameObject_2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_9 = (&__this->___tempStruct_6);
		String_t* L_10 = L_9->___targetComponent_3;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_11;
		L_11 = GameObject_GetComponent_m77E0D94E1307893530781656765A4EA09BB63B45(L_8, L_10, NULL);
		L_6->___RealComponent_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___RealComponent_5), (void*)L_11);
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_12 = (&__this->___tempStruct_6);
		int32_t L_13 = L_12->___valueType_10;
		if (L_13)
		{
			goto IL_009d;
		}
	}
	{
		// tempStruct.realField = tempStruct.targetGameObject.GetComponent(tempStruct.targetComponent).GetType().GetField(tempStruct.targetVariable);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_14 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_15 = (&__this->___tempStruct_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___targetGameObject_2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_17 = (&__this->___tempStruct_6);
		String_t* L_18 = L_17->___targetComponent_3;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_19;
		L_19 = GameObject_GetComponent_m77E0D94E1307893530781656765A4EA09BB63B45(L_16, L_18, NULL);
		Type_t* L_20;
		L_20 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_19, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_21 = (&__this->___tempStruct_6);
		String_t* L_22 = L_21->___targetVariable_4;
		FieldInfo_t* L_23;
		L_23 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_20, L_22, NULL);
		L_14->___realField_6 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___realField_6), (void*)L_23);
	}

IL_009d:
	{
		// if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_24 = (&__this->___tempStruct_6);
		int32_t L_25 = L_24->___valueType_10;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00e6;
		}
	}
	{
		// tempStruct.realProperty = tempStruct.targetGameObject.GetComponent(tempStruct.targetComponent).GetType().GetProperty(tempStruct.targetVariable);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_26 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_27 = (&__this->___tempStruct_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___targetGameObject_2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_29 = (&__this->___tempStruct_6);
		String_t* L_30 = L_29->___targetComponent_3;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_31;
		L_31 = GameObject_GetComponent_m77E0D94E1307893530781656765A4EA09BB63B45(L_28, L_30, NULL);
		Type_t* L_32;
		L_32 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_31, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_33 = (&__this->___tempStruct_6);
		String_t* L_34 = L_33->___targetVariable_4;
		PropertyInfo_t* L_35;
		L_35 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_32, L_34, NULL);
		L_26->___realProperty_7 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___realProperty_7), (void*)L_35);
	}

IL_00e6:
	{
		// if (tempStruct.methodOnEnd)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_36 = (&__this->___tempStruct_6);
		bool L_37 = L_36->___methodOnEnd_36;
		if (!L_37)
		{
			goto IL_0154;
		}
	}
	{
		// tempStruct.methodRealComponent = tempStruct.methodTargetGameObject.GetComponent(tempStruct.methodTargetComponent);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_38 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_39 = (&__this->___tempStruct_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = L_39->___methodTargetGameObject_37;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_41 = (&__this->___tempStruct_6);
		String_t* L_42 = L_41->___methodTargetComponent_38;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_43;
		L_43 = GameObject_GetComponent_m77E0D94E1307893530781656765A4EA09BB63B45(L_40, L_42, NULL);
		L_38->___methodRealComponent_40 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___methodRealComponent_40), (void*)L_43);
		// tempStruct.methodRealMethod = tempStruct.methodTargetGameObject.GetComponent(tempStruct.methodTargetComponent).GetType().GetMethod(tempStruct.methodTargetMethod);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_44 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_45 = (&__this->___tempStruct_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = L_45->___methodTargetGameObject_37;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_47 = (&__this->___tempStruct_6);
		String_t* L_48 = L_47->___methodTargetComponent_38;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_49;
		L_49 = GameObject_GetComponent_m77E0D94E1307893530781656765A4EA09BB63B45(L_46, L_48, NULL);
		Type_t* L_50;
		L_50 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_49, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_51 = (&__this->___tempStruct_6);
		String_t* L_52 = L_51->___methodTargetMethod_39;
		MethodInfo_t* L_53;
		L_53 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_50, L_52, NULL);
		L_44->___methodRealMethod_41 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->___methodRealMethod_41), (void*)L_53);
	}

IL_0154:
	{
		// theStructs[i] = tempStruct;
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_54 = __this->___theStructs_4;
		int32_t L_55 = V_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 L_56 = __this->___tempStruct_6;
		List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D(L_54, L_55, L_56, List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D_RuntimeMethod_var);
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_016a:
	{
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_58 = V_0;
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_59 = __this->___theStructs_4;
		int32_t L_60;
		L_60 = List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_inline(L_59, List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MaterialUI.EZAnim::AnimStruct(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EZAnim_AnimStruct_m96049A6E546D180F7EA9BD8BC6AC94E51F2365D1 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1846B4DDA524F81CCA0CAA7BBB8F523C4C4CF9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CA027B17827714E4AA28C138746095B4E13F2F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8905CB8397FB05DB48D636D4EB7B450F6E09A26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC66E4E22D4B2659AA643E1B215EAF6F6620015DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFAAF3B3B2482804BB0C52BB984697D4F757A73E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeList[i] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->___activeList_5;
		int32_t L_1 = ___i0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (bool)1);
		// tempStruct = theStructs[i];
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_2 = __this->___theStructs_4;
		int32_t L_3 = ___i0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 L_4;
		L_4 = List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32(L_2, L_3, List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var);
		__this->___tempStruct_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___animName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___animTag_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetGameObject_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetComponent_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetVariable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___RealComponent_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___realField_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___realProperty_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___variableType_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___initialMaterial_27), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetMaterial_28), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodTargetGameObject_37), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodTargetComponent_38), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodTargetMethod_39), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodRealComponent_40), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodRealMethod_41), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodParam_42), (void*)NULL);
		#endif
		// tempStruct.animStartTime = Time.realtimeSinceStartup + tempStruct.delay;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_5 = (&__this->___tempStruct_6);
		float L_6;
		L_6 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_7 = (&__this->___tempStruct_6);
		float L_8 = L_7->___delay_44;
		L_5->___animStartTime_33 = ((float)il2cpp_codegen_add(L_6, L_8));
		// if (tempStruct.variableType == "System.Single")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_9 = (&__this->___tempStruct_6);
		String_t* L_10 = L_9->___variableType_9;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892, NULL);
		if (!L_11)
		{
			goto IL_00cd;
		}
	}
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_12 = (&__this->___tempStruct_6);
		int32_t L_13 = L_12->___valueType_10;
		if (L_13)
		{
			goto IL_008b;
		}
	}
	{
		// tempStruct.initialFloat = (float)tempStruct.realField.GetValue(tempStruct.RealComponent);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_14 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_15 = (&__this->___tempStruct_6);
		FieldInfo_t* L_16 = L_15->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_17 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_18 = L_17->___RealComponent_5;
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_16, L_18);
		L_14->___initialFloat_15 = ((*(float*)((float*)(float*)UnBox(L_19, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_008b:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_20 = (&__this->___tempStruct_6);
		int32_t L_21 = L_20->___valueType_10;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0446;
		}
	}
	{
		// tempStruct.initialFloat = (float)tempStruct.realProperty.GetValue(tempStruct.RealComponent, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_22 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_23 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_24 = L_23->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_25 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_26 = L_25->___RealComponent_5;
		RuntimeObject* L_27;
		L_27 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_24, L_26, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		L_22->___initialFloat_15 = ((*(float*)((float*)(float*)UnBox(L_27, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_00cd:
	{
		// else if (tempStruct.variableType == "System.Int32")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_28 = (&__this->___tempStruct_6);
		String_t* L_29 = L_28->___variableType_9;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A, NULL);
		if (!L_30)
		{
			goto IL_0163;
		}
	}
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_31 = (&__this->___tempStruct_6);
		int32_t L_32 = L_31->___valueType_10;
		if (L_32)
		{
			goto IL_0121;
		}
	}
	{
		// tempStruct.initialInt = (int)tempStruct.realField.GetValue(tempStruct.RealComponent);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_33 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_34 = (&__this->___tempStruct_6);
		FieldInfo_t* L_35 = L_34->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_36 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_37 = L_36->___RealComponent_5;
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_35, L_37);
		L_33->___initialInt_13 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_38, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_0121:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_39 = (&__this->___tempStruct_6);
		int32_t L_40 = L_39->___valueType_10;
		if ((!(((uint32_t)L_40) == ((uint32_t)1))))
		{
			goto IL_0446;
		}
	}
	{
		// tempStruct.initialInt = (int)tempStruct.realProperty.GetValue(tempStruct.RealComponent, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_41 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_42 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_43 = L_42->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_44 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_45 = L_44->___RealComponent_5;
		RuntimeObject* L_46;
		L_46 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_43, L_45, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		L_41->___initialInt_13 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_46, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_0163:
	{
		// else if (tempStruct.variableType == "UnityEngine.Vector2")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_47 = (&__this->___tempStruct_6);
		String_t* L_48 = L_47->___variableType_9;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralB8905CB8397FB05DB48D636D4EB7B450F6E09A26, NULL);
		if (!L_49)
		{
			goto IL_01f9;
		}
	}
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_50 = (&__this->___tempStruct_6);
		int32_t L_51 = L_50->___valueType_10;
		if (L_51)
		{
			goto IL_01b7;
		}
	}
	{
		// tempStruct.initialVector2 = (Vector2)tempStruct.realField.GetValue(tempStruct.RealComponent);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_52 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_53 = (&__this->___tempStruct_6);
		FieldInfo_t* L_54 = L_53->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_55 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_56 = L_55->___RealComponent_5;
		RuntimeObject* L_57;
		L_57 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_54, L_56);
		L_52->___initialVector2_17 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_57, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_01b7:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_58 = (&__this->___tempStruct_6);
		int32_t L_59 = L_58->___valueType_10;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0446;
		}
	}
	{
		// tempStruct.initialVector2 = (Vector2)tempStruct.realProperty.GetValue(tempStruct.RealComponent, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_60 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_61 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_62 = L_61->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_63 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_64 = L_63->___RealComponent_5;
		RuntimeObject* L_65;
		L_65 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_62, L_64, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		L_60->___initialVector2_17 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_65, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_01f9:
	{
		// else if (tempStruct.variableType == "UnityEngine.Vector3")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_66 = (&__this->___tempStruct_6);
		String_t* L_67 = L_66->___variableType_9;
		bool L_68;
		L_68 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_67, _stringLiteral1846B4DDA524F81CCA0CAA7BBB8F523C4C4CF9DB, NULL);
		if (!L_68)
		{
			goto IL_028f;
		}
	}
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_69 = (&__this->___tempStruct_6);
		int32_t L_70 = L_69->___valueType_10;
		if (L_70)
		{
			goto IL_024d;
		}
	}
	{
		// tempStruct.initialVector3 = (Vector3)tempStruct.realField.GetValue(tempStruct.RealComponent);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_71 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_72 = (&__this->___tempStruct_6);
		FieldInfo_t* L_73 = L_72->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_74 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_75 = L_74->___RealComponent_5;
		RuntimeObject* L_76;
		L_76 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_73, L_75);
		L_71->___initialVector3_19 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_76, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_024d:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_77 = (&__this->___tempStruct_6);
		int32_t L_78 = L_77->___valueType_10;
		if ((!(((uint32_t)L_78) == ((uint32_t)1))))
		{
			goto IL_0446;
		}
	}
	{
		// tempStruct.initialVector3 = (Vector3)tempStruct.realProperty.GetValue(tempStruct.RealComponent, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_79 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_80 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_81 = L_80->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_82 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_83 = L_82->___RealComponent_5;
		RuntimeObject* L_84;
		L_84 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_81, L_83, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		L_79->___initialVector3_19 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_84, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_028f:
	{
		// else if (tempStruct.variableType == "UnityEngine.Rect")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_85 = (&__this->___tempStruct_6);
		String_t* L_86 = L_85->___variableType_9;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral3CA027B17827714E4AA28C138746095B4E13F2F0, NULL);
		if (!L_87)
		{
			goto IL_0325;
		}
	}
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_88 = (&__this->___tempStruct_6);
		int32_t L_89 = L_88->___valueType_10;
		if (L_89)
		{
			goto IL_02e3;
		}
	}
	{
		// tempStruct.initialRect = (Rect)tempStruct.realField.GetValue(tempStruct.RealComponent);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_90 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_91 = (&__this->___tempStruct_6);
		FieldInfo_t* L_92 = L_91->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_93 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_94 = L_93->___RealComponent_5;
		RuntimeObject* L_95;
		L_95 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_92, L_94);
		L_90->___initialRect_23 = ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_95, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_02e3:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_96 = (&__this->___tempStruct_6);
		int32_t L_97 = L_96->___valueType_10;
		if ((!(((uint32_t)L_97) == ((uint32_t)1))))
		{
			goto IL_0446;
		}
	}
	{
		// tempStruct.initialRect = (Rect)tempStruct.realProperty.GetValue(tempStruct.RealComponent, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_98 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_99 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_100 = L_99->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_101 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_102 = L_101->___RealComponent_5;
		RuntimeObject* L_103;
		L_103 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_100, L_102, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		L_98->___initialRect_23 = ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_103, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_0325:
	{
		// else if (tempStruct.variableType == "UnityEngine.Color")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_104 = (&__this->___tempStruct_6);
		String_t* L_105 = L_104->___variableType_9;
		bool L_106;
		L_106 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_105, _stringLiteralCFAAF3B3B2482804BB0C52BB984697D4F757A73E, NULL);
		if (!L_106)
		{
			goto IL_03bb;
		}
	}
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_107 = (&__this->___tempStruct_6);
		int32_t L_108 = L_107->___valueType_10;
		if (L_108)
		{
			goto IL_0379;
		}
	}
	{
		// tempStruct.initialColor = (Color)tempStruct.realField.GetValue(tempStruct.RealComponent);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_109 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_110 = (&__this->___tempStruct_6);
		FieldInfo_t* L_111 = L_110->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_112 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_113 = L_112->___RealComponent_5;
		RuntimeObject* L_114;
		L_114 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_111, L_113);
		L_109->___initialColor_25 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_114, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_0379:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_115 = (&__this->___tempStruct_6);
		int32_t L_116 = L_115->___valueType_10;
		if ((!(((uint32_t)L_116) == ((uint32_t)1))))
		{
			goto IL_0446;
		}
	}
	{
		// tempStruct.initialColor = (Color)tempStruct.realProperty.GetValue(tempStruct.RealComponent, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_117 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_118 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_119 = L_118->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_120 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_121 = L_120->___RealComponent_5;
		RuntimeObject* L_122;
		L_122 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_119, L_121, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		L_117->___initialColor_25 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_122, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))));
		goto IL_0446;
	}

IL_03bb:
	{
		// else if (tempStruct.variableType == "UnityEngine.Material")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_123 = (&__this->___tempStruct_6);
		String_t* L_124 = L_123->___variableType_9;
		bool L_125;
		L_125 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_124, _stringLiteralC66E4E22D4B2659AA643E1B215EAF6F6620015DA, NULL);
		if (!L_125)
		{
			goto IL_0446;
		}
	}
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_126 = (&__this->___tempStruct_6);
		int32_t L_127 = L_126->___valueType_10;
		if (L_127)
		{
			goto IL_040c;
		}
	}
	{
		// tempStruct.initialMaterial = (Material)tempStruct.realField.GetValue(tempStruct.RealComponent);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_128 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_129 = (&__this->___tempStruct_6);
		FieldInfo_t* L_130 = L_129->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_131 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_132 = L_131->___RealComponent_5;
		RuntimeObject* L_133;
		L_133 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_130, L_132);
		L_128->___initialMaterial_27 = ((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_133, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_128->___initialMaterial_27), (void*)((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_133, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)));
		goto IL_0446;
	}

IL_040c:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_134 = (&__this->___tempStruct_6);
		int32_t L_135 = L_134->___valueType_10;
		if ((!(((uint32_t)L_135) == ((uint32_t)1))))
		{
			goto IL_0446;
		}
	}
	{
		// tempStruct.initialMaterial = (Material)tempStruct.realProperty.GetValue(tempStruct.RealComponent, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_136 = (&__this->___tempStruct_6);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_137 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_138 = L_137->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_139 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_140 = L_139->___RealComponent_5;
		RuntimeObject* L_141;
		L_141 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_138, L_140, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		L_136->___initialMaterial_27 = ((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_141, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_136->___initialMaterial_27), (void*)((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_141, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)));
	}

IL_0446:
	{
		// tempStruct.called = false;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_142 = (&__this->___tempStruct_6);
		L_142->___called_43 = (bool)0;
		// theStructs[i] = tempStruct;
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_143 = __this->___theStructs_4;
		int32_t L_144 = ___i0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 L_145 = __this->___tempStruct_6;
		List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D(L_143, L_144, L_145, List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MaterialUI.EZAnim::Animate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EZAnim_Animate_mA75A2F0F0E7BD317C007E3C82F6F185BD470582A (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, const RuntimeMethod* method) 
{
	{
		// AnimStruct(0);
		EZAnim_AnimStruct_m96049A6E546D180F7EA9BD8BC6AC94E51F2365D1(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.EZAnim::AnimateAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EZAnim_AnimateAll_m3B31D1211211607698B492B791CEB82D9A3058B5 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < theStructs.Count; i++)
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		// AnimStruct(i);
		int32_t L_0 = V_0;
		EZAnim_AnimStruct_m96049A6E546D180F7EA9BD8BC6AC94E51F2365D1(__this, L_0, NULL);
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_000f:
	{
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_2 = V_0;
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_3 = __this->___theStructs_4;
		int32_t L_4;
		L_4 = List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_inline(L_3, List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MaterialUI.EZAnim::AnimateByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EZAnim_AnimateByIndex_mE48EA559A79279E781B7A7D4421F34D37C8B80D3 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < theStructs.Count; i++)
		V_0 = 0;
		goto IL_0013;
	}

IL_0004:
	{
		// if (i == index)
		int32_t L_0 = V_0;
		int32_t L_1 = ___index0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		// AnimStruct(i);
		int32_t L_2 = V_0;
		EZAnim_AnimStruct_m96049A6E546D180F7EA9BD8BC6AC94E51F2365D1(__this, L_2, NULL);
	}

IL_000f:
	{
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0013:
	{
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_4 = V_0;
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_5 = __this->___theStructs_4;
		int32_t L_6;
		L_6 = List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_inline(L_5, List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MaterialUI.EZAnim::AnimateByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EZAnim_AnimateByName_m43F9C60D859DFA4DFDB573B68D682972957A7922 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < theStructs.Count; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		// if (theStructs[i].animName == name)
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_0 = __this->___theStructs_4;
		int32_t L_1 = V_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 L_2;
		L_2 = List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32(L_0, L_1, List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var);
		String_t* L_3 = L_2.___animName_0;
		String_t* L_4 = ___name0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// AnimStruct(i);
		int32_t L_6 = V_0;
		EZAnim_AnimStruct_m96049A6E546D180F7EA9BD8BC6AC94E51F2365D1(__this, L_6, NULL);
	}

IL_0024:
	{
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_8 = V_0;
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_9 = __this->___theStructs_4;
		int32_t L_10;
		L_10 = List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_inline(L_9, List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MaterialUI.EZAnim::AnimateByTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EZAnim_AnimateByTag_mFFCB39F53EE791EBF2693CE4FCD7A5D91EA4236B (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, String_t* ___tag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < theStructs.Count; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		// if (theStructs[i].animTag == tag)
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_0 = __this->___theStructs_4;
		int32_t L_1 = V_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 L_2;
		L_2 = List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32(L_0, L_1, List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var);
		String_t* L_3 = L_2.___animTag_1;
		String_t* L_4 = ___tag0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// AnimStruct(i);
		int32_t L_6 = V_0;
		EZAnim_AnimStruct_m96049A6E546D180F7EA9BD8BC6AC94E51F2365D1(__this, L_6, NULL);
	}

IL_0024:
	{
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_8 = V_0;
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_9 = __this->___theStructs_4;
		int32_t L_10;
		L_10 = List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_inline(L_9, List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MaterialUI.EZAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EZAnim_Update_m2CF5AE3946E2FDCCD90C6749148053BF3CE82757 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1846B4DDA524F81CCA0CAA7BBB8F523C4C4CF9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CA027B17827714E4AA28C138746095B4E13F2F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8905CB8397FB05DB48D636D4EB7B450F6E09A26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC66E4E22D4B2659AA643E1B215EAF6F6620015DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFAAF3B3B2482804BB0C52BB984697D4F757A73E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < theStructs.Count; i++)
		V_0 = 0;
		goto IL_1311;
	}

IL_0007:
	{
		// if (activeList[i] == true)
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->___activeList_5;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		uint8_t L_3 = (uint8_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_130d;
		}
	}
	{
		// tempStruct = theStructs[i];
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_4 = __this->___theStructs_4;
		int32_t L_5 = V_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 L_6;
		L_6 = List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32(L_4, L_5, List_1_get_Item_m08180EE6BBF948A8642ADAB330CC498A372E0B32_RuntimeMethod_var);
		__this->___tempStruct_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___animName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___animTag_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetGameObject_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetComponent_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetVariable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___RealComponent_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___realField_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___realProperty_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___variableType_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___initialMaterial_27), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___targetMaterial_28), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodTargetGameObject_37), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodTargetComponent_38), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodTargetMethod_39), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodRealComponent_40), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodRealMethod_41), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___tempStruct_6))->___methodParam_42), (void*)NULL);
		#endif
		// tempStruct.animDeltaTime = Time.realtimeSinceStartup - tempStruct.animStartTime;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_7 = (&__this->___tempStruct_6);
		float L_8;
		L_8 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_9 = (&__this->___tempStruct_6);
		float L_10 = L_9->___animStartTime_33;
		L_7->___animDeltaTime_34 = ((float)il2cpp_codegen_subtract(L_8, L_10));
		// if (tempStruct.animDeltaTime < tempStruct.animationDuration)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_11 = (&__this->___tempStruct_6);
		float L_12 = L_11->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_13 = (&__this->___tempStruct_6);
		float L_14 = L_13->___animationDuration_35;
		if ((!(((float)L_12) < ((float)L_14))))
		{
			goto IL_0b94;
		}
	}
	{
		// if (tempStruct.variableType == "System.Single")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_15 = (&__this->___tempStruct_6);
		String_t* L_16 = L_15->___variableType_9;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892, NULL);
		if (!L_17)
		{
			goto IL_012f;
		}
	}
	{
		// tempFloat = UpdateAnimation(tempStruct.initialFloat, tempStruct.targetFloat, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_18 = (&__this->___tempStruct_6);
		float L_19 = L_18->___initialFloat_15;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_20 = (&__this->___tempStruct_6);
		float L_21 = L_20->___targetFloat_16;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_22 = (&__this->___tempStruct_6);
		float L_23 = L_22->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_24 = (&__this->___tempStruct_6);
		float L_25 = L_24->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_26 = (&__this->___tempStruct_6);
		int32_t L_27 = L_26->___animationType_8;
		float L_28;
		L_28 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_19, L_21, L_23, L_25, L_27, NULL);
		__this->___tempFloat_8 = L_28;
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_29 = (&__this->___tempStruct_6);
		int32_t L_30 = L_29->___valueType_10;
		if (L_30)
		{
			goto IL_00f2;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempFloat);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_31 = (&__this->___tempStruct_6);
		FieldInfo_t* L_32 = L_31->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_33 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_34 = L_33->___RealComponent_5;
		float L_35 = __this->___tempFloat_8;
		float L_36 = L_35;
		RuntimeObject* L_37 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_36);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_32, L_34, L_37, NULL);
		goto IL_12fb;
	}

IL_00f2:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_38 = (&__this->___tempStruct_6);
		int32_t L_39 = L_38->___valueType_10;
		if ((!(((uint32_t)L_39) == ((uint32_t)1))))
		{
			goto IL_12fb;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempFloat, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_40 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_41 = L_40->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_42 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_43 = L_42->___RealComponent_5;
		float L_44 = __this->___tempFloat_8;
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_45);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_41, L_43, L_46, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12fb;
	}

IL_012f:
	{
		// else if (tempStruct.variableType == "System.Int32")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_47 = (&__this->___tempStruct_6);
		String_t* L_48 = L_47->___variableType_9;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A, NULL);
		if (!L_49)
		{
			goto IL_020d;
		}
	}
	{
		// tempFloat = UpdateAnimation(tempStruct.initialInt, tempStruct.targetInt, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_50 = (&__this->___tempStruct_6);
		int32_t L_51 = L_50->___initialInt_13;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_52 = (&__this->___tempStruct_6);
		int32_t L_53 = L_52->___targetInt_14;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_54 = (&__this->___tempStruct_6);
		float L_55 = L_54->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_56 = (&__this->___tempStruct_6);
		float L_57 = L_56->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_58 = (&__this->___tempStruct_6);
		int32_t L_59 = L_58->___animationType_8;
		float L_60;
		L_60 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, ((float)L_51), ((float)L_53), L_55, L_57, L_59, NULL);
		__this->___tempFloat_8 = L_60;
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_61 = (&__this->___tempStruct_6);
		int32_t L_62 = L_61->___valueType_10;
		if (L_62)
		{
			goto IL_01cb;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, Mathf.RoundToInt(tempFloat));
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_63 = (&__this->___tempStruct_6);
		FieldInfo_t* L_64 = L_63->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_65 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_66 = L_65->___RealComponent_5;
		float L_67 = __this->___tempFloat_8;
		int32_t L_68;
		L_68 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_67, NULL);
		int32_t L_69 = L_68;
		RuntimeObject* L_70 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_69);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_64, L_66, L_70, NULL);
		goto IL_12fb;
	}

IL_01cb:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_71 = (&__this->___tempStruct_6);
		int32_t L_72 = L_71->___valueType_10;
		if ((!(((uint32_t)L_72) == ((uint32_t)1))))
		{
			goto IL_12fb;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, Mathf.RoundToInt(tempFloat), null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_73 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_74 = L_73->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_75 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_76 = L_75->___RealComponent_5;
		float L_77 = __this->___tempFloat_8;
		int32_t L_78;
		L_78 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_77, NULL);
		int32_t L_79 = L_78;
		RuntimeObject* L_80 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_79);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_74, L_76, L_80, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12fb;
	}

IL_020d:
	{
		// else if (tempStruct.variableType == "UnityEngine.Vector2")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_81 = (&__this->___tempStruct_6);
		String_t* L_82 = L_81->___variableType_9;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteralB8905CB8397FB05DB48D636D4EB7B450F6E09A26, NULL);
		if (!L_83)
		{
			goto IL_036b;
		}
	}
	{
		// tempVector2 = tempStruct.initialVector2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_84 = (&__this->___tempStruct_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85 = L_84->___initialVector2_17;
		__this->___tempVector2_9 = L_85;
		// if (tempStruct.modifyParameter1)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_86 = (&__this->___tempStruct_6);
		bool L_87 = L_86->___modifyParameter1_29;
		if (!L_87)
		{
			goto IL_0297;
		}
	}
	{
		// tempVector2.x = UpdateAnimation(tempStruct.initialVector2.x, tempStruct.targetVector2.x, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_88 = (&__this->___tempVector2_9);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_89 = (&__this->___tempStruct_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_90 = (&L_89->___initialVector2_17);
		float L_91 = L_90->___x_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_92 = (&__this->___tempStruct_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_93 = (&L_92->___targetVector2_18);
		float L_94 = L_93->___x_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_95 = (&__this->___tempStruct_6);
		float L_96 = L_95->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_97 = (&__this->___tempStruct_6);
		float L_98 = L_97->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_99 = (&__this->___tempStruct_6);
		int32_t L_100 = L_99->___animationType_8;
		float L_101;
		L_101 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_91, L_94, L_96, L_98, L_100, NULL);
		L_88->___x_0 = L_101;
	}

IL_0297:
	{
		// if (tempStruct.modifyParameter2)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_102 = (&__this->___tempStruct_6);
		bool L_103 = L_102->___modifyParameter2_30;
		if (!L_103)
		{
			goto IL_02f6;
		}
	}
	{
		// tempVector2.y = UpdateAnimation(tempStruct.initialVector2.y, tempStruct.targetVector2.y, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_104 = (&__this->___tempVector2_9);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_105 = (&__this->___tempStruct_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_106 = (&L_105->___initialVector2_17);
		float L_107 = L_106->___y_1;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_108 = (&__this->___tempStruct_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_109 = (&L_108->___targetVector2_18);
		float L_110 = L_109->___y_1;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_111 = (&__this->___tempStruct_6);
		float L_112 = L_111->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_113 = (&__this->___tempStruct_6);
		float L_114 = L_113->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_115 = (&__this->___tempStruct_6);
		int32_t L_116 = L_115->___animationType_8;
		float L_117;
		L_117 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_107, L_110, L_112, L_114, L_116, NULL);
		L_104->___y_1 = L_117;
	}

IL_02f6:
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_118 = (&__this->___tempStruct_6);
		int32_t L_119 = L_118->___valueType_10;
		if (L_119)
		{
			goto IL_032e;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempVector2);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_120 = (&__this->___tempStruct_6);
		FieldInfo_t* L_121 = L_120->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_122 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_123 = L_122->___RealComponent_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_124 = __this->___tempVector2_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_125 = L_124;
		RuntimeObject* L_126 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_125);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_121, L_123, L_126, NULL);
		goto IL_12fb;
	}

IL_032e:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_127 = (&__this->___tempStruct_6);
		int32_t L_128 = L_127->___valueType_10;
		if ((!(((uint32_t)L_128) == ((uint32_t)1))))
		{
			goto IL_12fb;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempVector2, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_129 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_130 = L_129->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_131 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_132 = L_131->___RealComponent_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_133 = __this->___tempVector2_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_134 = L_133;
		RuntimeObject* L_135 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_134);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_130, L_132, L_135, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12fb;
	}

IL_036b:
	{
		// else if (tempStruct.variableType == "UnityEngine.Vector3")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_136 = (&__this->___tempStruct_6);
		String_t* L_137 = L_136->___variableType_9;
		bool L_138;
		L_138 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_137, _stringLiteral1846B4DDA524F81CCA0CAA7BBB8F523C4C4CF9DB, NULL);
		if (!L_138)
		{
			goto IL_0528;
		}
	}
	{
		// tempVector3 = tempStruct.initialVector3;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_139 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = L_139->___initialVector3_19;
		__this->___tempVector3_10 = L_140;
		// if (tempStruct.modifyParameter1)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_141 = (&__this->___tempStruct_6);
		bool L_142 = L_141->___modifyParameter1_29;
		if (!L_142)
		{
			goto IL_03f5;
		}
	}
	{
		// tempVector3.x = UpdateAnimation(tempStruct.initialVector3.x, tempStruct.targetVector3.x, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_143 = (&__this->___tempVector3_10);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_144 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_145 = (&L_144->___initialVector3_19);
		float L_146 = L_145->___x_2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_147 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_148 = (&L_147->___targetVector3_20);
		float L_149 = L_148->___x_2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_150 = (&__this->___tempStruct_6);
		float L_151 = L_150->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_152 = (&__this->___tempStruct_6);
		float L_153 = L_152->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_154 = (&__this->___tempStruct_6);
		int32_t L_155 = L_154->___animationType_8;
		float L_156;
		L_156 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_146, L_149, L_151, L_153, L_155, NULL);
		L_143->___x_2 = L_156;
	}

IL_03f5:
	{
		// if (tempStruct.modifyParameter2)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_157 = (&__this->___tempStruct_6);
		bool L_158 = L_157->___modifyParameter2_30;
		if (!L_158)
		{
			goto IL_0454;
		}
	}
	{
		// tempVector3.y = UpdateAnimation(tempStruct.initialVector3.y, tempStruct.targetVector3.y, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_159 = (&__this->___tempVector3_10);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_160 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_161 = (&L_160->___initialVector3_19);
		float L_162 = L_161->___y_3;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_163 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_164 = (&L_163->___targetVector3_20);
		float L_165 = L_164->___y_3;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_166 = (&__this->___tempStruct_6);
		float L_167 = L_166->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_168 = (&__this->___tempStruct_6);
		float L_169 = L_168->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_170 = (&__this->___tempStruct_6);
		int32_t L_171 = L_170->___animationType_8;
		float L_172;
		L_172 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_162, L_165, L_167, L_169, L_171, NULL);
		L_159->___y_3 = L_172;
	}

IL_0454:
	{
		// if (tempStruct.modifyParameter3)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_173 = (&__this->___tempStruct_6);
		bool L_174 = L_173->___modifyParameter3_31;
		if (!L_174)
		{
			goto IL_04b3;
		}
	}
	{
		// tempVector3.z = UpdateAnimation(tempStruct.initialVector3.z, tempStruct.targetVector3.z, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_175 = (&__this->___tempVector3_10);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_176 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_177 = (&L_176->___initialVector3_19);
		float L_178 = L_177->___z_4;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_179 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_180 = (&L_179->___targetVector3_20);
		float L_181 = L_180->___z_4;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_182 = (&__this->___tempStruct_6);
		float L_183 = L_182->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_184 = (&__this->___tempStruct_6);
		float L_185 = L_184->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_186 = (&__this->___tempStruct_6);
		int32_t L_187 = L_186->___animationType_8;
		float L_188;
		L_188 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_178, L_181, L_183, L_185, L_187, NULL);
		L_175->___z_4 = L_188;
	}

IL_04b3:
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_189 = (&__this->___tempStruct_6);
		int32_t L_190 = L_189->___valueType_10;
		if (L_190)
		{
			goto IL_04eb;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempVector3);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_191 = (&__this->___tempStruct_6);
		FieldInfo_t* L_192 = L_191->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_193 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_194 = L_193->___RealComponent_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_195 = __this->___tempVector3_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_196 = L_195;
		RuntimeObject* L_197 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_196);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_192, L_194, L_197, NULL);
		goto IL_12fb;
	}

IL_04eb:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_198 = (&__this->___tempStruct_6);
		int32_t L_199 = L_198->___valueType_10;
		if ((!(((uint32_t)L_199) == ((uint32_t)1))))
		{
			goto IL_12fb;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempVector3, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_200 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_201 = L_200->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_202 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_203 = L_202->___RealComponent_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204 = __this->___tempVector3_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205 = L_204;
		RuntimeObject* L_206 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_205);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_201, L_203, L_206, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12fb;
	}

IL_0528:
	{
		// else if (tempStruct.variableType == "UnityEngine.Rect")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_207 = (&__this->___tempStruct_6);
		String_t* L_208 = L_207->___variableType_9;
		bool L_209;
		L_209 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_208, _stringLiteral3CA027B17827714E4AA28C138746095B4E13F2F0, NULL);
		if (!L_209)
		{
			goto IL_0744;
		}
	}
	{
		// tempRect = tempStruct.initialRect;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_210 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_211 = L_210->___initialRect_23;
		__this->___tempRect_11 = L_211;
		// if (tempStruct.modifyParameter1)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_212 = (&__this->___tempStruct_6);
		bool L_213 = L_212->___modifyParameter1_29;
		if (!L_213)
		{
			goto IL_05b2;
		}
	}
	{
		// tempRect.x = UpdateAnimation(tempStruct.initialRect.x, tempStruct.targetRect.x, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_214 = (&__this->___tempRect_11);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_215 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_216 = (&L_215->___initialRect_23);
		float L_217;
		L_217 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_216, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_218 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_219 = (&L_218->___targetRect_24);
		float L_220;
		L_220 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_219, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_221 = (&__this->___tempStruct_6);
		float L_222 = L_221->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_223 = (&__this->___tempStruct_6);
		float L_224 = L_223->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_225 = (&__this->___tempStruct_6);
		int32_t L_226 = L_225->___animationType_8;
		float L_227;
		L_227 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_217, L_220, L_222, L_224, L_226, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_214, L_227, NULL);
	}

IL_05b2:
	{
		// if (tempStruct.modifyParameter2)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_228 = (&__this->___tempStruct_6);
		bool L_229 = L_228->___modifyParameter2_30;
		if (!L_229)
		{
			goto IL_0611;
		}
	}
	{
		// tempRect.y = UpdateAnimation(tempStruct.initialRect.y, tempStruct.targetRect.y, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_230 = (&__this->___tempRect_11);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_231 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_232 = (&L_231->___initialRect_23);
		float L_233;
		L_233 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_232, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_234 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_235 = (&L_234->___targetRect_24);
		float L_236;
		L_236 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_235, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_237 = (&__this->___tempStruct_6);
		float L_238 = L_237->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_239 = (&__this->___tempStruct_6);
		float L_240 = L_239->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_241 = (&__this->___tempStruct_6);
		int32_t L_242 = L_241->___animationType_8;
		float L_243;
		L_243 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_233, L_236, L_238, L_240, L_242, NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_230, L_243, NULL);
	}

IL_0611:
	{
		// if (tempStruct.modifyParameter3)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_244 = (&__this->___tempStruct_6);
		bool L_245 = L_244->___modifyParameter3_31;
		if (!L_245)
		{
			goto IL_0670;
		}
	}
	{
		// tempRect.width = UpdateAnimation(tempStruct.initialRect.width, tempStruct.targetRect.width, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_246 = (&__this->___tempRect_11);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_247 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_248 = (&L_247->___initialRect_23);
		float L_249;
		L_249 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_248, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_250 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_251 = (&L_250->___targetRect_24);
		float L_252;
		L_252 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_251, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_253 = (&__this->___tempStruct_6);
		float L_254 = L_253->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_255 = (&__this->___tempStruct_6);
		float L_256 = L_255->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_257 = (&__this->___tempStruct_6);
		int32_t L_258 = L_257->___animationType_8;
		float L_259;
		L_259 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_249, L_252, L_254, L_256, L_258, NULL);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_246, L_259, NULL);
	}

IL_0670:
	{
		// if (tempStruct.modifyParameter4)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_260 = (&__this->___tempStruct_6);
		bool L_261 = L_260->___modifyParameter4_32;
		if (!L_261)
		{
			goto IL_06cf;
		}
	}
	{
		// tempRect.height = UpdateAnimation(tempStruct.initialRect.height, tempStruct.targetRect.height, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_262 = (&__this->___tempRect_11);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_263 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_264 = (&L_263->___initialRect_23);
		float L_265;
		L_265 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_264, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_266 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_267 = (&L_266->___targetRect_24);
		float L_268;
		L_268 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_267, NULL);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_269 = (&__this->___tempStruct_6);
		float L_270 = L_269->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_271 = (&__this->___tempStruct_6);
		float L_272 = L_271->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_273 = (&__this->___tempStruct_6);
		int32_t L_274 = L_273->___animationType_8;
		float L_275;
		L_275 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_265, L_268, L_270, L_272, L_274, NULL);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_262, L_275, NULL);
	}

IL_06cf:
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_276 = (&__this->___tempStruct_6);
		int32_t L_277 = L_276->___valueType_10;
		if (L_277)
		{
			goto IL_0707;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempRect);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_278 = (&__this->___tempStruct_6);
		FieldInfo_t* L_279 = L_278->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_280 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_281 = L_280->___RealComponent_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_282 = __this->___tempRect_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_283 = L_282;
		RuntimeObject* L_284 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_283);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_279, L_281, L_284, NULL);
		goto IL_12fb;
	}

IL_0707:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_285 = (&__this->___tempStruct_6);
		int32_t L_286 = L_285->___valueType_10;
		if ((!(((uint32_t)L_286) == ((uint32_t)1))))
		{
			goto IL_12fb;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempRect, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_287 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_288 = L_287->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_289 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_290 = L_289->___RealComponent_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_291 = __this->___tempRect_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_292 = L_291;
		RuntimeObject* L_293 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_292);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_288, L_290, L_293, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12fb;
	}

IL_0744:
	{
		// else if (tempStruct.variableType == "UnityEngine.Color")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_294 = (&__this->___tempStruct_6);
		String_t* L_295 = L_294->___variableType_9;
		bool L_296;
		L_296 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_295, _stringLiteralCFAAF3B3B2482804BB0C52BB984697D4F757A73E, NULL);
		if (!L_296)
		{
			goto IL_0960;
		}
	}
	{
		// tempColor = tempStruct.initialColor;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_297 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_298 = L_297->___initialColor_25;
		__this->___tempColor_12 = L_298;
		// if (tempStruct.modifyParameter1)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_299 = (&__this->___tempStruct_6);
		bool L_300 = L_299->___modifyParameter1_29;
		if (!L_300)
		{
			goto IL_07ce;
		}
	}
	{
		// tempColor.r = UpdateAnimation(tempStruct.initialColor.r, tempStruct.targetColor.r, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_301 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_302 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_303 = (&L_302->___initialColor_25);
		float L_304 = L_303->___r_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_305 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_306 = (&L_305->___targetColor_26);
		float L_307 = L_306->___r_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_308 = (&__this->___tempStruct_6);
		float L_309 = L_308->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_310 = (&__this->___tempStruct_6);
		float L_311 = L_310->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_312 = (&__this->___tempStruct_6);
		int32_t L_313 = L_312->___animationType_8;
		float L_314;
		L_314 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_304, L_307, L_309, L_311, L_313, NULL);
		L_301->___r_0 = L_314;
	}

IL_07ce:
	{
		// if (tempStruct.modifyParameter2)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_315 = (&__this->___tempStruct_6);
		bool L_316 = L_315->___modifyParameter2_30;
		if (!L_316)
		{
			goto IL_082d;
		}
	}
	{
		// tempColor.g = UpdateAnimation(tempStruct.initialColor.g, tempStruct.targetColor.g, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_317 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_318 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_319 = (&L_318->___initialColor_25);
		float L_320 = L_319->___g_1;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_321 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_322 = (&L_321->___targetColor_26);
		float L_323 = L_322->___g_1;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_324 = (&__this->___tempStruct_6);
		float L_325 = L_324->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_326 = (&__this->___tempStruct_6);
		float L_327 = L_326->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_328 = (&__this->___tempStruct_6);
		int32_t L_329 = L_328->___animationType_8;
		float L_330;
		L_330 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_320, L_323, L_325, L_327, L_329, NULL);
		L_317->___g_1 = L_330;
	}

IL_082d:
	{
		// if (tempStruct.modifyParameter3)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_331 = (&__this->___tempStruct_6);
		bool L_332 = L_331->___modifyParameter3_31;
		if (!L_332)
		{
			goto IL_088c;
		}
	}
	{
		// tempColor.b = UpdateAnimation(tempStruct.initialColor.b, tempStruct.targetColor.b, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_333 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_334 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_335 = (&L_334->___initialColor_25);
		float L_336 = L_335->___b_2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_337 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_338 = (&L_337->___targetColor_26);
		float L_339 = L_338->___b_2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_340 = (&__this->___tempStruct_6);
		float L_341 = L_340->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_342 = (&__this->___tempStruct_6);
		float L_343 = L_342->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_344 = (&__this->___tempStruct_6);
		int32_t L_345 = L_344->___animationType_8;
		float L_346;
		L_346 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_336, L_339, L_341, L_343, L_345, NULL);
		L_333->___b_2 = L_346;
	}

IL_088c:
	{
		// if (tempStruct.modifyParameter4)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_347 = (&__this->___tempStruct_6);
		bool L_348 = L_347->___modifyParameter4_32;
		if (!L_348)
		{
			goto IL_08eb;
		}
	}
	{
		// tempColor.a = UpdateAnimation(tempStruct.initialColor.a, tempStruct.targetColor.a, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_349 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_350 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_351 = (&L_350->___initialColor_25);
		float L_352 = L_351->___a_3;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_353 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_354 = (&L_353->___targetColor_26);
		float L_355 = L_354->___a_3;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_356 = (&__this->___tempStruct_6);
		float L_357 = L_356->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_358 = (&__this->___tempStruct_6);
		float L_359 = L_358->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_360 = (&__this->___tempStruct_6);
		int32_t L_361 = L_360->___animationType_8;
		float L_362;
		L_362 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_352, L_355, L_357, L_359, L_361, NULL);
		L_349->___a_3 = L_362;
	}

IL_08eb:
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_363 = (&__this->___tempStruct_6);
		int32_t L_364 = L_363->___valueType_10;
		if (L_364)
		{
			goto IL_0923;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempColor);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_365 = (&__this->___tempStruct_6);
		FieldInfo_t* L_366 = L_365->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_367 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_368 = L_367->___RealComponent_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_369 = __this->___tempColor_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_370 = L_369;
		RuntimeObject* L_371 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_370);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_366, L_368, L_371, NULL);
		goto IL_12fb;
	}

IL_0923:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_372 = (&__this->___tempStruct_6);
		int32_t L_373 = L_372->___valueType_10;
		if ((!(((uint32_t)L_373) == ((uint32_t)1))))
		{
			goto IL_12fb;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempColor, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_374 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_375 = L_374->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_376 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_377 = L_376->___RealComponent_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_378 = __this->___tempColor_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_379 = L_378;
		RuntimeObject* L_380 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_379);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_375, L_377, L_380, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12fb;
	}

IL_0960:
	{
		// else if (tempStruct.variableType == "UnityEngine.Material")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_381 = (&__this->___tempStruct_6);
		String_t* L_382 = L_381->___variableType_9;
		bool L_383;
		L_383 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_382, _stringLiteralC66E4E22D4B2659AA643E1B215EAF6F6620015DA, NULL);
		if (!L_383)
		{
			goto IL_12fb;
		}
	}
	{
		// tempMaterial = tempStruct.initialMaterial;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_384 = (&__this->___tempStruct_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_385 = L_384->___initialMaterial_27;
		__this->___tempMaterial_13 = L_385;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_13), (void*)L_385);
		// tempColor = tempMaterial.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_386 = __this->___tempMaterial_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_387;
		L_387 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_386, NULL);
		__this->___tempColor_12 = L_387;
		// if (tempStruct.modifyParameter1)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_388 = (&__this->___tempStruct_6);
		bool L_389 = L_388->___modifyParameter1_29;
		if (!L_389)
		{
			goto IL_09fb;
		}
	}
	{
		// tempColor.r = UpdateAnimation(tempStruct.initialColor.r, tempStruct.initialColor.r, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_390 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_391 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_392 = (&L_391->___initialColor_25);
		float L_393 = L_392->___r_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_394 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_395 = (&L_394->___initialColor_25);
		float L_396 = L_395->___r_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_397 = (&__this->___tempStruct_6);
		float L_398 = L_397->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_399 = (&__this->___tempStruct_6);
		float L_400 = L_399->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_401 = (&__this->___tempStruct_6);
		int32_t L_402 = L_401->___animationType_8;
		float L_403;
		L_403 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_393, L_396, L_398, L_400, L_402, NULL);
		L_390->___r_0 = L_403;
	}

IL_09fb:
	{
		// if (tempStruct.modifyParameter2)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_404 = (&__this->___tempStruct_6);
		bool L_405 = L_404->___modifyParameter2_30;
		if (!L_405)
		{
			goto IL_0a5a;
		}
	}
	{
		// tempColor.g = UpdateAnimation(tempStruct.initialColor.g, tempStruct.initialColor.g, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_406 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_407 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_408 = (&L_407->___initialColor_25);
		float L_409 = L_408->___g_1;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_410 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_411 = (&L_410->___initialColor_25);
		float L_412 = L_411->___g_1;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_413 = (&__this->___tempStruct_6);
		float L_414 = L_413->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_415 = (&__this->___tempStruct_6);
		float L_416 = L_415->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_417 = (&__this->___tempStruct_6);
		int32_t L_418 = L_417->___animationType_8;
		float L_419;
		L_419 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_409, L_412, L_414, L_416, L_418, NULL);
		L_406->___g_1 = L_419;
	}

IL_0a5a:
	{
		// if (tempStruct.modifyParameter3)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_420 = (&__this->___tempStruct_6);
		bool L_421 = L_420->___modifyParameter3_31;
		if (!L_421)
		{
			goto IL_0ab9;
		}
	}
	{
		// tempColor.b = UpdateAnimation(tempStruct.initialColor.b, tempStruct.initialColor.b, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_422 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_423 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_424 = (&L_423->___initialColor_25);
		float L_425 = L_424->___b_2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_426 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_427 = (&L_426->___initialColor_25);
		float L_428 = L_427->___b_2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_429 = (&__this->___tempStruct_6);
		float L_430 = L_429->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_431 = (&__this->___tempStruct_6);
		float L_432 = L_431->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_433 = (&__this->___tempStruct_6);
		int32_t L_434 = L_433->___animationType_8;
		float L_435;
		L_435 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_425, L_428, L_430, L_432, L_434, NULL);
		L_422->___b_2 = L_435;
	}

IL_0ab9:
	{
		// if (tempStruct.modifyParameter4)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_436 = (&__this->___tempStruct_6);
		bool L_437 = L_436->___modifyParameter4_32;
		if (!L_437)
		{
			goto IL_0b18;
		}
	}
	{
		// tempColor.a = UpdateAnimation(tempStruct.initialColor.a, tempStruct.initialColor.a, tempStruct.animDeltaTime, tempStruct.animationDuration, tempStruct.animationType);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_438 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_439 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_440 = (&L_439->___initialColor_25);
		float L_441 = L_440->___a_3;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_442 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_443 = (&L_442->___initialColor_25);
		float L_444 = L_443->___a_3;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_445 = (&__this->___tempStruct_6);
		float L_446 = L_445->___animDeltaTime_34;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_447 = (&__this->___tempStruct_6);
		float L_448 = L_447->___animationDuration_35;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_449 = (&__this->___tempStruct_6);
		int32_t L_450 = L_449->___animationType_8;
		float L_451;
		L_451 = EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930(__this, L_441, L_444, L_446, L_448, L_450, NULL);
		L_438->___a_3 = L_451;
	}

IL_0b18:
	{
		// tempMaterial.color = tempColor;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_452 = __this->___tempMaterial_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_453 = __this->___tempColor_12;
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_452, L_453, NULL);
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_454 = (&__this->___tempStruct_6);
		int32_t L_455 = L_454->___valueType_10;
		if (L_455)
		{
			goto IL_0b5c;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempMaterial);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_456 = (&__this->___tempStruct_6);
		FieldInfo_t* L_457 = L_456->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_458 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_459 = L_458->___RealComponent_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_460 = __this->___tempMaterial_13;
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_457, L_459, L_460, NULL);
		goto IL_12fb;
	}

IL_0b5c:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_461 = (&__this->___tempStruct_6);
		int32_t L_462 = L_461->___valueType_10;
		if ((!(((uint32_t)L_462) == ((uint32_t)1))))
		{
			goto IL_12fb;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempMaterial, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_463 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_464 = L_463->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_465 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_466 = L_465->___RealComponent_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_467 = __this->___tempMaterial_13;
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_464, L_466, L_467, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12fb;
	}

IL_0b94:
	{
		// if (tempStruct.variableType == "System.Single")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_468 = (&__this->___tempStruct_6);
		String_t* L_469 = L_468->___variableType_9;
		bool L_470;
		L_470 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_469, _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892, NULL);
		if (!L_470)
		{
			goto IL_0c34;
		}
	}
	{
		// tempFloat = tempStruct.targetFloat;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_471 = (&__this->___tempStruct_6);
		float L_472 = L_471->___targetFloat_16;
		__this->___tempFloat_8 = L_472;
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_473 = (&__this->___tempStruct_6);
		int32_t L_474 = L_473->___valueType_10;
		if (L_474)
		{
			goto IL_0bf7;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempFloat);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_475 = (&__this->___tempStruct_6);
		FieldInfo_t* L_476 = L_475->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_477 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_478 = L_477->___RealComponent_5;
		float L_479 = __this->___tempFloat_8;
		float L_480 = L_479;
		RuntimeObject* L_481 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_480);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_476, L_478, L_481, NULL);
		goto IL_12b3;
	}

IL_0bf7:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_482 = (&__this->___tempStruct_6);
		int32_t L_483 = L_482->___valueType_10;
		if ((!(((uint32_t)L_483) == ((uint32_t)1))))
		{
			goto IL_12b3;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempFloat, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_484 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_485 = L_484->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_486 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_487 = L_486->___RealComponent_5;
		float L_488 = __this->___tempFloat_8;
		float L_489 = L_488;
		RuntimeObject* L_490 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_489);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_485, L_487, L_490, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12b3;
	}

IL_0c34:
	{
		// else if (tempStruct.variableType == "System.Int32")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_491 = (&__this->___tempStruct_6);
		String_t* L_492 = L_491->___variableType_9;
		bool L_493;
		L_493 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_492, _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A, NULL);
		if (!L_493)
		{
			goto IL_0cde;
		}
	}
	{
		// tempFloat = tempStruct.targetFloat;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_494 = (&__this->___tempStruct_6);
		float L_495 = L_494->___targetFloat_16;
		__this->___tempFloat_8 = L_495;
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_496 = (&__this->___tempStruct_6);
		int32_t L_497 = L_496->___valueType_10;
		if (L_497)
		{
			goto IL_0c9c;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, Mathf.RoundToInt(tempFloat));
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_498 = (&__this->___tempStruct_6);
		FieldInfo_t* L_499 = L_498->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_500 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_501 = L_500->___RealComponent_5;
		float L_502 = __this->___tempFloat_8;
		int32_t L_503;
		L_503 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_502, NULL);
		int32_t L_504 = L_503;
		RuntimeObject* L_505 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_504);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_499, L_501, L_505, NULL);
		goto IL_12b3;
	}

IL_0c9c:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_506 = (&__this->___tempStruct_6);
		int32_t L_507 = L_506->___valueType_10;
		if ((!(((uint32_t)L_507) == ((uint32_t)1))))
		{
			goto IL_12b3;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, Mathf.RoundToInt(tempFloat), null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_508 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_509 = L_508->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_510 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_511 = L_510->___RealComponent_5;
		float L_512 = __this->___tempFloat_8;
		int32_t L_513;
		L_513 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_512, NULL);
		int32_t L_514 = L_513;
		RuntimeObject* L_515 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_514);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_509, L_511, L_515, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12b3;
	}

IL_0cde:
	{
		// else if (tempStruct.variableType == "UnityEngine.Vector2")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_516 = (&__this->___tempStruct_6);
		String_t* L_517 = L_516->___variableType_9;
		bool L_518;
		L_518 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_517, _stringLiteralB8905CB8397FB05DB48D636D4EB7B450F6E09A26, NULL);
		if (!L_518)
		{
			goto IL_0dce;
		}
	}
	{
		// tempVector2 = tempStruct.initialVector2;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_519 = (&__this->___tempStruct_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_520 = L_519->___initialVector2_17;
		__this->___tempVector2_9 = L_520;
		// if (tempStruct.modifyParameter1)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_521 = (&__this->___tempStruct_6);
		bool L_522 = L_521->___modifyParameter1_29;
		if (!L_522)
		{
			goto IL_0d31;
		}
	}
	{
		// tempVector2.x = tempStruct.targetVector2.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_523 = (&__this->___tempVector2_9);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_524 = (&__this->___tempStruct_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_525 = (&L_524->___targetVector2_18);
		float L_526 = L_525->___x_0;
		L_523->___x_0 = L_526;
	}

IL_0d31:
	{
		// if (tempStruct.modifyParameter2)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_527 = (&__this->___tempStruct_6);
		bool L_528 = L_527->___modifyParameter2_30;
		if (!L_528)
		{
			goto IL_0d59;
		}
	}
	{
		// tempVector2.y = tempStruct.targetVector2.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_529 = (&__this->___tempVector2_9);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_530 = (&__this->___tempStruct_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_531 = (&L_530->___targetVector2_18);
		float L_532 = L_531->___y_1;
		L_529->___y_1 = L_532;
	}

IL_0d59:
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_533 = (&__this->___tempStruct_6);
		int32_t L_534 = L_533->___valueType_10;
		if (L_534)
		{
			goto IL_0d91;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempVector2);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_535 = (&__this->___tempStruct_6);
		FieldInfo_t* L_536 = L_535->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_537 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_538 = L_537->___RealComponent_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_539 = __this->___tempVector2_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_540 = L_539;
		RuntimeObject* L_541 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_540);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_536, L_538, L_541, NULL);
		goto IL_12b3;
	}

IL_0d91:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_542 = (&__this->___tempStruct_6);
		int32_t L_543 = L_542->___valueType_10;
		if ((!(((uint32_t)L_543) == ((uint32_t)1))))
		{
			goto IL_12b3;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempVector2, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_544 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_545 = L_544->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_546 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_547 = L_546->___RealComponent_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_548 = __this->___tempVector2_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_549 = L_548;
		RuntimeObject* L_550 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_549);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_545, L_547, L_550, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12b3;
	}

IL_0dce:
	{
		// else if (tempStruct.variableType == "UnityEngine.Vector3")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_551 = (&__this->___tempStruct_6);
		String_t* L_552 = L_551->___variableType_9;
		bool L_553;
		L_553 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_552, _stringLiteral1846B4DDA524F81CCA0CAA7BBB8F523C4C4CF9DB, NULL);
		if (!L_553)
		{
			goto IL_0ee6;
		}
	}
	{
		// tempVector3 = tempStruct.initialVector3;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_554 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_555 = L_554->___initialVector3_19;
		__this->___tempVector3_10 = L_555;
		// if (tempStruct.modifyParameter1)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_556 = (&__this->___tempStruct_6);
		bool L_557 = L_556->___modifyParameter1_29;
		if (!L_557)
		{
			goto IL_0e21;
		}
	}
	{
		// tempVector3.x = tempStruct.targetVector3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_558 = (&__this->___tempVector3_10);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_559 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_560 = (&L_559->___targetVector3_20);
		float L_561 = L_560->___x_2;
		L_558->___x_2 = L_561;
	}

IL_0e21:
	{
		// if (tempStruct.modifyParameter2)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_562 = (&__this->___tempStruct_6);
		bool L_563 = L_562->___modifyParameter2_30;
		if (!L_563)
		{
			goto IL_0e49;
		}
	}
	{
		// tempVector3.y = tempStruct.targetVector3.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_564 = (&__this->___tempVector3_10);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_565 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_566 = (&L_565->___targetVector3_20);
		float L_567 = L_566->___y_3;
		L_564->___y_3 = L_567;
	}

IL_0e49:
	{
		// if (tempStruct.modifyParameter3)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_568 = (&__this->___tempStruct_6);
		bool L_569 = L_568->___modifyParameter3_31;
		if (!L_569)
		{
			goto IL_0e71;
		}
	}
	{
		// tempVector3.z = tempStruct.targetVector3.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_570 = (&__this->___tempVector3_10);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_571 = (&__this->___tempStruct_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_572 = (&L_571->___targetVector3_20);
		float L_573 = L_572->___z_4;
		L_570->___z_4 = L_573;
	}

IL_0e71:
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_574 = (&__this->___tempStruct_6);
		int32_t L_575 = L_574->___valueType_10;
		if (L_575)
		{
			goto IL_0ea9;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempVector3);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_576 = (&__this->___tempStruct_6);
		FieldInfo_t* L_577 = L_576->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_578 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_579 = L_578->___RealComponent_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_580 = __this->___tempVector3_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_581 = L_580;
		RuntimeObject* L_582 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_581);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_577, L_579, L_582, NULL);
		goto IL_12b3;
	}

IL_0ea9:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_583 = (&__this->___tempStruct_6);
		int32_t L_584 = L_583->___valueType_10;
		if ((!(((uint32_t)L_584) == ((uint32_t)1))))
		{
			goto IL_12b3;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempVector3, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_585 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_586 = L_585->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_587 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_588 = L_587->___RealComponent_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_589 = __this->___tempVector3_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_590 = L_589;
		RuntimeObject* L_591 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_590);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_586, L_588, L_591, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12b3;
	}

IL_0ee6:
	{
		// else if (tempStruct.variableType == "UnityEngine.Rect")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_592 = (&__this->___tempStruct_6);
		String_t* L_593 = L_592->___variableType_9;
		bool L_594;
		L_594 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_593, _stringLiteral3CA027B17827714E4AA28C138746095B4E13F2F0, NULL);
		if (!L_594)
		{
			goto IL_1026;
		}
	}
	{
		// tempRect = tempStruct.initialRect;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_595 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_596 = L_595->___initialRect_23;
		__this->___tempRect_11 = L_596;
		// if (tempStruct.modifyParameter1)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_597 = (&__this->___tempStruct_6);
		bool L_598 = L_597->___modifyParameter1_29;
		if (!L_598)
		{
			goto IL_0f39;
		}
	}
	{
		// tempRect.x = tempStruct.targetRect.x;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_599 = (&__this->___tempRect_11);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_600 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_601 = (&L_600->___targetRect_24);
		float L_602;
		L_602 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_601, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_599, L_602, NULL);
	}

IL_0f39:
	{
		// if (tempStruct.modifyParameter2)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_603 = (&__this->___tempStruct_6);
		bool L_604 = L_603->___modifyParameter2_30;
		if (!L_604)
		{
			goto IL_0f61;
		}
	}
	{
		// tempRect.y = tempStruct.targetRect.y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_605 = (&__this->___tempRect_11);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_606 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_607 = (&L_606->___targetRect_24);
		float L_608;
		L_608 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_607, NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_605, L_608, NULL);
	}

IL_0f61:
	{
		// if (tempStruct.modifyParameter3)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_609 = (&__this->___tempStruct_6);
		bool L_610 = L_609->___modifyParameter3_31;
		if (!L_610)
		{
			goto IL_0f89;
		}
	}
	{
		// tempRect.width = tempStruct.targetRect.width;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_611 = (&__this->___tempRect_11);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_612 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_613 = (&L_612->___targetRect_24);
		float L_614;
		L_614 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_613, NULL);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_611, L_614, NULL);
	}

IL_0f89:
	{
		// if (tempStruct.modifyParameter4)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_615 = (&__this->___tempStruct_6);
		bool L_616 = L_615->___modifyParameter4_32;
		if (!L_616)
		{
			goto IL_0fb1;
		}
	}
	{
		// tempRect.height = tempStruct.targetRect.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_617 = (&__this->___tempRect_11);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_618 = (&__this->___tempStruct_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_619 = (&L_618->___targetRect_24);
		float L_620;
		L_620 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_619, NULL);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_617, L_620, NULL);
	}

IL_0fb1:
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_621 = (&__this->___tempStruct_6);
		int32_t L_622 = L_621->___valueType_10;
		if (L_622)
		{
			goto IL_0fe9;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempRect);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_623 = (&__this->___tempStruct_6);
		FieldInfo_t* L_624 = L_623->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_625 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_626 = L_625->___RealComponent_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_627 = __this->___tempRect_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_628 = L_627;
		RuntimeObject* L_629 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_628);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_624, L_626, L_629, NULL);
		goto IL_12b3;
	}

IL_0fe9:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_630 = (&__this->___tempStruct_6);
		int32_t L_631 = L_630->___valueType_10;
		if ((!(((uint32_t)L_631) == ((uint32_t)1))))
		{
			goto IL_12b3;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempRect, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_632 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_633 = L_632->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_634 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_635 = L_634->___RealComponent_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_636 = __this->___tempRect_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_637 = L_636;
		RuntimeObject* L_638 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_637);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_633, L_635, L_638, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12b3;
	}

IL_1026:
	{
		// else if (tempStruct.variableType == "UnityEngine.Color")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_639 = (&__this->___tempStruct_6);
		String_t* L_640 = L_639->___variableType_9;
		bool L_641;
		L_641 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_640, _stringLiteralCFAAF3B3B2482804BB0C52BB984697D4F757A73E, NULL);
		if (!L_641)
		{
			goto IL_1166;
		}
	}
	{
		// tempColor = tempStruct.initialColor;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_642 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_643 = L_642->___initialColor_25;
		__this->___tempColor_12 = L_643;
		// if (tempStruct.modifyParameter1)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_644 = (&__this->___tempStruct_6);
		bool L_645 = L_644->___modifyParameter1_29;
		if (!L_645)
		{
			goto IL_1079;
		}
	}
	{
		// tempColor.r = tempStruct.targetColor.r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_646 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_647 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_648 = (&L_647->___targetColor_26);
		float L_649 = L_648->___r_0;
		L_646->___r_0 = L_649;
	}

IL_1079:
	{
		// if (tempStruct.modifyParameter2)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_650 = (&__this->___tempStruct_6);
		bool L_651 = L_650->___modifyParameter2_30;
		if (!L_651)
		{
			goto IL_10a1;
		}
	}
	{
		// tempColor.g = tempStruct.targetColor.g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_652 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_653 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_654 = (&L_653->___targetColor_26);
		float L_655 = L_654->___g_1;
		L_652->___g_1 = L_655;
	}

IL_10a1:
	{
		// if (tempStruct.modifyParameter3)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_656 = (&__this->___tempStruct_6);
		bool L_657 = L_656->___modifyParameter3_31;
		if (!L_657)
		{
			goto IL_10c9;
		}
	}
	{
		// tempColor.b = tempStruct.targetColor.b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_658 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_659 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_660 = (&L_659->___targetColor_26);
		float L_661 = L_660->___b_2;
		L_658->___b_2 = L_661;
	}

IL_10c9:
	{
		// if (tempStruct.modifyParameter4)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_662 = (&__this->___tempStruct_6);
		bool L_663 = L_662->___modifyParameter4_32;
		if (!L_663)
		{
			goto IL_10f1;
		}
	}
	{
		// tempColor.a = tempStruct.targetColor.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_664 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_665 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_666 = (&L_665->___targetColor_26);
		float L_667 = L_666->___a_3;
		L_664->___a_3 = L_667;
	}

IL_10f1:
	{
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_668 = (&__this->___tempStruct_6);
		int32_t L_669 = L_668->___valueType_10;
		if (L_669)
		{
			goto IL_1129;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempColor);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_670 = (&__this->___tempStruct_6);
		FieldInfo_t* L_671 = L_670->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_672 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_673 = L_672->___RealComponent_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_674 = __this->___tempColor_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_675 = L_674;
		RuntimeObject* L_676 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_675);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_671, L_673, L_676, NULL);
		goto IL_12b3;
	}

IL_1129:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_677 = (&__this->___tempStruct_6);
		int32_t L_678 = L_677->___valueType_10;
		if ((!(((uint32_t)L_678) == ((uint32_t)1))))
		{
			goto IL_12b3;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempColor, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_679 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_680 = L_679->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_681 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_682 = L_681->___RealComponent_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_683 = __this->___tempColor_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_684 = L_683;
		RuntimeObject* L_685 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_684);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_680, L_682, L_685, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_12b3;
	}

IL_1166:
	{
		// else if (tempStruct.variableType == "UnityEngine.Material")
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_686 = (&__this->___tempStruct_6);
		String_t* L_687 = L_686->___variableType_9;
		bool L_688;
		L_688 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_687, _stringLiteralC66E4E22D4B2659AA643E1B215EAF6F6620015DA, NULL);
		if (!L_688)
		{
			goto IL_12b3;
		}
	}
	{
		// tempMaterial = tempStruct.initialMaterial;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_689 = (&__this->___tempStruct_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_690 = L_689->___initialMaterial_27;
		__this->___tempMaterial_13 = L_690;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_13), (void*)L_690);
		// tempColor = tempMaterial.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_691 = __this->___tempMaterial_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_692;
		L_692 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_691, NULL);
		__this->___tempColor_12 = L_692;
		// if (tempStruct.modifyParameter1)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_693 = (&__this->___tempStruct_6);
		bool L_694 = L_693->___modifyParameter1_29;
		if (!L_694)
		{
			goto IL_11ca;
		}
	}
	{
		// tempColor.r = tempStruct.initialColor.r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_695 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_696 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_697 = (&L_696->___initialColor_25);
		float L_698 = L_697->___r_0;
		L_695->___r_0 = L_698;
	}

IL_11ca:
	{
		// if (tempStruct.modifyParameter2)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_699 = (&__this->___tempStruct_6);
		bool L_700 = L_699->___modifyParameter2_30;
		if (!L_700)
		{
			goto IL_11f2;
		}
	}
	{
		// tempColor.g = tempStruct.initialColor.g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_701 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_702 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_703 = (&L_702->___initialColor_25);
		float L_704 = L_703->___g_1;
		L_701->___g_1 = L_704;
	}

IL_11f2:
	{
		// if (tempStruct.modifyParameter3)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_705 = (&__this->___tempStruct_6);
		bool L_706 = L_705->___modifyParameter3_31;
		if (!L_706)
		{
			goto IL_121a;
		}
	}
	{
		// tempColor.b = tempStruct.initialColor.b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_707 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_708 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_709 = (&L_708->___initialColor_25);
		float L_710 = L_709->___b_2;
		L_707->___b_2 = L_710;
	}

IL_121a:
	{
		// if (tempStruct.modifyParameter4)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_711 = (&__this->___tempStruct_6);
		bool L_712 = L_711->___modifyParameter4_32;
		if (!L_712)
		{
			goto IL_1242;
		}
	}
	{
		// tempColor.a = tempStruct.initialColor.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_713 = (&__this->___tempColor_12);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_714 = (&__this->___tempStruct_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_715 = (&L_714->___initialColor_25);
		float L_716 = L_715->___a_3;
		L_713->___a_3 = L_716;
	}

IL_1242:
	{
		// tempMaterial.color = tempColor;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_717 = __this->___tempMaterial_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_718 = __this->___tempColor_12;
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_717, L_718, NULL);
		// if (tempStruct.valueType == ValType.Field)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_719 = (&__this->___tempStruct_6);
		int32_t L_720 = L_719->___valueType_10;
		if (L_720)
		{
			goto IL_1283;
		}
	}
	{
		// tempStruct.realField.SetValue(tempStruct.RealComponent, tempMaterial);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_721 = (&__this->___tempStruct_6);
		FieldInfo_t* L_722 = L_721->___realField_6;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_723 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_724 = L_723->___RealComponent_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_725 = __this->___tempMaterial_13;
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_722, L_724, L_725, NULL);
		goto IL_12b3;
	}

IL_1283:
	{
		// else if (tempStruct.valueType == ValType.Property)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_726 = (&__this->___tempStruct_6);
		int32_t L_727 = L_726->___valueType_10;
		if ((!(((uint32_t)L_727) == ((uint32_t)1))))
		{
			goto IL_12b3;
		}
	}
	{
		// tempStruct.realProperty.SetValue(tempStruct.RealComponent, tempMaterial, null);
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_728 = (&__this->___tempStruct_6);
		PropertyInfo_t* L_729 = L_728->___realProperty_7;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_730 = (&__this->___tempStruct_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_731 = L_730->___RealComponent_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_732 = __this->___tempMaterial_13;
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_729, L_731, L_732, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
	}

IL_12b3:
	{
		// activeList[i] = false;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_733 = __this->___activeList_5;
		int32_t L_734 = V_0;
		(L_733)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_734), (bool)0);
		// if (tempStruct.methodOnEnd && !tempStruct.called)
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_735 = (&__this->___tempStruct_6);
		bool L_736 = L_735->___methodOnEnd_36;
		if (!L_736)
		{
			goto IL_12fb;
		}
	}
	{
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_737 = (&__this->___tempStruct_6);
		bool L_738 = L_737->___called_43;
		if (L_738)
		{
			goto IL_12fb;
		}
	}
	{
		// StartCoroutine(delayedCall());
		RuntimeObject* L_739;
		L_739 = EZAnim_delayedCall_m01972B48F38A11B986461A1C8F5237913645DE90(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_740;
		L_740 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_739, NULL);
		// oldStruct = tempStruct;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 L_741 = __this->___tempStruct_6;
		__this->___oldStruct_7 = L_741;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___animName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___animTag_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___targetGameObject_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___targetComponent_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___targetVariable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___RealComponent_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___realField_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___realProperty_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___variableType_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___initialMaterial_27), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___targetMaterial_28), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___methodTargetGameObject_37), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___methodTargetComponent_38), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___methodTargetMethod_39), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___methodRealComponent_40), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___methodRealMethod_41), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___oldStruct_7))->___methodParam_42), (void*)NULL);
		#endif
		// tempStruct.called = true;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_742 = (&__this->___tempStruct_6);
		L_742->___called_43 = (bool)1;
	}

IL_12fb:
	{
		// theStructs[i] = tempStruct;
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_743 = __this->___theStructs_4;
		int32_t L_744 = V_0;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3 L_745 = __this->___tempStruct_6;
		List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D(L_743, L_744, L_745, List_1_set_Item_m778322EA1F20FB0DA50964484A64ADF1C53C914D_RuntimeMethod_var);
	}

IL_130d:
	{
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_746 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_746, 1));
	}

IL_1311:
	{
		// for (int i = 0; i < theStructs.Count; i++)
		int32_t L_747 = V_0;
		List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* L_748 = __this->___theStructs_4;
		int32_t L_749;
		L_749 = List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_inline(L_748, List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_RuntimeMethod_var);
		if ((((int32_t)L_747) < ((int32_t)L_749)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MaterialUI.EZAnim::delayedCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EZAnim_delayedCall_m01972B48F38A11B986461A1C8F5237913645DE90 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C* L_0 = (U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C*)il2cpp_codegen_object_new(U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C_il2cpp_TypeInfo_var);
		U3CdelayedCallU3Ed__18__ctor_mE181F23277E367A31FE1A139CEAA8552F79EBC43(L_0, 0, NULL);
		U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Single MaterialUI.EZAnim::UpdateAnimation(System.Single,System.Single,System.Single,System.Single,MaterialUI.AnimType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EZAnim_UpdateAnimation_mC553B6B99105B07E2BE39AC7B052F8FA756C6930 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, float ___initialValue0, float ___targetValue1, float ___time2, float ___duration3, int32_t ___animationType4, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___animationType4;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0048;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_005e;
			}
			case 3:
			{
				goto IL_0069;
			}
			case 4:
			{
				goto IL_0074;
			}
			case 5:
			{
				goto IL_007f;
			}
			case 6:
			{
				goto IL_008a;
			}
			case 7:
			{
				goto IL_0095;
			}
			case 8:
			{
				goto IL_00a0;
			}
			case 9:
			{
				goto IL_00ab;
			}
			case 10:
			{
				goto IL_00b6;
			}
			case 11:
			{
				goto IL_00c1;
			}
			case 12:
			{
				goto IL_00cc;
			}
			case 13:
			{
				goto IL_00d7;
			}
			case 14:
			{
				goto IL_00e2;
			}
		}
	}
	{
		goto IL_00ed;
	}

IL_0048:
	{
		// return Anim.Linear(initialValue, targetValue, time, duration);
		float L_1 = ___initialValue0;
		float L_2 = ___targetValue1;
		float L_3 = ___time2;
		float L_4 = ___duration3;
		float L_5;
		L_5 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0053:
	{
		// return Anim.Overshoot(initialValue, targetValue, time, duration);
		float L_6 = ___initialValue0;
		float L_7 = ___targetValue1;
		float L_8 = ___time2;
		float L_9 = ___duration3;
		float L_10;
		L_10 = Anim_Overshoot_m6072F14803F46B5F1B6DF6E560C765E5D95210A7(L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}

IL_005e:
	{
		// return Anim.Bounce(initialValue, targetValue, time, duration);
		float L_11 = ___initialValue0;
		float L_12 = ___targetValue1;
		float L_13 = ___time2;
		float L_14 = ___duration3;
		float L_15;
		L_15 = Anim_Bounce_mCCC990431BAF7A5A58CA4C6AC5F14CCC7DECD37E(L_11, L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_0069:
	{
		// return Anim.Cube.Out(initialValue, targetValue, time, duration);
		float L_16 = ___initialValue0;
		float L_17 = ___targetValue1;
		float L_18 = ___time2;
		float L_19 = ___duration3;
		float L_20;
		L_20 = Cube_Out_mA7FCE08A9EE89F9D6E2FBFFC3CA78A98F712802A(L_16, L_17, L_18, L_19, NULL);
		return L_20;
	}

IL_0074:
	{
		// return Anim.Quint.Out(initialValue, targetValue, time, duration);
		float L_21 = ___initialValue0;
		float L_22 = ___targetValue1;
		float L_23 = ___time2;
		float L_24 = ___duration3;
		float L_25;
		L_25 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_21, L_22, L_23, L_24, NULL);
		return L_25;
	}

IL_007f:
	{
		// return Anim.Sept.Out(initialValue, targetValue, time, duration);
		float L_26 = ___initialValue0;
		float L_27 = ___targetValue1;
		float L_28 = ___time2;
		float L_29 = ___duration3;
		float L_30;
		L_30 = Sept_Out_m670A2048211F39462DE0910B65669E140D9CC8B1(L_26, L_27, L_28, L_29, NULL);
		return L_30;
	}

IL_008a:
	{
		// return Anim.Cube.In(initialValue, targetValue, time, duration);
		float L_31 = ___initialValue0;
		float L_32 = ___targetValue1;
		float L_33 = ___time2;
		float L_34 = ___duration3;
		float L_35;
		L_35 = Cube_In_m13492FC0F409BEE1C2BDB2A43F428E37EF067F94(L_31, L_32, L_33, L_34, NULL);
		return L_35;
	}

IL_0095:
	{
		// return Anim.Quint.In(initialValue, targetValue, time, duration);
		float L_36 = ___initialValue0;
		float L_37 = ___targetValue1;
		float L_38 = ___time2;
		float L_39 = ___duration3;
		float L_40;
		L_40 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_36, L_37, L_38, L_39, NULL);
		return L_40;
	}

IL_00a0:
	{
		// return Anim.Sept.In(initialValue, targetValue, time, duration);
		float L_41 = ___initialValue0;
		float L_42 = ___targetValue1;
		float L_43 = ___time2;
		float L_44 = ___duration3;
		float L_45;
		L_45 = Sept_In_mD51BE44E422134702A5229440245544360EE5B37(L_41, L_42, L_43, L_44, NULL);
		return L_45;
	}

IL_00ab:
	{
		// return Anim.Cube.InOut(initialValue, targetValue, time, duration);
		float L_46 = ___initialValue0;
		float L_47 = ___targetValue1;
		float L_48 = ___time2;
		float L_49 = ___duration3;
		float L_50;
		L_50 = Cube_InOut_m8E43933F41EA2E65C21B837C3FA1554AFF4805FA(L_46, L_47, L_48, L_49, NULL);
		return L_50;
	}

IL_00b6:
	{
		// return Anim.Quint.InOut(initialValue, targetValue, time, duration);
		float L_51 = ___initialValue0;
		float L_52 = ___targetValue1;
		float L_53 = ___time2;
		float L_54 = ___duration3;
		float L_55;
		L_55 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_51, L_52, L_53, L_54, NULL);
		return L_55;
	}

IL_00c1:
	{
		// return Anim.Sept.InOut(initialValue, targetValue, time, duration);
		float L_56 = ___initialValue0;
		float L_57 = ___targetValue1;
		float L_58 = ___time2;
		float L_59 = ___duration3;
		float L_60;
		L_60 = Sept_InOut_mD69CE115754C958DB9A0973A081BE036BD87A9CB(L_56, L_57, L_58, L_59, NULL);
		return L_60;
	}

IL_00cc:
	{
		// return Anim.Cube.SoftOut(initialValue, targetValue, time, duration);
		float L_61 = ___initialValue0;
		float L_62 = ___targetValue1;
		float L_63 = ___time2;
		float L_64 = ___duration3;
		float L_65;
		L_65 = Cube_SoftOut_mA8DDA09C9F25331FF18C54E1A1CDE80107953F18(L_61, L_62, L_63, L_64, NULL);
		return L_65;
	}

IL_00d7:
	{
		// return Anim.Quint.SoftOut(initialValue, targetValue, time, duration);
		float L_66 = ___initialValue0;
		float L_67 = ___targetValue1;
		float L_68 = ___time2;
		float L_69 = ___duration3;
		float L_70;
		L_70 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E(L_66, L_67, L_68, L_69, NULL);
		return L_70;
	}

IL_00e2:
	{
		// return Anim.Sept.SoftOut(initialValue, targetValue, time, duration);
		float L_71 = ___initialValue0;
		float L_72 = ___targetValue1;
		float L_73 = ___time2;
		float L_74 = ___duration3;
		float L_75;
		L_75 = Sept_SoftOut_mDC9C5DE3EF02FB020C8CE4C7F236BCB6F8E36A4A(L_71, L_72, L_73, L_74, NULL);
		return L_75;
	}

IL_00ed:
	{
		// return 0f;
		return (0.0f);
	}
}
// System.Void MaterialUI.EZAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EZAnim__ctor_m16CA0C505122952EBC05854BAFA73B98D9EBF2E9 (EZAnim_t40E3023265066D852607853E55933FB879CEF38C* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.EZAnim/<delayedCall>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayedCallU3Ed__18__ctor_mE181F23277E367A31FE1A139CEAA8552F79EBC43 (U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MaterialUI.EZAnim/<delayedCall>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayedCallU3Ed__18_System_IDisposable_Dispose_mA22EF33977584091791053C95E29513F21B3C3E5 (U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MaterialUI.EZAnim/<delayedCall>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CdelayedCallU3Ed__18_MoveNext_mDC149BA2DC30A6DE50F4F57B61FD989B18A33223 (U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EZAnim_t40E3023265066D852607853E55933FB879CEF38C* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EZAnim_t40E3023265066D852607853E55933FB879CEF38C* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// object[] parametersArray = new object[] { oldStruct.methodParam };
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		EZAnim_t40E3023265066D852607853E55933FB879CEF38C* L_7 = V_1;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_8 = (&L_7->___oldStruct_7);
		String_t* L_9 = L_8->___methodParam_42;
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		V_2 = L_6;
		// oldStruct.methodRealMethod.Invoke(oldStruct.methodRealComponent, parametersArray);
		EZAnim_t40E3023265066D852607853E55933FB879CEF38C* L_10 = V_1;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_11 = (&L_10->___oldStruct_7);
		MethodInfo_t* L_12 = L_11->___methodRealMethod_41;
		EZAnim_t40E3023265066D852607853E55933FB879CEF38C* L_13 = V_1;
		EZStruct_tEA99C9BA8EBD7DEB82599BCEEFEB860CA99C3BC3* L_14 = (&L_13->___oldStruct_7);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_15 = L_14->___methodRealComponent_40;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_2;
		RuntimeObject* L_17;
		L_17 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_12, L_15, L_16, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MaterialUI.EZAnim/<delayedCall>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CdelayedCallU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2123E65D3577EB8481E4894A9ABAF08E01242B5B (U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MaterialUI.EZAnim/<delayedCall>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayedCallU3Ed__18_System_Collections_IEnumerator_Reset_mAD240670FADF9CB8AD40BCFB17DE95F7135BA44D (U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CdelayedCallU3Ed__18_System_Collections_IEnumerator_Reset_mAD240670FADF9CB8AD40BCFB17DE95F7135BA44D_RuntimeMethod_var)));
	}
}
// System.Object MaterialUI.EZAnim/<delayedCall>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CdelayedCallU3Ed__18_System_Collections_IEnumerator_get_Current_mE48E5DAC1B0345B1313B9C1ECDE626A9735E7074 (U3CdelayedCallU3Ed__18_t1D54936E66B15A3DBE29D779561E62E8B8AE0E1C* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.FPSCounter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_Start_m6193AA0308EB41449DB3AC743FA0DE895B56D765 (FPSCounter_t0FFC63427F1B0BDA40ADE16D96ADCA91109E3F27* __this, const RuntimeMethod* method) 
{
	{
		// timeleft = updateInterval;
		float L_0 = __this->___updateInterval_4;
		__this->___timeleft_7 = L_0;
		// }
		return;
	}
}
// System.Void MaterialUI.FPSCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_Update_mCD7F45F578C805620E53988CFA2C44E1DF457CF3 (FPSCounter_t0FFC63427F1B0BDA40ADE16D96ADCA91109E3F27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB41D02FAEC024FEA204D29ED11CEF86220D2386);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// timeleft -= Time.deltaTime;
		float L_0 = __this->___timeleft_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeleft_7 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// deltaFps += Time.timeScale/Time.deltaTime;
		float L_2 = __this->___deltaFps_5;
		float L_3;
		L_3 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___deltaFps_5 = ((float)il2cpp_codegen_add(L_2, ((float)(L_3/L_4))));
		// ++frames;
		int32_t L_5 = __this->___frames_6;
		__this->___frames_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if( timeleft <= 0f )
		float L_6 = __this->___timeleft_7;
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		// theText.text = "" + (deltaFps/frames).ToString("f2") + " FPS";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___theText_8;
		float L_8 = __this->___deltaFps_5;
		int32_t L_9 = __this->___frames_6;
		V_0 = ((float)(L_8/((float)L_9)));
		String_t* L_10;
		L_10 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteralDB41D02FAEC024FEA204D29ED11CEF86220D2386, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_11);
		// if ((deltaFps/frames) < 1)
		float L_12 = __this->___deltaFps_5;
		int32_t L_13 = __this->___frames_6;
		if ((!(((float)((float)(L_12/((float)L_13)))) < ((float)(1.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		// theText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___theText_8;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_009a:
	{
		// timeleft = updateInterval;
		float L_15 = __this->___updateInterval_4;
		__this->___timeleft_7 = L_15;
		// deltaFps = 0f;
		__this->___deltaFps_5 = (0.0f);
		// frames = 0;
		__this->___frames_6 = 0;
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.FPSCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter__ctor_m20338BE6FC360E6DB0D33377095B3D74BC42B48E (FPSCounter_t0FFC63427F1B0BDA40ADE16D96ADCA91109E3F27* __this, const RuntimeMethod* method) 
{
	{
		// public float updateInterval = 0.5f;
		__this->___updateInterval_4 = (0.5f);
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
// System.Void MaterialUI.HSBColor::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSBColor__ctor_mBA48AF0F21BDAD5FB4CC615F853D7BA9D23AF0E7 (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* __this, float ___h0, float ___s1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		// this.h = h;
		float L_0 = ___h0;
		__this->___h_0 = L_0;
		// this.s = s;
		float L_1 = ___s1;
		__this->___s_1 = L_1;
		// this.b = b;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		// this.a = a;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void HSBColor__ctor_mBA48AF0F21BDAD5FB4CC615F853D7BA9D23AF0E7_AdjustorThunk (RuntimeObject* __this, float ___h0, float ___s1, float ___b2, float ___a3, const RuntimeMethod* method)
{
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A*>(__this + _offset);
	HSBColor__ctor_mBA48AF0F21BDAD5FB4CC615F853D7BA9D23AF0E7(_thisAdjusted, ___h0, ___s1, ___b2, ___a3, method);
}
// System.Void MaterialUI.HSBColor::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSBColor__ctor_mD6417C57586E9EFB3DDE0DEBBFFBD77E5B69D35D (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* __this, float ___h0, float ___s1, float ___b2, const RuntimeMethod* method) 
{
	{
		// this.h = h;
		float L_0 = ___h0;
		__this->___h_0 = L_0;
		// this.s = s;
		float L_1 = ___s1;
		__this->___s_1 = L_1;
		// this.b = b;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		// this.a = 1f;
		__this->___a_3 = (1.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void HSBColor__ctor_mD6417C57586E9EFB3DDE0DEBBFFBD77E5B69D35D_AdjustorThunk (RuntimeObject* __this, float ___h0, float ___s1, float ___b2, const RuntimeMethod* method)
{
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A*>(__this + _offset);
	HSBColor__ctor_mD6417C57586E9EFB3DDE0DEBBFFBD77E5B69D35D(_thisAdjusted, ___h0, ___s1, ___b2, method);
}
// System.Void MaterialUI.HSBColor::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___col0, const RuntimeMethod* method) 
{
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HSBColor temp = FromColor(col);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___col0;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_1;
		L_1 = HSBColor_FromColor_m70EF18BA22C46F43BD47ACC0D7976862A291D05A(L_0, NULL);
		V_0 = L_1;
		// h = temp.h;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_2 = V_0;
		float L_3 = L_2.___h_0;
		__this->___h_0 = L_3;
		// s = temp.s;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_4 = V_0;
		float L_5 = L_4.___s_1;
		__this->___s_1 = L_5;
		// b = temp.b;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_6 = V_0;
		float L_7 = L_6.___b_2;
		__this->___b_2 = L_7;
		// a = temp.a;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_8 = V_0;
		float L_9 = L_8.___a_3;
		__this->___a_3 = L_9;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___col0, const RuntimeMethod* method)
{
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A*>(__this + _offset);
	HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE(_thisAdjusted, ___col0, method);
}
// MaterialUI.HSBColor MaterialUI.HSBColor::FromColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A HSBColor_FromColor_m70EF18BA22C46F43BD47ACC0D7976862A291D05A (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// HSBColor ret = new HSBColor(0f, 0f, 0f, color.a);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		float L_1 = L_0.___a_3;
		HSBColor__ctor_mBA48AF0F21BDAD5FB4CC615F853D7BA9D23AF0E7((&V_0), (0.0f), (0.0f), (0.0f), L_1, NULL);
		// float r = color.r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		float L_3 = L_2.___r_0;
		V_1 = L_3;
		// float g = color.g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color0;
		float L_5 = L_4.___g_1;
		V_2 = L_5;
		// float b = color.b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___color0;
		float L_7 = L_6.___b_2;
		V_3 = L_7;
		// float max = Mathf.Max(r, Mathf.Max(g, b));
		float L_8 = V_1;
		float L_9 = V_2;
		float L_10 = V_3;
		float L_11;
		L_11 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_9, L_10, NULL);
		float L_12;
		L_12 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_8, L_11, NULL);
		V_4 = L_12;
		// if (max <= 0)
		float L_13 = V_4;
		if ((!(((float)L_13) <= ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// return ret;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_14 = V_0;
		return L_14;
	}

IL_004b:
	{
		// float min = Mathf.Min(r, Mathf.Min(g, b));
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_3;
		float L_18;
		L_18 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_16, L_17, NULL);
		float L_19;
		L_19 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_15, L_18, NULL);
		V_5 = L_19;
		// float dif = max - min;
		float L_20 = V_4;
		float L_21 = V_5;
		V_6 = ((float)il2cpp_codegen_subtract(L_20, L_21));
		// if (max > min)
		float L_22 = V_4;
		float L_23 = V_5;
		if ((!(((float)L_22) > ((float)L_23))))
		{
			goto IL_00fe;
		}
	}
	{
		// if (g == max)
		float L_24 = V_2;
		float L_25 = V_4;
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_008a;
		}
	}
	{
		// ret.h = (b - r)/dif*60f + 120f;
		float L_26 = V_3;
		float L_27 = V_1;
		float L_28 = V_6;
		(&V_0)->___h_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_26, L_27))/L_28)), (60.0f))), (120.0f)));
		goto IL_00dc;
	}

IL_008a:
	{
		// else if (b == max)
		float L_29 = V_3;
		float L_30 = V_4;
		if ((!(((float)L_29) == ((float)L_30))))
		{
			goto IL_00aa;
		}
	}
	{
		// ret.h = (r - g)/dif*60f + 240f;
		float L_31 = V_1;
		float L_32 = V_2;
		float L_33 = V_6;
		(&V_0)->___h_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_31, L_32))/L_33)), (60.0f))), (240.0f)));
		goto IL_00dc;
	}

IL_00aa:
	{
		// else if (b > g)
		float L_34 = V_3;
		float L_35 = V_2;
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_00c9;
		}
	}
	{
		// ret.h = (g - b)/dif*60f + 360f;
		float L_36 = V_2;
		float L_37 = V_3;
		float L_38 = V_6;
		(&V_0)->___h_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_36, L_37))/L_38)), (60.0f))), (360.0f)));
		goto IL_00dc;
	}

IL_00c9:
	{
		// ret.h = (g - b)/dif*60f;
		float L_39 = V_2;
		float L_40 = V_3;
		float L_41 = V_6;
		(&V_0)->___h_0 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_39, L_40))/L_41)), (60.0f)));
	}

IL_00dc:
	{
		// if (ret.h < 0)
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_42 = V_0;
		float L_43 = L_42.___h_0;
		if ((!(((float)L_43) < ((float)(0.0f)))))
		{
			goto IL_010a;
		}
	}
	{
		// ret.h = ret.h + 360f;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_44 = V_0;
		float L_45 = L_44.___h_0;
		(&V_0)->___h_0 = ((float)il2cpp_codegen_add(L_45, (360.0f)));
		goto IL_010a;
	}

IL_00fe:
	{
		// ret.h = 0;
		(&V_0)->___h_0 = (0.0f);
	}

IL_010a:
	{
		// ret.h *= 1f/360f;
		float* L_46 = (&(&V_0)->___h_0);
		float* L_47 = L_46;
		float L_48 = *((float*)L_47);
		*((float*)L_47) = (float)((float)il2cpp_codegen_multiply(L_48, (0.00277777785f)));
		// ret.s = (dif/max)*1f;
		float L_49 = V_6;
		float L_50 = V_4;
		(&V_0)->___s_1 = ((float)il2cpp_codegen_multiply(((float)(L_49/L_50)), (1.0f)));
		// ret.b = max;
		float L_51 = V_4;
		(&V_0)->___b_2 = L_51;
		// return ret;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_52 = V_0;
		return L_52;
	}
}
// UnityEngine.Color MaterialUI.HSBColor::ToColor(MaterialUI.HSBColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSBColor_ToColor_mBF4D235881CF9E626E2DB5E2EE780798C4269607 (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A ___hsbColor0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// float r = hsbColor.b;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_0 = ___hsbColor0;
		float L_1 = L_0.___b_2;
		V_0 = L_1;
		// float g = hsbColor.b;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_2 = ___hsbColor0;
		float L_3 = L_2.___b_2;
		V_1 = L_3;
		// float b = hsbColor.b;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_4 = ___hsbColor0;
		float L_5 = L_4.___b_2;
		V_2 = L_5;
		// if (hsbColor.s != 0)
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_6 = ___hsbColor0;
		float L_7 = L_6.___s_1;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_014a;
		}
	}
	{
		// float max = hsbColor.b;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_8 = ___hsbColor0;
		float L_9 = L_8.___b_2;
		V_3 = L_9;
		// float dif = hsbColor.b*hsbColor.s;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_10 = ___hsbColor0;
		float L_11 = L_10.___b_2;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_12 = ___hsbColor0;
		float L_13 = L_12.___s_1;
		V_4 = ((float)il2cpp_codegen_multiply(L_11, L_13));
		// float min = hsbColor.b - dif;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_14 = ___hsbColor0;
		float L_15 = L_14.___b_2;
		float L_16 = V_4;
		V_5 = ((float)il2cpp_codegen_subtract(L_15, L_16));
		// float h = hsbColor.h*360f;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_17 = ___hsbColor0;
		float L_18 = L_17.___h_0;
		V_6 = ((float)il2cpp_codegen_multiply(L_18, (360.0f)));
		// if (h < 60f)
		float L_19 = V_6;
		if ((!(((float)L_19) < ((float)(60.0f)))))
		{
			goto IL_0076;
		}
	}
	{
		// r = max;
		float L_20 = V_3;
		V_0 = L_20;
		// g = h*dif/60f + min;
		float L_21 = V_6;
		float L_22 = V_4;
		float L_23 = V_5;
		V_1 = ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(L_21, L_22))/(60.0f))), L_23));
		// b = min;
		float L_24 = V_5;
		V_2 = L_24;
		goto IL_014a;
	}

IL_0076:
	{
		// else if (h < 120f)
		float L_25 = V_6;
		if ((!(((float)L_25) < ((float)(120.0f)))))
		{
			goto IL_009f;
		}
	}
	{
		// r = -(h - 120f)*dif/60f + min;
		float L_26 = V_6;
		float L_27 = V_4;
		float L_28 = V_5;
		V_0 = ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(((-((float)il2cpp_codegen_subtract(L_26, (120.0f))))), L_27))/(60.0f))), L_28));
		// g = max;
		float L_29 = V_3;
		V_1 = L_29;
		// b = min;
		float L_30 = V_5;
		V_2 = L_30;
		goto IL_014a;
	}

IL_009f:
	{
		// else if (h < 180f)
		float L_31 = V_6;
		if ((!(((float)L_31) < ((float)(180.0f)))))
		{
			goto IL_00c7;
		}
	}
	{
		// r = min;
		float L_32 = V_5;
		V_0 = L_32;
		// g = max;
		float L_33 = V_3;
		V_1 = L_33;
		// b = (h - 120f)*dif/60f + min;
		float L_34 = V_6;
		float L_35 = V_4;
		float L_36 = V_5;
		V_2 = ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_34, (120.0f))), L_35))/(60.0f))), L_36));
		goto IL_014a;
	}

IL_00c7:
	{
		// else if (h < 240f)
		float L_37 = V_6;
		if ((!(((float)L_37) < ((float)(240.0f)))))
		{
			goto IL_00ed;
		}
	}
	{
		// r = min;
		float L_38 = V_5;
		V_0 = L_38;
		// g = -(h - 240f)*dif/60f + min;
		float L_39 = V_6;
		float L_40 = V_4;
		float L_41 = V_5;
		V_1 = ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(((-((float)il2cpp_codegen_subtract(L_39, (240.0f))))), L_40))/(60.0f))), L_41));
		// b = max;
		float L_42 = V_3;
		V_2 = L_42;
		goto IL_014a;
	}

IL_00ed:
	{
		// else if (h < 300f)
		float L_43 = V_6;
		if ((!(((float)L_43) < ((float)(300.0f)))))
		{
			goto IL_0112;
		}
	}
	{
		// r = (h - 240f)*dif/60f + min;
		float L_44 = V_6;
		float L_45 = V_4;
		float L_46 = V_5;
		V_0 = ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_44, (240.0f))), L_45))/(60.0f))), L_46));
		// g = min;
		float L_47 = V_5;
		V_1 = L_47;
		// b = max;
		float L_48 = V_3;
		V_2 = L_48;
		goto IL_014a;
	}

IL_0112:
	{
		// else if (h <= 360f)
		float L_49 = V_6;
		if ((!(((float)L_49) <= ((float)(360.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		// r = max;
		float L_50 = V_3;
		V_0 = L_50;
		// g = min;
		float L_51 = V_5;
		V_1 = L_51;
		// b = -(h - 360f)*dif/60 + min;
		float L_52 = V_6;
		float L_53 = V_4;
		float L_54 = V_5;
		V_2 = ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(((-((float)il2cpp_codegen_subtract(L_52, (360.0f))))), L_53))/(60.0f))), L_54));
		goto IL_014a;
	}

IL_0138:
	{
		// r = 0;
		V_0 = (0.0f);
		// g = 0;
		V_1 = (0.0f);
		// b = 0;
		V_2 = (0.0f);
	}

IL_014a:
	{
		// return new Color(Mathf.Clamp01(r), Mathf.Clamp01(g), Mathf.Clamp01(b), hsbColor.a);
		float L_55 = V_0;
		float L_56;
		L_56 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_55, NULL);
		float L_57 = V_1;
		float L_58;
		L_58 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_57, NULL);
		float L_59 = V_2;
		float L_60;
		L_60 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_59, NULL);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_61 = ___hsbColor0;
		float L_62 = L_61.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		memset((&L_63), 0, sizeof(L_63));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_63), L_56, L_58, L_60, L_62, /*hidden argument*/NULL);
		return L_63;
	}
}
// UnityEngine.Color MaterialUI.HSBColor::ToColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSBColor_ToColor_mD4D6095D9BD0D9456915100DEE51AD32701A37FF (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* __this, const RuntimeMethod* method) 
{
	{
		// return ToColor(this);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_0 = (*(HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A*)__this);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = HSBColor_ToColor_mBF4D235881CF9E626E2DB5E2EE780798C4269607(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSBColor_ToColor_mD4D6095D9BD0D9456915100DEE51AD32701A37FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = HSBColor_ToColor_mD4D6095D9BD0D9456915100DEE51AD32701A37FF(_thisAdjusted, method);
	return _returnValue;
}
// System.String MaterialUI.HSBColor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HSBColor_ToString_m3854EA49BD60D3F16FF37A9FCF8A5D5EF4074D64 (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35FA7EC05BA14E9CC38AC240741774D8D99798AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C574849AC8373215CDEA5269699313E06E70469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62677D235409E0AC0B92C2B397104B7E9FB709D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "H:" + h + " S:" + s + " B:" + b;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral35FA7EC05BA14E9CC38AC240741774D8D99798AD);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral35FA7EC05BA14E9CC38AC240741774D8D99798AD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		float* L_3 = (&__this->___h_0);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteral3C574849AC8373215CDEA5269699313E06E70469);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3C574849AC8373215CDEA5269699313E06E70469);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		float* L_7 = (&__this->___s_1);
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_7, NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteral62677D235409E0AC0B92C2B397104B7E9FB709D5);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral62677D235409E0AC0B92C2B397104B7E9FB709D5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		float* L_11 = (&__this->___b_2);
		String_t* L_12;
		L_12 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_11, NULL);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		String_t* L_13;
		L_13 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  String_t* HSBColor_ToString_m3854EA49BD60D3F16FF37A9FCF8A5D5EF4074D64_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = HSBColor_ToString_m3854EA49BD60D3F16FF37A9FCF8A5D5EF4074D64(_thisAdjusted, method);
	return _returnValue;
}
// MaterialUI.HSBColor MaterialUI.HSBColor::Lerp(MaterialUI.HSBColor,MaterialUI.HSBColor,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A HSBColor_Lerp_mAE4BBE0425E98ADB6AE1550F887685131CD7109F (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A ___a0, HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (a.b == 0)
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_0 = ___a0;
		float L_1 = L_0.___b_2;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// h = b.h;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_2 = ___b1;
		float L_3 = L_2.___h_0;
		V_0 = L_3;
		// s = b.s;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_4 = ___b1;
		float L_5 = L_4.___s_1;
		V_1 = L_5;
		goto IL_00ca;
	}

IL_0020:
	{
		// else if (b.b == 0)
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_6 = ___b1;
		float L_7 = L_6.___b_2;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		// h = a.h;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_8 = ___a0;
		float L_9 = L_8.___h_0;
		V_0 = L_9;
		// s = a.s;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_10 = ___a0;
		float L_11 = L_10.___s_1;
		V_1 = L_11;
		goto IL_00ca;
	}

IL_0040:
	{
		// if (a.s == 0)
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_12 = ___a0;
		float L_13 = L_12.___s_1;
		if ((!(((float)L_13) == ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		// h = b.h;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_14 = ___b1;
		float L_15 = L_14.___h_0;
		V_0 = L_15;
		goto IL_00b7;
	}

IL_0056:
	{
		// else if (b.s == 0)
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_16 = ___b1;
		float L_17 = L_16.___s_1;
		if ((!(((float)L_17) == ((float)(0.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		// h = a.h;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_18 = ___a0;
		float L_19 = L_18.___h_0;
		V_0 = L_19;
		goto IL_00b7;
	}

IL_006c:
	{
		// float angle = Mathf.LerpAngle(a.h*360f, b.h*360f, t);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_20 = ___a0;
		float L_21 = L_20.___h_0;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_22 = ___b1;
		float L_23 = L_22.___h_0;
		float L_24 = ___t2;
		float L_25;
		L_25 = Mathf_LerpAngle_m0653422E15193C2E4A4E5AF05236B6315C789C23_inline(((float)il2cpp_codegen_multiply(L_21, (360.0f))), ((float)il2cpp_codegen_multiply(L_23, (360.0f))), L_24, NULL);
		V_2 = L_25;
		goto IL_0095;
	}

IL_008d:
	{
		// angle += 360f;
		float L_26 = V_2;
		V_2 = ((float)il2cpp_codegen_add(L_26, (360.0f)));
	}

IL_0095:
	{
		// while (angle < 0f)
		float L_27 = V_2;
		if ((((float)L_27) < ((float)(0.0f))))
		{
			goto IL_008d;
		}
	}
	{
		goto IL_00a7;
	}

IL_009f:
	{
		// angle -= 360f;
		float L_28 = V_2;
		V_2 = ((float)il2cpp_codegen_subtract(L_28, (360.0f)));
	}

IL_00a7:
	{
		// while (angle > 360f)
		float L_29 = V_2;
		if ((((float)L_29) > ((float)(360.0f))))
		{
			goto IL_009f;
		}
	}
	{
		// h = angle/360f;
		float L_30 = V_2;
		V_0 = ((float)(L_30/(360.0f)));
	}

IL_00b7:
	{
		// s = Mathf.Lerp(a.s, b.s, t);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_31 = ___a0;
		float L_32 = L_31.___s_1;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_33 = ___b1;
		float L_34 = L_33.___s_1;
		float L_35 = ___t2;
		float L_36;
		L_36 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_32, L_34, L_35, NULL);
		V_1 = L_36;
	}

IL_00ca:
	{
		// return new HSBColor(h, s, Mathf.Lerp(a.b, b.b, t), Mathf.Lerp(a.a, b.a, t));
		float L_37 = V_0;
		float L_38 = V_1;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_39 = ___a0;
		float L_40 = L_39.___b_2;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_41 = ___b1;
		float L_42 = L_41.___b_2;
		float L_43 = ___t2;
		float L_44;
		L_44 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_40, L_42, L_43, NULL);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_45 = ___a0;
		float L_46 = L_45.___a_3;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_47 = ___b1;
		float L_48 = L_47.___a_3;
		float L_49 = ___t2;
		float L_50;
		L_50 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_46, L_48, L_49, NULL);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_51;
		memset((&L_51), 0, sizeof(L_51));
		HSBColor__ctor_mBA48AF0F21BDAD5FB4CC615F853D7BA9D23AF0E7((&L_51), L_37, L_38, L_44, L_50, /*hidden argument*/NULL);
		return L_51;
	}
}
// System.Void MaterialUI.HSBColor::Test()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSBColor_Test_mC7DD77290D9A6117FA07EFCDABA71392FA07CC2F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A83441420CAA0EA7C1516EF1BB92AA43B8880A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CF17FD7D4BB340F939802560C46AC4C23AC2555);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E9A8C1BAE891CEE28459B0BE4DD7FCE66ECADD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEE65A4C44BC0A777AAA942AE6EAFE149E8D52A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBA6AD1BD7CA93FC8E30FE165A97DC06C550553A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EC15E0503C9130659101D6E0CBA4B37EB89C24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF61FCA4BCA56B214565F66BF596F0C73197FB422);
		s_Il2CppMethodInitialized = true;
	}
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A V_0;
	memset((&V_0), 0, sizeof(V_0));
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// color = new HSBColor(Color.red);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE((&V_0), L_0, NULL);
		// Debug.Log("red: " + color);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_1 = V_0;
		V_1 = L_1;
		String_t* L_2;
		L_2 = HSBColor_ToString_m3854EA49BD60D3F16FF37A9FCF8A5D5EF4074D64((&V_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE5EC15E0503C9130659101D6E0CBA4B37EB89C24, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// color = new HSBColor(Color.green);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE((&V_0), L_4, NULL);
		// Debug.Log("green: " + color);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_5 = V_0;
		V_1 = L_5;
		String_t* L_6;
		L_6 = HSBColor_ToString_m3854EA49BD60D3F16FF37A9FCF8A5D5EF4074D64((&V_1), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCBA6AD1BD7CA93FC8E30FE165A97DC06C550553A, L_6, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// color = new HSBColor(Color.blue);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE((&V_0), L_8, NULL);
		// Debug.Log("blue: " + color);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_9 = V_0;
		V_1 = L_9;
		String_t* L_10;
		L_10 = HSBColor_ToString_m3854EA49BD60D3F16FF37A9FCF8A5D5EF4074D64((&V_1), NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2A83441420CAA0EA7C1516EF1BB92AA43B8880A9, L_10, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// color = new HSBColor(Color.grey);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE((&V_0), L_12, NULL);
		// Debug.Log("grey: " + color);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_13 = V_0;
		V_1 = L_13;
		String_t* L_14;
		L_14 = HSBColor_ToString_m3854EA49BD60D3F16FF37A9FCF8A5D5EF4074D64((&V_1), NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAEE65A4C44BC0A777AAA942AE6EAFE149E8D52A6, L_14, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// color = new HSBColor(Color.white);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE((&V_0), L_16, NULL);
		// Debug.Log("white: " + color);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_17 = V_0;
		V_1 = L_17;
		String_t* L_18;
		L_18 = HSBColor_ToString_m3854EA49BD60D3F16FF37A9FCF8A5D5EF4074D64((&V_1), NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6CF17FD7D4BB340F939802560C46AC4C23AC2555, L_18, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// color = new HSBColor(new Color(0.4f, 1f, 0.84f, 1f));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_20), (0.400000006f), (1.0f), (0.839999974f), (1.0f), /*hidden argument*/NULL);
		HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE((&V_0), L_20, NULL);
		// Debug.Log("0.4, 1f, 0.84: " + color);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_21 = V_0;
		V_1 = L_21;
		String_t* L_22;
		L_22 = HSBColor_ToString_m3854EA49BD60D3F16FF37A9FCF8A5D5EF4074D64((&V_1), NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7E9A8C1BAE891CEE28459B0BE4DD7FCE66ECADD9, L_22, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_23, NULL);
		// Debug.Log("164,82,84   .... 0.643137f, 0.321568f, 0.329411f  :" +
		//           ToColor(new HSBColor(new Color(0.643137f, 0.321568f, 0.329411f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_24), (0.643136978f), (0.321568012f), (0.329411f), /*hidden argument*/NULL);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_25;
		memset((&L_25), 0, sizeof(L_25));
		HSBColor__ctor_mDB7807C28DF14AE4A236641C2D25068312D1A8EE((&L_25), L_24, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = HSBColor_ToColor_mBF4D235881CF9E626E2DB5E2EE780798C4269607(L_25, NULL);
		V_2 = L_26;
		String_t* L_27;
		L_27 = Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147((&V_2), NULL);
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF61FCA4BCA56B214565F66BF596F0C73197FB422, L_27, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_28, NULL);
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
// System.Void MaterialUI.InputFieldConfig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldConfig_Awake_m5660828B37264CC2B30B3D8D4CEA626B737C0F40 (InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputField = gameObject.GetComponent<InputField>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1;
		L_1 = GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E(L_0, GameObject_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_mC8A4AE0E76B7AC26736C0FA8510832B97D2F400E_RuntimeMethod_var);
		__this->___inputField_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputField_15), (void*)L_1);
		// activeLineRect = activeLine.GetComponent<RectTransform>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___activeLine_12;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_2, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___activeLineRect_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeLineRect_16), (void*)L_3);
		// placeholderRect = placeholderText.GetComponent<RectTransform>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___placeholderText_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_4, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___placeholderRect_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placeholderRect_17), (void*)L_5);
		// textRect = inputText.GetComponent<RectTransform>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___inputText_10;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_6, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___textRect_13 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textRect_13), (void*)L_7);
		// displayTextRect = displayText.GetComponent<RectTransform>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___displayText_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_8, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___displayTextRect_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayTextRect_14), (void*)L_9);
		// }
		return;
	}
}
// System.Void MaterialUI.InputFieldConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldConfig_Start_m14F59FAD9CACDDA474E588A59E9C8AB6197D6810 (InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// activeLineRect.sizeDelta = new Vector2 (placeholderRect.rect.width, activeLineRect.sizeDelta.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___activeLineRect_16;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___placeholderRect_17;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___activeLineRect_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_4, NULL);
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_3, L_6, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_0, L_7, NULL);
		// inputText.font = displayText.font;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___inputText_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___displayText_11;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_10;
		L_10 = Text_get_font_mBF98ED39D5C5081AF14A64170EC3391D206CCAFD(L_9, NULL);
		Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F(L_8, L_10, NULL);
		// inputText.fontStyle = displayText.fontStyle;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___inputText_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___displayText_11;
		int32_t L_13;
		L_13 = Text_get_fontStyle_m7684B5FFE1DC8237FB573A012B482DDB04E3BA47(L_12, NULL);
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_11, L_13, NULL);
		// inputText.fontSize = displayText.fontSize;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___inputText_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___displayText_11;
		int32_t L_16;
		L_16 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_15, NULL);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_14, L_16, NULL);
		// inputText.lineSpacing = displayText.lineSpacing;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___inputText_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___displayText_11;
		float L_19;
		L_19 = Text_get_lineSpacing_m124405CE023E0E23D9040BAA84318408248DF9CF(L_18, NULL);
		Text_set_lineSpacing_m36CE565189BAF89DB1DA1E0DE5786521D4763D0E(L_17, L_19, NULL);
		// inputText.supportRichText = displayText.supportRichText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___inputText_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___displayText_11;
		bool L_22;
		L_22 = Text_get_supportRichText_mE5B61670099BB2611BB60D84ADB72C9A54BAC68B(L_21, NULL);
		Text_set_supportRichText_mB4DB141150AEBCCADEFFF4EC7A799F85FD075265(L_20, L_22, NULL);
		// inputText.alignment = displayText.alignment;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___inputText_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___displayText_11;
		int32_t L_25;
		L_25 = Text_get_alignment_m01C4D0437DF8A2E05BE4489779A8BEF231A2F2CC(L_24, NULL);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_23, L_25, NULL);
		// inputText.horizontalOverflow = displayText.horizontalOverflow;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___inputText_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___displayText_11;
		int32_t L_28;
		L_28 = Text_get_horizontalOverflow_mC909085F76EF49D62A70A8E503C5BC14C30176F1(L_27, NULL);
		Text_set_horizontalOverflow_m10AAFBA65FD7F4B1934B5D628B3E70D75D02FFD6(L_26, L_28, NULL);
		// inputText.resizeTextForBestFit = displayText.resizeTextForBestFit;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___inputText_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___displayText_11;
		bool L_31;
		L_31 = Text_get_resizeTextForBestFit_mA4EEC57C4C188C1598187D1E11A83B950883B011(L_30, NULL);
		Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35(L_29, L_31, NULL);
		// inputText.material = displayText.material;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = __this->___inputText_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = __this->___displayText_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34;
		L_34 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_33);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_32, L_34);
		// inputText.color = displayText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___inputText_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___displayText_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_36);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_37);
		// placeholderOffColor = placeholderText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = __this->___placeholderText_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_38);
		__this->___placeholderOffColor_18 = L_39;
		// if (inputField.lineType == InputField.LineType.MultiLineNewline || inputField.lineType == InputField.LineType.MultiLineSubmit)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_40 = __this->___inputField_15;
		int32_t L_41;
		L_41 = InputField_get_lineType_m6CEA63D8FCACAEC05D3499577ED0771EFFF33377_inline(L_40, NULL);
		if ((((int32_t)L_41) == ((int32_t)2)))
		{
			goto IL_013c;
		}
	}
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_42 = __this->___inputField_15;
		int32_t L_43;
		L_43 = InputField_get_lineType_m6CEA63D8FCACAEC05D3499577ED0771EFFF33377_inline(L_42, NULL);
		if ((!(((uint32_t)L_43) == ((uint32_t)1))))
		{
			goto IL_0143;
		}
	}

IL_013c:
	{
		// dynamicHeight = true;
		__this->___dynamicHeight_5 = (bool)1;
	}

IL_0143:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.InputFieldConfig::OnSelect(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldConfig_OnSelect_mC1132C1527D0DBD82F57FDABC84CE7DA17C48FC4 (InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	{
		// placeholderColor = placeholderText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___placeholderText_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->___placeholderColor_19 = L_1;
		// placeholderPivot = placeholderRect.pivot.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___placeholderRect_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_2, NULL);
		float L_4 = L_3.___y_1;
		__this->___placeholderPivot_21 = L_4;
		// placeholderScale = placeholderRect.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___placeholderRect_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___x_2;
		__this->___placeholderScale_20 = L_7;
		// activeLine.color = activeColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___activeLine_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___activeColor_4;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// selected = true;
		__this->___selected_6 = (bool)1;
		// activeLineRect.position = Input.mousePosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___activeLineRect_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
		// activeLineRect.localPosition = new Vector3 (activeLineRect.localPosition.x, 0.5f, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___activeLineRect_16;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___activeLineRect_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_15, (0.5f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_16, NULL);
		// activeLineRect.localScale = new Vector3 (0f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___activeLineRect_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_17, L_18, NULL);
		// activeLinePos = activeLineRect.localPosition.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___activeLineRect_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_19, NULL);
		float L_21 = L_20.___x_2;
		__this->___activeLinePos_23 = L_21;
		// animStartTime = Time.realtimeSinceStartup;
		float L_22;
		L_22 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_24 = L_22;
		// state = 1;
		__this->___state_27 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.InputFieldConfig::OnDeselect(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldConfig_OnDeselect_mE04131C45C55B726405B0943A4C0DEDBB7BA0DAD (InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	{
		// placeholderColor = placeholderText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___placeholderText_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->___placeholderColor_19 = L_1;
		// placeholderPivot = placeholderRect.pivot.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___placeholderRect_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_2, NULL);
		float L_4 = L_3.___y_1;
		__this->___placeholderPivot_21 = L_4;
		// placeholderScale = placeholderRect.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___placeholderRect_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___x_2;
		__this->___placeholderScale_20 = L_7;
		// selected = false;
		__this->___selected_6 = (bool)0;
		// animStartTime = Time.realtimeSinceStartup;
		float L_8;
		L_8 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_24 = L_8;
		// state = 2;
		__this->___state_27 = 2;
		// }
		return;
	}
}
// System.Void MaterialUI.InputFieldConfig::CalculateHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldConfig_CalculateHeight_mE0A3DA0D9FD989BC8FE0378DA3172601300EE910 (InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine (DelayedHeight());
		RuntimeObject* L_0;
		L_0 = InputFieldConfig_DelayedHeight_m89E4535B7C3563EDC94F772282429D8992D65747(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.InputFieldConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldConfig_Update_m174A01C3071B4784304D4D3D1A7699BCC4D74520 (InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_24;
		__this->___animDeltaTime_25 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)    // Activating
		int32_t L_2 = __this->___state_27;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_021f;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_25;
		float L_4 = __this->___animationDuration_7;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_0213;
		}
	}
	{
		// Color tempColor = placeholderText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___placeholderText_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		V_0 = L_6;
		// tempColor.r = Anim.Quint.Out(placeholderColor.r, activeColor.r, animDeltaTime, animationDuration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___placeholderColor_19);
		float L_8 = L_7->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = (&__this->___activeColor_4);
		float L_10 = L_9->___r_0;
		float L_11 = __this->___animDeltaTime_25;
		float L_12 = __this->___animationDuration_7;
		float L_13;
		L_13 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_8, L_10, L_11, L_12, NULL);
		(&V_0)->___r_0 = L_13;
		// tempColor.g = Anim.Quint.Out(placeholderColor.g, activeColor.g, animDeltaTime, animationDuration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_14 = (&__this->___placeholderColor_19);
		float L_15 = L_14->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = (&__this->___activeColor_4);
		float L_17 = L_16->___g_1;
		float L_18 = __this->___animDeltaTime_25;
		float L_19 = __this->___animationDuration_7;
		float L_20;
		L_20 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_15, L_17, L_18, L_19, NULL);
		(&V_0)->___g_1 = L_20;
		// tempColor.b = Anim.Quint.Out(placeholderColor.b, activeColor.b, animDeltaTime, animationDuration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_21 = (&__this->___placeholderColor_19);
		float L_22 = L_21->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_23 = (&__this->___activeColor_4);
		float L_24 = L_23->___b_2;
		float L_25 = __this->___animDeltaTime_25;
		float L_26 = __this->___animationDuration_7;
		float L_27;
		L_27 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_22, L_24, L_25, L_26, NULL);
		(&V_0)->___b_2 = L_27;
		// tempColor.a = Anim.Quint.Out(placeholderColor.a, activeColor.a, animDeltaTime, animationDuration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = (&__this->___placeholderColor_19);
		float L_29 = L_28->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = (&__this->___activeColor_4);
		float L_31 = L_30->___a_3;
		float L_32 = __this->___animDeltaTime_25;
		float L_33 = __this->___animationDuration_7;
		float L_34;
		L_34 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_29, L_31, L_32, L_33, NULL);
		(&V_0)->___a_3 = L_34;
		// placeholderText.color = tempColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___placeholderText_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = V_0;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
		// Vector3 tempVec3 = placeholderRect.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37 = __this->___placeholderRect_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_37, NULL);
		V_1 = L_38;
		// tempVec3.x = Anim.Quint.Out (placeholderScale, 0.75f, animDeltaTime, animationDuration);
		float L_39 = __this->___placeholderScale_20;
		float L_40 = __this->___animDeltaTime_25;
		float L_41 = __this->___animationDuration_7;
		float L_42;
		L_42 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_39, (0.75f), L_40, L_41, NULL);
		(&V_1)->___x_2 = L_42;
		// tempVec3.y =tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		float L_44 = L_43.___x_2;
		(&V_1)->___y_3 = L_44;
		// tempVec3.z =tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_1;
		float L_46 = L_45.___x_2;
		(&V_1)->___z_4 = L_46;
		// placeholderRect.localScale = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_47 = __this->___placeholderRect_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_1;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_47, L_48, NULL);
		// Vector2 tempVec2 = placeholderRect.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = __this->___placeholderRect_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_49, NULL);
		V_2 = L_50;
		// tempVec2.y = Anim.Quint.InOut (placeholderPivot, 0f, animDeltaTime, animationDuration);
		float L_51 = __this->___placeholderPivot_21;
		float L_52 = __this->___animDeltaTime_25;
		float L_53 = __this->___animationDuration_7;
		float L_54;
		L_54 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_51, (0.0f), L_52, L_53, NULL);
		(&V_2)->___y_1 = L_54;
		// placeholderRect.pivot = tempVec2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_55 = __this->___placeholderRect_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_2;
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_55, L_56, NULL);
		// tempVec3 = activeLineRect.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_57 = __this->___activeLineRect_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_57, NULL);
		V_1 = L_58;
		// tempVec3.x = Anim.Quint.Out(0f, 1f, animDeltaTime, animationDuration);
		float L_59 = __this->___animDeltaTime_25;
		float L_60 = __this->___animationDuration_7;
		float L_61;
		L_61 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((0.0f), (1.0f), L_59, L_60, NULL);
		(&V_1)->___x_2 = L_61;
		// activeLineRect.localScale = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_62 = __this->___activeLineRect_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_1;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_62, L_63, NULL);
		// tempVec2 = activeLineRect.localPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_64 = __this->___activeLineRect_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_64, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_65, NULL);
		V_2 = L_66;
		// tempVec2.x = Anim.Quint.Out (activeLinePos, 0f, animDeltaTime, animationDuration);
		float L_67 = __this->___activeLinePos_23;
		float L_68 = __this->___animDeltaTime_25;
		float L_69 = __this->___animationDuration_7;
		float L_70;
		L_70 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_67, (0.0f), L_68, L_69, NULL);
		(&V_2)->___x_0 = L_70;
		// activeLineRect.localPosition = tempVec2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_71 = __this->___activeLineRect_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_72, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_71, L_73, NULL);
		goto IL_03f9;
	}

IL_0213:
	{
		// state = 0;
		__this->___state_27 = 0;
		goto IL_03f9;
	}

IL_021f:
	{
		// else if (state == 2)    // Deactivating
		int32_t L_74 = __this->___state_27;
		if ((!(((uint32_t)L_74) == ((uint32_t)2))))
		{
			goto IL_03f9;
		}
	}
	{
		// if (animDeltaTime <= 1f)
		float L_75 = __this->___animDeltaTime_25;
		if ((!(((float)L_75) <= ((float)(1.0f)))))
		{
			goto IL_03f2;
		}
	}
	{
		// Color tempColor = placeholderText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_76 = __this->___placeholderText_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77;
		L_77 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_76);
		V_3 = L_77;
		// tempColor.r = Anim.Quint.Out(placeholderColor.r, placeholderOffColor.r, animDeltaTime, animationDuration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_78 = (&__this->___placeholderColor_19);
		float L_79 = L_78->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_80 = (&__this->___placeholderOffColor_18);
		float L_81 = L_80->___r_0;
		float L_82 = __this->___animDeltaTime_25;
		float L_83 = __this->___animationDuration_7;
		float L_84;
		L_84 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_79, L_81, L_82, L_83, NULL);
		(&V_3)->___r_0 = L_84;
		// tempColor.g = Anim.Quint.Out(placeholderColor.g, placeholderOffColor.g, animDeltaTime, animationDuration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_85 = (&__this->___placeholderColor_19);
		float L_86 = L_85->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_87 = (&__this->___placeholderOffColor_18);
		float L_88 = L_87->___g_1;
		float L_89 = __this->___animDeltaTime_25;
		float L_90 = __this->___animationDuration_7;
		float L_91;
		L_91 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_86, L_88, L_89, L_90, NULL);
		(&V_3)->___g_1 = L_91;
		// tempColor.b = Anim.Quint.Out(placeholderColor.b, placeholderOffColor.b, animDeltaTime, animationDuration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_92 = (&__this->___placeholderColor_19);
		float L_93 = L_92->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_94 = (&__this->___placeholderOffColor_18);
		float L_95 = L_94->___b_2;
		float L_96 = __this->___animDeltaTime_25;
		float L_97 = __this->___animationDuration_7;
		float L_98;
		L_98 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_93, L_95, L_96, L_97, NULL);
		(&V_3)->___b_2 = L_98;
		// tempColor.a = Anim.Quint.Out(placeholderColor.a, placeholderOffColor.a, animDeltaTime, animationDuration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_99 = (&__this->___placeholderColor_19);
		float L_100 = L_99->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_101 = (&__this->___placeholderOffColor_18);
		float L_102 = L_101->___a_3;
		float L_103 = __this->___animDeltaTime_25;
		float L_104 = __this->___animationDuration_7;
		float L_105;
		L_105 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_100, L_102, L_103, L_104, NULL);
		(&V_3)->___a_3 = L_105;
		// placeholderText.color = tempColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_106 = __this->___placeholderText_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_107 = V_3;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_106, L_107);
		// if (inputField.text.Length == 0)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_108 = __this->___inputField_15;
		String_t* L_109;
		L_109 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_108, NULL);
		int32_t L_110;
		L_110 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_109, NULL);
		if (L_110)
		{
			goto IL_03b6;
		}
	}
	{
		// Vector3 tempVec3 = placeholderRect.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_111 = __this->___placeholderRect_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_111, NULL);
		V_4 = L_112;
		// tempVec3.x = Anim.Quint.InOut (placeholderScale, 1f, animDeltaTime, animationDuration);
		float L_113 = __this->___placeholderScale_20;
		float L_114 = __this->___animDeltaTime_25;
		float L_115 = __this->___animationDuration_7;
		float L_116;
		L_116 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_113, (1.0f), L_114, L_115, NULL);
		(&V_4)->___x_2 = L_116;
		// tempVec3.y =tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = V_4;
		float L_118 = L_117.___x_2;
		(&V_4)->___y_3 = L_118;
		// tempVec3.z =tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_4;
		float L_120 = L_119.___x_2;
		(&V_4)->___z_4 = L_120;
		// placeholderRect.localScale = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_121 = __this->___placeholderRect_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = V_4;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_121, L_122, NULL);
		// Vector2 tempVec2 = placeholderRect.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_123 = __this->___placeholderRect_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_124;
		L_124 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_123, NULL);
		V_5 = L_124;
		// tempVec2.y = Anim.Quint.Out (placeholderPivot, 1f, animDeltaTime, animationDuration);
		float L_125 = __this->___placeholderPivot_21;
		float L_126 = __this->___animDeltaTime_25;
		float L_127 = __this->___animationDuration_7;
		float L_128;
		L_128 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_125, (1.0f), L_126, L_127, NULL);
		(&V_5)->___y_1 = L_128;
		// placeholderRect.pivot = tempVec2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_129 = __this->___placeholderRect_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = V_5;
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_129, L_130, NULL);
	}

IL_03b6:
	{
		// tempColor = activeLine.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_131 = __this->___activeLine_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_132;
		L_132 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_131);
		V_3 = L_132;
		// tempColor.a = Anim.Quint.Out(1f, 0f, animDeltaTime, animationDuration);
		float L_133 = __this->___animDeltaTime_25;
		float L_134 = __this->___animationDuration_7;
		float L_135;
		L_135 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((1.0f), (0.0f), L_133, L_134, NULL);
		(&V_3)->___a_3 = L_135;
		// activeLine.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_136 = __this->___activeLine_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_137 = V_3;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_136, L_137);
		goto IL_03f9;
	}

IL_03f2:
	{
		// state = 0;
		__this->___state_27 = 0;
	}

IL_03f9:
	{
		// if (selected)
		bool L_138 = __this->___selected_6;
		if (!L_138)
		{
			goto IL_044c;
		}
	}
	{
		// if (dynamicHeight)
		bool L_139 = __this->___dynamicHeight_5;
		if (!L_139)
		{
			goto IL_0436;
		}
	}
	{
		// textRect.sizeDelta = displayTextRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_140 = __this->___textRect_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_141 = __this->___displayTextRect_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_142;
		L_142 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_141, NULL);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_140, L_142, NULL);
		// displayText.text = inputField.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_143 = __this->___displayText_11;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_144 = __this->___inputField_15;
		String_t* L_145;
		L_145 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_144, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_143, L_145);
		return;
	}

IL_0436:
	{
		// displayText.text = inputText.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_146 = __this->___displayText_11;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_147 = __this->___inputText_10;
		String_t* L_148;
		L_148 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_147);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_146, L_148);
	}

IL_044c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MaterialUI.InputFieldConfig::DelayedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputFieldConfig_DelayedHeight_m89E4535B7C3563EDC94F772282429D8992D65747 (InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* L_0 = (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81*)il2cpp_codegen_object_new(U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81_il2cpp_TypeInfo_var);
		U3CDelayedHeightU3Ed__30__ctor_m920598C14F7240D76E977A08165066A2853B9075(L_0, 0, NULL);
		U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MaterialUI.InputFieldConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldConfig__ctor_m2E2E79F88BB7410BC7093FC67B69F920594215FB (InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* __this, const RuntimeMethod* method) 
{
	{
		// public Color activeColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___activeColor_4 = L_0;
		// public float animationDuration = 0.75f;
		__this->___animationDuration_7 = (0.75f);
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
// System.Void MaterialUI.InputFieldConfig/<DelayedHeight>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedHeightU3Ed__30__ctor_m920598C14F7240D76E977A08165066A2853B9075 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MaterialUI.InputFieldConfig/<DelayedHeight>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedHeightU3Ed__30_System_IDisposable_Dispose_mC5B8B97AE978E356395FF48DEC2C70B2D534CCBF (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MaterialUI.InputFieldConfig/<DelayedHeight>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedHeightU3Ed__30_MoveNext_m045421AE8B065692B86C414E4A063C79BBE9E843 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!selectedBefore)
		InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* L_5 = V_1;
		bool L_6 = L_5->___selectedBefore_26;
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		// inputText.color = Color.clear;
		InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* L_7 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = L_7->___inputText_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// selectedBefore = true;
		InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* L_10 = V_1;
		L_10->___selectedBefore_26 = (bool)1;
	}

IL_0058:
	{
		// }
		return (bool)0;
	}
}
// System.Object MaterialUI.InputFieldConfig/<DelayedHeight>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayedHeightU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBA314AA56D227E3BC37FDB577E62959291799E25 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MaterialUI.InputFieldConfig/<DelayedHeight>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedHeightU3Ed__30_System_Collections_IEnumerator_Reset_m4D6E70959301CA99CF6BA0053EC96585F18B47E1 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedHeightU3Ed__30_System_Collections_IEnumerator_Reset_m4D6E70959301CA99CF6BA0053EC96585F18B47E1_RuntimeMethod_var)));
	}
}
// System.Object MaterialUI.InputFieldConfig/<DelayedHeight>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayedHeightU3Ed__30_System_Collections_IEnumerator_get_Current_m7022A55676F2018E9ADBFDC017310B91C4653F81 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.MaterialGlobals::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialGlobals__ctor_m0B2BC2E796A9757A908B65BD7EA491E5B9E3A6AE (MaterialGlobals_tA9ABC4A265C7E8335FD8B070FE6A198C0B9C2E1C* __this, const RuntimeMethod* method) 
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
// System.Single MaterialUI.MaterialUIScaler::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaterialUIScaler_get_scaleFactor_m853F366519FCBD659D04D6BFA0C3AE48D17319C0 (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, const RuntimeMethod* method) 
{
	{
		// public float scaleFactor { get; private set; }
		float L_0 = __this->___U3CscaleFactorU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void MaterialUI.MaterialUIScaler::set_scaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialUIScaler_set_scaleFactor_mBF1565B38029BD9B57F1E14247410963043C30DD (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float scaleFactor { get; private set; }
		float L_0 = ___value0;
		__this->___U3CscaleFactorU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void MaterialUI.MaterialUIScaler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialUIScaler_Update_m3276F4A7B629ED35BA9BBBDB8DA3FC8616EE55D7 (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!scaler)
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_0 = __this->___scaler_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// scaler = gameObject.GetComponent<CanvasScaler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_3;
		L_3 = GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8(L_2, GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8_RuntimeMethod_var);
		__this->___scaler_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scaler_7), (void*)L_3);
	}

IL_001e:
	{
		// if (scaler.uiScaleMode == CanvasScaler.ScaleMode.ScaleWithScreenSize)
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_4 = __this->___scaler_7;
		int32_t L_5;
		L_5 = CanvasScaler_get_uiScaleMode_m8E92609E011796E8CC23B1739F95CE7BE2631525_inline(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		// referenceResolution = scaler.referenceResolution;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_6 = __this->___scaler_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5_inline(L_6, NULL);
		__this->___referenceResolution_4 = L_7;
		// currentResolution = new Vector2(Screen.width, Screen.height);
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_9;
		L_9 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)L_8), ((float)L_9), /*hidden argument*/NULL);
		__this->___currentResolution_5 = L_10;
		// scaleFactor = (currentResolution.x*currentResolution.y)/(referenceResolution.x*referenceResolution.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___currentResolution_5);
		float L_12 = L_11->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___currentResolution_5);
		float L_14 = L_13->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___referenceResolution_4);
		float L_16 = L_15->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___referenceResolution_4);
		float L_18 = L_17->___y_1;
		MaterialUIScaler_set_scaleFactor_mBF1565B38029BD9B57F1E14247410963043C30DD_inline(__this, ((float)(((float)il2cpp_codegen_multiply(L_12, L_14))/((float)il2cpp_codegen_multiply(L_16, L_18)))), NULL);
		return;
	}

IL_008a:
	{
		// else if (scaler.uiScaleMode == CanvasScaler.ScaleMode.ConstantPixelSize)
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_19 = __this->___scaler_7;
		int32_t L_20;
		L_20 = CanvasScaler_get_uiScaleMode_m8E92609E011796E8CC23B1739F95CE7BE2631525_inline(L_19, NULL);
		if (L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// scaleFactor = scaler.scaleFactor;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_21 = __this->___scaler_7;
		float L_22;
		L_22 = CanvasScaler_get_scaleFactor_mB2BFA22B99AEC96F09886F490DA9EE2F825D3431_inline(L_21, NULL);
		MaterialUIScaler_set_scaleFactor_mBF1565B38029BD9B57F1E14247410963043C30DD_inline(__this, L_22, NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.MaterialUIScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialUIScaler__ctor_m2E2FB8D6B882DAF56ECF421A113FC671F4976827 (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.MenuArrowAnim::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Awake_m97C62A938D0A9E7E3531480353AB1EDD307377EC (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisTransform = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisTransform_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisTransform_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void MaterialUI.MenuArrowAnim::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Toggle_m128369CA2AD57BC0A48B9BF623DCD94BBF08A6AF (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	{
		// if (isArrow)
		bool L_0 = __this->___isArrow_15;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Menu();
		MenuArrowAnim_Menu_m37C9A517D399F0B23E42E0C9D99FFDF76AFB6E27(__this, NULL);
		return;
	}

IL_000f:
	{
		// Arrow();
		MenuArrowAnim_Arrow_m8B506BC0C1668C55235038C6AA10CD1569FD8A9E(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.MenuArrowAnim::Arrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Arrow_m8B506BC0C1668C55235038C6AA10CD1569FD8A9E (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	{
		// animStartTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_5 = L_0;
		// state = 1;
		__this->___state_4 = 1;
		// isArrow = true;
		__this->___isArrow_15 = (bool)1;
		// }
		return;
	}
}
// System.Void MaterialUI.MenuArrowAnim::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Menu_m37C9A517D399F0B23E42E0C9D99FFDF76AFB6E27 (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	{
		// animStartTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_5 = L_0;
		// state = 2;
		__this->___state_4 = 2;
		// isArrow = false;
		__this->___isArrow_15 = (bool)0;
		// }
		return;
	}
}
// System.Void MaterialUI.MenuArrowAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Update_m8015CBCC0CEBADA41AC991A0FB2D30F9E3A27188 (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_5;
		__this->___animDeltaTime_6 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)
		int32_t L_2 = __this->___state_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_02ae;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_6;
		float L_4 = __this->___animationDuration_7;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_02a6;
		}
	}
	{
		// tempVector3 = thisTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___thisTransform_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_5, NULL);
		__this->___tempVector3_13 = L_6;
		// tempVector3.z = Anim.Quint.SoftOut(0f, -180f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___tempVector3_13);
		float L_8 = __this->___animDeltaTime_6;
		float L_9 = __this->___animationDuration_7;
		float L_10;
		L_10 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((0.0f), (-180.0f), L_8, L_9, NULL);
		L_7->___z_4 = L_10;
		// thisTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___thisTransform_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___tempVector3_13;
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_11, L_12, NULL);
		// tempVector2 = topTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_13, NULL);
		__this->___tempVector2_12 = L_14;
		// tempVector2.x = Anim.Quint.SoftOut(0.5f, 1f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___tempVector2_12);
		float L_16 = __this->___animDeltaTime_6;
		float L_17 = __this->___animationDuration_7;
		float L_18;
		L_18 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((0.5f), (1.0f), L_16, L_17, NULL);
		L_15->___x_0 = L_18;
		// topTransform.pivot = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___tempVector2_12;
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_19, L_20, NULL);
		// tempVector2 = topTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_21, NULL);
		__this->___tempVector2_12 = L_22;
		// tempVector2.x = Anim.Quint.SoftOut(18f, 12f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___tempVector2_12);
		float L_24 = __this->___animDeltaTime_6;
		float L_25 = __this->___animationDuration_7;
		float L_26;
		L_26 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((18.0f), (12.0f), L_24, L_25, NULL);
		L_23->___x_0 = L_26;
		// topTransform.sizeDelta = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___tempVector2_12;
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_27, L_28, NULL);
		// topTransform.localPosition = Anim.Quint.SoftOut(new Vector2(0f, 5f), new Vector2(9.4f, -0.7f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_30), (0.0f), (5.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), (9.39999962f), (-0.699999988f), /*hidden argument*/NULL);
		float L_32 = __this->___animDeltaTime_6;
		float L_33 = __this->___animationDuration_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352(L_30, L_31, L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_34, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_29, L_35, NULL);
		// tempVector3 = topTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36 = __this->___topTransform_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_36, NULL);
		__this->___tempVector3_13 = L_37;
		// tempVector3.z = Anim.Quint.SoftOut(0f, -45f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&__this->___tempVector3_13);
		float L_39 = __this->___animDeltaTime_6;
		float L_40 = __this->___animationDuration_7;
		float L_41;
		L_41 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((0.0f), (-45.0f), L_39, L_40, NULL);
		L_38->___z_4 = L_41;
		// topTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42 = __this->___topTransform_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___tempVector3_13;
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_42, L_43, NULL);
		// tempVector2 = bottomTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_44, NULL);
		__this->___tempVector2_12 = L_45;
		// tempVector2.x = Anim.Quint.SoftOut(0.5f, 1f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&__this->___tempVector2_12);
		float L_47 = __this->___animDeltaTime_6;
		float L_48 = __this->___animationDuration_7;
		float L_49;
		L_49 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((0.5f), (1.0f), L_47, L_48, NULL);
		L_46->___x_0 = L_49;
		// bottomTransform.pivot = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = __this->___tempVector2_12;
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_50, L_51, NULL);
		// tempVector2 = bottomTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_52 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_52, NULL);
		__this->___tempVector2_12 = L_53;
		// tempVector2.x = Anim.Quint.SoftOut(18f, 12f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_54 = (&__this->___tempVector2_12);
		float L_55 = __this->___animDeltaTime_6;
		float L_56 = __this->___animationDuration_7;
		float L_57;
		L_57 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((18.0f), (12.0f), L_55, L_56, NULL);
		L_54->___x_0 = L_57;
		// bottomTransform.sizeDelta = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_58 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = __this->___tempVector2_12;
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_58, L_59, NULL);
		// bottomTransform.localPosition = Anim.Quint.SoftOut(new Vector2(0f, -5f), new Vector2(9.4f, 0.7f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_60 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), (0.0f), (-5.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_62), (9.39999962f), (0.699999988f), /*hidden argument*/NULL);
		float L_63 = __this->___animDeltaTime_6;
		float L_64 = __this->___animationDuration_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352(L_61, L_62, L_63, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_65, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_60, L_66, NULL);
		// tempVector3 = bottomTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_67 = __this->___bottomTransform_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_67, NULL);
		__this->___tempVector3_13 = L_68;
		// tempVector3.z = Anim.Quint.SoftOut(0f, 45f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_69 = (&__this->___tempVector3_13);
		float L_70 = __this->___animDeltaTime_6;
		float L_71 = __this->___animationDuration_7;
		float L_72;
		L_72 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((0.0f), (45.0f), L_70, L_71, NULL);
		L_69->___z_4 = L_72;
		// bottomTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_73 = __this->___bottomTransform_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = __this->___tempVector3_13;
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_73, L_74, NULL);
		return;
	}

IL_02a6:
	{
		// state = 0;
		__this->___state_4 = 0;
		return;
	}

IL_02ae:
	{
		// else if (state == 2)
		int32_t L_75 = __this->___state_4;
		if ((!(((uint32_t)L_75) == ((uint32_t)2))))
		{
			goto IL_0549;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_76 = __this->___animDeltaTime_6;
		float L_77 = __this->___animationDuration_7;
		if ((!(((float)L_76) <= ((float)L_77))))
		{
			goto IL_0542;
		}
	}
	{
		// tempVector3 = thisTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_78 = __this->___thisTransform_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_78, NULL);
		__this->___tempVector3_13 = L_79;
		// tempVector3.z = Anim.Quint.SoftOut(180f, 0f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_80 = (&__this->___tempVector3_13);
		float L_81 = __this->___animDeltaTime_6;
		float L_82 = __this->___animationDuration_7;
		float L_83;
		L_83 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((180.0f), (0.0f), L_81, L_82, NULL);
		L_80->___z_4 = L_83;
		// thisTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_84 = __this->___thisTransform_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = __this->___tempVector3_13;
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_84, L_85, NULL);
		// tempVector2 = topTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_86 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87;
		L_87 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_86, NULL);
		__this->___tempVector2_12 = L_87;
		// tempVector2.x = Anim.Quint.SoftOut(1f, 0.5f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_88 = (&__this->___tempVector2_12);
		float L_89 = __this->___animDeltaTime_6;
		float L_90 = __this->___animationDuration_7;
		float L_91;
		L_91 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((1.0f), (0.5f), L_89, L_90, NULL);
		L_88->___x_0 = L_91;
		// topTransform.pivot = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_92 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93 = __this->___tempVector2_12;
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_92, L_93, NULL);
		// tempVector2 = topTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_94 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95;
		L_95 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_94, NULL);
		__this->___tempVector2_12 = L_95;
		// tempVector2.x = Anim.Quint.SoftOut(12f, 18f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_96 = (&__this->___tempVector2_12);
		float L_97 = __this->___animDeltaTime_6;
		float L_98 = __this->___animationDuration_7;
		float L_99;
		L_99 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((12.0f), (18.0f), L_97, L_98, NULL);
		L_96->___x_0 = L_99;
		// topTransform.sizeDelta = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_100 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = __this->___tempVector2_12;
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_100, L_101, NULL);
		// topTransform.localPosition = Anim.Quint.SoftOut(new Vector2(9.4f, -0.7f), new Vector2(0f, 5), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_102 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_103), (9.39999962f), (-0.699999988f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_104), (0.0f), (5.0f), /*hidden argument*/NULL);
		float L_105 = __this->___animDeltaTime_6;
		float L_106 = __this->___animationDuration_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107;
		L_107 = Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352(L_103, L_104, L_105, L_106, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_107, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_102, L_108, NULL);
		// tempVector3 = topTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_109 = __this->___topTransform_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_109, NULL);
		__this->___tempVector3_13 = L_110;
		// tempVector3.z = Anim.Quint.SoftOut(-45f, 0f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_111 = (&__this->___tempVector3_13);
		float L_112 = __this->___animDeltaTime_6;
		float L_113 = __this->___animationDuration_7;
		float L_114;
		L_114 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((-45.0f), (0.0f), L_112, L_113, NULL);
		L_111->___z_4 = L_114;
		// topTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_115 = __this->___topTransform_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = __this->___tempVector3_13;
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_115, L_116, NULL);
		// tempVector2 = bottomTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_117 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118;
		L_118 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_117, NULL);
		__this->___tempVector2_12 = L_118;
		// tempVector2.x = Anim.Quint.SoftOut(1f, 0.5f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_119 = (&__this->___tempVector2_12);
		float L_120 = __this->___animDeltaTime_6;
		float L_121 = __this->___animationDuration_7;
		float L_122;
		L_122 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((1.0f), (0.5f), L_120, L_121, NULL);
		L_119->___x_0 = L_122;
		// bottomTransform.pivot = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_123 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_124 = __this->___tempVector2_12;
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_123, L_124, NULL);
		// tempVector2 = bottomTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_125 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_126;
		L_126 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_125, NULL);
		__this->___tempVector2_12 = L_126;
		// tempVector2.x = Anim.Quint.SoftOut(12f, 18f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_127 = (&__this->___tempVector2_12);
		float L_128 = __this->___animDeltaTime_6;
		float L_129 = __this->___animationDuration_7;
		float L_130;
		L_130 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((12.0f), (18.0f), L_128, L_129, NULL);
		L_127->___x_0 = L_130;
		// bottomTransform.sizeDelta = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_131 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_132 = __this->___tempVector2_12;
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_131, L_132, NULL);
		// bottomTransform.localPosition = Anim.Quint.SoftOut(new Vector2(9.5f, 0.7f), new Vector2(0f, -5f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_133 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_134;
		memset((&L_134), 0, sizeof(L_134));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_134), (9.5f), (0.699999988f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_135), (0.0f), (-5.0f), /*hidden argument*/NULL);
		float L_136 = __this->___animDeltaTime_6;
		float L_137 = __this->___animationDuration_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_138;
		L_138 = Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352(L_134, L_135, L_136, L_137, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_138, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_133, L_139, NULL);
		// tempVector3 = bottomTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_140 = __this->___bottomTransform_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_140, NULL);
		__this->___tempVector3_13 = L_141;
		// tempVector3.z = Anim.Quint.SoftOut(45f, 0f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_142 = (&__this->___tempVector3_13);
		float L_143 = __this->___animDeltaTime_6;
		float L_144 = __this->___animationDuration_7;
		float L_145;
		L_145 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((45.0f), (0.0f), L_143, L_144, NULL);
		L_142->___z_4 = L_145;
		// bottomTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_146 = __this->___bottomTransform_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147 = __this->___tempVector3_13;
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_146, L_147, NULL);
		return;
	}

IL_0542:
	{
		// state = 0;
		__this->___state_4 = 0;
	}

IL_0549:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.MenuArrowAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim__ctor_m7BBADBF82A6E3D3267A367B9DB5BBF0FA6F9BA2E (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	{
		// public float animationDuration = 1f;
		__this->___animationDuration_7 = (1.0f);
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
// System.Void MaterialUI.NavDrawerConfig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Awake_m057086824DD06A1FA8ED0271CA731114F5AC6AEE (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisRectTransform = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisRectTransform_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRectTransform_6), (void*)L_1);
		// backgroundRectTransform = backgroundImage.GetComponent<RectTransform>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___backgroundImage_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_2, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___backgroundRectTransform_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundRectTransform_8), (void*)L_3);
		// backgroundCanvasGroup = backgroundImage.GetComponent<CanvasGroup>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___backgroundImage_7;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_5;
		L_5 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_4, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___backgroundCanvasGroup_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundCanvasGroup_9), (void*)L_5);
		// shadowCanvasGroup = ShadowImage.GetComponent<CanvasGroup>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___ShadowImage_10;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_7;
		L_7 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_6, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___shadowCanvasGroup_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shadowCanvasGroup_11), (void*)L_7);
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Start_mBDE1CC3B6008EE1412DD020CB8830599D264C5A0 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// maxPosition = thisRectTransform.rect.width / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRectTransform_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		__this->___maxPosition_4 = ((float)(L_2/(2.0f)));
		// minPosition = -maxPosition;
		float L_3 = __this->___maxPosition_4;
		__this->___minPosition_5 = ((-L_3));
		// backgroundRectTransform.sizeDelta = new Vector2(Screen.width, backgroundRectTransform.sizeDelta.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___backgroundRectTransform_8;
		int32_t L_5;
		L_5 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___backgroundRectTransform_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_6, NULL);
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)L_5), L_8, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_4, L_9, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::BackgroundTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_BackgroundTap_m47496C52F2BF03D96C09B374AAA1664F85F07A56 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	{
		// if (tapBackgroundToClose)
		bool L_0 = __this->___tapBackgroundToClose_13;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Close();
		NavDrawerConfig_Close_mA02B61D4C1AEFD33D4A761A90FADCB1B72610272(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Open_m447C2165290EACA621D8EA4964A71CB618E6B7BD (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	{
		// currentPos = thisRectTransform.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___currentPos_18 = L_1;
		// currentBackgroundAlpha = backgroundCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___backgroundCanvasGroup_9;
		float L_3;
		L_3 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_2, NULL);
		__this->___currentBackgroundAlpha_19 = L_3;
		// currentShadowAlpha = shadowCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_4 = __this->___shadowCanvasGroup_11;
		float L_5;
		L_5 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_4, NULL);
		__this->___currentShadowAlpha_20 = L_5;
		// backgroundCanvasGroup.blocksRaycasts = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___backgroundCanvasGroup_9;
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_6, (bool)1, NULL);
		// animStartTime = Time.realtimeSinceStartup;
		float L_7;
		L_7 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_15 = L_7;
		// state = 1;
		__this->___state_14 = (uint8_t)1;
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Close_mA02B61D4C1AEFD33D4A761A90FADCB1B72610272 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	{
		// currentPos = thisRectTransform.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___currentPos_18 = L_1;
		// currentBackgroundAlpha = backgroundCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___backgroundCanvasGroup_9;
		float L_3;
		L_3 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_2, NULL);
		__this->___currentBackgroundAlpha_19 = L_3;
		// currentShadowAlpha = shadowCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_4 = __this->___shadowCanvasGroup_11;
		float L_5;
		L_5 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_4, NULL);
		__this->___currentShadowAlpha_20 = L_5;
		// backgroundCanvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___backgroundCanvasGroup_9;
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_6, (bool)0, NULL);
		// animStartTime = Time.realtimeSinceStartup;
		float L_7;
		L_7 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_15 = L_7;
		// state = 2;
		__this->___state_14 = (uint8_t)2;
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Update_m760E1FB40043825564D16018C1FDF684F9C51561 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	{
		// if (state == 1)
		uint8_t L_0 = __this->___state_14;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0107;
		}
	}
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_2 = __this->___animStartTime_15;
		__this->___animDeltaTime_16 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_16;
		float L_4 = __this->___animationDuration_17;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_00c5;
		}
	}
	{
		// thisRectTransform.anchoredPosition = Anim.Quint.Out(currentPos, new Vector2(maxPosition, thisRectTransform.anchoredPosition.y), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___currentPos_18;
		float L_7 = __this->___maxPosition_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_8, NULL);
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_7, L_10, /*hidden argument*/NULL);
		float L_12 = __this->___animDeltaTime_16;
		float L_13 = __this->___animationDuration_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Quint_Out_m0D5446E0799ABEEEBD1C16AD2D273BCB4246B6A0(L_6, L_11, L_12, L_13, NULL);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_5, L_14, NULL);
		// backgroundCanvasGroup.alpha = Anim.Quint.Out(currentBackgroundAlpha, 1f, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_15 = __this->___backgroundCanvasGroup_9;
		float L_16 = __this->___currentBackgroundAlpha_19;
		float L_17 = __this->___animDeltaTime_16;
		float L_18 = __this->___animationDuration_17;
		float L_19;
		L_19 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_16, (1.0f), L_17, L_18, NULL);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_15, L_19, NULL);
		// shadowCanvasGroup.alpha = Anim.Quint.In(currentShadowAlpha, 1f, animDeltaTime, animationDuration / 2f);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_20 = __this->___shadowCanvasGroup_11;
		float L_21 = __this->___currentShadowAlpha_20;
		float L_22 = __this->___animDeltaTime_16;
		float L_23 = __this->___animationDuration_17;
		float L_24;
		L_24 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_21, (1.0f), L_22, ((float)(L_23/(2.0f))), NULL);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_20, L_24, NULL);
		goto IL_0200;
	}

IL_00c5:
	{
		// thisRectTransform.anchoredPosition = new Vector2(maxPosition, thisRectTransform.anchoredPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25 = __this->___thisRectTransform_6;
		float L_26 = __this->___maxPosition_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_27, NULL);
		float L_29 = L_28.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_30), L_26, L_29, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_25, L_30, NULL);
		// backgroundCanvasGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_31 = __this->___backgroundCanvasGroup_9;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_31, (1.0f), NULL);
		// state = 0;
		__this->___state_14 = (uint8_t)0;
		goto IL_0200;
	}

IL_0107:
	{
		// else if (state == 2)
		uint8_t L_32 = __this->___state_14;
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			goto IL_0200;
		}
	}
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_33;
		L_33 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_34 = __this->___animStartTime_15;
		__this->___animDeltaTime_16 = ((float)il2cpp_codegen_subtract(L_33, L_34));
		// if (animDeltaTime <= animationDuration)
		float L_35 = __this->___animDeltaTime_16;
		float L_36 = __this->___animationDuration_17;
		if ((!(((float)L_35) <= ((float)L_36))))
		{
			goto IL_01c3;
		}
	}
	{
		// thisRectTransform.anchoredPosition = Anim.Quint.Out(currentPos, new Vector2(minPosition, thisRectTransform.anchoredPosition.y), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = __this->___currentPos_18;
		float L_39 = __this->___minPosition_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_40 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_40, NULL);
		float L_42 = L_41.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_43), L_39, L_42, /*hidden argument*/NULL);
		float L_44 = __this->___animDeltaTime_16;
		float L_45 = __this->___animationDuration_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Quint_Out_m0D5446E0799ABEEEBD1C16AD2D273BCB4246B6A0(L_38, L_43, L_44, L_45, NULL);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_37, L_46, NULL);
		// backgroundCanvasGroup.alpha = Anim.Quint.Out(currentBackgroundAlpha, 0f, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_47 = __this->___backgroundCanvasGroup_9;
		float L_48 = __this->___currentBackgroundAlpha_19;
		float L_49 = __this->___animDeltaTime_16;
		float L_50 = __this->___animationDuration_17;
		float L_51;
		L_51 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_48, (0.0f), L_49, L_50, NULL);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_47, L_51, NULL);
		// shadowCanvasGroup.alpha = Anim.Quint.In(currentShadowAlpha, 0f, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_52 = __this->___shadowCanvasGroup_11;
		float L_53 = __this->___currentShadowAlpha_20;
		float L_54 = __this->___animDeltaTime_16;
		float L_55 = __this->___animationDuration_17;
		float L_56;
		L_56 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_53, (0.0f), L_54, L_55, NULL);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_52, L_56, NULL);
		goto IL_0200;
	}

IL_01c3:
	{
		// thisRectTransform.anchoredPosition = new Vector2(minPosition, thisRectTransform.anchoredPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_57 = __this->___thisRectTransform_6;
		float L_58 = __this->___minPosition_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_59 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_59, NULL);
		float L_61 = L_60.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_62), L_58, L_61, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_57, L_62, NULL);
		// backgroundCanvasGroup.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_63 = __this->___backgroundCanvasGroup_9;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_63, (0.0f), NULL);
		// state = 0;
		__this->___state_14 = (uint8_t)0;
	}

IL_0200:
	{
		// thisRectTransform.anchoredPosition = new Vector2(Mathf.Clamp(thisRectTransform.anchoredPosition.x, minPosition, maxPosition), thisRectTransform.anchoredPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_64 = __this->___thisRectTransform_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_65, NULL);
		float L_67 = L_66.___x_0;
		float L_68 = __this->___minPosition_5;
		float L_69 = __this->___maxPosition_4;
		float L_70;
		L_70 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_67, L_68, L_69, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_71 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_71, NULL);
		float L_73 = L_72.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_74), L_70, L_73, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_64, L_74, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_OnBeginDrag_m5FD11458917574247FAF151A488C0412B054B2D1 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// state = 0;
		__this->___state_14 = (uint8_t)0;
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_OnDrag_m7353B5E5406611ED482FD2381E2D0EEF060F5486 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// tempVector2 = thisRectTransform.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRectTransform_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		__this->___tempVector2_21 = L_2;
		// tempVector2.x += data.delta.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___tempVector2_21);
		float* L_4 = (&L_3->___x_0);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___data0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_7, NULL);
		float L_9 = L_8.___x_0;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, L_9));
		// thisRectTransform.position = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___tempVector2_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_12, NULL);
		// backgroundCanvasGroup.alpha = 1 - (maxPosition - thisRectTransform.anchoredPosition.x) / (maxPosition - minPosition);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_13 = __this->___backgroundCanvasGroup_9;
		float L_14 = __this->___maxPosition_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_15, NULL);
		float L_17 = L_16.___x_0;
		float L_18 = __this->___maxPosition_4;
		float L_19 = __this->___minPosition_5;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_13, ((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)il2cpp_codegen_subtract(L_14, L_17))/((float)il2cpp_codegen_subtract(L_18, L_19)))))), NULL);
		// shadowCanvasGroup.alpha = 1 - (maxPosition - thisRectTransform.anchoredPosition.x) / ((maxPosition - minPosition) * 2);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_20 = __this->___shadowCanvasGroup_11;
		float L_21 = __this->___maxPosition_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_22, NULL);
		float L_24 = L_23.___x_0;
		float L_25 = __this->___maxPosition_4;
		float L_26 = __this->___minPosition_5;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_20, ((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)il2cpp_codegen_subtract(L_21, L_24))/((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_25, L_26)), (2.0f))))))), NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_OnEndDrag_mCF9B424490A5348D25F9B2E7C969D5B45E1451AE (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// if (Mathf.Abs(data.delta.x) >= 0.5f)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___data0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_0, NULL);
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = fabsf(L_2);
		if ((!(((float)L_3) >= ((float)(0.5f)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (data.delta.x > 0.5f)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___data0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_4, NULL);
		float L_6 = L_5.___x_0;
		if ((!(((float)L_6) > ((float)(0.5f)))))
		{
			goto IL_0030;
		}
	}
	{
		// Open();
		NavDrawerConfig_Open_m447C2165290EACA621D8EA4964A71CB618E6B7BD(__this, NULL);
		return;
	}

IL_0030:
	{
		// Close();
		NavDrawerConfig_Close_mA02B61D4C1AEFD33D4A761A90FADCB1B72610272(__this, NULL);
		return;
	}

IL_0037:
	{
		// if ((thisRectTransform.anchoredPosition.x - minPosition) > (maxPosition - thisRectTransform.anchoredPosition.x))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_7, NULL);
		float L_9 = L_8.___x_0;
		float L_10 = __this->___minPosition_5;
		float L_11 = __this->___maxPosition_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_12, NULL);
		float L_14 = L_13.___x_0;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_9, L_10))) > ((float)((float)il2cpp_codegen_subtract(L_11, L_14))))))
		{
			goto IL_006e;
		}
	}
	{
		// Open();
		NavDrawerConfig_Open_m447C2165290EACA621D8EA4964A71CB618E6B7BD(__this, NULL);
		return;
	}

IL_006e:
	{
		// Close();
		NavDrawerConfig_Close_mA02B61D4C1AEFD33D4A761A90FADCB1B72610272(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig__ctor_m572D9A0B97B0F9AC69D8C7EE181802371C1E5B0A (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	{
		// public bool darkenBackground = true;
		__this->___darkenBackground_12 = (bool)1;
		// public bool tapBackgroundToClose = true;
		__this->___tapBackgroundToClose_13 = (bool)1;
		// public float animationDuration = 0.5f;
		__this->___animationDuration_17 = (0.5f);
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
// System.Void MaterialUI.RadioConfig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_OnEnable_mE3793D2B9404CFD17DADC90C175BB5D9261AA516 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_mF37E1C928AF195AD949836E650B9E7646D1BBA47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle = gameObject.GetComponent<Toggle>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1;
		L_1 = GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17(L_0, GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		__this->___toggle_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_18), (void*)L_1);
		// toggleGroup = gameObject.GetComponent<Transform>().parent.parent.GetComponent<ToggleGroup>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_2, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_6;
		L_6 = Component_GetComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_mF37E1C928AF195AD949836E650B9E7646D1BBA47(L_5, Component_GetComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_mF37E1C928AF195AD949836E650B9E7646D1BBA47_RuntimeMethod_var);
		__this->___toggleGroup_19 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggleGroup_19), (void*)L_6);
		// dotRectTransform = dotImage.GetComponent<RectTransform>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___dotImage_12;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_7, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___dotRectTransform_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dotRectTransform_15), (void*)L_8);
		// checkBoxToggler = text.GetComponent<CheckBoxToggler>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___text_14;
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_10;
		L_10 = Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5(L_9, Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5_RuntimeMethod_var);
		__this->___checkBoxToggler_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkBoxToggler_16), (void*)L_10);
		// rippleConfig = gameObject.GetComponent<RippleConfig>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_12;
		L_12 = GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995(L_11, GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		__this->___rippleConfig_17 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rippleConfig_17), (void*)L_12);
		// toggle.group = toggleGroup;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_13 = __this->___toggle_18;
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_14 = __this->___toggleGroup_19;
		Toggle_set_group_mEE85FE3AB2ACFF9056DA613239DBACECA588507B(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_Start_m1F78A6C6E4BC5DA2CEF9C24EB721F313CA8D10BC (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// lastToggleInteractableState = toggle.interactable;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_18;
		bool L_1;
		L_1 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_0, NULL);
		__this->___lastToggleInteractableState_20 = L_1;
		// if (lastToggleInteractableState)
		bool L_2 = __this->___lastToggleInteractableState_20;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// if (lastToggleState != toggle.isOn)
		bool L_3 = __this->___lastToggleState_21;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->___toggle_18;
		bool L_5;
		L_5 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_4, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0053;
		}
	}
	{
		// lastToggleState = toggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = __this->___toggle_18;
		bool L_7;
		L_7 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_6, NULL);
		__this->___lastToggleState_21 = L_7;
		// if (lastToggleState)
		bool L_8 = __this->___lastToggleState_21;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// TurnOnSilent();
		RadioConfig_TurnOnSilent_m5AC09AD9FFB688EC2F9B0A6AD0BB8D4252208EA8(__this, NULL);
		goto IL_0053;
	}

IL_004d:
	{
		// TurnOffSilent();
		RadioConfig_TurnOffSilent_mCA5BF60941B25B4A5551DC9DF4E49406E835845C(__this, NULL);
	}

IL_0053:
	{
		// if (changeRippleColor)
		bool L_9 = __this->___changeRippleColor_11;
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		// rippleConfig.rippleColor = ringImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_10 = __this->___rippleConfig_17;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_11);
		L_10->___rippleColor_8 = L_12;
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::ToggleCheckbox(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_ToggleCheckbox_m5479C038A48A17EB85EBF071C4C2D9D223633AC2 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, bool ___state0, const RuntimeMethod* method) 
{
	{
		// if (toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_18;
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// TurnOn ();
		RadioConfig_TurnOn_m055CBC4E91A4A14CF0E270B60B4D29AAE92341A1(__this, NULL);
		return;
	}

IL_0014:
	{
		// TurnOff ();
		RadioConfig_TurnOff_mE6BBFD85DDD02E70E6E974350EE76FC13EC74B7B(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOn_m055CBC4E91A4A14CF0E270B60B4D29AAE92341A1 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// dotImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___dotImage_12;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// currentDotSize = dotRectTransform.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___currentDotSize_22 = L_3;
		// currentColor = ringImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->___currentColor_23 = L_5;
		// currentTextColor = text.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		__this->___currentTextColor_24 = L_7;
		// animStartTime = Time.realtimeSinceStartup;
		float L_8;
		L_8 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_28 = L_8;
		// state = 1;
		__this->___state_27 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::TurnOnSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOnSilent_m5AC09AD9FFB688EC2F9B0A6AD0BB8D4252208EA8 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// dotImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___dotImage_12;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// if (dotRectTransform.localScale != new Vector3(1f, 1f, 1f))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		bool L_4;
		L_4 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// dotRectTransform.localScale = new Vector3(1f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
	}

IL_0051:
	{
		// if (lastToggleInteractableState)
		bool L_7 = __this->___lastToggleInteractableState_20;
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		// ringImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// if (changeTextColor)
		bool L_10 = __this->___changeTextColor_8;
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
	}

IL_0083:
	{
		// if (changeRippleColor)
		bool L_13 = __this->___changeRippleColor_11;
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		// rippleConfig.rippleColor = onColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_14 = __this->___rippleConfig_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___onColor_5;
		L_14->___rippleColor_8 = L_15;
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOff_mE6BBFD85DDD02E70E6E974350EE76FC13EC74B7B (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// currentDotSize = dotRectTransform.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___currentDotSize_22 = L_2;
		// currentColor = ringImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		__this->___currentColor_23 = L_4;
		// currentTextColor = text.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->___currentTextColor_24 = L_6;
		// animStartTime = Time.realtimeSinceStartup;
		float L_7;
		L_7 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_28 = L_7;
		// state = 2;
		__this->___state_27 = 2;
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::TurnOffSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOffSilent_mCA5BF60941B25B4A5551DC9DF4E49406E835845C (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// if (dotRectTransform.localScale != new Vector3(0f, 0f, 1f))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		bool L_3;
		L_3 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// dotRectTransform.localScale = new Vector3(0f, 0f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
	}

IL_0045:
	{
		// if (lastToggleInteractableState)
		bool L_6 = __this->___lastToggleInteractableState_20;
		if (!L_6)
		{
			goto IL_0090;
		}
	}
	{
		// ringImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___offColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// if (changeTextColor)
		bool L_9 = __this->___changeTextColor_8;
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___textNormalColor_9;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
	}

IL_0077:
	{
		// if (changeRippleColor)
		bool L_12 = __this->___changeRippleColor_11;
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		// rippleConfig.rippleColor = offColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_13 = __this->___rippleConfig_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___offColor_6;
		L_13->___rippleColor_8 = L_14;
	}

IL_0090:
	{
		// dotImage.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___dotImage_12;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::EnableRadioButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_EnableRadioButton_mFEABED3ED154238C697F1FB4C8CE38504F997044 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// if (toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_18;
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		// ringImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// if (changeTextColor)
		bool L_4 = __this->___changeTextColor_8;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		goto IL_006e;
	}

IL_0039:
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___textNormalColor_9;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		goto IL_006e;
	}

IL_004c:
	{
		// ringImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___offColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___textNormalColor_9;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
	}

IL_006e:
	{
		// checkBoxToggler.enabled = true;
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_13 = __this->___checkBoxToggler_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
		// rippleConfig.enabled = true;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_14 = __this->___rippleConfig_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::DisableRadioButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_DisableRadioButton_mA7A9EDBAE4C57EE8273EFC4644C811CB4E659BF3 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// ringImage.color = disabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___disabledColor_7;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// text.color = disabledColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___disabledColor_7;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// checkBoxToggler.enabled = false;
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_4 = __this->___checkBoxToggler_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// rippleConfig.enabled = false;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_5 = __this->___rippleConfig_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_Update_m067A4E7F0065E8703A1ECEE54BCB4B21D3B804CE (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_28;
		__this->___animDeltaTime_29 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)    // Turning on
		int32_t L_2 = __this->___state_27;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0161;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_29;
		float L_4 = __this->___animationDuration_4;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_00f3;
		}
	}
	{
		// dotRectTransform.localScale = Anim.Overshoot(new Vector3(currentDotSize, currentDotSize, 1f), new Vector3(1f, 1f, 1f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___dotRectTransform_15;
		float L_6 = __this->___currentDotSize_22;
		float L_7 = __this->___currentDotSize_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_6, L_7, (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		float L_10 = __this->___animDeltaTime_29;
		float L_11 = __this->___animationDuration_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Anim_Overshoot_m4306436AF6F04B5753F5CA2C96CE3A1E60A6CA3B(L_8, L_9, L_10, L_11, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_12, NULL);
		// ringImage.color = Anim.Quint.SoftOut(currentColor, onColor, animDeltaTime, animationDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___currentColor_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___onColor_5;
		float L_16 = __this->___animDeltaTime_29;
		float L_17 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_14, L_15, L_16, L_17, NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_18);
		// if (changeTextColor)
		bool L_19 = __this->___changeTextColor_8;
		if (!L_19)
		{
			goto IL_00cd;
		}
	}
	{
		// text.color = Anim.Quint.SoftOut(currentTextColor, onColor, animDeltaTime, animationDuration);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = __this->___currentTextColor_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___onColor_5;
		float L_23 = __this->___animDeltaTime_29;
		float L_24 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_21, L_22, L_23, L_24, NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_25);
	}

IL_00cd:
	{
		// if (changeRippleColor)
		bool L_26 = __this->___changeRippleColor_11;
		if (!L_26)
		{
			goto IL_02c6;
		}
	}
	{
		// rippleConfig.rippleColor = ringImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_27 = __this->___rippleConfig_17;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_28);
		L_27->___rippleColor_8 = L_29;
		goto IL_02c6;
	}

IL_00f3:
	{
		// dotRectTransform.localScale = new Vector3(1f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_30, L_31, NULL);
		// ringImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_33);
		// if (changeTextColor)
		bool L_34 = __this->___changeTextColor_8;
		if (!L_34)
		{
			goto IL_013c;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = __this->___onColor_5;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
	}

IL_013c:
	{
		// if (changeRippleColor)
		bool L_37 = __this->___changeRippleColor_11;
		if (!L_37)
		{
			goto IL_0155;
		}
	}
	{
		// rippleConfig.rippleColor = onColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_38 = __this->___rippleConfig_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = __this->___onColor_5;
		L_38->___rippleColor_8 = L_39;
	}

IL_0155:
	{
		// state = 0;
		__this->___state_27 = 0;
		goto IL_02c6;
	}

IL_0161:
	{
		// else if (state == 2)    // Turning off
		int32_t L_40 = __this->___state_27;
		if ((!(((uint32_t)L_40) == ((uint32_t)2))))
		{
			goto IL_02c6;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_41 = __this->___animDeltaTime_29;
		float L_42 = __this->___animationDuration_4;
		if ((!(((float)L_41) <= ((float)L_42))))
		{
			goto IL_0251;
		}
	}
	{
		// dotRectTransform.localScale = Anim.Sept.InOut(new Vector3(currentDotSize, currentDotSize, 1f), new Vector3(0f, 0f, 1f), animDeltaTime, animationDuration * 0.75f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43 = __this->___dotRectTransform_15;
		float L_44 = __this->___currentDotSize_22;
		float L_45 = __this->___currentDotSize_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), L_44, L_45, (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_47), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_48 = __this->___animDeltaTime_29;
		float L_49 = __this->___animationDuration_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Sept_InOut_m9A697497142F6DEDAE999DC4999072B2B0E9AB1B(L_46, L_47, L_48, ((float)il2cpp_codegen_multiply(L_49, (0.75f))), NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_43, L_50, NULL);
		// ringImage.color = Anim.Sept.InOut(currentColor, offColor, animDeltaTime, animationDuration * 0.75f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = __this->___currentColor_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53 = __this->___offColor_6;
		float L_54 = __this->___animDeltaTime_29;
		float L_55 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56;
		L_56 = Sept_InOut_m446BE1F1757BF0591F1F052F9C0031165BB5812D(L_52, L_53, L_54, ((float)il2cpp_codegen_multiply(L_55, (0.75f))), NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_51, L_56);
		// if (changeTextColor)
		bool L_57 = __this->___changeTextColor_8;
		if (!L_57)
		{
			goto IL_022e;
		}
	}
	{
		// text.color = Anim.Quint.SoftOut(currentTextColor, textNormalColor, animDeltaTime, animationDuration * 0.75f);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_58 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = __this->___currentTextColor_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60 = __this->___textNormalColor_9;
		float L_61 = __this->___animDeltaTime_29;
		float L_62 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_59, L_60, L_61, ((float)il2cpp_codegen_multiply(L_62, (0.75f))), NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_58, L_63);
	}

IL_022e:
	{
		// if (changeRippleColor)
		bool L_64 = __this->___changeRippleColor_11;
		if (!L_64)
		{
			goto IL_02c6;
		}
	}
	{
		// rippleConfig.rippleColor = ringImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_65 = __this->___rippleConfig_17;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_66 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67;
		L_67 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_66);
		L_65->___rippleColor_8 = L_67;
		goto IL_02c6;
	}

IL_0251:
	{
		// dotRectTransform.localScale = new Vector3(0f, 0f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_68 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_69), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_68, L_69, NULL);
		// ringImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_71 = __this->___offColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_70, L_71);
		// if (changeTextColor)
		bool L_72 = __this->___changeTextColor_8;
		if (!L_72)
		{
			goto IL_029a;
		}
	}
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_73 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74 = __this->___textNormalColor_9;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_73, L_74);
	}

IL_029a:
	{
		// if (changeRippleColor)
		bool L_75 = __this->___changeRippleColor_11;
		if (!L_75)
		{
			goto IL_02b3;
		}
	}
	{
		// rippleConfig.rippleColor = offColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_76 = __this->___rippleConfig_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77 = __this->___offColor_6;
		L_76->___rippleColor_8 = L_77;
	}

IL_02b3:
	{
		// dotImage.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_78 = __this->___dotImage_12;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_78, (bool)0, NULL);
		// state = 0;
		__this->___state_27 = 0;
	}

IL_02c6:
	{
		// if (lastToggleInteractableState != toggle.interactable)
		bool L_79 = __this->___lastToggleInteractableState_20;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_80 = __this->___toggle_18;
		bool L_81;
		L_81 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_80, NULL);
		if ((((int32_t)L_79) == ((int32_t)L_81)))
		{
			goto IL_0300;
		}
	}
	{
		// lastToggleInteractableState = toggle.interactable;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_82 = __this->___toggle_18;
		bool L_83;
		L_83 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_82, NULL);
		__this->___lastToggleInteractableState_20 = L_83;
		// if (lastToggleInteractableState)
		bool L_84 = __this->___lastToggleInteractableState_20;
		if (!L_84)
		{
			goto IL_02fa;
		}
	}
	{
		// EnableRadioButton();
		RadioConfig_EnableRadioButton_mFEABED3ED154238C697F1FB4C8CE38504F997044(__this, NULL);
		goto IL_0300;
	}

IL_02fa:
	{
		// DisableRadioButton();
		RadioConfig_DisableRadioButton_mA7A9EDBAE4C57EE8273EFC4644C811CB4E659BF3(__this, NULL);
	}

IL_0300:
	{
		// if (!Application.isPlaying)
		bool L_85;
		L_85 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_85)
		{
			goto IL_035f;
		}
	}
	{
		// if (lastToggleState != toggle.isOn)
		bool L_86 = __this->___lastToggleState_21;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_87 = __this->___toggle_18;
		bool L_88;
		L_88 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_87, NULL);
		if ((((int32_t)L_86) == ((int32_t)L_88)))
		{
			goto IL_0341;
		}
	}
	{
		// lastToggleState = toggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_89 = __this->___toggle_18;
		bool L_90;
		L_90 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_89, NULL);
		__this->___lastToggleState_21 = L_90;
		// if (lastToggleState)
		bool L_91 = __this->___lastToggleState_21;
		if (!L_91)
		{
			goto IL_033b;
		}
	}
	{
		// TurnOnSilent();
		RadioConfig_TurnOnSilent_m5AC09AD9FFB688EC2F9B0A6AD0BB8D4252208EA8(__this, NULL);
		goto IL_0341;
	}

IL_033b:
	{
		// TurnOffSilent();
		RadioConfig_TurnOffSilent_mCA5BF60941B25B4A5551DC9DF4E49406E835845C(__this, NULL);
	}

IL_0341:
	{
		// if (changeRippleColor)
		bool L_92 = __this->___changeRippleColor_11;
		if (!L_92)
		{
			goto IL_035f;
		}
	}
	{
		// rippleConfig.rippleColor = ringImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_93 = __this->___rippleConfig_17;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_94 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_95;
		L_95 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_94);
		L_93->___rippleColor_8 = L_95;
	}

IL_035f:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig__ctor_mA1DD282BA883998C3E733DF7BC918ED7B75BD960 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// public float animationDuration = 0.5f;
		__this->___animationDuration_4 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool YandexGame_get_SDKEnabled_mDE2A25B7CA3B547ADC0468C5329BA9DB79A4B25B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool SDKEnabled { get => _SDKEnabled; }
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		bool L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->____SDKEnabled_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* YandexGame_get_playerId_m6DBD844F8285EDB9C60CCA925E27B4FA71681445_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string playerId { get => _playerId; }
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		String_t* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->____playerId_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* YandexGame_get_playerName_mE314B9E33058B62F776846B3582040E6276FDF19_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _playerName;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		String_t* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->____playerName_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool YandexGame_get_auth_m054367937F060417384038F64ABFEA7A086E4E8E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool auth { get => _auth; }
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		bool L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->____auth_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool YandexGame_get_initializedLB_m9E3819F6AB97B1137A58B6627C1D9EC77659B685_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool initializedLB { get => _initializedLB; }
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		bool L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->____initializedLB_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* YandexGame_get_photoSize_mD14EE12CD4224E85546A40C9FFE3937D8C8A2A04_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _photoSize;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		String_t* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->____photoSize_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* YandexGame_get_playerPhoto_m8DABC3711A533145D551AF8EB1ADD0520DA80CEF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _playerPhoto;
		il2cpp_codegen_runtime_class_init_inline(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var);
		String_t* L_0 = ((YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_StaticFields*)il2cpp_codegen_static_fields_for(YandexGame_t1C14593AE617823695F3594D108EACE4FCE61E0A_il2cpp_TypeInfo_var))->____playerPhoto_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public Graphic placeholder { get { return m_Placeholder; } set { SetPropertyUtility.SetClass(ref m_Placeholder, value); } }
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->___m_Placeholder_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Interactable; }
		bool L_0 = __this->___m_Interactable_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m0653422E15193C2E4A4E5AF05236B6315C789C23_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = ___a0;
		float L_7 = V_0;
		float L_8 = ___t2;
		float L_9;
		L_9 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_8, NULL);
		V_2 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputField_get_lineType_m6CEA63D8FCACAEC05D3499577ED0771EFFF33377_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LineType; }
		int32_t L_0 = __this->___m_LineType_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CanvasScaler_get_uiScaleMode_m8E92609E011796E8CC23B1739F95CE7BE2631525_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) 
{
	{
		// public ScaleMode uiScaleMode { get { return m_UiScaleMode; } set { m_UiScaleMode = value; } }
		int32_t L_0 = __this->___m_UiScaleMode_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) 
{
	{
		// return m_ReferenceResolution;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_ReferenceResolution_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MaterialUIScaler_set_scaleFactor_mBF1565B38029BD9B57F1E14247410963043C30DD_inline (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float scaleFactor { get; private set; }
		float L_0 = ___value0;
		__this->___U3CscaleFactorU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CanvasScaler_get_scaleFactor_mB2BFA22B99AEC96F09886F490DA9EE2F825D3431_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) 
{
	{
		// public float scaleFactor { get { return m_ScaleFactor; } set { m_ScaleFactor = Mathf.Max(0.01f, value); } }
		float L_0 = __this->___m_ScaleFactor_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CdeltaU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m20890004CED0B9DD5387EBAA4E6AFD2A63D59D80_gshared_inline (List_1_tD1700C8CC1296DEEF22A21E708E71EF552EA927C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}

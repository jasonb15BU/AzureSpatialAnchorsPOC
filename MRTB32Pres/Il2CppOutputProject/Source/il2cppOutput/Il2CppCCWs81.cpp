﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudUpdatedEventArgs>
struct Action_1_t105D433EDB88564DEF22A6B68AB9558C41743F97;
// System.Action`1<UnityEngine.XR.ARFoundation.ARRaycastUpdatedEventArgs>
struct Action_1_t80DFB8092764BAAB7F638B286289228634537D43;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct Dictionary_2_t7C75C5B04A6237BCD3462AFE72E06F956E1126DF;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>
struct List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// TMPro.TextMeshPro[]
struct TextMeshProU5BU5D_t3778A870DEA9C539BB120444989B11661251B7B2;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.XR.ARFoundation.ARParticipant
struct ARParticipant_tF8AE3FB1C0DB01CA500CA62FE58F29A626EBC288;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891;
// UnityEngine.XR.ARFoundation.ARPointCloud
struct ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A;
// UnityEngine.XR.ARFoundation.ARRaycast
struct ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98;
// UnityEngine.XR.ARFoundation.ARReferencePoint
struct ARReferencePoint_tBFED1F4EFC71CB628350FD2A3F5BE48E8EBA630F;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B;
// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7;
// UnityEngine.XR.ARFoundation.ARTrackedObject
struct ARTrackedObject_t8DE491439CA3DBBF8D8904836F609A81255EE0D0;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1;
// Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs
struct AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// Microsoft.MixedReality.Toolkit.UI.AppBar
struct AppBar_t66EA64665FAE7F6685C8B3B6EA21EB89DF29524D;
// Microsoft.MixedReality.Toolkit.UI.AppBarButton
struct AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48;
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C;
// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// Mono.Math.BigInteger
struct BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D;
// Mono.Math.BigInteger
struct BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00;
// Mono.Net.CFDictionary
struct CFDictionary_tCC86FC857C703D57D0134BAB9D6AB795E52ABF2D;
// Mono.Net.CFProxy
struct CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D;
// System.Text.RegularExpressions.CachedCodeEntry
struct CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95;
// System.Globalization.CalendarData
struct CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t9E9FEB797F41C255D06A458C4F739A3E28C70CB5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_tAF272541B2D0287D5BD0165BA893E8145252ADA0;
// Microsoft.MixedReality.Toolkit.UI.Interactable
struct Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.UI.PressableButton
struct PressableButton_t4A3EE6F3E75A3D380DD272FFB26FD79364A6741F;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;

IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953;
struct IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC;
struct IIterator_1_t6CA709084B8585944360F667796E8B3CE18951E0;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72;
struct IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF;
struct IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D;
struct IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963;
struct IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD;
struct IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;

struct ARParticipantU5BU5D_tC3E98C8DCE6D6949FAD6DAC33B4961A76179A30F;
struct ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898;
struct ARPointCloudU5BU5D_tDA5ACD704B451BCDC3E7BB9C2AFD66B0A9B780E2;
struct ARRaycastU5BU5D_tFD69BBA8E2B3D48305EC32DAB67E996B829CB484;
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
struct ARReferencePointU5BU5D_tA7210375E704A33017D7116D32425F63A53861BC;
struct ARSessionU5BU5D_tFB754FC4A501AD720D96CC1922680297274AD494;
struct ARTextureInfoU5BU5D_tA674B4CD292FDEEB2A3EB311EF4A40EC1DD3683F;
struct ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142;
struct ARTrackedObjectU5BU5D_t3F3B8C3773D65663DE544779B9C99390D9196137;
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
struct AggregateExceptionU5BU5D_t114709DEEF6AEED60B1135B68200E12C6BC5776B;
struct AnchorLocatedEventArgsU5BU5D_t8AF314B715BA3BD1F94037A2EB24ADB8681348C5;
struct AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB;
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
struct AppBarButtonU5BU5D_t2A54164DFF1A3F15F23297E42095F190D5BA2AB7;
struct ArticulatedHandPoseU5BU5D_t68B97BC91578FB3FBB310BEAB3AA0693ED04806C;
struct AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3;
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4;
struct AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952;
struct AudioLoFiSourceQualityU5BU5D_tDE81107D84FA2988CF7410AF74AC95CB4B1388C4;
struct AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB;
struct AxisTypeU5BU5D_tEF3348B30D3BB9C966E8A2600635C1E6CA749D81;
struct BaseControllerU5BU5D_tE887C1A5016BEA531E8BAA813AE7D5AFD7CF7C7E;
struct BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04;
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC;
struct BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11;
struct BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B;
struct BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145;
struct BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7;
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
struct BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26;
struct CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD;
struct CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7;
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
struct CameraEventU5BU5D_t1A45D6F41C599CA75F8AFD8EBC2ECC159554FB2E;
struct CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1;
struct CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E;
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF;
struct CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3;
struct CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51;
struct CardinalAxisTypeU5BU5D_t2B70BC449C0F5C340222214B476A331FE1FA6B61;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Boolean>
struct NOVTABLE IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB(IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Byte>
struct NOVTABLE IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Char>
struct NOVTABLE IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA(IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Exception>
struct NOVTABLE IIterable_1_tEFB55420CBE65269ECA8A590960747570852066C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD97F8BF33D79041E27CFF07E7831EB386E2D25A6(IIterator_1_t6CA709084B8585944360F667796E8B3CE18951E0** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.IDisposable>
struct NOVTABLE IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.Boolean>
struct NOVTABLE IReferenceArray_1_t48259FE322824681F348D90FD4026837611A6741 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mD17835FF1D2A2588B1182DDD078179FC94636E80(uint32_t* comReturnValueArraySize, bool** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.Byte>
struct NOVTABLE IReferenceArray_1_t80CD13C8F5FD9D0C9F37FB41C9A0854230D759DE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mECA8C42F721DD0D91E170257E9DBC6C9746F8DEA(uint32_t* comReturnValueArraySize, uint8_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.Char>
struct NOVTABLE IReferenceArray_1_t44893C71B9484A1AC8DC0319C72EDF5595B377C2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m099434DF042C31618026185DCA6449264AA5C40C(uint32_t* comReturnValueArraySize, Il2CppChar** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Boolean>
struct NOVTABLE IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m6F799ADF54AECADE79946CB6469CB6BF49B38135(uint32_t ___index0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD8B6592916D3739AAC161FDA1D630543219E9D7D(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mA4B38845B990B4640F82CC8363BFB67E20945E9B(bool ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4340482DAAA20E17654D33CFD65BE7ED60A353C3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Byte>
struct NOVTABLE IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB(uint32_t ___index0, uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Char>
struct NOVTABLE IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B(uint32_t ___index0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Exception>
struct NOVTABLE IVectorView_1_tAA642575BEB0D66C37BB4D062D7F8C054CA4D786 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2B78DF7E66A8C228CCD8CE9ECFE6BD7C4644842C(uint32_t ___index0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m5198DBCFCFD06417A1425547938B0A8BCA60B416(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mB63EF6E9C0B2B511659D857293CB4D9FE84B2884(int32_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mA155C651F2405E0CA29F891F68854FF37DC331E8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int32_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.IDisposable>
struct NOVTABLE IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Boolean>
struct NOVTABLE IVector_1_t3AC2680BA65E508568784202EDBE66AA4B9FDBD5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mC72C7E4492535B801A9836EE9B294754AA15E4CC(uint32_t ___index0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m524C3F1DA919856922598A4F9F974E76762505F1(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m9A4C974BF7C31CFB2CC06C51775F63E5159350E0(IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mA9C9AC4FE9777E80D36F86220C2A7251EA278D6D(bool ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m6532677A8FFFC8BE39E4487E8B5B957DEB895258(uint32_t ___index0, bool ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mA71A9B77FAE574BBB3C8B8545D7D31AC6904F175(uint32_t ___index0, bool ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mFB31764EA0E4A914AC690D50E107200DA8F477BD(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_mC5076A05A69921B6EBDAF1281FF5561C9E9791B5(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mE9D09CA75800B62324F89063623FC3566CBDFA76() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mD2EC4E85D8B8C83D22294D25A576B428A27D5CD6() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mFAEFB6B3F4D153F96F9D9B3DAA2D33F732AD3365(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m410FDC792A0957EC89ABB07AD1555D630AAECAC2(uint32_t ___items0ArraySize, bool* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Byte>
struct NOVTABLE IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B(uint32_t ___index0, uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536(IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79(uint32_t ___index0, uint8_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818(uint32_t ___index0, uint8_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D(uint8_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B(uint32_t ___items0ArraySize, uint8_t* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Char>
struct NOVTABLE IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04(uint32_t ___index0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849(IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94(uint32_t ___index0, Il2CppChar ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A(uint32_t ___index0, Il2CppChar ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32(Il2CppChar ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01(uint32_t ___items0ArraySize, Il2CppChar* ___items0) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};

// System.Object


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::localJointPoses
	MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3* ___localJointPoses_2;

public:
	inline static int32_t get_offset_of_localJointPoses_2() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004, ___localJointPoses_2)); }
	inline MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3* get_localJointPoses_2() const { return ___localJointPoses_2; }
	inline MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3** get_address_of_localJointPoses_2() { return &___localJointPoses_2; }
	inline void set_localJointPoses_2(MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3* value)
	{
		___localJointPoses_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localJointPoses_2), (void*)value);
	}
};

struct ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::Joints
	TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* ___Joints_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::<JointCount>k__BackingField
	int32_t ___U3CJointCountU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose> Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::handPoses
	Dictionary_2_t7C75C5B04A6237BCD3462AFE72E06F956E1126DF * ___handPoses_3;

public:
	inline static int32_t get_offset_of_Joints_0() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004_StaticFields, ___Joints_0)); }
	inline TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* get_Joints_0() const { return ___Joints_0; }
	inline TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F** get_address_of_Joints_0() { return &___Joints_0; }
	inline void set_Joints_0(TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* value)
	{
		___Joints_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joints_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJointCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004_StaticFields, ___U3CJointCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CJointCountU3Ek__BackingField_1() const { return ___U3CJointCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CJointCountU3Ek__BackingField_1() { return &___U3CJointCountU3Ek__BackingField_1; }
	inline void set_U3CJointCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CJointCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_handPoses_3() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004_StaticFields, ___handPoses_3)); }
	inline Dictionary_2_t7C75C5B04A6237BCD3462AFE72E06F956E1126DF * get_handPoses_3() const { return ___handPoses_3; }
	inline Dictionary_2_t7C75C5B04A6237BCD3462AFE72E06F956E1126DF ** get_address_of_handPoses_3() { return &___handPoses_3; }
	inline void set_handPoses_3(Dictionary_2_t7C75C5B04A6237BCD3462AFE72E06F956E1126DF * value)
	{
		___handPoses_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPoses_3), (void*)value);
	}
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C  : public RuntimeObject
{
public:
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Parameter>k__BackingField
	String_t* ___U3CParameterU3Ek__BackingField_0;
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CParameterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C, ___U3CParameterU3Ek__BackingField_0)); }
	inline String_t* get_U3CParameterU3Ek__BackingField_0() const { return ___U3CParameterU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CParameterU3Ek__BackingField_0() { return &___U3CParameterU3Ek__BackingField_0; }
	inline void set_U3CParameterU3Ek__BackingField_0(String_t* value)
	{
		___U3CParameterU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParameterU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSchemeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C, ___U3CSchemeU3Ek__BackingField_1)); }
	inline String_t* get_U3CSchemeU3Ek__BackingField_1() const { return ___U3CSchemeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSchemeU3Ek__BackingField_1() { return &___U3CSchemeU3Ek__BackingField_1; }
	inline void set_U3CSchemeU3Ek__BackingField_1(String_t* value)
	{
		___U3CSchemeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSchemeU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784  : public RuntimeObject
{
public:

public:
};


// Mono.Math.BigInteger
struct BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D, ___data_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}
};

struct BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smallPrimes_2), (void*)value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rng_3), (void*)value);
	}
};


// Mono.Math.BigInteger
struct BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00, ___data_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}
};

struct BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smallPrimes_2), (void*)value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rng_3), (void*)value);
	}
};


// System.Text.RegularExpressions.CachedCodeEntry
struct CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.CachedCodeEntry::_key
	String_t* ____key_0;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.CachedCodeEntry::_code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ____code_1;
	// System.Collections.Hashtable System.Text.RegularExpressions.CachedCodeEntry::_caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____caps_2;
	// System.Collections.Hashtable System.Text.RegularExpressions.CachedCodeEntry::_capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____capnames_3;
	// System.String[] System.Text.RegularExpressions.CachedCodeEntry::_capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____capslist_4;
	// System.Int32 System.Text.RegularExpressions.CachedCodeEntry::_capsize
	int32_t ____capsize_5;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.CachedCodeEntry::_factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ____factory_6;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.CachedCodeEntry::_runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ____runnerref_7;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.CachedCodeEntry::_replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ____replref_8;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__code_1() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____code_1)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get__code_1() const { return ____code_1; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of__code_1() { return &____code_1; }
	inline void set__code_1(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		____code_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____code_1), (void*)value);
	}

	inline static int32_t get_offset_of__caps_2() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____caps_2)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__caps_2() const { return ____caps_2; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__caps_2() { return &____caps_2; }
	inline void set__caps_2(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____caps_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caps_2), (void*)value);
	}

	inline static int32_t get_offset_of__capnames_3() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____capnames_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__capnames_3() const { return ____capnames_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__capnames_3() { return &____capnames_3; }
	inline void set__capnames_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____capnames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capnames_3), (void*)value);
	}

	inline static int32_t get_offset_of__capslist_4() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____capslist_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__capslist_4() const { return ____capslist_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__capslist_4() { return &____capslist_4; }
	inline void set__capslist_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____capslist_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capslist_4), (void*)value);
	}

	inline static int32_t get_offset_of__capsize_5() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____capsize_5)); }
	inline int32_t get__capsize_5() const { return ____capsize_5; }
	inline int32_t* get_address_of__capsize_5() { return &____capsize_5; }
	inline void set__capsize_5(int32_t value)
	{
		____capsize_5 = value;
	}

	inline static int32_t get_offset_of__factory_6() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____factory_6)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get__factory_6() const { return ____factory_6; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of__factory_6() { return &____factory_6; }
	inline void set__factory_6(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		____factory_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____factory_6), (void*)value);
	}

	inline static int32_t get_offset_of__runnerref_7() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____runnerref_7)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get__runnerref_7() const { return ____runnerref_7; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of__runnerref_7() { return &____runnerref_7; }
	inline void set__runnerref_7(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		____runnerref_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runnerref_7), (void*)value);
	}

	inline static int32_t get_offset_of__replref_8() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____replref_8)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get__replref_8() const { return ____replref_8; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of__replref_8() { return &____replref_8; }
	inline void set__replref_8(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		____replref_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____replref_8), (void*)value);
	}
};


// System.Globalization.CalendarData
struct CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4  : public RuntimeObject
{
public:
	// System.String System.Globalization.CalendarData::sNativeName
	String_t* ___sNativeName_1;
	// System.String[] System.Globalization.CalendarData::saShortDates
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saShortDates_2;
	// System.String[] System.Globalization.CalendarData::saYearMonths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saYearMonths_3;
	// System.String[] System.Globalization.CalendarData::saLongDates
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saLongDates_4;
	// System.String System.Globalization.CalendarData::sMonthDay
	String_t* ___sMonthDay_5;
	// System.String[] System.Globalization.CalendarData::saEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saEraNames_6;
	// System.String[] System.Globalization.CalendarData::saAbbrevEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saAbbrevEraNames_7;
	// System.String[] System.Globalization.CalendarData::saAbbrevEnglishEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saAbbrevEnglishEraNames_8;
	// System.String[] System.Globalization.CalendarData::saDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saDayNames_9;
	// System.String[] System.Globalization.CalendarData::saAbbrevDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saAbbrevDayNames_10;
	// System.String[] System.Globalization.CalendarData::saSuperShortDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saSuperShortDayNames_11;
	// System.String[] System.Globalization.CalendarData::saMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saMonthNames_12;
	// System.String[] System.Globalization.CalendarData::saAbbrevMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saAbbrevMonthNames_13;
	// System.String[] System.Globalization.CalendarData::saMonthGenitiveNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saMonthGenitiveNames_14;
	// System.String[] System.Globalization.CalendarData::saAbbrevMonthGenitiveNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saAbbrevMonthGenitiveNames_15;
	// System.String[] System.Globalization.CalendarData::saLeapYearMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saLeapYearMonthNames_16;
	// System.Int32 System.Globalization.CalendarData::iTwoDigitYearMax
	int32_t ___iTwoDigitYearMax_17;
	// System.Int32 System.Globalization.CalendarData::iCurrentEra
	int32_t ___iCurrentEra_18;
	// System.Boolean System.Globalization.CalendarData::bUseUserOverrides
	bool ___bUseUserOverrides_19;

public:
	inline static int32_t get_offset_of_sNativeName_1() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___sNativeName_1)); }
	inline String_t* get_sNativeName_1() const { return ___sNativeName_1; }
	inline String_t** get_address_of_sNativeName_1() { return &___sNativeName_1; }
	inline void set_sNativeName_1(String_t* value)
	{
		___sNativeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sNativeName_1), (void*)value);
	}

	inline static int32_t get_offset_of_saShortDates_2() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saShortDates_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saShortDates_2() const { return ___saShortDates_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saShortDates_2() { return &___saShortDates_2; }
	inline void set_saShortDates_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saShortDates_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saShortDates_2), (void*)value);
	}

	inline static int32_t get_offset_of_saYearMonths_3() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saYearMonths_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saYearMonths_3() const { return ___saYearMonths_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saYearMonths_3() { return &___saYearMonths_3; }
	inline void set_saYearMonths_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saYearMonths_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saYearMonths_3), (void*)value);
	}

	inline static int32_t get_offset_of_saLongDates_4() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saLongDates_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saLongDates_4() const { return ___saLongDates_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saLongDates_4() { return &___saLongDates_4; }
	inline void set_saLongDates_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saLongDates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saLongDates_4), (void*)value);
	}

	inline static int32_t get_offset_of_sMonthDay_5() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___sMonthDay_5)); }
	inline String_t* get_sMonthDay_5() const { return ___sMonthDay_5; }
	inline String_t** get_address_of_sMonthDay_5() { return &___sMonthDay_5; }
	inline void set_sMonthDay_5(String_t* value)
	{
		___sMonthDay_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sMonthDay_5), (void*)value);
	}

	inline static int32_t get_offset_of_saEraNames_6() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saEraNames_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saEraNames_6() const { return ___saEraNames_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saEraNames_6() { return &___saEraNames_6; }
	inline void set_saEraNames_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saEraNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saEraNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_saAbbrevEraNames_7() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saAbbrevEraNames_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saAbbrevEraNames_7() const { return ___saAbbrevEraNames_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saAbbrevEraNames_7() { return &___saAbbrevEraNames_7; }
	inline void set_saAbbrevEraNames_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saAbbrevEraNames_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saAbbrevEraNames_7), (void*)value);
	}

	inline static int32_t get_offset_of_saAbbrevEnglishEraNames_8() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saAbbrevEnglishEraNames_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saAbbrevEnglishEraNames_8() const { return ___saAbbrevEnglishEraNames_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saAbbrevEnglishEraNames_8() { return &___saAbbrevEnglishEraNames_8; }
	inline void set_saAbbrevEnglishEraNames_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saAbbrevEnglishEraNames_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saAbbrevEnglishEraNames_8), (void*)value);
	}

	inline static int32_t get_offset_of_saDayNames_9() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saDayNames_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saDayNames_9() const { return ___saDayNames_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saDayNames_9() { return &___saDayNames_9; }
	inline void set_saDayNames_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saDayNames_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saDayNames_9), (void*)value);
	}

	inline static int32_t get_offset_of_saAbbrevDayNames_10() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saAbbrevDayNames_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saAbbrevDayNames_10() const { return ___saAbbrevDayNames_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saAbbrevDayNames_10() { return &___saAbbrevDayNames_10; }
	inline void set_saAbbrevDayNames_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saAbbrevDayNames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saAbbrevDayNames_10), (void*)value);
	}

	inline static int32_t get_offset_of_saSuperShortDayNames_11() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saSuperShortDayNames_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saSuperShortDayNames_11() const { return ___saSuperShortDayNames_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saSuperShortDayNames_11() { return &___saSuperShortDayNames_11; }
	inline void set_saSuperShortDayNames_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saSuperShortDayNames_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saSuperShortDayNames_11), (void*)value);
	}

	inline static int32_t get_offset_of_saMonthNames_12() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saMonthNames_12)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saMonthNames_12() const { return ___saMonthNames_12; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saMonthNames_12() { return &___saMonthNames_12; }
	inline void set_saMonthNames_12(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saMonthNames_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saMonthNames_12), (void*)value);
	}

	inline static int32_t get_offset_of_saAbbrevMonthNames_13() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saAbbrevMonthNames_13)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saAbbrevMonthNames_13() const { return ___saAbbrevMonthNames_13; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saAbbrevMonthNames_13() { return &___saAbbrevMonthNames_13; }
	inline void set_saAbbrevMonthNames_13(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saAbbrevMonthNames_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saAbbrevMonthNames_13), (void*)value);
	}

	inline static int32_t get_offset_of_saMonthGenitiveNames_14() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saMonthGenitiveNames_14)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saMonthGenitiveNames_14() const { return ___saMonthGenitiveNames_14; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saMonthGenitiveNames_14() { return &___saMonthGenitiveNames_14; }
	inline void set_saMonthGenitiveNames_14(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saMonthGenitiveNames_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saMonthGenitiveNames_14), (void*)value);
	}

	inline static int32_t get_offset_of_saAbbrevMonthGenitiveNames_15() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saAbbrevMonthGenitiveNames_15)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saAbbrevMonthGenitiveNames_15() const { return ___saAbbrevMonthGenitiveNames_15; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saAbbrevMonthGenitiveNames_15() { return &___saAbbrevMonthGenitiveNames_15; }
	inline void set_saAbbrevMonthGenitiveNames_15(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saAbbrevMonthGenitiveNames_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saAbbrevMonthGenitiveNames_15), (void*)value);
	}

	inline static int32_t get_offset_of_saLeapYearMonthNames_16() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saLeapYearMonthNames_16)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saLeapYearMonthNames_16() const { return ___saLeapYearMonthNames_16; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saLeapYearMonthNames_16() { return &___saLeapYearMonthNames_16; }
	inline void set_saLeapYearMonthNames_16(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saLeapYearMonthNames_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saLeapYearMonthNames_16), (void*)value);
	}

	inline static int32_t get_offset_of_iTwoDigitYearMax_17() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___iTwoDigitYearMax_17)); }
	inline int32_t get_iTwoDigitYearMax_17() const { return ___iTwoDigitYearMax_17; }
	inline int32_t* get_address_of_iTwoDigitYearMax_17() { return &___iTwoDigitYearMax_17; }
	inline void set_iTwoDigitYearMax_17(int32_t value)
	{
		___iTwoDigitYearMax_17 = value;
	}

	inline static int32_t get_offset_of_iCurrentEra_18() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___iCurrentEra_18)); }
	inline int32_t get_iCurrentEra_18() const { return ___iCurrentEra_18; }
	inline int32_t* get_address_of_iCurrentEra_18() { return &___iCurrentEra_18; }
	inline void set_iCurrentEra_18(int32_t value)
	{
		___iCurrentEra_18 = value;
	}

	inline static int32_t get_offset_of_bUseUserOverrides_19() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___bUseUserOverrides_19)); }
	inline bool get_bUseUserOverrides_19() const { return ___bUseUserOverrides_19; }
	inline bool* get_address_of_bUseUserOverrides_19() { return &___bUseUserOverrides_19; }
	inline void set_bUseUserOverrides_19(bool value)
	{
		___bUseUserOverrides_19 = value;
	}
};

struct CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_StaticFields
{
public:
	// System.Globalization.CalendarData System.Globalization.CalendarData::Invariant
	CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * ___Invariant_20;

public:
	inline static int32_t get_offset_of_Invariant_20() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_StaticFields, ___Invariant_20)); }
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * get_Invariant_20() const { return ___Invariant_20; }
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 ** get_address_of_Invariant_20() { return &___Invariant_20; }
	inline void set_Invariant_20(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * value)
	{
		___Invariant_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Invariant_20), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CalendarData
struct CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshaled_pinvoke
{
	char* ___sNativeName_1;
	char** ___saShortDates_2;
	char** ___saYearMonths_3;
	char** ___saLongDates_4;
	char* ___sMonthDay_5;
	char** ___saEraNames_6;
	char** ___saAbbrevEraNames_7;
	char** ___saAbbrevEnglishEraNames_8;
	char** ___saDayNames_9;
	char** ___saAbbrevDayNames_10;
	char** ___saSuperShortDayNames_11;
	char** ___saMonthNames_12;
	char** ___saAbbrevMonthNames_13;
	char** ___saMonthGenitiveNames_14;
	char** ___saAbbrevMonthGenitiveNames_15;
	char** ___saLeapYearMonthNames_16;
	int32_t ___iTwoDigitYearMax_17;
	int32_t ___iCurrentEra_18;
	int32_t ___bUseUserOverrides_19;
};
// Native definition for COM marshalling of System.Globalization.CalendarData
struct CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshaled_com
{
	Il2CppChar* ___sNativeName_1;
	Il2CppChar** ___saShortDates_2;
	Il2CppChar** ___saYearMonths_3;
	Il2CppChar** ___saLongDates_4;
	Il2CppChar* ___sMonthDay_5;
	Il2CppChar** ___saEraNames_6;
	Il2CppChar** ___saAbbrevEraNames_7;
	Il2CppChar** ___saAbbrevEnglishEraNames_8;
	Il2CppChar** ___saDayNames_9;
	Il2CppChar** ___saAbbrevDayNames_10;
	Il2CppChar** ___saSuperShortDayNames_11;
	Il2CppChar** ___saMonthNames_12;
	Il2CppChar** ___saAbbrevMonthNames_13;
	Il2CppChar** ___saMonthGenitiveNames_14;
	Il2CppChar** ___saAbbrevMonthGenitiveNames_15;
	Il2CppChar** ___saLeapYearMonthNames_16;
	int32_t ___iTwoDigitYearMax_17;
	int32_t ___iCurrentEra_18;
	int32_t ___bUseUserOverrides_19;
};

// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B  : public RuntimeObject
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationCallbackInfo::Callback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___Callback_0;
	// System.Object System.Threading.CancellationCallbackInfo::StateForCallback
	RuntimeObject * ___StateForCallback_1;
	// System.Threading.SynchronizationContext System.Threading.CancellationCallbackInfo::TargetSyncContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___TargetSyncContext_2;
	// System.Threading.ExecutionContext System.Threading.CancellationCallbackInfo::TargetExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___TargetExecutionContext_3;
	// System.Threading.CancellationTokenSource System.Threading.CancellationCallbackInfo::CancellationTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___CancellationTokenSource_4;

public:
	inline static int32_t get_offset_of_Callback_0() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B, ___Callback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_Callback_0() const { return ___Callback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_Callback_0() { return &___Callback_0; }
	inline void set_Callback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___Callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateForCallback_1() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B, ___StateForCallback_1)); }
	inline RuntimeObject * get_StateForCallback_1() const { return ___StateForCallback_1; }
	inline RuntimeObject ** get_address_of_StateForCallback_1() { return &___StateForCallback_1; }
	inline void set_StateForCallback_1(RuntimeObject * value)
	{
		___StateForCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateForCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_TargetSyncContext_2() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B, ___TargetSyncContext_2)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_TargetSyncContext_2() const { return ___TargetSyncContext_2; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_TargetSyncContext_2() { return &___TargetSyncContext_2; }
	inline void set_TargetSyncContext_2(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___TargetSyncContext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetSyncContext_2), (void*)value);
	}

	inline static int32_t get_offset_of_TargetExecutionContext_3() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B, ___TargetExecutionContext_3)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_TargetExecutionContext_3() const { return ___TargetExecutionContext_3; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_TargetExecutionContext_3() { return &___TargetExecutionContext_3; }
	inline void set_TargetExecutionContext_3(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___TargetExecutionContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetExecutionContext_3), (void*)value);
	}

	inline static int32_t get_offset_of_CancellationTokenSource_4() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B, ___CancellationTokenSource_4)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_CancellationTokenSource_4() const { return ___CancellationTokenSource_4; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_CancellationTokenSource_4() { return &___CancellationTokenSource_4; }
	inline void set_CancellationTokenSource_4(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___CancellationTokenSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CancellationTokenSource_4), (void*)value);
	}
};

struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B_StaticFields
{
public:
	// System.Threading.ContextCallback System.Threading.CancellationCallbackInfo::s_executionContextCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_executionContextCallback_5;

public:
	inline static int32_t get_offset_of_s_executionContextCallback_5() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B_StaticFields, ___s_executionContextCallback_5)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_executionContextCallback_5() const { return ___s_executionContextCallback_5; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_executionContextCallback_5() { return &___s_executionContextCallback_5; }
	inline void set_s_executionContextCallback_5(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_executionContextCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_executionContextCallback_5), (void*)value);
	}
};


// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// UnityEngine.XR.Bone
struct Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.BoneWeight
struct BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8 
{
public:
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;

public:
	inline static int32_t get_offset_of_m_Weight0_0() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight0_0)); }
	inline float get_m_Weight0_0() const { return ___m_Weight0_0; }
	inline float* get_address_of_m_Weight0_0() { return &___m_Weight0_0; }
	inline void set_m_Weight0_0(float value)
	{
		___m_Weight0_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight1_1() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight1_1)); }
	inline float get_m_Weight1_1() const { return ___m_Weight1_1; }
	inline float* get_address_of_m_Weight1_1() { return &___m_Weight1_1; }
	inline void set_m_Weight1_1(float value)
	{
		___m_Weight1_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight2_2() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight2_2)); }
	inline float get_m_Weight2_2() const { return ___m_Weight2_2; }
	inline float* get_address_of_m_Weight2_2() { return &___m_Weight2_2; }
	inline void set_m_Weight2_2(float value)
	{
		___m_Weight2_2 = value;
	}

	inline static int32_t get_offset_of_m_Weight3_3() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight3_3)); }
	inline float get_m_Weight3_3() const { return ___m_Weight3_3; }
	inline float* get_address_of_m_Weight3_3() { return &___m_Weight3_3; }
	inline void set_m_Weight3_3(float value)
	{
		___m_Weight3_3 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex0_4() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex0_4)); }
	inline int32_t get_m_BoneIndex0_4() const { return ___m_BoneIndex0_4; }
	inline int32_t* get_address_of_m_BoneIndex0_4() { return &___m_BoneIndex0_4; }
	inline void set_m_BoneIndex0_4(int32_t value)
	{
		___m_BoneIndex0_4 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex1_5() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex1_5)); }
	inline int32_t get_m_BoneIndex1_5() const { return ___m_BoneIndex1_5; }
	inline int32_t* get_address_of_m_BoneIndex1_5() { return &___m_BoneIndex1_5; }
	inline void set_m_BoneIndex1_5(int32_t value)
	{
		___m_BoneIndex1_5 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex2_6() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex2_6)); }
	inline int32_t get_m_BoneIndex2_6() const { return ___m_BoneIndex2_6; }
	inline int32_t* get_address_of_m_BoneIndex2_6() { return &___m_BoneIndex2_6; }
	inline void set_m_BoneIndex2_6(int32_t value)
	{
		___m_BoneIndex2_6 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex3_7() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex3_7)); }
	inline int32_t get_m_BoneIndex3_7() const { return ___m_BoneIndex3_7; }
	inline int32_t* get_address_of_m_BoneIndex3_7() { return &___m_BoneIndex3_7; }
	inline void set_m_BoneIndex3_7(int32_t value)
	{
		___m_BoneIndex3_7 = value;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Guid
struct Guid_t 
{
public:
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
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


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;

public:
	inline static int32_t get_offset_of_m_GuidLow_1() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC, ___m_GuidLow_1)); }
	inline uint64_t get_m_GuidLow_1() const { return ___m_GuidLow_1; }
	inline uint64_t* get_address_of_m_GuidLow_1() { return &___m_GuidLow_1; }
	inline void set_m_GuidLow_1(uint64_t value)
	{
		___m_GuidLow_1 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_2() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC, ___m_GuidHigh_2)); }
	inline uint64_t get_m_GuidHigh_2() const { return ___m_GuidHigh_2; }
	inline uint64_t* get_address_of_m_GuidHigh_2() { return &___m_GuidHigh_2; }
	inline void set_m_GuidHigh_2(uint64_t value)
	{
		___m_GuidHigh_2 = value;
	}
};

struct SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___k_Empty_0;

public:
	inline static int32_t get_offset_of_k_Empty_0() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC_StaticFields, ___k_Empty_0)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_k_Empty_0() const { return ___k_Empty_0; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_k_Empty_0() { return &___k_Empty_0; }
	inline void set_k_Empty_0(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___k_Empty_0 = value;
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


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidLow
	uint64_t ___m_GuidLow_0;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidHigh
	uint64_t ___m_GuidHigh_1;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Name
	String_t* ___m_Name_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry> UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Entries
	List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * ___m_Entries_3;

public:
	inline static int32_t get_offset_of_m_GuidLow_0() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_GuidLow_0)); }
	inline uint64_t get_m_GuidLow_0() const { return ___m_GuidLow_0; }
	inline uint64_t* get_address_of_m_GuidLow_0() { return &___m_GuidLow_0; }
	inline void set_m_GuidLow_0(uint64_t value)
	{
		___m_GuidLow_0 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_1() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_GuidHigh_1)); }
	inline uint64_t get_m_GuidHigh_1() const { return ___m_GuidHigh_1; }
	inline uint64_t* get_address_of_m_GuidHigh_1() { return &___m_GuidHigh_1; }
	inline void set_m_GuidHigh_1(uint64_t value)
	{
		___m_GuidHigh_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Entries_3() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_Entries_3)); }
	inline List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * get_m_Entries_3() const { return ___m_Entries_3; }
	inline List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A ** get_address_of_m_Entries_3() { return &___m_Entries_3; }
	inline void set_m_Entries_3(List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * value)
	{
		___m_Entries_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Entries_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE_marshaled_pinvoke
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	char* ___m_Name_2;
	List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * ___m_Entries_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE_marshaled_com
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	Il2CppChar* ___m_Name_2;
	List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * ___m_Entries_3;
};

// UnityEngine.XR.ARFoundation.ARSessionState
struct ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs
struct AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.AttributeTargets
struct AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality
struct AudioLoFiSourceQuality_t590A095618A62A4EACD3F0AE2B39718716B0EE44 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioLoFiSourceQuality_t590A095618A62A4EACD3F0AE2B39718716B0EE44, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
struct BinaryTypeEnum_tC64D097C71D4D8F090D20424FCF2BD4CF9FE60A4 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BinaryTypeEnum_tC64D097C71D4D8F090D20424FCF2BD4CF9FE60A4, ___value___2)); }
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


// Mono.Net.CFProxy
struct CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D  : public RuntimeObject
{
public:
	// Mono.Net.CFDictionary Mono.Net.CFProxy::settings
	CFDictionary_tCC86FC857C703D57D0134BAB9D6AB795E52ABF2D * ___settings_13;

public:
	inline static int32_t get_offset_of_settings_13() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D, ___settings_13)); }
	inline CFDictionary_tCC86FC857C703D57D0134BAB9D6AB795E52ABF2D * get_settings_13() const { return ___settings_13; }
	inline CFDictionary_tCC86FC857C703D57D0134BAB9D6AB795E52ABF2D ** get_address_of_settings_13() { return &___settings_13; }
	inline void set_settings_13(CFDictionary_tCC86FC857C703D57D0134BAB9D6AB795E52ABF2D * value)
	{
		___settings_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_13), (void*)value);
	}
};

struct CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields
{
public:
	// System.IntPtr Mono.Net.CFProxy::kCFProxyAutoConfigurationJavaScriptKey
	intptr_t ___kCFProxyAutoConfigurationJavaScriptKey_0;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyAutoConfigurationURLKey
	intptr_t ___kCFProxyAutoConfigurationURLKey_1;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyHostNameKey
	intptr_t ___kCFProxyHostNameKey_2;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyPasswordKey
	intptr_t ___kCFProxyPasswordKey_3;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyPortNumberKey
	intptr_t ___kCFProxyPortNumberKey_4;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeKey
	intptr_t ___kCFProxyTypeKey_5;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyUsernameKey
	intptr_t ___kCFProxyUsernameKey_6;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeAutoConfigurationURL
	intptr_t ___kCFProxyTypeAutoConfigurationURL_7;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeAutoConfigurationJavaScript
	intptr_t ___kCFProxyTypeAutoConfigurationJavaScript_8;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeFTP
	intptr_t ___kCFProxyTypeFTP_9;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeHTTP
	intptr_t ___kCFProxyTypeHTTP_10;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeHTTPS
	intptr_t ___kCFProxyTypeHTTPS_11;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeSOCKS
	intptr_t ___kCFProxyTypeSOCKS_12;

public:
	inline static int32_t get_offset_of_kCFProxyAutoConfigurationJavaScriptKey_0() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyAutoConfigurationJavaScriptKey_0)); }
	inline intptr_t get_kCFProxyAutoConfigurationJavaScriptKey_0() const { return ___kCFProxyAutoConfigurationJavaScriptKey_0; }
	inline intptr_t* get_address_of_kCFProxyAutoConfigurationJavaScriptKey_0() { return &___kCFProxyAutoConfigurationJavaScriptKey_0; }
	inline void set_kCFProxyAutoConfigurationJavaScriptKey_0(intptr_t value)
	{
		___kCFProxyAutoConfigurationJavaScriptKey_0 = value;
	}

	inline static int32_t get_offset_of_kCFProxyAutoConfigurationURLKey_1() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyAutoConfigurationURLKey_1)); }
	inline intptr_t get_kCFProxyAutoConfigurationURLKey_1() const { return ___kCFProxyAutoConfigurationURLKey_1; }
	inline intptr_t* get_address_of_kCFProxyAutoConfigurationURLKey_1() { return &___kCFProxyAutoConfigurationURLKey_1; }
	inline void set_kCFProxyAutoConfigurationURLKey_1(intptr_t value)
	{
		___kCFProxyAutoConfigurationURLKey_1 = value;
	}

	inline static int32_t get_offset_of_kCFProxyHostNameKey_2() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyHostNameKey_2)); }
	inline intptr_t get_kCFProxyHostNameKey_2() const { return ___kCFProxyHostNameKey_2; }
	inline intptr_t* get_address_of_kCFProxyHostNameKey_2() { return &___kCFProxyHostNameKey_2; }
	inline void set_kCFProxyHostNameKey_2(intptr_t value)
	{
		___kCFProxyHostNameKey_2 = value;
	}

	inline static int32_t get_offset_of_kCFProxyPasswordKey_3() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyPasswordKey_3)); }
	inline intptr_t get_kCFProxyPasswordKey_3() const { return ___kCFProxyPasswordKey_3; }
	inline intptr_t* get_address_of_kCFProxyPasswordKey_3() { return &___kCFProxyPasswordKey_3; }
	inline void set_kCFProxyPasswordKey_3(intptr_t value)
	{
		___kCFProxyPasswordKey_3 = value;
	}

	inline static int32_t get_offset_of_kCFProxyPortNumberKey_4() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyPortNumberKey_4)); }
	inline intptr_t get_kCFProxyPortNumberKey_4() const { return ___kCFProxyPortNumberKey_4; }
	inline intptr_t* get_address_of_kCFProxyPortNumberKey_4() { return &___kCFProxyPortNumberKey_4; }
	inline void set_kCFProxyPortNumberKey_4(intptr_t value)
	{
		___kCFProxyPortNumberKey_4 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeKey_5() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeKey_5)); }
	inline intptr_t get_kCFProxyTypeKey_5() const { return ___kCFProxyTypeKey_5; }
	inline intptr_t* get_address_of_kCFProxyTypeKey_5() { return &___kCFProxyTypeKey_5; }
	inline void set_kCFProxyTypeKey_5(intptr_t value)
	{
		___kCFProxyTypeKey_5 = value;
	}

	inline static int32_t get_offset_of_kCFProxyUsernameKey_6() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyUsernameKey_6)); }
	inline intptr_t get_kCFProxyUsernameKey_6() const { return ___kCFProxyUsernameKey_6; }
	inline intptr_t* get_address_of_kCFProxyUsernameKey_6() { return &___kCFProxyUsernameKey_6; }
	inline void set_kCFProxyUsernameKey_6(intptr_t value)
	{
		___kCFProxyUsernameKey_6 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeAutoConfigurationURL_7() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeAutoConfigurationURL_7)); }
	inline intptr_t get_kCFProxyTypeAutoConfigurationURL_7() const { return ___kCFProxyTypeAutoConfigurationURL_7; }
	inline intptr_t* get_address_of_kCFProxyTypeAutoConfigurationURL_7() { return &___kCFProxyTypeAutoConfigurationURL_7; }
	inline void set_kCFProxyTypeAutoConfigurationURL_7(intptr_t value)
	{
		___kCFProxyTypeAutoConfigurationURL_7 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeAutoConfigurationJavaScript_8() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeAutoConfigurationJavaScript_8)); }
	inline intptr_t get_kCFProxyTypeAutoConfigurationJavaScript_8() const { return ___kCFProxyTypeAutoConfigurationJavaScript_8; }
	inline intptr_t* get_address_of_kCFProxyTypeAutoConfigurationJavaScript_8() { return &___kCFProxyTypeAutoConfigurationJavaScript_8; }
	inline void set_kCFProxyTypeAutoConfigurationJavaScript_8(intptr_t value)
	{
		___kCFProxyTypeAutoConfigurationJavaScript_8 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeFTP_9() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeFTP_9)); }
	inline intptr_t get_kCFProxyTypeFTP_9() const { return ___kCFProxyTypeFTP_9; }
	inline intptr_t* get_address_of_kCFProxyTypeFTP_9() { return &___kCFProxyTypeFTP_9; }
	inline void set_kCFProxyTypeFTP_9(intptr_t value)
	{
		___kCFProxyTypeFTP_9 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeHTTP_10() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeHTTP_10)); }
	inline intptr_t get_kCFProxyTypeHTTP_10() const { return ___kCFProxyTypeHTTP_10; }
	inline intptr_t* get_address_of_kCFProxyTypeHTTP_10() { return &___kCFProxyTypeHTTP_10; }
	inline void set_kCFProxyTypeHTTP_10(intptr_t value)
	{
		___kCFProxyTypeHTTP_10 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeHTTPS_11() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeHTTPS_11)); }
	inline intptr_t get_kCFProxyTypeHTTPS_11() const { return ___kCFProxyTypeHTTPS_11; }
	inline intptr_t* get_address_of_kCFProxyTypeHTTPS_11() { return &___kCFProxyTypeHTTPS_11; }
	inline void set_kCFProxyTypeHTTPS_11(intptr_t value)
	{
		___kCFProxyTypeHTTPS_11 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeSOCKS_12() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeSOCKS_12)); }
	inline intptr_t get_kCFProxyTypeSOCKS_12() const { return ___kCFProxyTypeSOCKS_12; }
	inline intptr_t* get_address_of_kCFProxyTypeSOCKS_12() { return &___kCFProxyTypeSOCKS_12; }
	inline void set_kCFProxyTypeSOCKS_12(intptr_t value)
	{
		___kCFProxyTypeSOCKS_12 = value;
	}
};


// UnityEngine.Rendering.CameraEvent
struct CameraEvent_tFB94407637890549849BC824FA13432BA83CB520 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraEvent_tFB94407637890549849BC824FA13432BA83CB520, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.CardinalAxisType
struct CardinalAxisType_tC53C04D25D35B94ECF7E1DA2078454137D08079F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.CardinalAxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CardinalAxisType_tC53C04D25D35B94ECF7E1DA2078454137D08079F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackingMode
struct TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;

public:
	inline static int32_t get_offset_of_m_SerializedGuid_0() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SerializedGuid_0)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_m_SerializedGuid_0() const { return ___m_SerializedGuid_0; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_m_SerializedGuid_0() { return &___m_SerializedGuid_0; }
	inline void set_m_SerializedGuid_0(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___m_SerializedGuid_0 = value;
	}

	inline static int32_t get_offset_of_m_SerializedTextureGuid_1() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SerializedTextureGuid_1)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_m_SerializedTextureGuid_1() const { return ___m_SerializedTextureGuid_1; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_m_SerializedTextureGuid_1() { return &___m_SerializedTextureGuid_1; }
	inline void set_m_SerializedTextureGuid_1(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___m_SerializedTextureGuid_1 = value;
	}

	inline static int32_t get_offset_of_m_Size_2() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Size_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_2() const { return ___m_Size_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_2() { return &___m_Size_2; }
	inline void set_m_Size_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_2 = value;
	}

	inline static int32_t get_offset_of_m_SpecifySize_3() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SpecifySize_3)); }
	inline bool get_m_SpecifySize_3() const { return ___m_SpecifySize_3; }
	inline bool* get_address_of_m_SpecifySize_3() { return &___m_SpecifySize_3; }
	inline void set_m_SpecifySize_3(bool value)
	{
		___m_SpecifySize_3 = value;
	}

	inline static int32_t get_offset_of_m_Name_4() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Name_4)); }
	inline String_t* get_m_Name_4() const { return ___m_Name_4; }
	inline String_t** get_address_of_m_Name_4() { return &___m_Name_4; }
	inline void set_m_Name_4(String_t* value)
	{
		___m_Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Texture_5() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Texture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Texture_5() const { return ___m_Texture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Texture_5() { return &___m_Texture_5; }
	inline void set_m_Texture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Texture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_marshaled_pinvoke
{
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_marshaled_com
{
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;
};

// Microsoft.MixedReality.Toolkit.UI.AppBar/ButtonTypeEnum
struct ButtonTypeEnum_t2F6777F9D3285050FDAFAB3C8FF20BD613AFC49C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.AppBar/ButtonTypeEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonTypeEnum_t2F6777F9D3285050FDAFAB3C8FF20BD613AFC49C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_innerExceptions_17), (void*)value);
	}
};


// System.AttributeUsageAttribute
struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::m_attributeTarget
	int32_t ___m_attributeTarget_0;
	// System.Boolean System.AttributeUsageAttribute::m_allowMultiple
	bool ___m_allowMultiple_1;
	// System.Boolean System.AttributeUsageAttribute::m_inherited
	bool ___m_inherited_2;

public:
	inline static int32_t get_offset_of_m_attributeTarget_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_attributeTarget_0)); }
	inline int32_t get_m_attributeTarget_0() const { return ___m_attributeTarget_0; }
	inline int32_t* get_address_of_m_attributeTarget_0() { return &___m_attributeTarget_0; }
	inline void set_m_attributeTarget_0(int32_t value)
	{
		___m_attributeTarget_0 = value;
	}

	inline static int32_t get_offset_of_m_allowMultiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_allowMultiple_1)); }
	inline bool get_m_allowMultiple_1() const { return ___m_allowMultiple_1; }
	inline bool* get_address_of_m_allowMultiple_1() { return &___m_allowMultiple_1; }
	inline void set_m_allowMultiple_1(bool value)
	{
		___m_allowMultiple_1 = value;
	}

	inline static int32_t get_offset_of_m_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_inherited_2)); }
	inline bool get_m_inherited_2() const { return ___m_inherited_2; }
	inline bool* get_address_of_m_inherited_2() { return &___m_inherited_2; }
	inline void set_m_inherited_2(bool value)
	{
		___m_inherited_2 = value;
	}
};

struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C_StaticFields
{
public:
	// System.AttributeUsageAttribute System.AttributeUsageAttribute::Default
	AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * ___Default_3;

public:
	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C_StaticFields, ___Default_3)); }
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * get_Default_3() const { return ___Default_3; }
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::<Definition>k__BackingField
	RuntimeObject* ___U3CDefinitionU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___U3CInteractionsU3Ek__BackingField_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CAngularVelocityU3Ek__BackingField_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CVelocityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CDefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CDefinitionU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CDefinitionU3Ek__BackingField_0() const { return ___U3CDefinitionU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CDefinitionU3Ek__BackingField_0() { return &___U3CDefinitionU3Ek__BackingField_0; }
	inline void set_U3CDefinitionU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CDefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CEnabledU3Ek__BackingField_1() const { return ___U3CEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_1() { return &___U3CEnabledU3Ek__BackingField_1; }
	inline void set_U3CEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CTrackingStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_2() const { return ___U3CTrackingStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_2() { return &___U3CTrackingStateU3Ek__BackingField_2; }
	inline void set_U3CTrackingStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CControllerHandednessU3Ek__BackingField_3)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_3() const { return ___U3CControllerHandednessU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_3() { return &___U3CControllerHandednessU3Ek__BackingField_3; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_3(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CInputSourceU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_4() const { return ___U3CInputSourceU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_4() { return &___U3CInputSourceU3Ek__BackingField_4; }
	inline void set_U3CInputSourceU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CVisualizerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_5() const { return ___U3CVisualizerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_5() { return &___U3CVisualizerU3Ek__BackingField_5; }
	inline void set_U3CVisualizerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CIsPositionAvailableU3Ek__BackingField_6)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_6() const { return ___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return &___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_6(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CIsPositionApproximateU3Ek__BackingField_7)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_7() const { return ___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return &___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_7(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CIsRotationAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_8() const { return ___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return &___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CInteractionsU3Ek__BackingField_9)); }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* get_U3CInteractionsU3Ek__BackingField_9() const { return ___U3CInteractionsU3Ek__BackingField_9; }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7** get_address_of_U3CInteractionsU3Ek__BackingField_9() { return &___U3CInteractionsU3Ek__BackingField_9; }
	inline void set_U3CInteractionsU3Ek__BackingField_9(MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* value)
	{
		___U3CInteractionsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CAngularVelocityU3Ek__BackingField_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CAngularVelocityU3Ek__BackingField_10() const { return ___U3CAngularVelocityU3Ek__BackingField_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CAngularVelocityU3Ek__BackingField_10() { return &___U3CAngularVelocityU3Ek__BackingField_10; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CVelocityU3Ek__BackingField_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CVelocityU3Ek__BackingField_11() const { return ___U3CVelocityU3Ek__BackingField_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CVelocityU3Ek__BackingField_11() { return &___U3CVelocityU3Ek__BackingField_11; }
	inline void set_U3CVelocityU3Ek__BackingField_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CVelocityU3Ek__BackingField_11 = value;
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
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

// UnityEngine.XR.ARSubsystems.XRParticipant
struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t  ___m_SessionId_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_4() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_SessionId_4)); }
	inline Guid_t  get_m_SessionId_4() const { return ___m_SessionId_4; }
	inline Guid_t * get_address_of_m_SessionId_4() { return &___m_SessionId_4; }
	inline void set_m_SessionId_4(Guid_t  value)
	{
		___m_SessionId_4 = value;
	}
};

struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields, ___k_Default_5)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_k_Default_5() const { return ___k_Default_5; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___k_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields, ___s_Default_0)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_s_Default_0() const { return ___s_Default_0; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_HitTrackableId_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_HitTrackableId_6() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_HitTrackableId_6)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_HitTrackableId_6() const { return ___m_HitTrackableId_6; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_HitTrackableId_6() { return &___m_HitTrackableId_6; }
	inline void set_m_HitTrackableId_6(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_HitTrackableId_6 = value;
	}
};

struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields, ___s_Default_0)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::s_Default
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields, ___s_Default_0)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_s_Default_0() const { return ___s_Default_0; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
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

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Size_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t  ___m_ReferenceObjectGuid_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjectGuid_4() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_ReferenceObjectGuid_4)); }
	inline Guid_t  get_m_ReferenceObjectGuid_4() const { return ___m_ReferenceObjectGuid_4; }
	inline Guid_t * get_address_of_m_ReferenceObjectGuid_4() { return &___m_ReferenceObjectGuid_4; }
	inline void set_m_ReferenceObjectGuid_4(Guid_t  value)
	{
		___m_ReferenceObjectGuid_4 = value;
	}
};

struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::s_Default
	XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields, ___s_Default_5)); }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  get_s_Default_5() const { return ___s_Default_5; }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_1;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_2;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Hit_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Hit_1)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_m_Hit_1() const { return ___m_Hit_1; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_m_Hit_1() { return &___m_Hit_1; }
	inline void set_m_Hit_1(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___m_Hit_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Transform_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_2() const { return ___m_Transform_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_1;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_1;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_2;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 
{
public:
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;

public:
	inline static int32_t get_offset_of_m_Descriptor_1() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Descriptor_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_Descriptor_1() const { return ___m_Descriptor_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_Descriptor_1() { return &___m_Descriptor_1; }
	inline void set_m_Descriptor_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_Descriptor_1 = value;
	}

	inline static int32_t get_offset_of_m_Texture_2() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Texture_2)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_2() const { return ___m_Texture_2; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_2() { return &___m_Texture_2; }
	inline void set_m_Texture_2(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_pinvoke
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_com
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
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


// UnityEngine.XR.ARSubsystems.XRPointCloudData
struct XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Positions
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Positions_0;
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_ConfidenceValues
	NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___m_ConfidenceValues_1;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Identifiers
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Identifiers_2;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177, ___m_Positions_0)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Positions_0() const { return ___m_Positions_0; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Positions_0 = value;
	}

	inline static int32_t get_offset_of_m_ConfidenceValues_1() { return static_cast<int32_t>(offsetof(XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177, ___m_ConfidenceValues_1)); }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  get_m_ConfidenceValues_1() const { return ___m_ConfidenceValues_1; }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * get_address_of_m_ConfidenceValues_1() { return &___m_ConfidenceValues_1; }
	inline void set_m_ConfidenceValues_1(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  value)
	{
		___m_ConfidenceValues_1 = value;
	}

	inline static int32_t get_offset_of_m_Identifiers_2() { return static_cast<int32_t>(offsetof(XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177, ___m_Identifiers_2)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Identifiers_2() const { return ___m_Identifiers_2; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Identifiers_2() { return &___m_Identifiers_2; }
	inline void set_m_Identifiers_2(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Identifiers_2 = value;
	}
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


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRParticipant,UnityEngine.XR.ARFoundation.ARParticipant>
struct ARTrackable_2_t3A70CA163E4AA2BFE474D25DA70F38D9B1C36908  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3A70CA163E4AA2BFE474D25DA70F38D9B1C36908, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3A70CA163E4AA2BFE474D25DA70F38D9B1C36908, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3A70CA163E4AA2BFE474D25DA70F38D9B1C36908, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARFoundation.ARPointCloud>
struct ARTrackable_2_t687B28B8E27DA860E03F043566B1212DC4BE072E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t687B28B8E27DA860E03F043566B1212DC4BE072E, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t687B28B8E27DA860E03F043566B1212DC4BE072E, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t687B28B8E27DA860E03F043566B1212DC4BE072E, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackable_2_t2F686C95696F1B75CC8F50A1E12A3F5630DDE39E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t2F686C95696F1B75CC8F50A1E12A3F5630DDE39E, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t2F686C95696F1B75CC8F50A1E12A3F5630DDE39E, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t2F686C95696F1B75CC8F50A1E12A3F5630DDE39E, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARFoundation.ARReferencePoint>
struct ARTrackable_2_t3154D4F5FF8B8657D8885F7846BA717B5D66CB2A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3154D4F5FF8B8657D8885F7846BA717B5D66CB2A, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3154D4F5FF8B8657D8885F7846BA717B5D66CB2A, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3154D4F5FF8B8657D8885F7846BA717B5D66CB2A, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARFoundation.ARTrackedObject>
struct ARTrackable_2_t40A4348953541F81375FDD27AB204A23B6464503  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t40A4348953541F81375FDD27AB204A23B6464503, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t40A4348953541F81375FDD27AB204A23B6464503, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t40A4348953541F81375FDD27AB204A23B6464503, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.AppBarButton
struct AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.UI.PressableButton Microsoft.MixedReality.Toolkit.UI.AppBarButton::button
	PressableButton_t4A3EE6F3E75A3D380DD272FFB26FD79364A6741F * ___button_5;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.Toolkit.UI.AppBarButton::interactable
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___interactable_6;
	// TMPro.TextMeshPro[] Microsoft.MixedReality.Toolkit.UI.AppBarButton::primaryLabels
	TextMeshProU5BU5D_t3778A870DEA9C539BB120444989B11661251B7B2* ___primaryLabels_7;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.UI.AppBarButton::seeItSayItLabel
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___seeItSayItLabel_8;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.UI.AppBarButton::icon
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___icon_9;
	// Microsoft.MixedReality.Toolkit.UI.AppBar/ButtonTypeEnum Microsoft.MixedReality.Toolkit.UI.AppBarButton::buttonType
	int32_t ___buttonType_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.AppBarButton::displayOrder
	int32_t ___displayOrder_11;
	// Microsoft.MixedReality.Toolkit.UI.AppBar Microsoft.MixedReality.Toolkit.UI.AppBarButton::parentToolBar
	AppBar_t66EA64665FAE7F6685C8B3B6EA21EB89DF29524D * ___parentToolBar_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.AppBarButton::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_13;
	// UnityEngine.Texture Microsoft.MixedReality.Toolkit.UI.AppBarButton::buttonIcon
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___buttonIcon_14;
	// System.String Microsoft.MixedReality.Toolkit.UI.AppBarButton::buttonText
	String_t* ___buttonText_15;

public:
	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___button_5)); }
	inline PressableButton_t4A3EE6F3E75A3D380DD272FFB26FD79364A6741F * get_button_5() const { return ___button_5; }
	inline PressableButton_t4A3EE6F3E75A3D380DD272FFB26FD79364A6741F ** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(PressableButton_t4A3EE6F3E75A3D380DD272FFB26FD79364A6741F * value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_5), (void*)value);
	}

	inline static int32_t get_offset_of_interactable_6() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___interactable_6)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_interactable_6() const { return ___interactable_6; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_interactable_6() { return &___interactable_6; }
	inline void set_interactable_6(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___interactable_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactable_6), (void*)value);
	}

	inline static int32_t get_offset_of_primaryLabels_7() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___primaryLabels_7)); }
	inline TextMeshProU5BU5D_t3778A870DEA9C539BB120444989B11661251B7B2* get_primaryLabels_7() const { return ___primaryLabels_7; }
	inline TextMeshProU5BU5D_t3778A870DEA9C539BB120444989B11661251B7B2** get_address_of_primaryLabels_7() { return &___primaryLabels_7; }
	inline void set_primaryLabels_7(TextMeshProU5BU5D_t3778A870DEA9C539BB120444989B11661251B7B2* value)
	{
		___primaryLabels_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryLabels_7), (void*)value);
	}

	inline static int32_t get_offset_of_seeItSayItLabel_8() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___seeItSayItLabel_8)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_seeItSayItLabel_8() const { return ___seeItSayItLabel_8; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_seeItSayItLabel_8() { return &___seeItSayItLabel_8; }
	inline void set_seeItSayItLabel_8(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___seeItSayItLabel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seeItSayItLabel_8), (void*)value);
	}

	inline static int32_t get_offset_of_icon_9() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___icon_9)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_icon_9() const { return ___icon_9; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_icon_9() { return &___icon_9; }
	inline void set_icon_9(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___icon_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_9), (void*)value);
	}

	inline static int32_t get_offset_of_buttonType_10() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___buttonType_10)); }
	inline int32_t get_buttonType_10() const { return ___buttonType_10; }
	inline int32_t* get_address_of_buttonType_10() { return &___buttonType_10; }
	inline void set_buttonType_10(int32_t value)
	{
		___buttonType_10 = value;
	}

	inline static int32_t get_offset_of_displayOrder_11() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___displayOrder_11)); }
	inline int32_t get_displayOrder_11() const { return ___displayOrder_11; }
	inline int32_t* get_address_of_displayOrder_11() { return &___displayOrder_11; }
	inline void set_displayOrder_11(int32_t value)
	{
		___displayOrder_11 = value;
	}

	inline static int32_t get_offset_of_parentToolBar_12() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___parentToolBar_12)); }
	inline AppBar_t66EA64665FAE7F6685C8B3B6EA21EB89DF29524D * get_parentToolBar_12() const { return ___parentToolBar_12; }
	inline AppBar_t66EA64665FAE7F6685C8B3B6EA21EB89DF29524D ** get_address_of_parentToolBar_12() { return &___parentToolBar_12; }
	inline void set_parentToolBar_12(AppBar_t66EA64665FAE7F6685C8B3B6EA21EB89DF29524D * value)
	{
		___parentToolBar_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentToolBar_12), (void*)value);
	}

	inline static int32_t get_offset_of_targetPosition_13() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___targetPosition_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_13() const { return ___targetPosition_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_13() { return &___targetPosition_13; }
	inline void set_targetPosition_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_13 = value;
	}

	inline static int32_t get_offset_of_buttonIcon_14() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___buttonIcon_14)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_buttonIcon_14() const { return ___buttonIcon_14; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_buttonIcon_14() { return &___buttonIcon_14; }
	inline void set_buttonIcon_14(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___buttonIcon_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonIcon_14), (void*)value);
	}

	inline static int32_t get_offset_of_buttonText_15() { return static_cast<int32_t>(offsetof(AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48, ___buttonText_15)); }
	inline String_t* get_buttonText_15() const { return ___buttonText_15; }
	inline String_t** get_address_of_buttonText_15() { return &___buttonText_15; }
	inline void set_buttonText_15(String_t* value)
	{
		___buttonText_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonText_15), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARParticipant
struct ARParticipant_tF8AE3FB1C0DB01CA500CA62FE58F29A626EBC288  : public ARTrackable_2_t3A70CA163E4AA2BFE474D25DA70F38D9B1C36908
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891  : public ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;

public:
	inline static int32_t get_offset_of_m_VertexChangedThreshold_7() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_VertexChangedThreshold_7)); }
	inline float get_m_VertexChangedThreshold_7() const { return ___m_VertexChangedThreshold_7; }
	inline float* get_address_of_m_VertexChangedThreshold_7() { return &___m_VertexChangedThreshold_7; }
	inline void set_m_VertexChangedThreshold_7(float value)
	{
		___m_VertexChangedThreshold_7 = value;
	}

	inline static int32_t get_offset_of_boundaryChanged_8() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___boundaryChanged_8)); }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * get_boundaryChanged_8() const { return ___boundaryChanged_8; }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 ** get_address_of_boundaryChanged_8() { return &___boundaryChanged_8; }
	inline void set_boundaryChanged_8(Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * value)
	{
		___boundaryChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsumedByU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___U3CsubsumedByU3Ek__BackingField_9)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_U3CsubsumedByU3Ek__BackingField_9() const { return ___U3CsubsumedByU3Ek__BackingField_9; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_U3CsubsumedByU3Ek__BackingField_9() { return &___U3CsubsumedByU3Ek__BackingField_9; }
	inline void set_U3CsubsumedByU3Ek__BackingField_9(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___U3CsubsumedByU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsumedByU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Boundary_10() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_Boundary_10)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_Boundary_10() const { return ___m_Boundary_10; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_Boundary_10() { return &___m_Boundary_10; }
	inline void set_m_Boundary_10(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_Boundary_10 = value;
	}

	inline static int32_t get_offset_of_m_OldBoundary_11() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_OldBoundary_11)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_OldBoundary_11() const { return ___m_OldBoundary_11; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_OldBoundary_11() { return &___m_OldBoundary_11; }
	inline void set_m_OldBoundary_11(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_OldBoundary_11 = value;
	}

	inline static int32_t get_offset_of_m_HasBoundaryChanged_12() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_HasBoundaryChanged_12)); }
	inline bool get_m_HasBoundaryChanged_12() const { return ___m_HasBoundaryChanged_12; }
	inline bool* get_address_of_m_HasBoundaryChanged_12() { return &___m_HasBoundaryChanged_12; }
	inline void set_m_HasBoundaryChanged_12(bool value)
	{
		___m_HasBoundaryChanged_12 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPointCloud
struct ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A  : public ARTrackable_2_t687B28B8E27DA860E03F043566B1212DC4BE072E
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudUpdatedEventArgs> UnityEngine.XR.ARFoundation.ARPointCloud::updated
	Action_1_t105D433EDB88564DEF22A6B68AB9558C41743F97 * ___updated_7;
	// UnityEngine.XR.ARSubsystems.XRPointCloudData UnityEngine.XR.ARFoundation.ARPointCloud::m_Data
	XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177  ___m_Data_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPointCloud::m_PointsUpdated
	bool ___m_PointsUpdated_9;

public:
	inline static int32_t get_offset_of_updated_7() { return static_cast<int32_t>(offsetof(ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A, ___updated_7)); }
	inline Action_1_t105D433EDB88564DEF22A6B68AB9558C41743F97 * get_updated_7() const { return ___updated_7; }
	inline Action_1_t105D433EDB88564DEF22A6B68AB9558C41743F97 ** get_address_of_updated_7() { return &___updated_7; }
	inline void set_updated_7(Action_1_t105D433EDB88564DEF22A6B68AB9558C41743F97 * value)
	{
		___updated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updated_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Data_8() { return static_cast<int32_t>(offsetof(ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A, ___m_Data_8)); }
	inline XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177  get_m_Data_8() const { return ___m_Data_8; }
	inline XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177 * get_address_of_m_Data_8() { return &___m_Data_8; }
	inline void set_m_Data_8(XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177  value)
	{
		___m_Data_8 = value;
	}

	inline static int32_t get_offset_of_m_PointsUpdated_9() { return static_cast<int32_t>(offsetof(ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A, ___m_PointsUpdated_9)); }
	inline bool get_m_PointsUpdated_9() const { return ___m_PointsUpdated_9; }
	inline bool* get_address_of_m_PointsUpdated_9() { return &___m_PointsUpdated_9; }
	inline void set_m_PointsUpdated_9(bool value)
	{
		___m_PointsUpdated_9 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARRaycast
struct ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98  : public ARTrackable_2_t2F686C95696F1B75CC8F50A1E12A3F5630DDE39E
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARRaycast::m_Updated
	bool ___m_Updated_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARRaycast::<plane>k__BackingField
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___U3CplaneU3Ek__BackingField_8;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARRaycastUpdatedEventArgs> UnityEngine.XR.ARFoundation.ARRaycast::updated
	Action_1_t80DFB8092764BAAB7F638B286289228634537D43 * ___updated_9;

public:
	inline static int32_t get_offset_of_m_Updated_7() { return static_cast<int32_t>(offsetof(ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98, ___m_Updated_7)); }
	inline bool get_m_Updated_7() const { return ___m_Updated_7; }
	inline bool* get_address_of_m_Updated_7() { return &___m_Updated_7; }
	inline void set_m_Updated_7(bool value)
	{
		___m_Updated_7 = value;
	}

	inline static int32_t get_offset_of_U3CplaneU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98, ___U3CplaneU3Ek__BackingField_8)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_U3CplaneU3Ek__BackingField_8() const { return ___U3CplaneU3Ek__BackingField_8; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_U3CplaneU3Ek__BackingField_8() { return &___U3CplaneU3Ek__BackingField_8; }
	inline void set_U3CplaneU3Ek__BackingField_8(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___U3CplaneU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplaneU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_updated_9() { return static_cast<int32_t>(offsetof(ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98, ___updated_9)); }
	inline Action_1_t80DFB8092764BAAB7F638B286289228634537D43 * get_updated_9() const { return ___updated_9; }
	inline Action_1_t80DFB8092764BAAB7F638B286289228634537D43 ** get_address_of_updated_9() { return &___updated_9; }
	inline void set_updated_9(Action_1_t80DFB8092764BAAB7F638B286289228634537D43 * value)
	{
		___updated_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updated_9), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARReferencePoint
struct ARReferencePoint_tBFED1F4EFC71CB628350FD2A3F5BE48E8EBA630F  : public ARTrackable_2_t3154D4F5FF8B8657D8885F7846BA717B5D66CB2A
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B  : public SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_7() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_AttemptUpdate_7)); }
	inline bool get_m_AttemptUpdate_7() const { return ___m_AttemptUpdate_7; }
	inline bool* get_address_of_m_AttemptUpdate_7() { return &___m_AttemptUpdate_7; }
	inline void set_m_AttemptUpdate_7(bool value)
	{
		___m_AttemptUpdate_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_8() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_MatchFrameRate_8)); }
	inline bool get_m_MatchFrameRate_8() const { return ___m_MatchFrameRate_8; }
	inline bool* get_address_of_m_MatchFrameRate_8() { return &___m_MatchFrameRate_8; }
	inline void set_m_MatchFrameRate_8(bool value)
	{
		___m_MatchFrameRate_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackingMode_9() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_TrackingMode_9)); }
	inline int32_t get_m_TrackingMode_9() const { return ___m_TrackingMode_9; }
	inline int32_t* get_address_of_m_TrackingMode_9() { return &___m_TrackingMode_9; }
	inline void set_m_TrackingMode_9(int32_t value)
	{
		___m_TrackingMode_9 = value;
	}
};

struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_11;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_12;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_13;

public:
	inline static int32_t get_offset_of_stateChanged_10() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___stateChanged_10)); }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * get_stateChanged_10() const { return ___stateChanged_10; }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 ** get_address_of_stateChanged_10() { return &___stateChanged_10; }
	inline void set_stateChanged_10(Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * value)
	{
		___stateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_State_11() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_State_11)); }
	inline int32_t get_s_State_11() const { return ___s_State_11; }
	inline int32_t* get_address_of_s_State_11() { return &___s_State_11; }
	inline void set_s_State_11(int32_t value)
	{
		___s_State_11 = value;
	}

	inline static int32_t get_offset_of_s_NotTrackingReason_12() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_NotTrackingReason_12)); }
	inline int32_t get_s_NotTrackingReason_12() const { return ___s_NotTrackingReason_12; }
	inline int32_t* get_address_of_s_NotTrackingReason_12() { return &___s_NotTrackingReason_12; }
	inline void set_s_NotTrackingReason_12(int32_t value)
	{
		___s_NotTrackingReason_12 = value;
	}

	inline static int32_t get_offset_of_s_Availability_13() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_Availability_13)); }
	inline int32_t get_s_Availability_13() const { return ___s_Availability_13; }
	inline int32_t* get_address_of_s_Availability_13() { return &___s_Availability_13; }
	inline void set_s_Availability_13(int32_t value)
	{
		___s_Availability_13 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7  : public ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::<referenceImage>k__BackingField
	XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  ___U3CreferenceImageU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CreferenceImageU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7, ___U3CreferenceImageU3Ek__BackingField_7)); }
	inline XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  get_U3CreferenceImageU3Ek__BackingField_7() const { return ___U3CreferenceImageU3Ek__BackingField_7; }
	inline XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 * get_address_of_U3CreferenceImageU3Ek__BackingField_7() { return &___U3CreferenceImageU3Ek__BackingField_7; }
	inline void set_U3CreferenceImageU3Ek__BackingField_7(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  value)
	{
		___U3CreferenceImageU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CreferenceImageU3Ek__BackingField_7))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CreferenceImageU3Ek__BackingField_7))->___m_Texture_5), (void*)NULL);
		#endif
	}
};


// UnityEngine.XR.ARFoundation.ARTrackedObject
struct ARTrackedObject_t8DE491439CA3DBBF8D8904836F609A81255EE0D0  : public ARTrackable_2_t40A4348953541F81375FDD27AB204A23B6464503
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceObject UnityEngine.XR.ARFoundation.ARTrackedObject::<referenceObject>k__BackingField
	XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE  ___U3CreferenceObjectU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CreferenceObjectU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackedObject_t8DE491439CA3DBBF8D8904836F609A81255EE0D0, ___U3CreferenceObjectU3Ek__BackingField_7)); }
	inline XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE  get_U3CreferenceObjectU3Ek__BackingField_7() const { return ___U3CreferenceObjectU3Ek__BackingField_7; }
	inline XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE * get_address_of_U3CreferenceObjectU3Ek__BackingField_7() { return &___U3CreferenceObjectU3Ek__BackingField_7; }
	inline void set_U3CreferenceObjectU3Ek__BackingField_7(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE  value)
	{
		___U3CreferenceObjectU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CreferenceObjectU3Ek__BackingField_7))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CreferenceObjectU3Ek__BackingField_7))->___m_Entries_3), (void*)NULL);
		#endif
	}
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___m_RootRaycaster_4;

public:
	inline static int32_t get_offset_of_m_RootRaycaster_4() { return static_cast<int32_t>(offsetof(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876, ___m_RootRaycaster_4)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_m_RootRaycaster_4() const { return ___m_RootRaycaster_4; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_m_RootRaycaster_4() { return &___m_RootRaycaster_4; }
	inline void set_m_RootRaycaster_4(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___m_RootRaycaster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootRaycaster_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.XR.ARFoundation.ARParticipant[]
struct ARParticipantU5BU5D_tC3E98C8DCE6D6949FAD6DAC33B4961A76179A30F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARParticipant_tF8AE3FB1C0DB01CA500CA62FE58F29A626EBC288 * m_Items[1];

public:
	inline ARParticipant_tF8AE3FB1C0DB01CA500CA62FE58F29A626EBC288 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARParticipant_tF8AE3FB1C0DB01CA500CA62FE58F29A626EBC288 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARParticipant_tF8AE3FB1C0DB01CA500CA62FE58F29A626EBC288 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ARParticipant_tF8AE3FB1C0DB01CA500CA62FE58F29A626EBC288 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARParticipant_tF8AE3FB1C0DB01CA500CA62FE58F29A626EBC288 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARParticipant_tF8AE3FB1C0DB01CA500CA62FE58F29A626EBC288 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.ARFoundation.ARPlane[]
struct ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * m_Items[1];

public:
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.ARFoundation.ARPointCloud[]
struct ARPointCloudU5BU5D_tDA5ACD704B451BCDC3E7BB9C2AFD66B0A9B780E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A * m_Items[1];

public:
	inline ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARPointCloud_t7801A20C710FCBFDF1A589FA3ED53C7C9DF9222A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.ARFoundation.ARRaycast[]
struct ARRaycastU5BU5D_tFD69BBA8E2B3D48305EC32DAB67E996B829CB484  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98 * m_Items[1];

public:
	inline ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARRaycast_tFCBA8704D464EE4A56E6F5875334FCC945F33F98 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  m_Items[1];

public:
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_2), (void*)NULL);
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_2), (void*)NULL);
	}
};
// UnityEngine.XR.ARFoundation.ARReferencePoint[]
struct ARReferencePointU5BU5D_tA7210375E704A33017D7116D32425F63A53861BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARReferencePoint_tBFED1F4EFC71CB628350FD2A3F5BE48E8EBA630F * m_Items[1];

public:
	inline ARReferencePoint_tBFED1F4EFC71CB628350FD2A3F5BE48E8EBA630F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARReferencePoint_tBFED1F4EFC71CB628350FD2A3F5BE48E8EBA630F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARReferencePoint_tBFED1F4EFC71CB628350FD2A3F5BE48E8EBA630F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ARReferencePoint_tBFED1F4EFC71CB628350FD2A3F5BE48E8EBA630F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARReferencePoint_tBFED1F4EFC71CB628350FD2A3F5BE48E8EBA630F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARReferencePoint_tBFED1F4EFC71CB628350FD2A3F5BE48E8EBA630F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.ARFoundation.ARSession[]
struct ARSessionU5BU5D_tFB754FC4A501AD720D96CC1922680297274AD494  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * m_Items[1];

public:
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.ARFoundation.ARTextureInfo[]
struct ARTextureInfoU5BU5D_tA674B4CD292FDEEB2A3EB311EF4A40EC1DD3683F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  m_Items[1];

public:
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Texture_2), (void*)NULL);
	}
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Texture_2), (void*)NULL);
	}
};
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * m_Items[1];

public:
	inline ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.ARFoundation.ARTrackedObject[]
struct ARTrackedObjectU5BU5D_t3F3B8C3773D65663DE544779B9C99390D9196137  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARTrackedObject_t8DE491439CA3DBBF8D8904836F609A81255EE0D0 * m_Items[1];

public:
	inline ARTrackedObject_t8DE491439CA3DBBF8D8904836F609A81255EE0D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARTrackedObject_t8DE491439CA3DBBF8D8904836F609A81255EE0D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARTrackedObject_t8DE491439CA3DBBF8D8904836F609A81255EE0D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ARTrackedObject_t8DE491439CA3DBBF8D8904836F609A81255EE0D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARTrackedObject_t8DE491439CA3DBBF8D8904836F609A81255EE0D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARTrackedObject_t8DE491439CA3DBBF8D8904836F609A81255EE0D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * m_Items[1];

public:
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.AggregateException[]
struct AggregateExceptionU5BU5D_t114709DEEF6AEED60B1135B68200E12C6BC5776B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * m_Items[1];

public:
	inline AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs[]
struct AnchorLocatedEventArgsU5BU5D_t8AF314B715BA3BD1F94037A2EB24ADB8681348C5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * m_Items[1];

public:
	inline AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaClass[]
struct AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * m_Items[1];

public:
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * m_Items[1];

public:
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.UI.AppBarButton[]
struct AppBarButtonU5BU5D_t2A54164DFF1A3F15F23297E42095F190D5BA2AB7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48 * m_Items[1];

public:
	inline AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AppBarButton_t73BDDD64AEF59D9C1092FCC790DBA5961F6D5F48 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose[]
struct ArticulatedHandPoseU5BU5D_t68B97BC91578FB3FBB310BEAB3AA0693ED04806C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004 * m_Items[1];

public:
	inline ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArticulatedHandPose_tA53ABE6D7B5353CFD9D1D05033CC2F71104AB004 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AsyncOperation[]
struct AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * m_Items[1];

public:
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * m_Items[1];

public:
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.AttributeUsageAttribute[]
struct AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * m_Items[1];

public:
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality[]
struct AudioLoFiSourceQualityU5BU5D_tDE81107D84FA2988CF7410AF74AC95CB4B1388C4  : public RuntimeArray
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
// System.Net.Http.Headers.AuthenticationHeaderValue[]
struct AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C * m_Items[1];

public:
	inline AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.AxisType[]
struct AxisTypeU5BU5D_tEF3348B30D3BB9C966E8A2600635C1E6CA749D81  : public RuntimeArray
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
// Microsoft.MixedReality.Toolkit.Input.BaseController[]
struct BaseControllerU5BU5D_tE887C1A5016BEA531E8BAA813AE7D5AFD7CF7C7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * m_Items[1];

public:
	inline BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * m_Items[1];

public:
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * m_Items[1];

public:
	inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * m_Items[1];

public:
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * m_Items[1];

public:
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * m_Items[1];

public:
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[]
struct BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7  : public RuntimeArray
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
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  m_Items[1];

public:
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  m_Items[1];

public:
	inline BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Guid[]
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Guid_t  m_Items[1];

public:
	inline Guid_t  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Bounds[]
struct BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  m_Items[1];

public:
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		m_Items[index] = value;
	}
};
// Mono.Net.CFProxy[]
struct CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D * m_Items[1];

public:
	inline CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Text.RegularExpressions.CachedCodeEntry[]
struct CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 * m_Items[1];

public:
	inline CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Globalization.CalendarData[]
struct CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * m_Items[1];

public:
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * m_Items[1];

public:
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.CameraEvent[]
struct CameraEventU5BU5D_t1A45D6F41C599CA75F8AFD8EBC2ECC159554FB2E  : public RuntimeArray
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
// System.Threading.CancellationCallbackInfo[]
struct CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * m_Items[1];

public:
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Threading.CancellationToken[]
struct CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  m_Items[1];

public:
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_source_0), (void*)NULL);
	}
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_source_0), (void*)NULL);
	}
};
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  m_Items[1];

public:
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * m_Items[1];

public:
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * m_Items[1];

public:
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * m_Items[1];

public:
	inline Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.CardinalAxisType[]
struct CardinalAxisTypeU5BU5D_t2B70BC449C0F5C340222214B476A331FE1FA6B61  : public RuntimeArray
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD97F8BF33D79041E27CFF07E7831EB386E2D25A6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6CA709084B8585944360F667796E8B3CE18951E0** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m2B78DF7E66A8C228CCD8CE9ECFE6BD7C4644842C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, int32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m5198DBCFCFD06417A1425547938B0A8BCA60B416_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mB63EF6E9C0B2B511659D857293CB4D9FE84B2884_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mA155C651F2405E0CA29F891F68854FF37DC331E8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, int32_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_mC72C7E4492535B801A9836EE9B294754AA15E4CC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m524C3F1DA919856922598A4F9F974E76762505F1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m9A4C974BF7C31CFB2CC06C51775F63E5159350E0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mA9C9AC4FE9777E80D36F86220C2A7251EA278D6D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m6532677A8FFFC8BE39E4487E8B5B957DEB895258_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool ___value1);
il2cpp_hresult_t IVector_1_InsertAt_mA71A9B77FAE574BBB3C8B8545D7D31AC6904F175_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_mFB31764EA0E4A914AC690D50E107200DA8F477BD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_mC5076A05A69921B6EBDAF1281FF5561C9E9791B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_mE9D09CA75800B62324F89063623FC3566CBDFA76_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mD2EC4E85D8B8C83D22294D25A576B428A27D5CD6_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_mFAEFB6B3F4D153F96F9D9B3DAA2D33F732AD3365_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m410FDC792A0957EC89ABB07AD1555D630AAECAC2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, bool* ___items0);
il2cpp_hresult_t IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m6F799ADF54AECADE79946CB6469CB6BF49B38135_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mD8B6592916D3739AAC161FDA1D630543219E9D7D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mA4B38845B990B4640F82CC8363BFB67E20945E9B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m4340482DAAA20E17654D33CFD65BE7ED60A353C3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, uint8_t* ___items0);
il2cpp_hresult_t IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, Il2CppChar* ___items0);
il2cpp_hresult_t IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue);


// System.Int16 System.Byte::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Byte_System_IConvertible_ToInt16_m134A951FF6D7DA4EECC86CB702A8B4DB2ADADDC8 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Byte::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Byte_System_IConvertible_ToUInt16_mCE446BE1A404904AEFD1DAB2706A4AF355186299 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Byte::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_System_IConvertible_ToInt32_m56A786C5BB3125C5C8ADAA2C40F28421959FBEB0 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Byte::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Byte_System_IConvertible_ToUInt32_m2D1C50FE2959C26DA3FA56BE5D91778B06F172C0 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Byte::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Byte_System_IConvertible_ToInt64_m79BB20D0471F008EEFA00F72C560EF92BE8AB6BF (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Byte::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Byte_System_IConvertible_ToUInt64_mD29B4938670EA99ADE6DCA11ADA0E57EA9D5CEC7 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Byte::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Byte_System_IConvertible_ToSingle_m5C04949AD8A80B18C9FF7895CB6DD9BD4ABF07CB (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Byte::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Byte_System_IConvertible_ToDouble_mAF1EAA014190ACF0A646AEE270FC1BFAF28F20A7 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARParticipant[]
struct ARParticipantU5BU5D_tC3E98C8DCE6D6949FAD6DAC33B4961A76179A30F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ARParticipantU5BU5D_tC3E98C8DCE6D6949FAD6DAC33B4961A76179A30F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ARParticipantU5BU5D_tC3E98C8DCE6D6949FAD6DAC33B4961A76179A30F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ARParticipantU5BU5D_tC3E98C8DCE6D6949FAD6DAC33B4961A76179A30F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ARParticipantU5BU5D_tC3E98C8DCE6D6949FAD6DAC33B4961A76179A30F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ARParticipantU5BU5D_tC3E98C8DCE6D6949FAD6DAC33B4961A76179A30F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ARParticipantU5BU5D_tC3E98C8DCE6D6949FAD6DAC33B4961A76179A30F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARPlane[]
struct ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARPointCloud[]
struct ARPointCloudU5BU5D_tDA5ACD704B451BCDC3E7BB9C2AFD66B0A9B780E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ARPointCloudU5BU5D_tDA5ACD704B451BCDC3E7BB9C2AFD66B0A9B780E2_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ARPointCloudU5BU5D_tDA5ACD704B451BCDC3E7BB9C2AFD66B0A9B780E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ARPointCloudU5BU5D_tDA5ACD704B451BCDC3E7BB9C2AFD66B0A9B780E2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ARPointCloudU5BU5D_tDA5ACD704B451BCDC3E7BB9C2AFD66B0A9B780E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ARPointCloudU5BU5D_tDA5ACD704B451BCDC3E7BB9C2AFD66B0A9B780E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ARPointCloudU5BU5D_tDA5ACD704B451BCDC3E7BB9C2AFD66B0A9B780E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARRaycast[]
struct ARRaycastU5BU5D_tFD69BBA8E2B3D48305EC32DAB67E996B829CB484_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ARRaycastU5BU5D_tFD69BBA8E2B3D48305EC32DAB67E996B829CB484_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ARRaycastU5BU5D_tFD69BBA8E2B3D48305EC32DAB67E996B829CB484_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ARRaycastU5BU5D_tFD69BBA8E2B3D48305EC32DAB67E996B829CB484_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ARRaycastU5BU5D_tFD69BBA8E2B3D48305EC32DAB67E996B829CB484(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ARRaycastU5BU5D_tFD69BBA8E2B3D48305EC32DAB67E996B829CB484_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ARRaycastU5BU5D_tFD69BBA8E2B3D48305EC32DAB67E996B829CB484_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARReferencePoint[]
struct ARReferencePointU5BU5D_tA7210375E704A33017D7116D32425F63A53861BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ARReferencePointU5BU5D_tA7210375E704A33017D7116D32425F63A53861BC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ARReferencePointU5BU5D_tA7210375E704A33017D7116D32425F63A53861BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ARReferencePointU5BU5D_tA7210375E704A33017D7116D32425F63A53861BC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ARReferencePointU5BU5D_tA7210375E704A33017D7116D32425F63A53861BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ARReferencePointU5BU5D_tA7210375E704A33017D7116D32425F63A53861BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ARReferencePointU5BU5D_tA7210375E704A33017D7116D32425F63A53861BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARSession[]
struct ARSessionU5BU5D_tFB754FC4A501AD720D96CC1922680297274AD494_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ARSessionU5BU5D_tFB754FC4A501AD720D96CC1922680297274AD494_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ARSessionU5BU5D_tFB754FC4A501AD720D96CC1922680297274AD494_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ARSessionU5BU5D_tFB754FC4A501AD720D96CC1922680297274AD494_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ARSessionU5BU5D_tFB754FC4A501AD720D96CC1922680297274AD494(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ARSessionU5BU5D_tFB754FC4A501AD720D96CC1922680297274AD494_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ARSessionU5BU5D_tFB754FC4A501AD720D96CC1922680297274AD494_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARTextureInfo[]
struct ARTextureInfoU5BU5D_tA674B4CD292FDEEB2A3EB311EF4A40EC1DD3683F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ARTextureInfoU5BU5D_tA674B4CD292FDEEB2A3EB311EF4A40EC1DD3683F_ComCallableWrapper>, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ARTextureInfoU5BU5D_tA674B4CD292FDEEB2A3EB311EF4A40EC1DD3683F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ARTextureInfoU5BU5D_tA674B4CD292FDEEB2A3EB311EF4A40EC1DD3683F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ARTextureInfoU5BU5D_tA674B4CD292FDEEB2A3EB311EF4A40EC1DD3683F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ARTextureInfoU5BU5D_tA674B4CD292FDEEB2A3EB311EF4A40EC1DD3683F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ARTextureInfoU5BU5D_tA674B4CD292FDEEB2A3EB311EF4A40EC1DD3683F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARTrackedObject[]
struct ARTrackedObjectU5BU5D_t3F3B8C3773D65663DE544779B9C99390D9196137_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ARTrackedObjectU5BU5D_t3F3B8C3773D65663DE544779B9C99390D9196137_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ARTrackedObjectU5BU5D_t3F3B8C3773D65663DE544779B9C99390D9196137_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ARTrackedObjectU5BU5D_t3F3B8C3773D65663DE544779B9C99390D9196137_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ARTrackedObjectU5BU5D_t3F3B8C3773D65663DE544779B9C99390D9196137(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ARTrackedObjectU5BU5D_t3F3B8C3773D65663DE544779B9C99390D9196137_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ARTrackedObjectU5BU5D_t3F3B8C3773D65663DE544779B9C99390D9196137_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.AggregateException[]
struct AggregateExceptionU5BU5D_t114709DEEF6AEED60B1135B68200E12C6BC5776B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AggregateExceptionU5BU5D_t114709DEEF6AEED60B1135B68200E12C6BC5776B_ComCallableWrapper>, IIterable_1_tEFB55420CBE65269ECA8A590960747570852066C, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_tAA642575BEB0D66C37BB4D062D7F8C054CA4D786, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AggregateExceptionU5BU5D_t114709DEEF6AEED60B1135B68200E12C6BC5776B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AggregateExceptionU5BU5D_t114709DEEF6AEED60B1135B68200E12C6BC5776B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tEFB55420CBE65269ECA8A590960747570852066C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tEFB55420CBE65269ECA8A590960747570852066C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tAA642575BEB0D66C37BB4D062D7F8C054CA4D786::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tAA642575BEB0D66C37BB4D062D7F8C054CA4D786*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_tEFB55420CBE65269ECA8A590960747570852066C::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_tAA642575BEB0D66C37BB4D062D7F8C054CA4D786::IID;
		interfaceIds[4] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[5] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD97F8BF33D79041E27CFF07E7831EB386E2D25A6(IIterator_1_t6CA709084B8585944360F667796E8B3CE18951E0** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD97F8BF33D79041E27CFF07E7831EB386E2D25A6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2B78DF7E66A8C228CCD8CE9ECFE6BD7C4644842C(uint32_t ___index0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m2B78DF7E66A8C228CCD8CE9ECFE6BD7C4644842C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m5198DBCFCFD06417A1425547938B0A8BCA60B416(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m5198DBCFCFD06417A1425547938B0A8BCA60B416_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mB63EF6E9C0B2B511659D857293CB4D9FE84B2884(int32_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mB63EF6E9C0B2B511659D857293CB4D9FE84B2884_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mA155C651F2405E0CA29F891F68854FF37DC331E8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int32_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mA155C651F2405E0CA29F891F68854FF37DC331E8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AggregateExceptionU5BU5D_t114709DEEF6AEED60B1135B68200E12C6BC5776B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AggregateExceptionU5BU5D_t114709DEEF6AEED60B1135B68200E12C6BC5776B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AggregateExceptionU5BU5D_t114709DEEF6AEED60B1135B68200E12C6BC5776B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs[]
struct AnchorLocatedEventArgsU5BU5D_t8AF314B715BA3BD1F94037A2EB24ADB8681348C5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AnchorLocatedEventArgsU5BU5D_t8AF314B715BA3BD1F94037A2EB24ADB8681348C5_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AnchorLocatedEventArgsU5BU5D_t8AF314B715BA3BD1F94037A2EB24ADB8681348C5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AnchorLocatedEventArgsU5BU5D_t8AF314B715BA3BD1F94037A2EB24ADB8681348C5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AnchorLocatedEventArgsU5BU5D_t8AF314B715BA3BD1F94037A2EB24ADB8681348C5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AnchorLocatedEventArgsU5BU5D_t8AF314B715BA3BD1F94037A2EB24ADB8681348C5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AnchorLocatedEventArgsU5BU5D_t8AF314B715BA3BD1F94037A2EB24ADB8681348C5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.AndroidJavaClass[]
struct AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[4] = IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID;
		interfaceIds[5] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[4] = IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID;
		interfaceIds[5] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.AppBarButton[]
struct AppBarButtonU5BU5D_t2A54164DFF1A3F15F23297E42095F190D5BA2AB7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AppBarButtonU5BU5D_t2A54164DFF1A3F15F23297E42095F190D5BA2AB7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AppBarButtonU5BU5D_t2A54164DFF1A3F15F23297E42095F190D5BA2AB7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AppBarButtonU5BU5D_t2A54164DFF1A3F15F23297E42095F190D5BA2AB7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AppBarButtonU5BU5D_t2A54164DFF1A3F15F23297E42095F190D5BA2AB7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AppBarButtonU5BU5D_t2A54164DFF1A3F15F23297E42095F190D5BA2AB7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AppBarButtonU5BU5D_t2A54164DFF1A3F15F23297E42095F190D5BA2AB7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose[]
struct ArticulatedHandPoseU5BU5D_t68B97BC91578FB3FBB310BEAB3AA0693ED04806C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArticulatedHandPoseU5BU5D_t68B97BC91578FB3FBB310BEAB3AA0693ED04806C_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ArticulatedHandPoseU5BU5D_t68B97BC91578FB3FBB310BEAB3AA0693ED04806C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArticulatedHandPoseU5BU5D_t68B97BC91578FB3FBB310BEAB3AA0693ED04806C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArticulatedHandPoseU5BU5D_t68B97BC91578FB3FBB310BEAB3AA0693ED04806C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArticulatedHandPoseU5BU5D_t68B97BC91578FB3FBB310BEAB3AA0693ED04806C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArticulatedHandPoseU5BU5D_t68B97BC91578FB3FBB310BEAB3AA0693ED04806C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.AsyncOperation[]
struct AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.AttributeUsageAttribute[]
struct AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality[]
struct AudioLoFiSourceQualityU5BU5D_tDE81107D84FA2988CF7410AF74AC95CB4B1388C4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AudioLoFiSourceQualityU5BU5D_tDE81107D84FA2988CF7410AF74AC95CB4B1388C4_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AudioLoFiSourceQualityU5BU5D_tDE81107D84FA2988CF7410AF74AC95CB4B1388C4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AudioLoFiSourceQualityU5BU5D_tDE81107D84FA2988CF7410AF74AC95CB4B1388C4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AudioLoFiSourceQualityU5BU5D_tDE81107D84FA2988CF7410AF74AC95CB4B1388C4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AudioLoFiSourceQualityU5BU5D_tDE81107D84FA2988CF7410AF74AC95CB4B1388C4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AudioLoFiSourceQualityU5BU5D_tDE81107D84FA2988CF7410AF74AC95CB4B1388C4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Http.Headers.AuthenticationHeaderValue[]
struct AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.AxisType[]
struct AxisTypeU5BU5D_tEF3348B30D3BB9C966E8A2600635C1E6CA749D81_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AxisTypeU5BU5D_tEF3348B30D3BB9C966E8A2600635C1E6CA749D81_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AxisTypeU5BU5D_tEF3348B30D3BB9C966E8A2600635C1E6CA749D81_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AxisTypeU5BU5D_tEF3348B30D3BB9C966E8A2600635C1E6CA749D81_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AxisTypeU5BU5D_tEF3348B30D3BB9C966E8A2600635C1E6CA749D81(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AxisTypeU5BU5D_tEF3348B30D3BB9C966E8A2600635C1E6CA749D81_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AxisTypeU5BU5D_tEF3348B30D3BB9C966E8A2600635C1E6CA749D81_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.BaseController[]
struct BaseControllerU5BU5D_tE887C1A5016BEA531E8BAA813AE7D5AFD7CF7C7E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BaseControllerU5BU5D_tE887C1A5016BEA531E8BAA813AE7D5AFD7CF7C7E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BaseControllerU5BU5D_tE887C1A5016BEA531E8BAA813AE7D5AFD7CF7C7E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BaseControllerU5BU5D_tE887C1A5016BEA531E8BAA813AE7D5AFD7CF7C7E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BaseControllerU5BU5D_tE887C1A5016BEA531E8BAA813AE7D5AFD7CF7C7E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BaseControllerU5BU5D_tE887C1A5016BEA531E8BAA813AE7D5AFD7CF7C7E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BaseControllerU5BU5D_tE887C1A5016BEA531E8BAA813AE7D5AFD7CF7C7E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[]
struct BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper>, IVector_1_t3AC2680BA65E508568784202EDBE66AA4B9FDBD5, IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_t48259FE322824681F348D90FD4026837611A6741, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_t3AC2680BA65E508568784202EDBE66AA4B9FDBD5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t3AC2680BA65E508568784202EDBE66AA4B9FDBD5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t48259FE322824681F348D90FD4026837611A6741::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t48259FE322824681F348D90FD4026837611A6741*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(7);
		interfaceIds[0] = IVector_1_t3AC2680BA65E508568784202EDBE66AA4B9FDBD5::IID;
		interfaceIds[1] = IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4::IID;
		interfaceIds[4] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[5] = IReferenceArray_1_t48259FE322824681F348D90FD4026837611A6741::IID;
		interfaceIds[6] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 7;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mC72C7E4492535B801A9836EE9B294754AA15E4CC(uint32_t ___index0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mC72C7E4492535B801A9836EE9B294754AA15E4CC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m524C3F1DA919856922598A4F9F974E76762505F1(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m524C3F1DA919856922598A4F9F974E76762505F1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m9A4C974BF7C31CFB2CC06C51775F63E5159350E0(IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m9A4C974BF7C31CFB2CC06C51775F63E5159350E0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mA9C9AC4FE9777E80D36F86220C2A7251EA278D6D(bool ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mA9C9AC4FE9777E80D36F86220C2A7251EA278D6D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m6532677A8FFFC8BE39E4487E8B5B957DEB895258(uint32_t ___index0, bool ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m6532677A8FFFC8BE39E4487E8B5B957DEB895258_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mA71A9B77FAE574BBB3C8B8545D7D31AC6904F175(uint32_t ___index0, bool ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_mA71A9B77FAE574BBB3C8B8545D7D31AC6904F175_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mFB31764EA0E4A914AC690D50E107200DA8F477BD(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_mFB31764EA0E4A914AC690D50E107200DA8F477BD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_mC5076A05A69921B6EBDAF1281FF5561C9E9791B5(bool ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_mC5076A05A69921B6EBDAF1281FF5561C9E9791B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mE9D09CA75800B62324F89063623FC3566CBDFA76() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_mE9D09CA75800B62324F89063623FC3566CBDFA76_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mD2EC4E85D8B8C83D22294D25A576B428A27D5CD6() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mD2EC4E85D8B8C83D22294D25A576B428A27D5CD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mFAEFB6B3F4D153F96F9D9B3DAA2D33F732AD3365(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_mFAEFB6B3F4D153F96F9D9B3DAA2D33F732AD3365_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m410FDC792A0957EC89ABB07AD1555D630AAECAC2(uint32_t ___items0ArraySize, bool* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m410FDC792A0957EC89ABB07AD1555D630AAECAC2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB(IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m6F799ADF54AECADE79946CB6469CB6BF49B38135(uint32_t ___index0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m6F799ADF54AECADE79946CB6469CB6BF49B38135_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD8B6592916D3739AAC161FDA1D630543219E9D7D(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mD8B6592916D3739AAC161FDA1D630543219E9D7D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mA4B38845B990B4640F82CC8363BFB67E20945E9B(bool ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mA4B38845B990B4640F82CC8363BFB67E20945E9B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4340482DAAA20E17654D33CFD65BE7ED60A353C3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m4340482DAAA20E17654D33CFD65BE7ED60A353C3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mD17835FF1D2A2588B1182DDD078179FC94636E80(uint32_t* comReturnValueArraySize, bool** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* returnValue;
		try
		{
			returnValue = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		uint32_t _returnValue_marshaledArraySize = 0;
		bool* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<bool>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				(_returnValue_marshaled)[i] = (returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 1035;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Byte", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Int16", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "UInt16", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Int32", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "UInt32", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Int64", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "UInt64", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Single", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Double", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			____value0_empty = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<bool>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "String", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___value0)[i] = il2cpp_codegen_create_hstring((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Guid", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Bounds[]
struct BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper>, IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59, IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_t80CD13C8F5FD9D0C9F37FB41C9A0854230D759DE, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t80CD13C8F5FD9D0C9F37FB41C9A0854230D759DE::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t80CD13C8F5FD9D0C9F37FB41C9A0854230D759DE*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(7);
		interfaceIds[0] = IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59::IID;
		interfaceIds[1] = IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD::IID;
		interfaceIds[4] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[5] = IReferenceArray_1_t80CD13C8F5FD9D0C9F37FB41C9A0854230D759DE::IID;
		interfaceIds[6] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 7;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B(uint32_t ___index0, uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536(IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79(uint32_t ___index0, uint8_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818(uint32_t ___index0, uint8_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D(uint8_t ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B(uint32_t ___items0ArraySize, uint8_t* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB(uint32_t ___index0, uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mECA8C42F721DD0D91E170257E9DBC6C9746F8DEA(uint32_t* comReturnValueArraySize, uint8_t** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* returnValue;
		try
		{
			returnValue = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		uint32_t _returnValue_marshaledArraySize = 0;
		uint8_t* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				(_returnValue_marshaled)[i] = (returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 1025;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			____value0_empty = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int16_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToInt16_m134A951FF6D7DA4EECC86CB702A8B4DB2ADADDC8((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "Int16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Int16", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint16_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToUInt16_mCE446BE1A404904AEFD1DAB2706A4AF355186299((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "UInt16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "UInt16", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int32_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToInt32_m56A786C5BB3125C5C8ADAA2C40F28421959FBEB0((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "Int32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Int32", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint32_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToUInt32_m2D1C50FE2959C26DA3FA56BE5D91778B06F172C0((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "UInt32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "UInt32", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int64_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToInt64_m79BB20D0471F008EEFA00F72C560EF92BE8AB6BF((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "Int64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Int64", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint64_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToUInt64_mD29B4938670EA99ADE6DCA11ADA0E57EA9D5CEC7((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "UInt64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "UInt64", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					float il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToSingle_m5C04949AD8A80B18C9FF7895CB6DD9BD4ABF07CB((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "Single", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Single", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					double il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToDouble_mAF1EAA014190ACF0A646AEE270FC1BFAF28F20A7((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "Double", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Double", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "String", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___value0)[i] = il2cpp_codegen_create_hstring((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Guid", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Net.CFProxy[]
struct CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.CachedCodeEntry[]
struct CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Globalization.CalendarData[]
struct CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.CameraEvent[]
struct CameraEventU5BU5D_t1A45D6F41C599CA75F8AFD8EBC2ECC159554FB2E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CameraEventU5BU5D_t1A45D6F41C599CA75F8AFD8EBC2ECC159554FB2E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CameraEventU5BU5D_t1A45D6F41C599CA75F8AFD8EBC2ECC159554FB2E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CameraEventU5BU5D_t1A45D6F41C599CA75F8AFD8EBC2ECC159554FB2E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CameraEventU5BU5D_t1A45D6F41C599CA75F8AFD8EBC2ECC159554FB2E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CameraEventU5BU5D_t1A45D6F41C599CA75F8AFD8EBC2ECC159554FB2E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CameraEventU5BU5D_t1A45D6F41C599CA75F8AFD8EBC2ECC159554FB2E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.CancellationCallbackInfo[]
struct CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.CancellationToken[]
struct CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper>, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.CardinalAxisType[]
struct CardinalAxisTypeU5BU5D_t2B70BC449C0F5C340222214B476A331FE1FA6B61_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CardinalAxisTypeU5BU5D_t2B70BC449C0F5C340222214B476A331FE1FA6B61_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CardinalAxisTypeU5BU5D_t2B70BC449C0F5C340222214B476A331FE1FA6B61_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CardinalAxisTypeU5BU5D_t2B70BC449C0F5C340222214B476A331FE1FA6B61_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CardinalAxisTypeU5BU5D_t2B70BC449C0F5C340222214B476A331FE1FA6B61(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CardinalAxisTypeU5BU5D_t2B70BC449C0F5C340222214B476A331FE1FA6B61_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CardinalAxisTypeU5BU5D_t2B70BC449C0F5C340222214B476A331FE1FA6B61_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper>, IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_t44893C71B9484A1AC8DC0319C72EDF5595B377C2, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t44893C71B9484A1AC8DC0319C72EDF5595B377C2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t44893C71B9484A1AC8DC0319C72EDF5595B377C2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(7);
		interfaceIds[0] = IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D::IID;
		interfaceIds[1] = IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963::IID;
		interfaceIds[4] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[5] = IReferenceArray_1_t44893C71B9484A1AC8DC0319C72EDF5595B377C2::IID;
		interfaceIds[6] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 7;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04(uint32_t ___index0, Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849(IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94(uint32_t ___index0, Il2CppChar ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A(uint32_t ___index0, Il2CppChar ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32(Il2CppChar ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01(uint32_t ___items0ArraySize, Il2CppChar* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA(IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B(uint32_t ___index0, Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m099434DF042C31618026185DCA6449264AA5C40C(uint32_t* comReturnValueArraySize, Il2CppChar** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* returnValue;
		try
		{
			returnValue = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		uint32_t _returnValue_marshaledArraySize = 0;
		Il2CppChar* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppChar>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				(_returnValue_marshaled)[i] = (returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 1034;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Byte", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Int16", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "UInt16", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Int32", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "UInt32", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Int64", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "UInt64", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Single", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Double", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			____value0_empty = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppChar>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "String", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___value0)[i] = il2cpp_codegen_create_hstring((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Guid", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper(obj));
}

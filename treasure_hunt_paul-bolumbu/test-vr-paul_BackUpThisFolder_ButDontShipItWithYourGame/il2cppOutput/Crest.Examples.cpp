#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};

// System.Action`1<System.Char>
struct Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>
struct Action_1_tB4B0D0DB16148980518A9D58761727D77FA1F1D3;
// Crest.BufferedData`1<Crest.OceanRenderer/CascadeParams[]>
struct BufferedData_1_tA2B9AF1B9F94B2D04ED67A7730933FF6AE5A0D33;
// Crest.BufferedData`1<Crest.OceanRenderer/PerCascadeInstanceData[]>
struct BufferedData_1_t6511AA71A8F87E551CA0A64562026ACE1E80C3AB;
// Crest.BufferedData`1<UnityEngine.RenderTexture>
struct BufferedData_1_t4121EE112F0386FCFC5468EA30C7C2B81C947047;
// System.Collections.Generic.Dictionary`2<System.Type,Crest.CrestSortedList`2<System.Int32,Crest.ILodDataInput>>
struct Dictionary_2_t5CEC1333B28B1EFA01276B19817A62FAA67962F2;
// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
// System.Collections.Generic.List`1<Crest.ITimeProvider>
struct List_1_t24821AFD203F4329339F55C4D42A3923FE6F69C7;
// System.Collections.Generic.List`1<Crest.LodDataMgr>
struct List_1_tDBAC4AC69B305AD9E4C7EE41BF04E54E39224839;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Crest.OceanChunkRenderer>
struct List_1_t114EB57781BEEAD01C042DA2EBC678E20FA99DE4;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera>
struct UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`3<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor>
struct UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,UnityEngine.RenderTextureDescriptor>
struct UnityEvent_3_t440F33BAE98A1941D03E9314C64802D9DEF4A63E;
// System.Action`1<System.Char>[]
struct Action_1U5BU5D_t525E90B5D1212F32F34CD47670B3553347DFB133;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>[]
struct Action_1U5BU5D_t22E45C2BFF8C89B61E349730E6255288D35F6B88;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// UnityEngine.InputSystem.Controls.KeyControl[]
struct KeyControlU5BU5D_t247D92FAA9E46BA28BB54BB6E38E7F99BD2C02DA;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.InputSystem.Controls.AnyKeyControl
struct AnyKeyControl_t88E59A594CAF1E3A432C3BEC2634C0CA462D8A14;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// BoatAlignNormal
struct BoatAlignNormal_t6E11D51B1AF5C25C4D5B98B0DD8B3CA13F55D11A;
// Crest.BuildCommandBuffer
struct BuildCommandBuffer_tE8F792527F3BA32F62F2199F3B59AF4BBE404D37;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// CamController
struct CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
// UnityEngine.ComputeShader
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8;
// Crest.CustomMonoBehaviour
struct CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A;
// Crest.Examples.CustomPassForCamera
struct CustomPassForCamera_t317A1AB191553FFEEB99581632613AF97254A9AC;
// Crest.Examples.CustomPassForCameraBase
struct CustomPassForCameraBase_tAFD66BC5E3B96C581ABE9B77D5F6704405D6CB36;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.InputSystem.Controls.DeltaControl
struct DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B;
// Crest.Examples.ExamplesController
struct ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD;
// Crest.FloatingObjectBase
struct FloatingObjectBase_t22F5894E84CC2BF52F9B3581AA77DD57FFB721EA;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Crest.ICollProvider
struct ICollProvider_t10FA4798F00BB850E96620FE79A66486F60D53D1;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Crest.IFlowProvider
struct IFlowProvider_t1F211D30EBA314803E31F37BB1889C4EFA651FCB;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0;
// UnityEngine.InputSystem.Keyboard
struct Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43;
// LerpCam
struct LerpCam_tADAD9669F37763C184BBC57858A7CBC5EA8BCF12;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// Crest.LodDataMgrAlbedo
struct LodDataMgrAlbedo_t273790E80B632C1749E9DFB949D5AA29F887FCB6;
// Crest.LodDataMgrAnimWaves
struct LodDataMgrAnimWaves_t09E68698F1502C4427BC56A846787FF6896368EB;
// Crest.LodDataMgrClipSurface
struct LodDataMgrClipSurface_t75929BEBCAAFC7320E9091A13E351228D0D15E7B;
// Crest.LodDataMgrDynWaves
struct LodDataMgrDynWaves_t98E840A5D7D1E6F1295C22D1FA4B0B3FBA198A59;
// Crest.LodDataMgrFlow
struct LodDataMgrFlow_t785A29C667000531BCAB846F04F010E3FF0390C6;
// Crest.LodDataMgrFoam
struct LodDataMgrFoam_tE0C54155ED508AB41D7E279B77D8C4AE06FB1DF3;
// Crest.LodDataMgrSeaFloorDepth
struct LodDataMgrSeaFloorDepth_t0EA77350BF769B760DB419FA3978D2B31C7F06F7;
// Crest.LodDataMgrShadow
struct LodDataMgrShadow_tFB75EA4472C3E5B22A9E1107F82B22FEF93ECA43;
// Crest.LodTransform
struct LodTransform_tE0D8314E91ACD25878756025B5B92802CA0FAB12;
// Crest.Examples.MaskFill
struct MaskFill_t033838EC2EF42BFCC7DF377ED9BB6C042AA133C5;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Crest.OceanRenderer
struct OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA;
// OceanSampleDisplacementDemo
struct OceanSampleDisplacementDemo_tB3E058293C6295EF39BADE168D3DD35D87572ABC;
// OceanSampleHeightDemo
struct OceanSampleHeightDemo_t49EDF122C3E5ABDA35789E11AD2894A550FC6FFC;
// OceanSampleHeightEvents
struct OceanSampleHeightEvents_t1437FC62AE2049F084964630B2E08C4C34CF729F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A;
// Crest.PropertyWrapperCompute
struct PropertyWrapperCompute_t96C4BA3CCE98C5B357B63455365DDDCC9A7C2CE6;
// Crest.PropertyWrapperMaterial
struct PropertyWrapperMaterial_tB7343B0AFC6D473726FDB70C8D0A2306332B3252;
// RandomMotion
struct RandomMotion_t03B8E4D584482177E1E84BBD976D85D7E690311D;
// Crest.RegisterDynWavesInput
struct RegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// RippleGenerator
struct RippleGenerator_t1CE4717A67CA2FAF1154318B1A7371EA01EA091B;
// Crest.SampleFlowHelper
struct SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD;
// Crest.SampleHeightHelper
struct SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1;
// Crest.Examples.SendUnityEvent
struct SendUnityEvent_t8E045F4E225E560B25F20E21658FA48629CDD056;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// Crest.SimSettingsAlbedo
struct SimSettingsAlbedo_t90DF09ED58152EC0D8604FF46F17CFA52D729238;
// Crest.SimSettingsAnimatedWaves
struct SimSettingsAnimatedWaves_tF4CB0B118CBBD2F7EBD9CDC3AB8A0EB75D21A1EC;
// Crest.SimSettingsBase
struct SimSettingsBase_tFD8DF599BB7506D798651BE164B99A9B3EB8DBD7;
// Crest.SimSettingsClipSurface
struct SimSettingsClipSurface_t7EFE2F7BAD1F3CC4C306EAC31E50C9B83A195A8C;
// Crest.SimSettingsFlow
struct SimSettingsFlow_t52AF89C054BF7ACB2DB685ED69526F54E1B4A407;
// Crest.SimSettingsFoam
struct SimSettingsFoam_t60B4155BC202B6AB3275C4B9ADE9C6D6D87C9F82;
// Crest.SimSettingsSeaFloorDepth
struct SimSettingsSeaFloorDepth_t2F7EC02C550C4C77892FA39B7E07CB388FD4AB0D;
// Crest.SimSettingsShadow
struct SimSettingsShadow_t67BEC488D7CBE8A12EFF04B91F302ED01E900ACA;
// Crest.SimSettingsWave
struct SimSettingsWave_tC56E4FF9454B61960D3D717BD483CA5C4495CFBF;
// Crest.Examples.SimpleMotion
struct SimpleMotion_t0472D01378CC2F31677526927EE16571669B65DF;
// Sleeper
struct Sleeper_t89F7B924CD63360EB3955694F715414DCE0D4B44;
// System.String
struct String_t;
// Crest.TimeProviderBase
struct TimeProviderBase_t2F76B7877C6C70DA45ED279D127D794E6F6A919C;
// TimedDestroy
struct TimedDestroy_tEE6E1DE0F7DBDC7A9D5DBA0C7103BDE61C88A81C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Crest.UnderwaterEnvironmentalLighting
struct UnderwaterEnvironmentalLighting_tF196190867403B66CC73787E03C13973AE9D3C1B;
// Crest.UnderwaterRenderer
struct UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Crest.Whirlpool
struct Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1;
// CamController/DebugFields
struct DebugFields_tB4412D974DB6F50983C57BD238B339874A225296;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Crest.LodDataMgrAnimWaves/IShapeUpdatable
struct IShapeUpdatable_t819BFF6410C96EF8B399DD106E673136C2F91B2B;
// OceanSampleHeightEvents/FloatEvent
struct FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169;
// Crest.UnderwaterRenderer/DebugFields
struct DebugFields_t046C4E36EED7442D930F617EF56AB7FDA72A04DB;
// Crest.UnderwaterRenderer/UnderwaterSphericalHarmonicsData
struct UnderwaterSphericalHarmonicsData_t86561F9AF0CCD0FBABDE074B64AACB4E658E7864;

IL2CPP_EXTERN_C RuntimeClass* CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraEvent_tAB9B803B9C806EC265ADB328417F41AD0FBD10FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugFields_tB4412D974DB6F50983C57BD238B339874A225296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Helpers_t01E9EEB2D4EC7953953C9357D91255138B257FDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollProvider_t10FA4798F00BB850E96620FE79A66486F60D53D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LodDataMgrAnimWaves_t09E68698F1502C4427BC56A846787FF6896368EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LodDataMgrDynWaves_t98E840A5D7D1E6F1295C22D1FA4B0B3FBA198A59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OceanDebugGUI_tB30111A8CE1A6F1AFD9E65076E3E692DDE7979C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderIDs_t3EBCB88C28D9AE263AED0C8FD11495C603ECA68A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHelpers_t793B3975A8D08E7488CB3FF503C0E151BEF6742F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03B110474F335DD2CA2BD1A4A3547D70F7A2D6F2;
IL2CPP_EXTERN_C String_t* _stringLiteral0A1A55224B7BABBF7047B3E1F3E56812C3ED941D;
IL2CPP_EXTERN_C String_t* _stringLiteral320FF37A871E8B2AB5013C65917C3515559768AE;
IL2CPP_EXTERN_C String_t* _stringLiteral3AE8652EEC5E5B482C439831BAF827B4FD862923;
IL2CPP_EXTERN_C String_t* _stringLiteral4C2ABF26B92CA30505EC74359C788E9C9D1584BF;
IL2CPP_EXTERN_C String_t* _stringLiteral89236E989F7E771E738AD619BDA3A2B0F067A879;
IL2CPP_EXTERN_C String_t* _stringLiteral8F9025B1EAAB478EC849FFD95707CE66A7044676;
IL2CPP_EXTERN_C String_t* _stringLiteralBA82DBE87B2AF7AD0805CF0CD8A671AFB5B924C1;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA96DB2873B94243CCF355AC78E3B43876794EA;
IL2CPP_EXTERN_C String_t* _stringLiteralBDB0C13A5C02165B98A40244A06FD05BA671A296;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BBBF5F98498D0842E3656E4411052883A14AA8;
IL2CPP_EXTERN_C String_t* _stringLiteralCA2CAB91ABB3BC50F28A03E14171324A4C48E99C;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152;
IL2CPP_EXTERN_C String_t* _stringLiteralE8538748C90C8AA9862FF9C3ADBF8D99757DCA05;
IL2CPP_EXTERN_C String_t* _stringLiteralEA8F24493B16B68BA75B49964F7B381C56CEE80E;
IL2CPP_EXTERN_C String_t* _stringLiteralEE06B53F9B6FDDA6A65F38986E1BA6B03495562F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m1D22E7CA60B7DA94499EFF8D98588B2BD8950882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD_m8ED09576CE2D84CD6166683BD615B3F15DD0DB1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisRegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60_m310B08F5F2F9AAD988D7A33EA88EF6951FE0B990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomPassForCameraBase_OnBeforeRender_m17933A75A064B1296B46E9255B5B80E8E9C2410B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m50A5896C62B9ADBC7CDA569AED01965F732C0206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m952D668DE163B9341CCEDC01C0C12525996D6624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB3335A2F8C13E8560AD216C31C274039EAD6E5AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE9EB9A31EBEC90FA3E951E245AD2F4A3585DB16C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0E9B975BD111000DA67E4735FCB6FE908FAB1FF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6AB352F2089737A72DC284B801157073F82C1A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m3845C98317530A7E40923FA39BF1A75403AE5288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7D0CB3BF9DA3F624753AE63D1292B99B42AB4170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m89A1D216F94797F1BFBDD647E317B8389D495E99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m2C77306BF732CC3ECFDAA87D5DDA5DB760E34DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mBCA8A560A48536FD9751A4E7E0206748CCD2122D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_mDBC34075ABEA4C223FDB305E1CC0AB840C82BBEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m3F5625F3D5A5A996C685582541FC1248782B88E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Whirlpool_CreateOrDestroy_TisRegisterAnimWavesInput_t08A22C322A6ED424443677A9A2564E4C84CF28BA_m43581A117E583D8E22B4F677F78D3B6B50215180_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Whirlpool_CreateOrDestroy_TisRegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60_m23C88022CB83B158B6667B639ABE6A1CC584524A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Whirlpool_CreateOrDestroy_TisRegisterFlowInput_tB02D201593E576E4AFA603A6FA7AFA8960FB78BC_m4BDA149FBFBCC258DD4185D9C7593C7E53093917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CameraEvent_tAB9B803B9C806EC265ADB328417F41AD0FBD10FE_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t003792CF1CD25BE6952EBC398340D82442589842 
{
};

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// Crest.LodDataMgr
struct LodDataMgr_t0821C56EFC431BCD6BB76C1956CD09EBE5906102  : public RuntimeObject
{
	// UnityEngine.Experimental.Rendering.GraphicsFormat Crest.LodDataMgr::<CompatibleTextureFormat>k__BackingField
	int32_t ___U3CCompatibleTextureFormatU3Ek__BackingField_0;
	// Crest.BufferedData`1<UnityEngine.RenderTexture> Crest.LodDataMgr::_targets
	BufferedData_1_t4121EE112F0386FCFC5468EA30C7C2B81C947047* ____targets_5;
	// System.Int32 Crest.LodDataMgr::_shapeRes
	int32_t ____shapeRes_8;
	// System.Boolean Crest.LodDataMgr::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_9;
	// Crest.OceanRenderer Crest.LodDataMgr::_ocean
	OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* ____ocean_10;
	// Crest.SimSettingsBase Crest.LodDataMgr::_defaultSettings
	SimSettingsBase_tFD8DF599BB7506D798651BE164B99A9B3EB8DBD7* ____defaultSettings_11;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Crest.SampleFlowHelper
struct SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD  : public RuntimeObject
{
	// UnityEngine.Vector3[] Crest.SampleFlowHelper::_queryPos
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____queryPos_0;
	// UnityEngine.Vector3[] Crest.SampleFlowHelper::_queryResult
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____queryResult_1;
	// System.Single Crest.SampleFlowHelper::_minLength
	float ____minLength_2;
};

// Crest.SampleHeightHelper
struct SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1  : public RuntimeObject
{
	// UnityEngine.Vector3[] Crest.SampleHeightHelper::_queryPos
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____queryPos_0;
	// UnityEngine.Vector3[] Crest.SampleHeightHelper::_queryResult
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____queryResult_1;
	// UnityEngine.Vector3[] Crest.SampleHeightHelper::_queryResultNormal
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____queryResultNormal_2;
	// UnityEngine.Vector3[] Crest.SampleHeightHelper::_queryResultVel
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____queryResultVel_3;
	// System.Single Crest.SampleHeightHelper::_minLength
	float ____minLength_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// CamController/DebugFields
struct DebugFields_tB4412D974DB6F50983C57BD238B339874A225296  : public RuntimeObject
{
	// System.Boolean CamController/DebugFields::_enableCameraRoll
	bool ____enableCameraRoll_0;
	// System.Boolean CamController/DebugFields::_disableOcclusionMesh
	bool ____disableOcclusionMesh_1;
	// System.Single CamController/DebugFields::_occlusionMeshScale
	float ____occlusionMeshScale_2;
};

// Crest.Examples.MaskFill/ShaderIDs
struct ShaderIDs_t3EBCB88C28D9AE263AED0C8FD11495C603ECA68A  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Camera>
struct Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.MeshFilter>
struct Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____current_3;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>>
struct InlinedArray_1_t031A607559EE9F23E8BC012CD9661BFB3EB2BFC1 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t525E90B5D1212F32F34CD47670B3553347DFB133* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>>
struct InlinedArray_1_t8249EE706E2222F1A22F40FB70BEB230C11C5992 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tB4B0D0DB16148980518A9D58761727D77FA1F1D3* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t22E45C2BFF8C89B61E349730E6255288D35F6B88* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues_2;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera>
struct UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`3<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor>
struct UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// Crest.LodDataMgrPersistent
struct LodDataMgrPersistent_tA18BB297795A731C07B1E058E4D36E035E816725  : public LodDataMgr_t0821C56EFC431BCD6BB76C1956CD09EBE5906102
{
	// UnityEngine.RenderTexture Crest.LodDataMgrPersistent::_sources
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____sources_12;
	// Crest.PropertyWrapperCompute Crest.LodDataMgrPersistent::_renderSimProperties
	PropertyWrapperCompute_t96C4BA3CCE98C5B357B63455365DDDCC9A7C2CE6* ____renderSimProperties_13;
	// System.Int32 Crest.LodDataMgrPersistent::sp_LD_TexArray_Target
	int32_t ___sp_LD_TexArray_Target_14;
	// UnityEngine.ComputeShader Crest.LodDataMgrPersistent::_shader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ____shader_15;
	// System.Single Crest.LodDataMgrPersistent::_substepDtPrevious
	float ____substepDtPrevious_16;
	// System.Int32 Crest.LodDataMgrPersistent::sp_SimDeltaTime
	int32_t ___sp_SimDeltaTime_17;
	// System.Int32 Crest.LodDataMgrPersistent::sp_SimDeltaTimePrev
	int32_t ___sp_SimDeltaTimePrev_18;
	// System.Boolean Crest.LodDataMgrPersistent::_needsPrewarmingThisStep
	bool ____needsPrewarmingThisStep_19;
	// System.Single Crest.LodDataMgrPersistent::_timeToSimulate
	float ____timeToSimulate_20;
	// System.Int32 Crest.LodDataMgrPersistent::<LastUpdateSubstepCount>k__BackingField
	int32_t ___U3CLastUpdateSubstepCountU3Ek__BackingField_21;
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

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// Crest.LodDataMgr/TextureArrayParamIds
struct TextureArrayParamIds_tB43DBEBB0F65BC448FA49E94688E66B7D462EEEC 
{
	// System.Int32 Crest.LodDataMgr/TextureArrayParamIds::_paramId
	int32_t ____paramId_0;
	// System.Int32 Crest.LodDataMgr/TextureArrayParamIds::_paramId_Source
	int32_t ____paramId_Source_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
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

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;
};

// Crest.LodDataMgrDynWaves
struct LodDataMgrDynWaves_t98E840A5D7D1E6F1295C22D1FA4B0B3FBA198A59  : public LodDataMgrPersistent_tA18BB297795A731C07B1E058E4D36E035E816725
{
	// System.Boolean Crest.LodDataMgrDynWaves::_rotateLaplacian
	bool ____rotateLaplacian_22;
	// System.Boolean[] Crest.LodDataMgrDynWaves::_active
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____active_26;
	// System.Int32 Crest.LodDataMgrDynWaves::sp_HorizDisplace
	int32_t ___sp_HorizDisplace_27;
	// System.Int32 Crest.LodDataMgrDynWaves::sp_DisplaceClamp
	int32_t ___sp_DisplaceClamp_28;
	// System.Int32 Crest.LodDataMgrDynWaves::sp_Damping
	int32_t ___sp_Damping_29;
	// System.Int32 Crest.LodDataMgrDynWaves::sp_Gravity
	int32_t ___sp_Gravity_30;
	// System.Int32 Crest.LodDataMgrDynWaves::sp_CourantNumber
	int32_t ___sp_CourantNumber_31;
	// System.Int32 Crest.LodDataMgrDynWaves::sp_AttenuationInShallows
	int32_t ___sp_AttenuationInShallows_32;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// OceanSampleHeightEvents/FloatEvent
struct FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType_23;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	float ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	float ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices_40;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Crest.SimSettingsBase
struct SimSettingsBase_tFD8DF599BB7506D798651BE164B99A9B3EB8DBD7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7  : public InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A
{
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_30;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_31;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_32;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_33;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_34;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_35;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_36;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_37;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_38;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.Keyboard
struct Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.AnyKeyControl UnityEngine.InputSystem.Keyboard::<anyKey>k__BackingField
	AnyKeyControl_t88E59A594CAF1E3A432C3BEC2634C0CA462D8A14* ___U3CanyKeyU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<shiftKey>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CshiftKeyU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<ctrlKey>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CctrlKeyU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<altKey>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CaltKeyU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<imeSelected>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CimeSelectedU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>> UnityEngine.InputSystem.Keyboard::m_TextInputListeners
	InlinedArray_1_t031A607559EE9F23E8BC012CD9661BFB3EB2BFC1 ___m_TextInputListeners_51;
	// System.String UnityEngine.InputSystem.Keyboard::m_KeyboardLayoutName
	String_t* ___m_KeyboardLayoutName_52;
	// UnityEngine.InputSystem.Controls.KeyControl[] UnityEngine.InputSystem.Keyboard::m_Keys
	KeyControlU5BU5D_t247D92FAA9E46BA28BB54BB6E38E7F99BD2C02DA* ___m_Keys_53;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>> UnityEngine.InputSystem.Keyboard::m_ImeCompositionListeners
	InlinedArray_1_t8249EE706E2222F1A22F40FB70BEB230C11C5992 ___m_ImeCompositionListeners_54;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<position>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CpositionU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.DeltaControl UnityEngine.InputSystem.Pointer::<delta>k__BackingField
	DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* ___U3CdeltaU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<radius>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CradiusU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Pointer::<pressure>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpressureU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pointer::<press>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CpressU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Pointer::<displayIndex>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CdisplayIndexU3Ek__BackingField_49;
};

// Crest.SimSettingsWave
struct SimSettingsWave_tC56E4FF9454B61960D3D717BD483CA5C4495CFBF  : public SimSettingsBase_tFD8DF599BB7506D798651BE164B99A9B3EB8DBD7
{
	// System.Int32 Crest.SimSettingsWave::_version
	int32_t ____version_4;
	// System.Single Crest.SimSettingsWave::_minGridSize
	float ____minGridSize_6;
	// System.Single Crest.SimSettingsWave::_maxGridSize
	float ____maxGridSize_7;
	// System.Single Crest.SimSettingsWave::_simulationFrequency
	float ____simulationFrequency_8;
	// System.Single Crest.SimSettingsWave::_damping
	float ____damping_9;
	// System.Single Crest.SimSettingsWave::_courantNumber
	float ____courantNumber_10;
	// System.Single Crest.SimSettingsWave::_attenuationInShallows
	float ____attenuationInShallows_11;
	// System.Single Crest.SimSettingsWave::_horizDisplace
	float ____horizDisplace_12;
	// System.Single Crest.SimSettingsWave::_displaceClamp
	float ____displaceClamp_13;
	// System.Single Crest.SimSettingsWave::_gravityMultiplier
	float ____gravityMultiplier_14;
};

// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432  : public InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_29;
};

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF  : public AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_39;
};

// CamController
struct CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 CamController::_version
	int32_t ____version_4;
	// System.Single CamController::linSpeed
	float ___linSpeed_5;
	// System.Single CamController::rotSpeed
	float ___rotSpeed_6;
	// System.Boolean CamController::simForwardInput
	bool ___simForwardInput_7;
	// System.Boolean CamController::_requireLMBToMove
	bool ____requireLMBToMove_8;
	// UnityEngine.Vector2 CamController::_lastMousePos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____lastMousePos_9;
	// System.Boolean CamController::_dragging
	bool ____dragging_10;
	// System.Single CamController::_fixedDt
	float ____fixedDt_11;
	// UnityEngine.Transform CamController::_targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____targetTransform_12;
	// UnityEngine.Camera CamController::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_13;
	// CamController/DebugFields CamController::_debug
	DebugFields_tB4412D974DB6F50983C57BD238B339874A225296* ____debug_14;
};

// Crest.CustomMonoBehaviour
struct CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LerpCam
struct LerpCam_tADAD9669F37763C184BBC57858A7CBC5EA8BCF12  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LerpCam::_version
	int32_t ____version_4;
	// System.Single LerpCam::_lerpAlpha
	float ____lerpAlpha_5;
	// UnityEngine.Transform LerpCam::_targetPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____targetPos_6;
	// UnityEngine.Transform LerpCam::_targetLookatPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____targetLookatPos_7;
	// System.Single LerpCam::_lookatOffset
	float ____lookatOffset_8;
	// System.Single LerpCam::_minHeightAboveWater
	float ____minHeightAboveWater_9;
	// Crest.SampleHeightHelper LerpCam::_sampleHeightHelper
	SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* ____sampleHeightHelper_10;
};

// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F  : public Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A
{
	// UnityEngine.InputSystem.Controls.DeltaControl UnityEngine.InputSystem.Mouse::<scroll>k__BackingField
	DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* ___U3CscrollU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<leftButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftButtonU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<middleButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CmiddleButtonU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<rightButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightButtonU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<backButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbackButtonU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<forwardButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CforwardButtonU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Mouse::<clickCount>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CclickCountU3Ek__BackingField_57;
};

// OceanSampleDisplacementDemo
struct OceanSampleDisplacementDemo_tB3E058293C6295EF39BADE168D3DD35D87572ABC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 OceanSampleDisplacementDemo::_version
	int32_t ____version_4;
	// System.Boolean OceanSampleDisplacementDemo::_trackCamera
	bool ____trackCamera_5;
	// System.Single OceanSampleDisplacementDemo::_minGridSize
	float ____minGridSize_6;
	// UnityEngine.GameObject[] OceanSampleDisplacementDemo::_markerObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____markerObjects_7;
	// UnityEngine.Vector3[] OceanSampleDisplacementDemo::_markerPos
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____markerPos_8;
	// UnityEngine.Vector3[] OceanSampleDisplacementDemo::_resultDisps
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____resultDisps_9;
	// UnityEngine.Vector3[] OceanSampleDisplacementDemo::_resultNorms
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____resultNorms_10;
	// UnityEngine.Vector3[] OceanSampleDisplacementDemo::_resultVels
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____resultVels_11;
	// System.Single OceanSampleDisplacementDemo::_samplesRadius
	float ____samplesRadius_12;
};

// OceanSampleHeightDemo
struct OceanSampleHeightDemo_t49EDF122C3E5ABDA35789E11AD2894A550FC6FFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 OceanSampleHeightDemo::_version
	int32_t ____version_4;
	// Crest.SampleHeightHelper OceanSampleHeightDemo::_sampleHeightHelper
	SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* ____sampleHeightHelper_5;
};

// RandomMotion
struct RandomMotion_t03B8E4D584482177E1E84BBD976D85D7E690311D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 RandomMotion::_version
	int32_t ____version_4;
	// UnityEngine.Vector3 RandomMotion::_axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____axis_5;
	// UnityEngine.Vector3 RandomMotion::_orthoAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____orthoAxis_6;
	// System.Single RandomMotion::_amplitude
	float ____amplitude_7;
	// System.Single RandomMotion::_freq
	float ____freq_8;
	// System.Single RandomMotion::_orthogonalMotion
	float ____orthogonalMotion_9;
	// System.Single RandomMotion::_rotationFreq
	float ____rotationFreq_10;
	// System.Single RandomMotion::_rotationVel
	float ____rotationVel_11;
	// UnityEngine.Vector3 RandomMotion::_origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____origin_12;
};

// RippleGenerator
struct RippleGenerator_t1CE4717A67CA2FAF1154318B1A7371EA01EA091B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 RippleGenerator::_version
	int32_t ____version_4;
	// System.Boolean RippleGenerator::_animate
	bool ____animate_5;
	// System.Single RippleGenerator::_warmUp
	float ____warmUp_6;
	// System.Single RippleGenerator::_onTime
	float ____onTime_7;
	// System.Single RippleGenerator::_period
	float ____period_8;
	// UnityEngine.Renderer RippleGenerator::_rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____rend_9;
	// UnityEngine.MaterialPropertyBlock RippleGenerator::_mpb
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ____mpb_10;
	// Crest.RegisterDynWavesInput RippleGenerator::_rdwi
	RegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60* ____rdwi_11;
};

// Crest.Examples.SendUnityEvent
struct SendUnityEvent_t8E045F4E225E560B25F20E21658FA48629CDD056  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent Crest.Examples.SendUnityEvent::_onEnable
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onEnable_4;
	// UnityEngine.Events.UnityEvent Crest.Examples.SendUnityEvent::_onDisable
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onDisable_5;
	// UnityEngine.Events.UnityEvent`1<System.Single> Crest.Examples.SendUnityEvent::_onUpdate
	UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* ____onUpdate_6;
	// System.Single Crest.Examples.SendUnityEvent::_timeSinceEnabled
	float ____timeSinceEnabled_7;
};

// Sleeper
struct Sleeper_t89F7B924CD63360EB3955694F715414DCE0D4B44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Sleeper::_version
	int32_t ____version_4;
	// System.Int32 Sleeper::_sleepMs
	int32_t ____sleepMs_5;
	// System.Boolean Sleeper::_jitter
	bool ____jitter_6;
	// System.Int32 Sleeper::_sleepStride
	int32_t ____sleepStride_7;
};

// TimedDestroy
struct TimedDestroy_tEE6E1DE0F7DBDC7A9D5DBA0C7103BDE61C88A81C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TimedDestroy::_version
	int32_t ____version_4;
	// System.Single TimedDestroy::m_lifeTime
	float ___m_lifeTime_5;
	// System.Single TimedDestroy::m_scaleToZeroDuration
	float ___m_scaleToZeroDuration_6;
	// UnityEngine.Vector3 TimedDestroy::m_scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_scale_7;
	// System.Single TimedDestroy::m_birthTime
	float ___m_birthTime_8;
};

// Crest.Examples.CustomPassForCameraBase
struct CustomPassForCameraBase_tAFD66BC5E3B96C581ABE9B77D5F6704405D6CB36  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
	// System.Int32 Crest.Examples.CustomPassForCameraBase::_currentEvent
	int32_t ____currentEvent_4;
	// UnityEngine.Rendering.CommandBuffer Crest.Examples.CustomPassForCameraBase::_buffer
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ____buffer_5;
	// System.Collections.Generic.List`1<UnityEngine.Camera> Crest.Examples.CustomPassForCameraBase::_cameras
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ____cameras_6;
};

// Crest.Examples.ExamplesController
struct ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
	// UnityEngine.KeyCode Crest.Examples.ExamplesController::_previous
	int32_t ____previous_4;
	// UnityEngine.KeyCode Crest.Examples.ExamplesController::_next
	int32_t ____next_5;
};

// Crest.FloatingObjectBase
struct FloatingObjectBase_t22F5894E84CC2BF52F9B3581AA77DD57FFB721EA  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
};

// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0  : public ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF
{
	// UnityEngine.InputSystem.Key UnityEngine.InputSystem.Controls.KeyControl::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_43;
	// System.Int32 UnityEngine.InputSystem.Controls.KeyControl::m_ScanCode
	int32_t ___m_ScanCode_44;
};

// Crest.Examples.MaskFill
struct MaskFill_t033838EC2EF42BFCC7DF377ED9BB6C042AA133C5  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> Crest.Examples.MaskFill::_meshes
	List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ____meshes_4;
	// UnityEngine.Material Crest.Examples.MaskFill::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_5;
	// UnityEngine.RenderTexture Crest.Examples.MaskFill::_texture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____texture_6;
	// UnityEngine.Rendering.RenderTargetIdentifier Crest.Examples.MaskFill::_target
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ____target_7;
};

// Crest.OceanRenderer
struct OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
	// System.Int32 Crest.OceanRenderer::_version
	int32_t ____version_4;
	// System.Single Crest.OceanRenderer::_globalWindSpeed
	float ____globalWindSpeed_5;
	// UnityEngine.Transform Crest.OceanRenderer::_viewpoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____viewpoint_6;
	// UnityEngine.Camera Crest.OceanRenderer::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_7;
	// System.Single Crest.OceanRenderer::_teleportThreshold
	float ____teleportThreshold_8;
	// System.Single Crest.OceanRenderer::_teleportTimerForHeightQueries
	float ____teleportTimerForHeightQueries_9;
	// System.Boolean Crest.OceanRenderer::_isFirstFrameSinceEnabled
	bool ____isFirstFrameSinceEnabled_10;
	// System.Boolean Crest.OceanRenderer::_hasTeleportedThisFrame
	bool ____hasTeleportedThisFrame_11;
	// UnityEngine.Vector3 Crest.OceanRenderer::_oldViewerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____oldViewerPosition_12;
	// UnityEngine.Transform Crest.OceanRenderer::<Root>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CRootU3Ek__BackingField_13;
	// System.Collections.Generic.List`1<Crest.ITimeProvider> Crest.OceanRenderer::_timeProviderStack
	List_1_t24821AFD203F4329339F55C4D42A3923FE6F69C7* ____timeProviderStack_14;
	// Crest.TimeProviderBase Crest.OceanRenderer::_timeProvider
	TimeProviderBase_t2F76B7877C6C70DA45ED279D127D794E6F6A919C* ____timeProvider_15;
	// UnityEngine.Light Crest.OceanRenderer::_primaryLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ____primaryLight_16;
	// System.Boolean Crest.OceanRenderer::_searchForPrimaryLightOnStartup
	bool ____searchForPrimaryLightOnStartup_17;
	// UnityEngine.Material Crest.OceanRenderer::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_18;
	// UnityEngine.GameObject Crest.OceanRenderer::_waterTilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____waterTilePrefab_19;
	// System.String Crest.OceanRenderer::_layerName
	String_t* ____layerName_20;
	// System.Int32 Crest.OceanRenderer::_layer
	int32_t ____layer_21;
	// System.Single Crest.OceanRenderer::_gravityMultiplier
	float ____gravityMultiplier_22;
	// System.Boolean Crest.OceanRenderer::_waterBodyCulling
	bool ____waterBodyCulling_23;
	// System.Single Crest.OceanRenderer::_minScale
	float ____minScale_24;
	// System.Single Crest.OceanRenderer::_maxScale
	float ____maxScale_25;
	// System.Single Crest.OceanRenderer::_dropDetailHeightBasedOnWaves
	float ____dropDetailHeightBasedOnWaves_26;
	// System.Int32 Crest.OceanRenderer::_lodDataResolution
	int32_t ____lodDataResolution_27;
	// System.Int32 Crest.OceanRenderer::_geometryDownSampleFactor
	int32_t ____geometryDownSampleFactor_28;
	// System.Int32 Crest.OceanRenderer::_lodCount
	int32_t ____lodCount_29;
	// System.Single Crest.OceanRenderer::_extentsSizeMultiplier
	float ____extentsSizeMultiplier_30;
	// Crest.SimSettingsAnimatedWaves Crest.OceanRenderer::_simSettingsAnimatedWaves
	SimSettingsAnimatedWaves_tF4CB0B118CBBD2F7EBD9CDC3AB8A0EB75D21A1EC* ____simSettingsAnimatedWaves_31;
	// System.Boolean Crest.OceanRenderer::_createSeaFloorDepthData
	bool ____createSeaFloorDepthData_32;
	// Crest.SimSettingsSeaFloorDepth Crest.OceanRenderer::_simSettingsSeaFloorDepth
	SimSettingsSeaFloorDepth_t2F7EC02C550C4C77892FA39B7E07CB388FD4AB0D* ____simSettingsSeaFloorDepth_33;
	// System.Boolean Crest.OceanRenderer::_createFoamSim
	bool ____createFoamSim_34;
	// Crest.SimSettingsFoam Crest.OceanRenderer::_simSettingsFoam
	SimSettingsFoam_t60B4155BC202B6AB3275C4B9ADE9C6D6D87C9F82* ____simSettingsFoam_35;
	// System.Boolean Crest.OceanRenderer::_createDynamicWaveSim
	bool ____createDynamicWaveSim_36;
	// Crest.SimSettingsWave Crest.OceanRenderer::_simSettingsDynamicWaves
	SimSettingsWave_tC56E4FF9454B61960D3D717BD483CA5C4495CFBF* ____simSettingsDynamicWaves_37;
	// System.Boolean Crest.OceanRenderer::_createFlowSim
	bool ____createFlowSim_38;
	// Crest.SimSettingsFlow Crest.OceanRenderer::_simSettingsFlow
	SimSettingsFlow_t52AF89C054BF7ACB2DB685ED69526F54E1B4A407* ____simSettingsFlow_39;
	// System.Boolean Crest.OceanRenderer::_createShadowData
	bool ____createShadowData_40;
	// Crest.SimSettingsShadow Crest.OceanRenderer::_simSettingsShadow
	SimSettingsShadow_t67BEC488D7CBE8A12EFF04B91F302ED01E900ACA* ____simSettingsShadow_41;
	// System.Boolean Crest.OceanRenderer::_createClipSurfaceData
	bool ____createClipSurfaceData_42;
	// Crest.SimSettingsClipSurface Crest.OceanRenderer::_simSettingsClipSurface
	SimSettingsClipSurface_t7EFE2F7BAD1F3CC4C306EAC31E50C9B83A195A8C* ____simSettingsClipSurface_43;
	// Crest.OceanRenderer/DefaultClippingState Crest.OceanRenderer::_defaultClippingState
	int32_t ____defaultClippingState_44;
	// System.Boolean Crest.OceanRenderer::_createAlbedoData
	bool ____createAlbedoData_45;
	// Crest.SimSettingsAlbedo Crest.OceanRenderer::_settingsAlbedo
	SimSettingsAlbedo_t90DF09ED58152EC0D8604FF46F17CFA52D729238* ____settingsAlbedo_46;
	// Crest.OceanRenderer/SurfaceSelfIntersectionFixMode Crest.OceanRenderer::_surfaceSelfIntersectionFixMode
	int32_t ____surfaceSelfIntersectionFixMode_47;
	// System.Single Crest.OceanRenderer::_underwaterCullLimit
	float ____underwaterCullLimit_48;
	// System.Boolean Crest.OceanRenderer::_showOceanProxyPlane
	bool ____showOceanProxyPlane_51;
	// System.Single Crest.OceanRenderer::_editModeFPS
	float ____editModeFPS_52;
	// System.Boolean Crest.OceanRenderer::_followSceneCamera
	bool ____followSceneCamera_53;
	// System.Boolean Crest.OceanRenderer::_heightQueries
	bool ____heightQueries_54;
	// System.Boolean Crest.OceanRenderer::_forceBatchMode
	bool ____forceBatchMode_55;
	// System.Boolean Crest.OceanRenderer::_forceNoGPU
	bool ____forceNoGPU_56;
	// System.Boolean Crest.OceanRenderer::_attachDebugGUI
	bool ____attachDebugGUI_57;
	// System.Boolean Crest.OceanRenderer::_followViewpoint
	bool ____followViewpoint_58;
	// System.Boolean Crest.OceanRenderer::_hideOceanTileGameObjects
	bool ____hideOceanTileGameObjects_59;
	// System.Boolean Crest.OceanRenderer::_uniformTiles
	bool ____uniformTiles_60;
	// System.Boolean Crest.OceanRenderer::_disableSkirt
	bool ____disableSkirt_61;
	// System.Single Crest.OceanRenderer::<Scale>k__BackingField
	float ___U3CScaleU3Ek__BackingField_62;
	// System.Single Crest.OceanRenderer::<ViewerAltitudeLevelAlpha>k__BackingField
	float ___U3CViewerAltitudeLevelAlphaU3Ek__BackingField_63;
	// Crest.LodTransform Crest.OceanRenderer::_lodTransform
	LodTransform_tE0D8314E91ACD25878756025B5B92802CA0FAB12* ____lodTransform_64;
	// Crest.LodDataMgrAnimWaves Crest.OceanRenderer::_lodDataAnimWaves
	LodDataMgrAnimWaves_t09E68698F1502C4427BC56A846787FF6896368EB* ____lodDataAnimWaves_65;
	// Crest.LodDataMgrSeaFloorDepth Crest.OceanRenderer::_lodDataSeaDepths
	LodDataMgrSeaFloorDepth_t0EA77350BF769B760DB419FA3978D2B31C7F06F7* ____lodDataSeaDepths_66;
	// Crest.LodDataMgrClipSurface Crest.OceanRenderer::_lodDataClipSurface
	LodDataMgrClipSurface_t75929BEBCAAFC7320E9091A13E351228D0D15E7B* ____lodDataClipSurface_67;
	// Crest.LodDataMgrDynWaves Crest.OceanRenderer::_lodDataDynWaves
	LodDataMgrDynWaves_t98E840A5D7D1E6F1295C22D1FA4B0B3FBA198A59* ____lodDataDynWaves_68;
	// Crest.LodDataMgrFlow Crest.OceanRenderer::_lodDataFlow
	LodDataMgrFlow_t785A29C667000531BCAB846F04F010E3FF0390C6* ____lodDataFlow_69;
	// Crest.LodDataMgrFoam Crest.OceanRenderer::_lodDataFoam
	LodDataMgrFoam_tE0C54155ED508AB41D7E279B77D8C4AE06FB1DF3* ____lodDataFoam_70;
	// Crest.LodDataMgrShadow Crest.OceanRenderer::_lodDataShadow
	LodDataMgrShadow_tFB75EA4472C3E5B22A9E1107F82B22FEF93ECA43* ____lodDataShadow_71;
	// Crest.LodDataMgrAlbedo Crest.OceanRenderer::_lodDataAlbedo
	LodDataMgrAlbedo_t273790E80B632C1749E9DFB949D5AA29F887FCB6* ____lodDataAlbedo_72;
	// System.Single Crest.OceanRenderer::<ViewerHeightAboveWater>k__BackingField
	float ___U3CViewerHeightAboveWaterU3Ek__BackingField_73;
	// UnityEngine.Vector3 Crest.OceanRenderer::<UnderwaterDepthFogDensity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CUnderwaterDepthFogDensityU3Ek__BackingField_74;
	// System.Collections.Generic.List`1<Crest.LodDataMgr> Crest.OceanRenderer::_lodDatas
	List_1_tDBAC4AC69B305AD9E4C7EE41BF04E54E39224839* ____lodDatas_75;
	// System.Collections.Generic.List`1<Crest.OceanChunkRenderer> Crest.OceanRenderer::_oceanChunkRenderers
	List_1_t114EB57781BEEAD01C042DA2EBC678E20FA99DE4* ____oceanChunkRenderers_76;
	// System.Single Crest.OceanRenderer::_viewerHeightAboveWaterSmooth
	float ____viewerHeightAboveWaterSmooth_77;
	// Crest.SampleHeightHelper Crest.OceanRenderer::_sampleHeightHelper
	SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* ____sampleHeightHelper_78;
	// System.Int32 Crest.OceanRenderer::_generatedSettingsHash
	int32_t ____generatedSettingsHash_80;
	// System.Single Crest.OceanRenderer::_lodAlphaBlackPointFade
	float ____lodAlphaBlackPointFade_81;
	// System.Single Crest.OceanRenderer::_lodAlphaBlackPointWhitePointFade
	float ____lodAlphaBlackPointWhitePointFade_82;
	// System.Boolean Crest.OceanRenderer::_canSkipCulling
	bool ____canSkipCulling_83;
	// Crest.BuildCommandBuffer Crest.OceanRenderer::_commandbufferBuilder
	BuildCommandBuffer_tE8F792527F3BA32F62F2199F3B59AF4BBE404D37* ____commandbufferBuilder_98;
	// UnityEngine.ComputeBuffer Crest.OceanRenderer::_bufCascadeDataTgt
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ____bufCascadeDataTgt_99;
	// UnityEngine.ComputeBuffer Crest.OceanRenderer::_bufCascadeDataSrc
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ____bufCascadeDataSrc_100;
	// UnityEngine.ComputeBuffer Crest.OceanRenderer::_bufPerCascadeInstanceData
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ____bufPerCascadeInstanceData_101;
	// UnityEngine.ComputeBuffer Crest.OceanRenderer::_bufPerCascadeInstanceDataSource
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ____bufPerCascadeInstanceDataSource_102;
	// Crest.BufferedData`1<Crest.OceanRenderer/CascadeParams[]> Crest.OceanRenderer::_cascadeParams
	BufferedData_1_tA2B9AF1B9F94B2D04ED67A7730933FF6AE5A0D33* ____cascadeParams_103;
	// Crest.BufferedData`1<Crest.OceanRenderer/PerCascadeInstanceData[]> Crest.OceanRenderer::_perCascadeInstanceData
	BufferedData_1_t6511AA71A8F87E551CA0A64562026ACE1E80C3AB* ____perCascadeInstanceData_104;
	// System.Int32 Crest.OceanRenderer::<BufferSize>k__BackingField
	int32_t ___U3CBufferSizeU3Ek__BackingField_105;
	// System.Single Crest.OceanRenderer::_maxHorizDispFromShape
	float ____maxHorizDispFromShape_106;
	// System.Single Crest.OceanRenderer::_maxVertDispFromShape
	float ____maxVertDispFromShape_107;
	// System.Single Crest.OceanRenderer::_maxVertDispFromWaves
	float ____maxVertDispFromWaves_108;
	// System.Int32 Crest.OceanRenderer::_maxDisplacementCachedTime
	int32_t ____maxDisplacementCachedTime_109;
	// Crest.ICollProvider Crest.OceanRenderer::<CollisionProvider>k__BackingField
	RuntimeObject* ___U3CCollisionProviderU3Ek__BackingField_110;
	// Crest.IFlowProvider Crest.OceanRenderer::<FlowProvider>k__BackingField
	RuntimeObject* ___U3CFlowProviderU3Ek__BackingField_111;
};

// OceanSampleHeightEvents
struct OceanSampleHeightEvents_t1437FC62AE2049F084964630B2E08C4C34CF729F  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
	// System.Int32 OceanSampleHeightEvents::_version
	int32_t ____version_4;
	// System.Single OceanSampleHeightEvents::_minimumWaveLength
	float ____minimumWaveLength_5;
	// System.Boolean OceanSampleHeightEvents::_normaliseDistance
	bool ____normaliseDistance_6;
	// System.Single OceanSampleHeightEvents::_maximumDistance
	float ____maximumDistance_7;
	// UnityEngine.AnimationCurve OceanSampleHeightEvents::_distanceCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____distanceCurve_8;
	// UnityEngine.Events.UnityEvent OceanSampleHeightEvents::_onBelowOceanSurface
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onBelowOceanSurface_9;
	// UnityEngine.Events.UnityEvent OceanSampleHeightEvents::_onAboveOceanSurface
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onAboveOceanSurface_10;
	// OceanSampleHeightEvents/FloatEvent OceanSampleHeightEvents::_distanceFromOceanSurface
	FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169* ____distanceFromOceanSurface_11;
	// System.Boolean OceanSampleHeightEvents::_isAboveSurface
	bool ____isAboveSurface_12;
	// System.Boolean OceanSampleHeightEvents::_isFirstUpdate
	bool ____isFirstUpdate_13;
	// Crest.SampleHeightHelper OceanSampleHeightEvents::_sampleHeightHelper
	SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* ____sampleHeightHelper_14;
};

// Crest.RegisterLodDataInputBase
struct RegisterLodDataInputBase_tB16C256E7F239743EAF8D19B5D145F0BDA168796  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
	// UnityEngine.Renderer Crest.RegisterLodDataInputBase::_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____renderer_8;
	// UnityEngine.Material Crest.RegisterLodDataInputBase::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_9;
	// System.Collections.Generic.List`1<UnityEngine.Material> Crest.RegisterLodDataInputBase::_sharedMaterials
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ____sharedMaterials_10;
	// Crest.SampleHeightHelper Crest.RegisterLodDataInputBase::_sampleHelper
	SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* ____sampleHelper_11;
};

// Crest.Examples.SimpleMotion
struct SimpleMotion_t0472D01378CC2F31677526927EE16571669B65DF  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
	// System.Int32 Crest.Examples.SimpleMotion::_version
	int32_t ____version_4;
	// System.Boolean Crest.Examples.SimpleMotion::_resetOnDisable
	bool ____resetOnDisable_5;
	// UnityEngine.Vector3 Crest.Examples.SimpleMotion::_velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____velocity_6;
	// UnityEngine.Vector3 Crest.Examples.SimpleMotion::_angularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____angularVelocity_7;
	// UnityEngine.Vector3 Crest.Examples.SimpleMotion::_oldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____oldPosition_8;
	// UnityEngine.Quaternion Crest.Examples.SimpleMotion::_oldRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____oldRotation_9;
};

// Crest.UnderwaterEnvironmentalLighting
struct UnderwaterEnvironmentalLighting_tF196190867403B66CC73787E03C13973AE9D3C1B  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
	// System.Int32 Crest.UnderwaterEnvironmentalLighting::_version
	int32_t ____version_4;
	// System.Single Crest.UnderwaterEnvironmentalLighting::_weight
	float ____weight_5;
	// UnityEngine.Light Crest.UnderwaterEnvironmentalLighting::_primaryLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ____primaryLight_6;
	// System.Single Crest.UnderwaterEnvironmentalLighting::_lightIntensity
	float ____lightIntensity_7;
	// System.Single Crest.UnderwaterEnvironmentalLighting::_ambientIntensity
	float ____ambientIntensity_8;
	// System.Single Crest.UnderwaterEnvironmentalLighting::_reflectionIntensity
	float ____reflectionIntensity_9;
	// System.Single Crest.UnderwaterEnvironmentalLighting::_fogDensity
	float ____fogDensity_10;
	// System.Single Crest.UnderwaterEnvironmentalLighting::_averageDensity
	float ____averageDensity_11;
	// System.Boolean Crest.UnderwaterEnvironmentalLighting::_isInitialised
	bool ____isInitialised_13;
};

// Crest.UnderwaterRenderer
struct UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
	// System.Int32 Crest.UnderwaterRenderer::_version
	int32_t ____version_4;
	// Crest.UnderwaterRenderer/Mode Crest.UnderwaterRenderer::_mode
	int32_t ____mode_8;
	// System.Int32 Crest.UnderwaterRenderer::_filterOceanData
	int32_t ____filterOceanData_9;
	// System.Boolean Crest.UnderwaterRenderer::_meniscus
	bool ____meniscus_10;
	// System.Single Crest.UnderwaterRenderer::_depthFogDensityFactor
	float ____depthFogDensityFactor_11;
	// UnityEngine.MeshFilter Crest.UnderwaterRenderer::_volumeGeometry
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____volumeGeometry_12;
	// System.Boolean Crest.UnderwaterRenderer::_invertCulling
	bool ____invertCulling_13;
	// System.Boolean Crest.UnderwaterRenderer::_enableShaderAPI
	bool ____enableShaderAPI_14;
	// System.Boolean Crest.UnderwaterRenderer::_copyOceanMaterialParamsEachFrame
	bool ____copyOceanMaterialParamsEachFrame_15;
	// System.Single Crest.UnderwaterRenderer::_farPlaneMultiplier
	float ____farPlaneMultiplier_16;
	// Crest.UnderwaterRenderer/DebugFields Crest.UnderwaterRenderer::_debug
	DebugFields_t046C4E36EED7442D930F617EF56AB7FDA72A04DB* ____debug_17;
	// UnityEngine.Camera Crest.UnderwaterRenderer::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_18;
	// System.Boolean Crest.UnderwaterRenderer::_firstRender
	bool ____firstRender_19;
	// UnityEngine.Matrix4x4 Crest.UnderwaterRenderer::_gpuInverseViewProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____gpuInverseViewProjectionMatrix_20;
	// UnityEngine.Matrix4x4 Crest.UnderwaterRenderer::_gpuInverseViewProjectionMatrixRight
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____gpuInverseViewProjectionMatrixRight_21;
	// System.Boolean Crest.UnderwaterRenderer::_currentEnableShaderAPI
	bool ____currentEnableShaderAPI_23;
	// Crest.SampleHeightHelper Crest.UnderwaterRenderer::_sampleHeightHelper
	SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* ____sampleHeightHelper_27;
	// System.Single Crest.UnderwaterRenderer::_heightAboveWater
	float ____heightAboveWater_28;
	// UnityEngine.Rendering.CommandBuffer Crest.UnderwaterRenderer::_underwaterEffectCommandBuffer
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ____underwaterEffectCommandBuffer_33;
	// Crest.PropertyWrapperMaterial Crest.UnderwaterRenderer::_underwaterEffectMaterial
	PropertyWrapperMaterial_tB7343B0AFC6D473726FDB70C8D0A2306332B3252* ____underwaterEffectMaterial_34;
	// UnityEngine.Material Crest.UnderwaterRenderer::_currentOceanMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____currentOceanMaterial_35;
	// Crest.UnderwaterRenderer/UnderwaterSphericalHarmonicsData Crest.UnderwaterRenderer::_sphericalHarmonicsData
	UnderwaterSphericalHarmonicsData_t86561F9AF0CCD0FBABDE074B64AACB4E658E7864* ____sphericalHarmonicsData_36;
	// UnityEngine.Rendering.RenderTargetIdentifier Crest.UnderwaterRenderer::_colorTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ____colorTarget_37;
	// UnityEngine.Rendering.RenderTargetIdentifier Crest.UnderwaterRenderer::_depthStencilTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ____depthStencilTarget_38;
	// UnityEngine.Rendering.RenderTargetIdentifier Crest.UnderwaterRenderer::_maskTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ____maskTarget_48;
	// UnityEngine.Rendering.RenderTargetIdentifier Crest.UnderwaterRenderer::_depthTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ____depthTarget_49;
	// UnityEngine.Plane[] Crest.UnderwaterRenderer::_cameraFrustumPlanes
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ____cameraFrustumPlanes_50;
	// UnityEngine.Rendering.CommandBuffer Crest.UnderwaterRenderer::_oceanMaskCommandBuffer
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ____oceanMaskCommandBuffer_51;
	// Crest.PropertyWrapperMaterial Crest.UnderwaterRenderer::_oceanMaskMaterial
	PropertyWrapperMaterial_tB7343B0AFC6D473726FDB70C8D0A2306332B3252* ____oceanMaskMaterial_52;
	// UnityEngine.Material Crest.UnderwaterRenderer::_volumeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____volumeMaterial_53;
	// UnityEngine.Rendering.RenderTargetIdentifier Crest.UnderwaterRenderer::_volumeBackFaceTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ____volumeBackFaceTarget_54;
	// UnityEngine.Rendering.RenderTargetIdentifier Crest.UnderwaterRenderer::_volumeFrontFaceTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ____volumeFrontFaceTarget_55;
	// UnityEngine.RenderTexture Crest.UnderwaterRenderer::_maskRT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____maskRT_56;
	// UnityEngine.RenderTexture Crest.UnderwaterRenderer::_depthRT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____depthRT_57;
	// UnityEngine.RenderTexture Crest.UnderwaterRenderer::_volumeFrontFaceRT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____volumeFrontFaceRT_58;
	// UnityEngine.RenderTexture Crest.UnderwaterRenderer::_volumeBackFaceRT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____volumeBackFaceRT_59;
	// UnityEngine.ComputeShader Crest.UnderwaterRenderer::_fixMaskComputeShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ____fixMaskComputeShader_60;
	// System.Int32 Crest.UnderwaterRenderer::_fixMaskKernel
	int32_t ____fixMaskKernel_61;
	// System.UInt32 Crest.UnderwaterRenderer::_fixMaskThreadGroupSizeX
	uint32_t ____fixMaskThreadGroupSizeX_62;
	// System.UInt32 Crest.UnderwaterRenderer::_fixMaskThreadGroupSizeY
	uint32_t ____fixMaskThreadGroupSizeY_63;
};

// Crest.Whirlpool
struct Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1  : public CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A
{
	// System.Int32 Crest.Whirlpool::_version
	int32_t ____version_4;
	// System.Single Crest.Whirlpool::_amplitude
	float ____amplitude_5;
	// System.Single Crest.Whirlpool::_radius
	float ____radius_6;
	// System.Single Crest.Whirlpool::_eyeRadius
	float ____eyeRadius_7;
	// System.Single Crest.Whirlpool::_maxSpeed
	float ____maxSpeed_8;
	// System.Boolean Crest.Whirlpool::_createDisplacement
	bool ____createDisplacement_9;
	// System.Boolean Crest.Whirlpool::_createFlow
	bool ____createFlow_10;
	// System.Boolean Crest.Whirlpool::_createDynWavesDampen
	bool ____createDynWavesDampen_11;
	// UnityEngine.Material Crest.Whirlpool::_flowMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____flowMaterial_12;
	// UnityEngine.Material Crest.Whirlpool::_displacementMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____displacementMaterial_13;
	// UnityEngine.Material Crest.Whirlpool::_dampDynWavesMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____dampDynWavesMaterial_14;
	// UnityEngine.GameObject Crest.Whirlpool::_displacementInput
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____displacementInput_15;
	// UnityEngine.GameObject Crest.Whirlpool::_flowInput
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____flowInput_16;
	// UnityEngine.GameObject Crest.Whirlpool::_dynamicWavesInput
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____dynamicWavesInput_17;
};

// Crest.RegisterLodDataInput`1<Crest.LodDataMgrDynWaves>
struct RegisterLodDataInput_1_tD56284B8A9ECF8A992BB70957E6921B359DB099A  : public RegisterLodDataInputBase_tB16C256E7F239743EAF8D19B5D145F0BDA168796
{
	// System.Boolean Crest.RegisterLodDataInput`1::_disableRenderer
	bool ____disableRenderer_14;
	// System.Int32 Crest.RegisterLodDataInput`1::_registeredQueueValue
	int32_t ____registeredQueueValue_15;
};

// BoatAlignNormal
struct BoatAlignNormal_t6E11D51B1AF5C25C4D5B98B0DD8B3CA13F55D11A  : public FloatingObjectBase_t22F5894E84CC2BF52F9B3581AA77DD57FFB721EA
{
	// System.Int32 BoatAlignNormal::_version
	int32_t ____version_4;
	// System.Single BoatAlignNormal::_bottomH
	float ____bottomH_5;
	// System.Single BoatAlignNormal::_buoyancyCoeff
	float ____buoyancyCoeff_6;
	// System.Single BoatAlignNormal::_boyancyTorque
	float ____boyancyTorque_7;
	// System.Single BoatAlignNormal::_accelerateDownhill
	float ____accelerateDownhill_8;
	// System.Single BoatAlignNormal::_maximumBuoyancyForce
	float ____maximumBuoyancyForce_9;
	// System.Single BoatAlignNormal::_forceHeightOffset
	float ____forceHeightOffset_10;
	// System.Single BoatAlignNormal::_enginePower
	float ____enginePower_11;
	// System.Single BoatAlignNormal::_turnPower
	float ____turnPower_12;
	// System.Single BoatAlignNormal::_boatWidth
	float ____boatWidth_13;
	// System.Boolean BoatAlignNormal::_useBoatLength
	bool ____useBoatLength_14;
	// System.Single BoatAlignNormal::_boatLength
	float ____boatLength_15;
	// System.Single BoatAlignNormal::_dragInWaterUp
	float ____dragInWaterUp_16;
	// System.Single BoatAlignNormal::_dragInWaterRight
	float ____dragInWaterRight_17;
	// System.Single BoatAlignNormal::_dragInWaterForward
	float ____dragInWaterForward_18;
	// System.Boolean BoatAlignNormal::_playerControlled
	bool ____playerControlled_19;
	// System.Single BoatAlignNormal::_throttleBias
	float ____throttleBias_20;
	// System.Single BoatAlignNormal::_steerBias
	float ____steerBias_21;
	// System.Boolean BoatAlignNormal::_debugDraw
	bool ____debugDraw_22;
	// System.Boolean BoatAlignNormal::_inWater
	bool ____inWater_23;
	// UnityEngine.Rigidbody BoatAlignNormal::_rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rb_24;
	// Crest.SampleHeightHelper BoatAlignNormal::_sampleHeightHelper
	SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* ____sampleHeightHelper_25;
	// Crest.SampleHeightHelper BoatAlignNormal::_sampleHeightHelperLengthwise
	SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* ____sampleHeightHelperLengthwise_26;
	// Crest.SampleFlowHelper BoatAlignNormal::_sampleFlowHelper
	SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD* ____sampleFlowHelper_27;
};

// Crest.Examples.CustomPassForCamera
struct CustomPassForCamera_t317A1AB191553FFEEB99581632613AF97254A9AC  : public CustomPassForCameraBase_tAFD66BC5E3B96C581ABE9B77D5F6704405D6CB36
{
	// UnityEngine.Rendering.CameraEvent Crest.Examples.CustomPassForCamera::_event
	int32_t ____event_7;
	// UnityEngine.Events.UnityEvent`3<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor> Crest.Examples.CustomPassForCamera::_onExecute
	UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA* ____onExecute_8;
	// UnityEngine.Events.UnityEvent`2<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera> Crest.Examples.CustomPassForCamera::_onClear
	UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192* ____onClear_9;
};

// Crest.RegisterDynWavesInput
struct RegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60  : public RegisterLodDataInput_1_tD56284B8A9ECF8A992BB70957E6921B359DB099A
{
	// System.Int32 Crest.RegisterDynWavesInput::_version
	int32_t ____version_16;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Camera>

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// Crest.SampleFlowHelper

// Crest.SampleFlowHelper

// Crest.SampleHeightHelper

// Crest.SampleHeightHelper

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// CamController/DebugFields

// CamController/DebugFields

// Crest.Examples.MaskFill/ShaderIDs
struct ShaderIDs_t3EBCB88C28D9AE263AED0C8FD11495C603ECA68A_StaticFields
{
	// System.Int32 Crest.Examples.MaskFill/ShaderIDs::s_FillTexture
	int32_t ___s_FillTexture_0;
};

// Crest.Examples.MaskFill/ShaderIDs

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Camera>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Camera>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.MeshFilter>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.MeshFilter>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`2<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera>

// UnityEngine.Events.UnityEvent`2<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera>

// UnityEngine.Events.UnityEvent`3<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor>

// UnityEngine.Events.UnityEvent`3<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.RenderTextureDescriptor

// UnityEngine.RenderTextureDescriptor

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Rendering.CommandBuffer

// UnityEngine.Rendering.CommandBuffer

// System.Delegate

// System.Delegate

// Crest.LodDataMgrDynWaves
struct LodDataMgrDynWaves_t98E840A5D7D1E6F1295C22D1FA4B0B3FBA198A59_StaticFields
{
	// System.String Crest.LodDataMgrDynWaves::s_textureArrayName
	String_t* ___s_textureArrayName_33;
	// Crest.LodDataMgr/TextureArrayParamIds Crest.LodDataMgrDynWaves::s_textureArrayParamIds
	TextureArrayParamIds_tB43DBEBB0F65BC448FA49E94688E66B7D462EEEC ___s_textureArrayParamIds_34;
};

// Crest.LodDataMgrDynWaves

// UnityEngine.MaterialPropertyBlock

// UnityEngine.MaterialPropertyBlock

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Rendering.RenderTargetIdentifier

// UnityEngine.Rendering.RenderTargetIdentifier

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// OceanSampleHeightEvents/FloatEvent

// OceanSampleHeightEvents/FloatEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.Shader

// UnityEngine.Shader

// System.Type
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

// System.Type

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Camera/CameraCallback

// UnityEngine.Camera/CameraCallback

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.InputSystem.Keyboard
struct Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_StaticFields
{
	// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::<current>k__BackingField
	Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* ___U3CcurrentU3Ek__BackingField_50;
};

// UnityEngine.InputSystem.Keyboard

// UnityEngine.Light

// UnityEngine.Light

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_StaticFields
{
	// UnityEngine.InputSystem.Pointer UnityEngine.InputSystem.Pointer::<current>k__BackingField
	Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* ___U3CcurrentU3Ek__BackingField_50;
};

// UnityEngine.InputSystem.Pointer

// Crest.SimSettingsWave

// Crest.SimSettingsWave

// UnityEngine.InputSystem.Controls.Vector2Control

// UnityEngine.InputSystem.Controls.Vector2Control

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_StaticFields
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_40;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_41;
};

// UnityEngine.InputSystem.Controls.ButtonControl

// CamController

// CamController

// Crest.CustomMonoBehaviour

// Crest.CustomMonoBehaviour

// LerpCam

// LerpCam

// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields
{
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::<current>k__BackingField
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___U3CcurrentU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::s_PlatformMouseDevice
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___s_PlatformMouseDevice_59;
};

// UnityEngine.InputSystem.Mouse

// OceanSampleDisplacementDemo

// OceanSampleDisplacementDemo

// OceanSampleHeightDemo

// OceanSampleHeightDemo

// RandomMotion

// RandomMotion

// RippleGenerator

// RippleGenerator

// Crest.Examples.SendUnityEvent

// Crest.Examples.SendUnityEvent

// Sleeper

// Sleeper

// TimedDestroy

// TimedDestroy

// Crest.Examples.CustomPassForCameraBase

// Crest.Examples.CustomPassForCameraBase

// Crest.Examples.ExamplesController

// Crest.Examples.ExamplesController

// Crest.FloatingObjectBase

// Crest.FloatingObjectBase

// UnityEngine.InputSystem.Controls.KeyControl

// UnityEngine.InputSystem.Controls.KeyControl

// Crest.Examples.MaskFill

// Crest.Examples.MaskFill

// Crest.OceanRenderer
struct OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_StaticFields
{
	// Crest.OceanRenderer Crest.OceanRenderer::<Instance>k__BackingField
	OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* ___U3CInstanceU3Ek__BackingField_79;
	// System.Int32 Crest.OceanRenderer::sp_oceanCenterPosWorld
	int32_t ___sp_oceanCenterPosWorld_84;
	// System.Int32 Crest.OceanRenderer::sp_crestTime
	int32_t ___sp_crestTime_85;
	// System.Int32 Crest.OceanRenderer::sp_perCascadeInstanceData
	int32_t ___sp_perCascadeInstanceData_86;
	// System.Int32 Crest.OceanRenderer::sp_CrestPerCascadeInstanceDataSource
	int32_t ___sp_CrestPerCascadeInstanceDataSource_87;
	// System.Int32 Crest.OceanRenderer::sp_cascadeData
	int32_t ___sp_cascadeData_88;
	// System.Int32 Crest.OceanRenderer::sp_CrestCascadeDataSource
	int32_t ___sp_CrestCascadeDataSource_89;
	// System.Int32 Crest.OceanRenderer::sp_CrestLodChange
	int32_t ___sp_CrestLodChange_90;
	// System.Int32 Crest.OceanRenderer::sp_meshScaleLerp
	int32_t ___sp_meshScaleLerp_91;
	// System.Int32 Crest.OceanRenderer::sp_sliceCount
	int32_t ___sp_sliceCount_92;
	// System.Int32 Crest.OceanRenderer::sp_clipByDefault
	int32_t ___sp_clipByDefault_93;
	// System.Int32 Crest.OceanRenderer::sp_lodAlphaBlackPointFade
	int32_t ___sp_lodAlphaBlackPointFade_94;
	// System.Int32 Crest.OceanRenderer::sp_lodAlphaBlackPointWhitePointFade
	int32_t ___sp_lodAlphaBlackPointWhitePointFade_95;
	// System.Int32 Crest.OceanRenderer::sp_CrestDepthTextureOffset
	int32_t ___sp_CrestDepthTextureOffset_96;
	// System.Int32 Crest.OceanRenderer::sp_CrestForceUnderwater
	int32_t ___sp_CrestForceUnderwater_97;
};

// Crest.OceanRenderer

// OceanSampleHeightEvents

// OceanSampleHeightEvents

// Crest.Examples.SimpleMotion

// Crest.Examples.SimpleMotion

// Crest.UnderwaterEnvironmentalLighting

// Crest.UnderwaterEnvironmentalLighting

// Crest.UnderwaterRenderer
struct UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF_StaticFields
{
	// System.Int32 Crest.UnderwaterRenderer::s_xrPassIndex
	int32_t ___s_xrPassIndex_22;
	// Crest.UnderwaterRenderer Crest.UnderwaterRenderer::<Instance>k__BackingField
	UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF* ___U3CInstanceU3Ek__BackingField_24;
	// UnityEngine.Camera Crest.UnderwaterRenderer::s_PrimaryCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___s_PrimaryCamera_25;
	// System.Int32 Crest.UnderwaterRenderer::s_InstancesCount
	int32_t ___s_InstancesCount_26;
};

// Crest.UnderwaterRenderer

// Crest.Whirlpool

// Crest.Whirlpool

// BoatAlignNormal

// BoatAlignNormal

// Crest.Examples.CustomPassForCamera

// Crest.Examples.CustomPassForCamera

// Crest.RegisterDynWavesInput

// Crest.RegisterDynWavesInput
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___0_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method) ;
// System.Void Crest.Whirlpool::CreateOrDestroy<System.Object>(System.Boolean,System.String,UnityEngine.GameObject&,UnityEngine.Material&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_CreateOrDestroy_TisRuntimeObject_m1FB534D59022A71A5C458C7D20CA4AD1F7C58B76_gshared (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, bool ___0_toggle, String_t* ___1_shaderName, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___2_input, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_material, const RuntimeMethod* method) ;
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
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,UnityEngine.RenderTextureDescriptor>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_mFAD41DA3FD859EFDE53DA40314708A673C69648D_gshared (UnityEvent_3_t440F33BAE98A1941D03E9314C64802D9DEF4A63E* __this, RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___2_arg2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,UnityEngine.RenderTextureDescriptor>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m7DA7836C0FC0D067F9FFBE2A9CC412A7A07DD73D_gshared (UnityEvent_3_t440F33BAE98A1941D03E9314C64802D9DEF4A63E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Crest.OceanRenderer Crest.OceanRenderer::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Crest.SampleHeightHelper::Init(UnityEngine.Vector3,System.Single,System.Boolean,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleHeightHelper_Init_mFBB6B140575288F0009EC8D262F93FE88C212258 (SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_i_queryPos, float ___1_i_minLength, bool ___2_allowMultipleCallsPerFrame, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___3_context, const RuntimeMethod* method) ;
// System.Single Crest.OceanRenderer::get_SeaLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OceanRenderer_get_SeaLevel_m708EC6ECDFDA744AAA8246BF2DD627EFF3F35024 (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) ;
// System.Boolean Crest.SampleHeightHelper::Sample(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SampleHeightHelper_Sample_m2550AEDDDFD64E4AFF8148E965650B2DE77E8161 (SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_o_displacementToPoint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_o_normal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_o_surfaceVel, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void Crest.VisualiseCollisionArea::DebugDrawCross(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualiseCollisionArea_DebugDrawCross_mB51E5ABF3C6DB88D888786CB42BFD09D24C63FA0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_up, float ___2_r, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_col, float ___4_duration, const RuntimeMethod* method) ;
// System.Void Crest.SampleFlowHelper::Init(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFlowHelper_Init_m9FD26F1A667E7D608FF567425780410623E22082 (SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_i_queryPos, float ___1_i_minLength, const RuntimeMethod* method) ;
// System.Boolean Crest.SampleFlowHelper::Sample(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SampleFlowHelper_Sample_m559FF71365C4C55522FE2099C5ABBCA55D756919 (SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_o_flow, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, int32_t ___2_mode, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isFocused_mFEEC52E355AA7AAA6B7250520CA544D80BE77524 (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_wKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_wKey_m007A60195D3D483BA82BFD9B8650F326E2C58805 (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6 (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_sKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_sKey_m2830A1BAA36CADA4783EFD815216A637363F1AB4 (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_aKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_aKey_m532122A52C670F95ADC84B56A4DD32160DD1E7CB (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_dKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_dKey_m0973269D5752E5EEA607BAFB24B39AD9F45122DC (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_torque, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void BoatAlignNormal::FixedUpdateOrientation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoatAlignNormal_FixedUpdateOrientation_m89B7A281A28930A0F8CEFE00A41DCE3757B2B70D (BoatAlignNormal_t6E11D51B1AF5C25C4D5B98B0DD8B3CA13F55D11A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_normalSideways, const RuntimeMethod* method) ;
// System.Boolean Crest.SampleHeightHelper::Sample(System.Single&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SampleHeightHelper_Sample_mD397EADE69F49C8DF06D91C40CBEBB3E0E9367C5 (SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* __this, float* ___0_o_height, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_o_normal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void Crest.SampleHeightHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleHeightHelper__ctor_m25E4C8B3553A29E39CCCC49B2203EE612D781825 (SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* __this, const RuntimeMethod* method) ;
// System.Void Crest.SampleFlowHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFlowHelper__ctor_m97D79538AE5D9B405A008FA838CAE1769412627C (SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD* __this, const RuntimeMethod* method) ;
// System.Void Crest.FloatingObjectBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingObjectBase__ctor_mD18A5DE73D44C9FE09DEB1DA7C556FDF45224058 (FloatingObjectBase_t22F5894E84CC2BF52F9B3581AA77DD57FFB721EA* __this, const RuntimeMethod* method) ;
// System.Boolean Crest.SampleHeightHelper::Sample(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SampleHeightHelper_Sample_m7CCA76E801D160404EB59417169323D068BE61FE (SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* __this, float* ___0_o_height, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single Crest.OceanRenderer::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OceanRenderer_get_DeltaTime_mE2F4AB9A57EBDAB7CDCEAFBFD4B88CFA42574B36 (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<Crest.RegisterDynWavesInput>(T&)
inline bool Component_TryGetComponent_TisRegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60_m310B08F5F2F9AAD988D7A33EA88EF6951FE0B990 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Boolean Crest.OceanRenderer::get_CreateDynamicWaveSim()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OceanRenderer_get_CreateDynamicWaveSim_mEA55ACCC9E3319537F5BABB742DE5324DDF44026_inline (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Single Crest.OceanRenderer::get_CurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OceanRenderer_get_CurrentTime_m28DB747522BBC61720DA0A9BCD61C02289EBF9F1 (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_size, const RuntimeMethod* method) ;
// System.Int32 Crest.LodDataMgrAnimWaves::SuggestDataLOD(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LodDataMgrAnimWaves_SuggestDataLOD_m7BCF0B1A633EFA5B23FA26CF68D9AC53DD3C05B2 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_sampleAreaXZ, const RuntimeMethod* method) ;
// System.Void Crest.LodDataMgrDynWaves::CountWaveSims(System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LodDataMgrDynWaves_CountWaveSims_m31DB3746F4AD3BC14DAF5D234D5F1E72155B8036 (int32_t ___0_countFrom, int32_t* ___1_o_present, int32_t* ___2_o_active, const RuntimeMethod* method) ;
// Crest.SimSettingsWave Crest.LodDataMgrDynWaves::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimSettingsWave_tC56E4FF9454B61960D3D717BD483CA5C4495CFBF* LodDataMgrDynWaves_get_Settings_m918100414D12C83F5188585AFA3BFD2A214E7BF6 (LodDataMgrDynWaves_t98E840A5D7D1E6F1295C22D1FA4B0B3FBA198A59* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_properties, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetFloat_m49458EDC57C2B431D765FE7414F18918AD619888 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_properties, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Camera>(T&)
inline bool Component_TryGetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m1D22E7CA60B7DA94499EFF8D98588B2BD8950882 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Boolean UnityEngine.XR.XRSettings::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSettings_get_enabled_mC22ABF5BF7D835DAB861A1FA384DBB8904D15E70 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.XRSettings::set_useOcclusionMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSettings_set_useOcclusionMesh_m0FECDD87F3C902210458D21E5404910D5917EF52 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.XRSettings::set_occlusionMaskScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSettings_set_occlusionMaskScale_mFB321295E98DE1A01268FABCCB167CC2DCD8157E (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void CamController::UpdateMovement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamController_UpdateMovement_m6C987C3807FF853D48E81B430DDBD46FE67ADCF0 (CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE* __this, float ___0_dt, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243 (const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void CamController::UpdateDragging(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamController_UpdateDragging_mAA989DD2722D386E7C66DD822C4C534A53F3D146 (CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE* __this, float ___0_dt, const RuntimeMethod* method) ;
// System.Void CamController::UpdateKillRoll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamController_UpdateKillRoll_m5EDB0E07FCA909BADFF525BF4985307FDAF86607 (CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRSettings::get_useOcclusionMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSettings_get_useOcclusionMesh_mE22A93654132323381A6D7C7C24CB5DAFF5371D9 (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::get_leftButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* Mouse_get_leftButton_m1015BCBE6BE30B1D1D2702736A4E64120F6B5DFB_inline (Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_leftShiftKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_leftShiftKey_mD0E48DA49D8EE54E82721974646BAD69B9B1457C (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_eKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_eKey_mC0BD3EF3515DE5B2445BFF7B353CD7EDF80E94C1 (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_qKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_qKey_mE507B4932B15ADA03A98B1CFA2483C9CA8DF56F4 (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_rightArrowKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_rightArrowKey_mECEFE3645349708104CB154806BD4F04F24B3439 (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_leftArrowKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_leftArrowKey_m892B16258F44B124B9ECC1D6F0EB53E9947597EB (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline (Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541 (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasPressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Camera_get_rect_m848C23B32814D1351E43F0A0110DB8ECA19C6772 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToViewportPoint_m8907015773080F63D1034CEDEDEA4AF14FB2F3C5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mB1160CD465F3E9616AA4EED72AFFD611BD8D2B6B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Boolean Crest.OceanDebugGUI::OverGUI(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OceanDebugGUI_OverGUI_m36B4E578D589AACEDEF10B94B13E36209F57F79B (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPosition, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasReleasedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasReleasedThisFrame_m492DB9A10A1EED0FACE2330E230A6DF7650EEC7D (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void CamController/DebugFields::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugFields__ctor_m3EE8584CE2E9C6DB49E1F7FCE5661C2D9280ADA6 (DebugFields_tB4412D974DB6F50983C57BD238B339874A225296* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// Crest.ICollProvider Crest.OceanRenderer::get_CollisionProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OceanRenderer_get_CollisionProvider_mF92D16873C96007516EDF7F243C05E8AE6A376A7_inline (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___0_type, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m8FB0C8DDC2C39DA046D90357EB6732CE2163AAE4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Events.UnityEventBase::GetPersistentEventCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityEventBase_GetPersistentEventCount_mB1902016BED421E36781F7169554C7CF554430AF (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___0_arg0, method);
}
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AnimationCurve_Linear_mAB497B8B64A4B1C8AC9547B2F5184DB118F544EB (float ___0_timeStart, float ___1_valueStart, float ___2_timeEnd, float ___3_valueEnd, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void OceanSampleHeightEvents/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m7E6AE184A0BB9CB934378A0362F26EAADAD727BD (FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169* __this, const RuntimeMethod* method) ;
// System.Void Crest.CustomMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomMonoBehaviour__ctor_mD1D909DC7D63D8DD2CCF388F4A72B01261CC4CF4 (CustomMonoBehaviour_t037F1DD67A455C4C8D9E6912D230EF1875A3076A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, const RuntimeMethod*))UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A (float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Int32 Crest.OceanRenderer::get_FrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OceanRenderer_get_FrameCount_m5061F5D692923166D751FF4C3DFA06566CB76816 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Material Crest.OceanRenderer::get_OceanMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* OceanRenderer_get_OceanMaterial_m3544CA735E56C76C89AFA74CF6694DE661F8675F_inline (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RenderSettings::get_ambientIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderSettings_get_ambientIntensity_mEF613E4E650E851D9F273B1D07A8FBABD078968E (const RuntimeMethod* method) ;
// System.Single UnityEngine.RenderSettings::get_reflectionIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderSettings_get_reflectionIntensity_m6476AC75EE6680098EB016C290EFB415CE4A1BBB (const RuntimeMethod* method) ;
// System.Single UnityEngine.RenderSettings::get_fogDensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderSettings_get_fogDensity_mACE336DB065800D763714CEF74A322FB83950389 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 Crest.OceanRenderer::get_UnderwaterDepthFogDensity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OceanRenderer_get_UnderwaterDepthFogDensity_mCEB8EAE577CAD61A5227BA6F429FE60638EE72C2_inline (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_ambientIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientIntensity_m27875436E47E2D28C13F362DAE9C24D0DEC4A844 (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_reflectionIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_reflectionIntensity_m70A9545EBFEE2100AEB017149034592AF23D224E (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_fogDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogDensity_mFB0FD753E90E0B9E33EB4D813B4095BF04D1F5B5 (float ___0_value, const RuntimeMethod* method) ;
// Crest.UnderwaterRenderer Crest.UnderwaterRenderer::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF* UnderwaterRenderer_get_Instance_m05AB2D58C2E71DFCA140A34E4B04EFB5EB6E3403_inline (const RuntimeMethod* method) ;
// System.Single Crest.OceanRenderer::get_ViewerHeightAboveWater()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OceanRenderer_get_ViewerHeightAboveWater_m991BD8256F02634651610E007F3924A00B86100F_inline (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void Crest.Whirlpool::CreateOrDestroyAnimatedWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_CreateOrDestroyAnimatedWaves_m94F87930E0245ECA2A844FEAF6191BA28C90DBDF (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) ;
// System.Void Crest.Whirlpool::CreateOrDestroyFlow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_CreateOrDestroyFlow_m6EFA89B5E282BB3C21C35DD2A6B531275A0E13CB (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) ;
// System.Void Crest.Whirlpool::CreateOrDestroyDynamicWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_CreateOrDestroyDynamicWaves_mF64BA94BF256CEDAAAC4BDFA160A89AC667269AB (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) ;
// System.Void Crest.Whirlpool::UpdateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_UpdateMaterials_m4C77DEF17FCF8E589F7FDB3BFE2122621ABFCCF3 (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) ;
// System.Void Crest.LodDataMgrAnimWaves::RegisterUpdatable(Crest.LodDataMgrAnimWaves/IShapeUpdatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LodDataMgrAnimWaves_RegisterUpdatable_m88072F66DA0D69DB6E0F069A1BC91F42184B684F (RuntimeObject* ___0_updatable, const RuntimeMethod* method) ;
// System.Void Crest.Helpers::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_Destroy_mFA7104531C6E2B90676276EC746C8DCCAD0BA3F5 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, const RuntimeMethod* method) ;
// System.Void Crest.LodDataMgrAnimWaves::DeregisterUpdatable(Crest.LodDataMgrAnimWaves/IShapeUpdatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LodDataMgrAnimWaves_DeregisterUpdatable_m02DA27BA186B2760860BF69E4CBCB3A1CA11454C (RuntimeObject* ___0_updatable, const RuntimeMethod* method) ;
// System.Void Crest.OceanRenderer::ReportMaxDisplacementFromShape(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OceanRenderer_ReportMaxDisplacementFromShape_m742CA597EB7C5E43C4BAE2E7DE7F0F76E7207093 (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, float ___0_maxHorizDisp, float ___1_maxVertDisp, float ___2_maxVertDispFromWaves, const RuntimeMethod* method) ;
// System.Void Crest.Whirlpool::CreateOrDestroy<Crest.RegisterAnimWavesInput>(System.Boolean,System.String,UnityEngine.GameObject&,UnityEngine.Material&)
inline void Whirlpool_CreateOrDestroy_TisRegisterAnimWavesInput_t08A22C322A6ED424443677A9A2564E4C84CF28BA_m43581A117E583D8E22B4F677F78D3B6B50215180 (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, bool ___0_toggle, String_t* ___1_shaderName, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___2_input, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_material, const RuntimeMethod* method)
{
	((  void (*) (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1*, bool, String_t*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3**, const RuntimeMethod*))Whirlpool_CreateOrDestroy_TisRuntimeObject_m1FB534D59022A71A5C458C7D20CA4AD1F7C58B76_gshared)(__this, ___0_toggle, ___1_shaderName, ___2_input, ___3_material, method);
}
// System.Void Crest.Whirlpool::CreateOrDestroy<Crest.RegisterFlowInput>(System.Boolean,System.String,UnityEngine.GameObject&,UnityEngine.Material&)
inline void Whirlpool_CreateOrDestroy_TisRegisterFlowInput_tB02D201593E576E4AFA603A6FA7AFA8960FB78BC_m4BDA149FBFBCC258DD4185D9C7593C7E53093917 (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, bool ___0_toggle, String_t* ___1_shaderName, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___2_input, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_material, const RuntimeMethod* method)
{
	((  void (*) (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1*, bool, String_t*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3**, const RuntimeMethod*))Whirlpool_CreateOrDestroy_TisRuntimeObject_m1FB534D59022A71A5C458C7D20CA4AD1F7C58B76_gshared)(__this, ___0_toggle, ___1_shaderName, ___2_input, ___3_material, method);
}
// System.Void Crest.Whirlpool::CreateOrDestroy<Crest.RegisterDynWavesInput>(System.Boolean,System.String,UnityEngine.GameObject&,UnityEngine.Material&)
inline void Whirlpool_CreateOrDestroy_TisRegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60_m23C88022CB83B158B6667B639ABE6A1CC584524A (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, bool ___0_toggle, String_t* ___1_shaderName, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___2_input, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_material, const RuntimeMethod* method)
{
	((  void (*) (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1*, bool, String_t*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3**, const RuntimeMethod*))Whirlpool_CreateOrDestroy_TisRuntimeObject_m1FB534D59022A71A5C458C7D20CA4AD1F7C58B76_gshared)(__this, ___0_toggle, ___1_shaderName, ___2_input, ___3_material, method);
}
// System.Void Crest.Whirlpool::UpdateInputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_UpdateInputs_mE581D169734D9D58E5E6D9F206C14586DCD1A2C4 (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback__ctor_mB48D13F30E749B551E4692E4F2D762C375F62B41 (CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Crest.Examples.CustomPassForCameraBase::CleanCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPassForCameraBase_CleanCameras_mD385127A69395602BEDB50F7EC23A6A96A9A44B4 (CustomPassForCameraBase_tAFD66BC5E3B96C581ABE9B77D5F6704405D6CB36* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Camera>::GetEnumerator()
inline Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9 List_1_GetEnumerator_m7D0CB3BF9DA3F624753AE63D1292B99B42AB4170 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9 (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Camera>::Dispose()
inline void Enumerator_Dispose_m952D668DE163B9341CCEDC01C0C12525996D6624 (Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Camera>::get_Current()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Enumerator_get_Current_m6AB352F2089737A72DC284B801157073F82C1A5F_inline (Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_RemoveCommandBuffer_m7749BA282C14AA7E9E71A68E911F41D1B8429F11 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_evt, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___1_buffer, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buffer, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Camera>::MoveNext()
inline bool Enumerator_MoveNext_mE9EB9A31EBEC90FA3E951E245AD2F4A3585DB16C (Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::Clear()
inline void List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Camera>::Contains(T)
inline bool List_1_Contains_m3845C98317530A7E40923FA39BF1A75403AE5288 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::Add(T)
inline void List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.Camera::AddCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_AddCommandBuffer_m2C1C3C2D93CB62D569714B3FFA694CAB9BF81A9A (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_evt, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___1_buffer, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.CameraType UnityEngine.Camera::get_cameraType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean Crest.Helpers::StartsWithNoAlloc(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Helpers_StartsWithNoAlloc_mFBB2872A53AFF3C82824B6387BF28B177574E9FE (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureDescriptor Crest.XRHelpers::GetRenderTextureDescriptor(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 XRHelpers_GetRenderTextureDescriptor_m98562E6B73D3D31B2A34CB0247270C7CB281747D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::.ctor()
inline void List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor>::Invoke(T0,T1,T2)
inline void UnityEvent_3_Invoke_mDBC34075ABEA4C223FDB305E1CC0AB840C82BBEF (UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_arg0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_arg1, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___2_arg2, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA*, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46, const RuntimeMethod*))UnityEvent_3_Invoke_mFAD41DA3FD859EFDE53DA40314708A673C69648D_gshared)(__this, ___0_arg0, ___1_arg1, ___2_arg2, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m2C77306BF732CC3ECFDAA87D5DDA5DB760E34DA2 (UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_arg0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_arg1, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192*, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___0_arg0, ___1_arg1, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor>::.ctor()
inline void UnityEvent_3__ctor_m3F5625F3D5A5A996C685582541FC1248782B88E3 (UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA*, const RuntimeMethod*))UnityEvent_3__ctor_m7DA7836C0FC0D067F9FFBE2A9CC412A7A07DD73D_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera>::.ctor()
inline void UnityEvent_2__ctor_mBCA8A560A48536FD9751A4E7E0206748CCD2122D (UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Void Crest.Examples.CustomPassForCameraBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPassForCameraBase__ctor_mE6DEC9B3E5BCEA08A2A16279B26975BFF545AEE8 (CustomPassForCameraBase_tAFD66BC5E3B96C581ABE9B77D5F6704405D6CB36* __this, const RuntimeMethod* method) ;
// System.Void Crest.Examples.ExamplesController::Cycle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExamplesController_Cycle_m0CF32199FDB79E6C5586FCE10CBD82C72B0DB2C6 (ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* __this, bool ___0_isReverse, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void Crest.Examples.ExamplesController::Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExamplesController_Previous_mEB17457001A52EB0FE501AE3541BD3102077DE0C (ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* __this, const RuntimeMethod* method) ;
// System.Void Crest.Examples.ExamplesController::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExamplesController_Next_mD2440E0D8C8B14C1D6F3E8B9B09D87645200C4F2 (ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<Crest.Examples.ExamplesController>(T&)
inline bool Component_TryGetComponent_TisExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD_m8ED09576CE2D84CD6166683BD615B3F15DD0DB1C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void Crest.Helpers::CreateRenderTargetTextureReference(UnityEngine.RenderTexture&,UnityEngine.Rendering.RenderTargetIdentifier&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_CreateRenderTargetTextureReference_mB825CC9BB555F632B4794412AFA43FB1FE09ADCF (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** ___0_texture, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___1_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Count()
inline int32_t List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean Crest.Helpers::RenderTargetTextureNeedsUpdating(UnityEngine.RenderTexture,UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Helpers_RenderTargetTextureNeedsUpdating_m9B9F910B135DAA6858110C081E3737BC231F4C0F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___1_descriptor, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_colorFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_colorFormat_m61B0FA4FCDE8A0F8A843DD6BF74097C21021C4FE (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_depthBufferBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_descriptor(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_descriptor_m5BB8245412A1C60628AD0089A9B1937CBDBAA8B8 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_m89782BA1E8AD50020DBDB9EABF32F8AA9356628A (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___0_rt, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ClearRenderTarget_mABBE498A16DCEADCAA8F5DB50073012F74D03F14 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, bool ___0_clearDepth, bool ___1_clearColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_backgroundColor, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___0_nameID, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.MeshFilter>::GetEnumerator()
inline Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064 List_1_GetEnumerator_m89A1D216F94797F1BFBDD647E317B8389D495E99 (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064 (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.MeshFilter>::Dispose()
inline void Enumerator_Dispose_m50A5896C62B9ADBC7CDA569AED01965F732C0206 (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.MeshFilter>::get_Current()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Enumerator_get_Current_m0E9B975BD111000DA67E4735FCB6FE908FAB1FF9_inline (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMesh_m5C2FA266FB98E3B7F59009B501824511E47003D9 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_matrix, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_material, int32_t ___3_submeshIndex, int32_t ___4_shaderPass, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___5_properties, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.MeshFilter>::MoveNext()
inline bool Enumerator_MoveNext_mB3335A2F8C13E8560AD216C31C274039EAD6E5AF (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.CommandBuffer::EnableShaderKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_EnableShaderKeyword_m9DE5732149961F1EA14B295D9E72914E1CC7DA5A (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DisableShaderKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DisableShaderKeyword_m2B66FB1F672F3EE51FEA8A2CBA24AA6B7E4454BD (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::.ctor()
inline void List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Single BoatAlignNormal::get_ObjectWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoatAlignNormal_get_ObjectWidth_m861C20A0281BD9391C1ACBAC1CBCD6A7C1CF10AC (BoatAlignNormal_t6E11D51B1AF5C25C4D5B98B0DD8B3CA13F55D11A* __this, const RuntimeMethod* method) 
{
	{
		// public override float ObjectWidth => _boatWidth;
		float L_0 = __this->____boatWidth_13;
		return L_0;
	}
}
// System.Boolean BoatAlignNormal::get_InWater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoatAlignNormal_get_InWater_m39F9A0FE1A7A2C8B202A6C2B13F55C2907E1DDB6 (BoatAlignNormal_t6E11D51B1AF5C25C4D5B98B0DD8B3CA13F55D11A* __this, const RuntimeMethod* method) 
{
	{
		// public override bool InWater => _inWater;
		bool L_0 = __this->____inWater_23;
		return L_0;
	}
}
// UnityEngine.Vector3 BoatAlignNormal::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoatAlignNormal_get_Velocity_m5DFB18CECECEF367AFE7381FF9C69C2EA76470F8 (BoatAlignNormal_t6E11D51B1AF5C25C4D5B98B0DD8B3CA13F55D11A* __this, const RuntimeMethod* method) 
{
	{
		// public override Vector3 Velocity => _rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rb_24;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		return L_1;
	}
}
// System.Void BoatAlignNormal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoatAlignNormal_Start_mCDF828596D3E3B1D03D48082627D12208B6E34CD (BoatAlignNormal_t6E11D51B1AF5C25C4D5B98B0DD8B3CA13F55D11A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rb_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rb_24), (void*)L_0);
		// if (OceanRenderer.Instance == null)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_1;
		L_1 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void BoatAlignNormal::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoatAlignNormal_FixedUpdate_mA28C4D4827EF3235DF0CAF8907526A9FFB15CBFE (BoatAlignNormal_t6E11D51B1AF5C25C4D5B98B0DD8B3CA13F55D11A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	int32_t G_B21_0 = 0;
	float G_B26_0 = 0.0f;
	float G_B35_0 = 0.0f;
	float G_B28_0 = 0.0f;
	float G_B30_0 = 0.0f;
	float G_B29_0 = 0.0f;
	float G_B31_0 = 0.0f;
	float G_B31_1 = 0.0f;
	float G_B33_0 = 0.0f;
	float G_B33_1 = 0.0f;
	float G_B32_0 = 0.0f;
	float G_B32_1 = 0.0f;
	float G_B34_0 = 0.0f;
	float G_B34_1 = 0.0f;
	float G_B34_2 = 0.0f;
	float G_B36_0 = 0.0f;
	float G_B36_1 = 0.0f;
	{
		// if (OceanRenderer.Instance == null)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_0;
		L_0 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// _sampleHeightHelper.Init(transform.position, _boatWidth, true);
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_2 = __this->____sampleHeightHelper_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = __this->____boatWidth_13;
		NullCheck(L_2);
		SampleHeightHelper_Init_mFBB6B140575288F0009EC8D262F93FE88C212258(L_2, L_4, L_5, (bool)1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// var height = OceanRenderer.Instance.SeaLevel;
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_6;
		L_6 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = OceanRenderer_get_SeaLevel_m708EC6ECDFDA744AAA8246BF2DD627EFF3F35024(L_6, NULL);
		V_0 = L_7;
		// _sampleHeightHelper.Sample(out Vector3 disp, out var normal, out var waterSurfaceVel);
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_8 = __this->____sampleHeightHelper_25;
		NullCheck(L_8);
		bool L_9;
		L_9 = SampleHeightHelper_Sample_m2550AEDDDFD64E4AFF8148E965650B2DE77E8161(L_8, (&V_1), (&V_2), (&V_3), NULL);
		// height += disp.y;
		float L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		float L_12 = L_11.___y_3;
		V_0 = ((float)il2cpp_codegen_add(L_10, L_12));
		// if (_debugDraw)
		bool L_13 = __this->____debugDraw_22;
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		// var surfPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		V_12 = L_15;
		// surfPos.y = height;
		float L_16 = V_0;
		(&V_12)->___y_3 = L_16;
		// VisualiseCollisionArea.DebugDrawCross(surfPos, normal, 1f, Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		VisualiseCollisionArea_DebugDrawCross_mB51E5ABF3C6DB88D888786CB42BFD09D24C63FA0(L_17, L_18, (1.0f), L_19, (0.0f), NULL);
	}

IL_0086:
	{
		// _sampleFlowHelper.Init(transform.position, _boatWidth);
		SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD* L_20 = __this->____sampleFlowHelper_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = __this->____boatWidth_13;
		NullCheck(L_20);
		SampleFlowHelper_Init_m9FD26F1A667E7D608FF567425780410623E22082(L_20, L_22, L_23, NULL);
		// _sampleFlowHelper.Sample(out var surfaceFlow);
		SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD* L_24 = __this->____sampleFlowHelper_27;
		NullCheck(L_24);
		bool L_25;
		L_25 = SampleFlowHelper_Sample_m559FF71365C4C55522FE2099C5ABBCA55D756919(L_24, (&V_13), NULL);
		// waterSurfaceVel += new Vector3(surfaceFlow.x, 0, surfaceFlow.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_13;
		float L_28 = L_27.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_13;
		float L_30 = L_29.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), L_28, (0.0f), L_30, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_31, NULL);
		V_3 = L_32;
		// if (_debugDraw)
		bool L_33 = __this->____debugDraw_22;
		if (!L_33)
		{
			goto IL_0139;
		}
	}
	{
		// Debug.DrawLine(transform.position + 5f * Vector3.up, transform.position + 5f * Vector3.up + waterSurfaceVel,
		//     new Color(1, 1, 1, 0.6f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_35, L_37, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_43, L_44, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
		memset((&L_46), 0, sizeof(L_46));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_46), (1.0f), (1.0f), (1.0f), (0.600000024f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_38, L_45, L_46, NULL);
	}

IL_0139:
	{
		// var velocityRelativeToWater = _rb.velocity - waterSurfaceVel;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_47 = __this->____rb_24;
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_48, L_49, NULL);
		V_4 = L_50;
		// float bottomDepth = height - transform.position.y - _bottomH;
		float L_51 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		float L_54 = L_53.___y_3;
		float L_55 = __this->____bottomH_5;
		V_5 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_51, L_54)), L_55));
		// _inWater = bottomDepth > 0f;
		float L_56 = V_5;
		__this->____inWater_23 = (bool)((((float)L_56) > ((float)(0.0f)))? 1 : 0);
		// if (!_inWater)
		bool L_57 = __this->____inWater_23;
		if (L_57)
		{
			goto IL_017f;
		}
	}
	{
		// return;
		return;
	}

IL_017f:
	{
		// var buoyancy = -Physics.gravity.normalized * _buoyancyCoeff * bottomDepth * bottomDepth * bottomDepth;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		V_14 = L_58;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_59, NULL);
		float L_61 = __this->____buoyancyCoeff_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_60, L_61, NULL);
		float L_63 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_62, L_63, NULL);
		float L_65 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_64, L_65, NULL);
		float L_67 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_66, L_67, NULL);
		V_6 = L_68;
		// if (_maximumBuoyancyForce < Mathf.Infinity)
		float L_69 = __this->____maximumBuoyancyForce_9;
		if ((!(((float)L_69) < ((float)(std::numeric_limits<float>::infinity())))))
		{
			goto IL_01d0;
		}
	}
	{
		// buoyancy = Vector3.ClampMagnitude(buoyancy, _maximumBuoyancyForce);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_6;
		float L_71 = __this->____maximumBuoyancyForce_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_70, L_71, NULL);
		V_6 = L_72;
	}

IL_01d0:
	{
		// _rb.AddForce(buoyancy, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_73 = __this->____rb_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_6;
		NullCheck(L_73);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_73, L_74, 5, NULL);
		// if (_accelerateDownhill > 0f)
		float L_75 = __this->____accelerateDownhill_8;
		if ((!(((float)L_75) > ((float)(0.0f)))))
		{
			goto IL_0228;
		}
	}
	{
		// _rb.AddForce(new Vector3(normal.x, 0f, normal.z) * -Physics.gravity.y * _accelerateDownhill, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_76 = __this->____rb_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_2;
		float L_78 = L_77.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_2;
		float L_80 = L_79.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_81), L_78, (0.0f), L_80, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_83 = L_82.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_81, ((-L_83)), NULL);
		float L_85 = __this->____accelerateDownhill_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_84, L_85, NULL);
		NullCheck(L_76);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_76, L_86, 5, NULL);
	}

IL_0228:
	{
		// var forcePosition = _rb.position + _forceHeightOffset * Vector3.up;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_87 = __this->____rb_24;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_87, NULL);
		float L_89 = __this->____forceHeightOffset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_89, L_90, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_88, L_91, NULL);
		V_7 = L_92;
		// _rb.AddForceAtPosition(Vector3.up * Vector3.Dot(Vector3.up, -velocityRelativeToWater) * _dragInWaterUp, forcePosition, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_93 = __this->____rb_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_96, NULL);
		float L_98;
		L_98 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_95, L_97, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_94, L_98, NULL);
		float L_100 = __this->____dragInWaterUp_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_99, L_100, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_7;
		NullCheck(L_93);
		Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C(L_93, L_101, L_102, 5, NULL);
		// _rb.AddForceAtPosition(transform.right * Vector3.Dot(transform.right, -velocityRelativeToWater) * _dragInWaterRight, forcePosition, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_103 = __this->____rb_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_104, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_106;
		L_106 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_106, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_108, NULL);
		float L_110;
		L_110 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_107, L_109, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_105, L_110, NULL);
		float L_112 = __this->____dragInWaterRight_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_111, L_112, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_7;
		NullCheck(L_103);
		Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C(L_103, L_113, L_114, 5, NULL);
		// _rb.AddForceAtPosition(transform.forward * Vector3.Dot(transform.forward, -velocityRelativeToWater) * _dragInWaterForward, forcePosition, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_115 = __this->____rb_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_116);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_116, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_118);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_118, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_120, NULL);
		float L_122;
		L_122 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_119, L_121, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_117, L_122, NULL);
		float L_124 = __this->____dragInWaterForward_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_123, L_124, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_7;
		NullCheck(L_115);
		Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C(L_115, L_125, L_126, 5, NULL);
		// float forward = _throttleBias;
		float L_127 = __this->____throttleBias_20;
		V_8 = L_127;
		// float rawForward = !Application.isFocused ? 0 : ((Keyboard.current.wKey.isPressed ? 1 : 0) + (Keyboard.current.sKey.isPressed ? -1 : 0));
		bool L_128;
		L_128 = Application_get_isFocused_mFEEC52E355AA7AAA6B7250520CA544D80BE77524(NULL);
		if (!L_128)
		{
			goto IL_033a;
		}
	}
	{
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_129;
		L_129 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_129);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_130;
		L_130 = Keyboard_get_wKey_m007A60195D3D483BA82BFD9B8650F326E2C58805(L_129, NULL);
		NullCheck(L_130);
		bool L_131;
		L_131 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_130, NULL);
		if (L_131)
		{
			goto IL_0321;
		}
	}
	{
		G_B16_0 = 0;
		goto IL_0322;
	}

IL_0321:
	{
		G_B16_0 = 1;
	}

IL_0322:
	{
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_132;
		L_132 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_132);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_133;
		L_133 = Keyboard_get_sKey_m2830A1BAA36CADA4783EFD815216A637363F1AB4(L_132, NULL);
		NullCheck(L_133);
		bool L_134;
		L_134 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_133, NULL);
		G_B17_0 = G_B16_0;
		if (L_134)
		{
			G_B18_0 = G_B16_0;
			goto IL_0336;
		}
	}
	{
		G_B19_0 = 0;
		G_B19_1 = G_B17_0;
		goto IL_0337;
	}

IL_0336:
	{
		G_B19_0 = (-1);
		G_B19_1 = G_B18_0;
	}

IL_0337:
	{
		G_B21_0 = ((int32_t)il2cpp_codegen_add(G_B19_1, G_B19_0));
		goto IL_033b;
	}

IL_033a:
	{
		G_B21_0 = 0;
	}

IL_033b:
	{
		V_9 = ((float)G_B21_0);
		// if (_playerControlled) forward += rawForward;
		bool L_135 = __this->____playerControlled_19;
		if (!L_135)
		{
			goto IL_034d;
		}
	}
	{
		// if (_playerControlled) forward += rawForward;
		float L_136 = V_8;
		float L_137 = V_9;
		V_8 = ((float)il2cpp_codegen_add(L_136, L_137));
	}

IL_034d:
	{
		// _rb.AddForceAtPosition(transform.forward * _enginePower * forward, forcePosition, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_138 = __this->____rb_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139;
		L_139 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_139);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_139, NULL);
		float L_141 = __this->____enginePower_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		L_142 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_140, L_141, NULL);
		float L_143 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_142, L_143, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = V_7;
		NullCheck(L_138);
		Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C(L_138, L_144, L_145, 5, NULL);
		// float reverseMultiplier = (rawForward < 0f ? -1f : 1f);
		float L_146 = V_9;
		if ((((float)L_146) < ((float)(0.0f))))
		{
			goto IL_0388;
		}
	}
	{
		G_B26_0 = (1.0f);
		goto IL_038d;
	}

IL_0388:
	{
		G_B26_0 = (-1.0f);
	}

IL_038d:
	{
		V_10 = G_B26_0;
		// float sideways = _steerBias;
		float L_147 = __this->____steerBias_21;
		V_11 = L_147;
		// if (_playerControlled) sideways +=
		bool L_148 = __this->____playerControlled_19;
		if (!L_148)
		{
			goto IL_03f3;
		}
	}
	{
		//         if (_playerControlled) sideways +=
		// #if ENABLE_INPUT_SYSTEM
		//                 !Application.isFocused ? 0 :
		//                 ((Keyboard.current.aKey.isPressed ? reverseMultiplier * -1f : 0f) +
		//                 (Keyboard.current.dKey.isPressed ? reverseMultiplier * 1f : 0f));
		float L_149 = V_11;
		bool L_150;
		L_150 = Application_get_isFocused_mFEEC52E355AA7AAA6B7250520CA544D80BE77524(NULL);
		G_B28_0 = L_149;
		if (!L_150)
		{
			G_B35_0 = L_149;
			goto IL_03eb;
		}
	}
	{
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_151;
		L_151 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_151);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_152;
		L_152 = Keyboard_get_aKey_m532122A52C670F95ADC84B56A4DD32160DD1E7CB(L_151, NULL);
		NullCheck(L_152);
		bool L_153;
		L_153 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_152, NULL);
		G_B29_0 = G_B28_0;
		if (L_153)
		{
			G_B30_0 = G_B28_0;
			goto IL_03c0;
		}
	}
	{
		G_B31_0 = (0.0f);
		G_B31_1 = G_B29_0;
		goto IL_03c8;
	}

IL_03c0:
	{
		float L_154 = V_10;
		G_B31_0 = ((float)il2cpp_codegen_multiply(L_154, (-1.0f)));
		G_B31_1 = G_B30_0;
	}

IL_03c8:
	{
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_155;
		L_155 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_155);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_156;
		L_156 = Keyboard_get_dKey_m0973269D5752E5EEA607BAFB24B39AD9F45122DC(L_155, NULL);
		NullCheck(L_156);
		bool L_157;
		L_157 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_156, NULL);
		G_B32_0 = G_B31_0;
		G_B32_1 = G_B31_1;
		if (L_157)
		{
			G_B33_0 = G_B31_0;
			G_B33_1 = G_B31_1;
			goto IL_03e0;
		}
	}
	{
		G_B34_0 = (0.0f);
		G_B34_1 = G_B32_0;
		G_B34_2 = G_B32_1;
		goto IL_03e8;
	}

IL_03e0:
	{
		float L_158 = V_10;
		G_B34_0 = ((float)il2cpp_codegen_multiply(L_158, (1.0f)));
		G_B34_1 = G_B33_0;
		G_B34_2 = G_B33_1;
	}

IL_03e8:
	{
		G_B36_0 = ((float)il2cpp_codegen_add(G_B34_1, G_B34_0));
		G_B36_1 = G_B34_2;
		goto IL_03f0;
	}

IL_03eb:
	{
		G_B36_0 = (0.0f);
		G_B36_1 = G_B35_0;
	}

IL_03f0:
	{
		V_11 = ((float)il2cpp_codegen_add(G_B36_1, G_B36_0));
	}

IL_03f3:
	{
		// _rb.AddTorque(transform.up * _turnPower * sideways, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_159 = __this->____rb_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_160;
		L_160 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_160);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161;
		L_161 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_160, NULL);
		float L_162 = __this->____turnPower_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163;
		L_163 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_161, L_162, NULL);
		float L_164 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
		L_165 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_163, L_164, NULL);
		NullCheck(L_159);
		Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937(L_159, L_165, 5, NULL);
		// FixedUpdateOrientation(normal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166 = V_2;
		BoatAlignNormal_FixedUpdateOrientation_m89B7A281A28930A0F8CEFE00A41DCE3757B2B70D(__this, L_166, NULL);
		// }
		return;
	}
}
// System.Void BoatAlignNormal::FixedUpdateOrientation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoatAlignNormal_FixedUpdateOrientation_m89B7A281A28930A0F8CEFE00A41DCE3757B2B70D (BoatAlignNormal_t6E11D51B1AF5C25C4D5B98B0DD8B3CA13F55D11A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_normalSideways, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Vector3 normal = normalSideways, normalLongitudinal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_normalSideways;
		V_0 = L_0;
		// Vector3 normal = normalSideways, normalLongitudinal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		V_1 = L_1;
		// if (_useBoatLength)
		bool L_2 = __this->____useBoatLength_14;
		if (!L_2)
		{
			goto IL_00ae;
		}
	}
	{
		// _sampleHeightHelperLengthwise.Init(transform.position, _boatLength, true);
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_3 = __this->____sampleHeightHelperLengthwise_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = __this->____boatLength_15;
		NullCheck(L_3);
		SampleHeightHelper_Init_mFBB6B140575288F0009EC8D262F93FE88C212258(L_3, L_5, L_6, (bool)1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// if (_sampleHeightHelperLengthwise.Sample(out _, out normalLongitudinal))
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_7 = __this->____sampleHeightHelperLengthwise_26;
		NullCheck(L_7);
		bool L_8;
		L_8 = SampleHeightHelper_Sample_mD397EADE69F49C8DF06D91C40CBEBB3E0E9367C5(L_7, (&V_3), (&V_1), NULL);
		if (!L_8)
		{
			goto IL_00ae;
		}
	}
	{
		// var F = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		V_4 = L_10;
		// F.y = 0f;
		(&V_4)->___y_3 = (0.0f);
		// F.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_4), NULL);
		// normal -= Vector3.Dot(F, normal) * F;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14;
		L_14 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_16, NULL);
		V_0 = L_17;
		// var R = transform.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_18, NULL);
		V_5 = L_19;
		// R.y = 0f;
		(&V_5)->___y_3 = (0.0f);
		// R.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_5), NULL);
		// normalLongitudinal -= Vector3.Dot(R, normalLongitudinal) * R;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		float L_23;
		L_23 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_25, NULL);
		V_1 = L_26;
	}

IL_00ae:
	{
		// if (_debugDraw) Debug.DrawLine(transform.position, transform.position + 5f * normal, Color.green);
		bool L_27 = __this->____debugDraw_22;
		if (!L_27)
		{
			goto IL_00e6;
		}
	}
	{
		// if (_debugDraw) Debug.DrawLine(transform.position, transform.position + 5f * normal, Color.green);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_33, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_29, L_34, L_35, NULL);
	}

IL_00e6:
	{
		// if (_debugDraw && _useBoatLength) Debug.DrawLine(transform.position, transform.position + 5f * normalLongitudinal, Color.yellow);
		bool L_36 = __this->____debugDraw_22;
		if (!L_36)
		{
			goto IL_0126;
		}
	}
	{
		bool L_37 = __this->____useBoatLength_14;
		if (!L_37)
		{
			goto IL_0126;
		}
	}
	{
		// if (_debugDraw && _useBoatLength) Debug.DrawLine(transform.position, transform.position + 5f * normalLongitudinal, Color.yellow);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_43, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45;
		L_45 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_39, L_44, L_45, NULL);
	}

IL_0126:
	{
		// var torqueWidth = Vector3.Cross(transform.up, normal);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_47, L_48, NULL);
		V_2 = L_49;
		// _rb.AddTorque(torqueWidth * _boyancyTorque, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_50 = __this->____rb_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_2;
		float L_52 = __this->____boyancyTorque_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_51, L_52, NULL);
		NullCheck(L_50);
		Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937(L_50, L_53, 5, NULL);
		// if (_useBoatLength)
		bool L_54 = __this->____useBoatLength_14;
		if (!L_54)
		{
			goto IL_0184;
		}
	}
	{
		// var torqueLength = Vector3.Cross(transform.up, normalLongitudinal);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_56, L_57, NULL);
		V_6 = L_58;
		// _rb.AddTorque(torqueLength * _boyancyTorque, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_59 = __this->____rb_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_6;
		float L_61 = __this->____boyancyTorque_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_60, L_61, NULL);
		NullCheck(L_59);
		Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937(L_59, L_62, 5, NULL);
	}

IL_0184:
	{
		// }
		return;
	}
}
// System.Void BoatAlignNormal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoatAlignNormal__ctor_mCF0AC100650C2C093C5EF7971BCDF26450489C06 (BoatAlignNormal_t6E11D51B1AF5C25C4D5B98B0DD8B3CA13F55D11A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float _buoyancyCoeff = 1.5f;
		__this->____buoyancyCoeff_6 = (1.5f);
		// public float _boyancyTorque = 8f;
		__this->____boyancyTorque_7 = (8.0f);
		// public float _maximumBuoyancyForce = Mathf.Infinity;
		__this->____maximumBuoyancyForce_9 = (std::numeric_limits<float>::infinity());
		// public float _forceHeightOffset = -0.3f;
		__this->____forceHeightOffset_10 = (-0.300000012f);
		// public float _enginePower = 11f;
		__this->____enginePower_11 = (11.0f);
		// public float _turnPower = 1.3f;
		__this->____turnPower_12 = (1.29999995f);
		// public float _boatWidth = 3f;
		__this->____boatWidth_13 = (3.0f);
		// public float _boatLength = 3f;
		__this->____boatLength_15 = (3.0f);
		// public float _dragInWaterUp = 3f;
		__this->____dragInWaterUp_16 = (3.0f);
		// public float _dragInWaterRight = 2f;
		__this->____dragInWaterRight_17 = (2.0f);
		// public float _dragInWaterForward = 1f;
		__this->____dragInWaterForward_18 = (1.0f);
		// public bool _playerControlled = true;
		__this->____playerControlled_19 = (bool)1;
		// SampleHeightHelper _sampleHeightHelper = new SampleHeightHelper();
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_0 = (SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1*)il2cpp_codegen_object_new(SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SampleHeightHelper__ctor_m25E4C8B3553A29E39CCCC49B2203EE612D781825(L_0, NULL);
		__this->____sampleHeightHelper_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sampleHeightHelper_25), (void*)L_0);
		// SampleHeightHelper _sampleHeightHelperLengthwise = new SampleHeightHelper();
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_1 = (SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1*)il2cpp_codegen_object_new(SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SampleHeightHelper__ctor_m25E4C8B3553A29E39CCCC49B2203EE612D781825(L_1, NULL);
		__this->____sampleHeightHelperLengthwise_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sampleHeightHelperLengthwise_26), (void*)L_1);
		// SampleFlowHelper _sampleFlowHelper = new SampleFlowHelper();
		SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD* L_2 = (SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD*)il2cpp_codegen_object_new(SampleFlowHelper_t79FCD277304318E0F901E015D459EBDF4C429DCD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SampleFlowHelper__ctor_m97D79538AE5D9B405A008FA838CAE1769412627C(L_2, NULL);
		__this->____sampleFlowHelper_27 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sampleFlowHelper_27), (void*)L_2);
		FloatingObjectBase__ctor_mD18A5DE73D44C9FE09DEB1DA7C556FDF45224058(__this, NULL);
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
// System.Void LerpCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpCam_Update_m2E48CB359DDB11FF7E859281C184785DEADA7BE8 (LerpCam_tADAD9669F37763C184BBC57858A7CBC5EA8BCF12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (OceanRenderer.Instance == null || _targetPos == null)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_0;
		L_0 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____targetPos_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		// return;
		return;
	}

IL_001c:
	{
		// _sampleHeightHelper.Init(transform.position, 0f);
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_4 = __this->____sampleHeightHelper_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_4);
		SampleHeightHelper_Init_mFBB6B140575288F0009EC8D262F93FE88C212258(L_4, L_6, (0.0f), (bool)0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// _sampleHeightHelper.Sample(out var h);
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_7 = __this->____sampleHeightHelper_10;
		NullCheck(L_7);
		bool L_8;
		L_8 = SampleHeightHelper_Sample_m7CCA76E801D160404EB59417169323D068BE61FE(L_7, (&V_0), NULL);
		// var targetPos = _targetPos.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->____targetPos_6;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		V_1 = L_10;
		// targetPos.y = Mathf.Max(targetPos.y, h + _minHeightAboveWater);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		float L_12 = L_11.___y_3;
		float L_13 = V_0;
		float L_14 = __this->____minHeightAboveWater_9;
		float L_15;
		L_15 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_12, ((float)il2cpp_codegen_add(L_13, L_14)), NULL);
		(&V_1)->___y_3 = L_15;
		// transform.position = Vector3.Lerp(transform.position, targetPos, _lerpAlpha * OceanRenderer.Instance.DeltaTime * 60f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		float L_20 = __this->____lerpAlpha_5;
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_21;
		L_21 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_21);
		float L_22;
		L_22 = OceanRenderer_get_DeltaTime_mE2F4AB9A57EBDAB7CDCEAFBFD4B88CFA42574B36(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_18, L_19, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_20, L_22)), (60.0f))), NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_23, NULL);
		// transform.LookAt(_targetLookatPos.position + _lookatOffset * Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->____targetLookatPos_7;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		float L_27 = __this->____lookatOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_29, NULL);
		NullCheck(L_24);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_24, L_30, NULL);
		// }
		return;
	}
}
// System.Void LerpCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpCam__ctor_mB72D54870C7BF59C6CB122E04D863AB9961ECCC8 (LerpCam_tADAD9669F37763C184BBC57858A7CBC5EA8BCF12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] float _lerpAlpha = 0.1f;
		__this->____lerpAlpha_5 = (0.100000001f);
		// [SerializeField] float _lookatOffset = 5f;
		__this->____lookatOffset_8 = (5.0f);
		// [SerializeField] float _minHeightAboveWater = 0.5f;
		__this->____minHeightAboveWater_9 = (0.5f);
		// SampleHeightHelper _sampleHeightHelper = new SampleHeightHelper();
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_0 = (SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1*)il2cpp_codegen_object_new(SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SampleHeightHelper__ctor_m25E4C8B3553A29E39CCCC49B2203EE612D781825(L_0, NULL);
		__this->____sampleHeightHelper_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sampleHeightHelper_10), (void*)L_0);
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
// System.Void RippleGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleGenerator_Start_m8A2323BF2FD27668C6C4C717884926B7314BB294 (RippleGenerator_t1CE4717A67CA2FAF1154318B1A7371EA01EA091B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisRegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60_m310B08F5F2F9AAD988D7A33EA88EF6951FE0B990_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryGetComponent(out _rdwi);
		RegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60** L_0 = (&__this->____rdwi_11);
		bool L_1;
		L_1 = Component_TryGetComponent_TisRegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60_m310B08F5F2F9AAD988D7A33EA88EF6951FE0B990(__this, L_0, Component_TryGetComponent_TisRegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60_m310B08F5F2F9AAD988D7A33EA88EF6951FE0B990_RuntimeMethod_var);
		// if (OceanRenderer.Instance == null || !OceanRenderer.Instance.CreateDynamicWaveSim || _rdwi == null)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_2;
		L_2 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_4;
		L_4 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = OceanRenderer_get_CreateDynamicWaveSim_mEA55ACCC9E3319537F5BABB742DE5324DDF44026_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		RegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60* L_6 = __this->____rdwi_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}

IL_0034:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_003c:
	{
		// _rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8;
		L_8 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____rend_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rend_9), (void*)L_8);
		// _mpb = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_9 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_9, NULL);
		__this->____mpb_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mpb_10), (void*)L_9);
		// }
		return;
	}
}
// System.Void RippleGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleGenerator_Update_m509864A756FB7EBFCCEF8866D8293BD78E7D5ED9 (RippleGenerator_t1CE4717A67CA2FAF1154318B1A7371EA01EA091B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LodDataMgrAnimWaves_t09E68698F1502C4427BC56A846787FF6896368EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LodDataMgrDynWaves_t98E840A5D7D1E6F1295C22D1FA4B0B3FBA198A59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA2CAB91ABB3BC50F28A03E14171324A4C48E99C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8538748C90C8AA9862FF9C3ADBF8D99757DCA05);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// if (OceanRenderer.Instance == null)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_0;
		L_0 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (_animate)
		bool L_2 = __this->____animate_5;
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// float t = OceanRenderer.Instance.CurrentTime;
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_3;
		L_3 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = OceanRenderer_get_CurrentTime_m28DB747522BBC61720DA0A9BCD61C02289EBF9F1(L_3, NULL);
		V_4 = L_4;
		// if (t < _warmUp)
		float L_5 = V_4;
		float L_6 = __this->____warmUp_6;
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		// return;
		return;
	}

IL_002d:
	{
		// t -= _warmUp;
		float L_7 = V_4;
		float L_8 = __this->____warmUp_6;
		V_4 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// t = Mathf.Repeat(t, _period);
		float L_9 = V_4;
		float L_10 = __this->____period_8;
		float L_11;
		L_11 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(L_9, L_10, NULL);
		V_4 = L_11;
		// _rdwi.enabled = t < _onTime;
		RegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60* L_12 = __this->____rdwi_11;
		float L_13 = V_4;
		float L_14 = __this->____onTime_7;
		NullCheck(L_12);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, (bool)((((float)L_13) < ((float)L_14))? 1 : 0), NULL);
	}

IL_005c:
	{
		// Rect thisRect = new Rect(new Vector2(transform.position.x, transform.position.z), Vector3.zero);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_17, L_20, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24;
		memset((&L_24), 0, sizeof(L_24));
		Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675((&L_24), L_21, L_23, /*hidden argument*/NULL);
		// int minLod = LodDataMgrAnimWaves.SuggestDataLOD(thisRect);
		il2cpp_codegen_runtime_class_init_inline(LodDataMgrAnimWaves_t09E68698F1502C4427BC56A846787FF6896368EB_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = LodDataMgrAnimWaves_SuggestDataLOD_m7BCF0B1A633EFA5B23FA26CF68D9AC53DD3C05B2(L_24, NULL);
		V_0 = L_25;
		// if (minLod == -1)
		int32_t L_26 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_009b;
		}
	}
	{
		// return;
		return;
	}

IL_009b:
	{
		// LodDataMgrDynWaves.CountWaveSims(minLod, out var simsPresent, out var simsActive);
		int32_t L_27 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LodDataMgrDynWaves_t98E840A5D7D1E6F1295C22D1FA4B0B3FBA198A59_il2cpp_TypeInfo_var);
		LodDataMgrDynWaves_CountWaveSims_m31DB3746F4AD3BC14DAF5D234D5F1E72155B8036(L_27, (&V_1), (&V_2), NULL);
		// if (simsPresent == 0)
		int32_t L_28 = V_1;
		if (L_28)
		{
			goto IL_00b0;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_00b0:
	{
		// var dt = 1 / OceanRenderer.Instance._lodDataDynWaves.Settings._simulationFrequency;
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_29;
		L_29 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_29);
		LodDataMgrDynWaves_t98E840A5D7D1E6F1295C22D1FA4B0B3FBA198A59* L_30 = L_29->____lodDataDynWaves_68;
		NullCheck(L_30);
		SimSettingsWave_tC56E4FF9454B61960D3D717BD483CA5C4495CFBF* L_31;
		L_31 = LodDataMgrDynWaves_get_Settings_m918100414D12C83F5188585AFA3BFD2A214E7BF6(L_30, NULL);
		NullCheck(L_31);
		float L_32 = L_31->____simulationFrequency_8;
		V_3 = ((float)((1.0f)/L_32));
		// _rend.GetPropertyBlock(_mpb);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_33 = __this->____rend_9;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_34 = __this->____mpb_10;
		NullCheck(L_33);
		Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA(L_33, L_34, NULL);
		// _mpb.SetFloat("_SimCount", simsActive);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_35 = __this->____mpb_10;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		MaterialPropertyBlock_SetFloat_m49458EDC57C2B431D765FE7414F18918AD619888(L_35, _stringLiteralCA2CAB91ABB3BC50F28A03E14171324A4C48E99C, ((float)L_36), NULL);
		// _mpb.SetFloat("_SimDeltaTime", dt);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_37 = __this->____mpb_10;
		float L_38 = V_3;
		NullCheck(L_37);
		MaterialPropertyBlock_SetFloat_m49458EDC57C2B431D765FE7414F18918AD619888(L_37, _stringLiteralE8538748C90C8AA9862FF9C3ADBF8D99757DCA05, L_38, NULL);
		// _rend.SetPropertyBlock(_mpb);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_39 = __this->____rend_9;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_40 = __this->____mpb_10;
		NullCheck(L_39);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_39, L_40, NULL);
		// }
		return;
	}
}
// System.Void RippleGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleGenerator__ctor_m5FB22A626AFC5175314BD54490E1ACC737419318 (RippleGenerator_t1CE4717A67CA2FAF1154318B1A7371EA01EA091B* __this, const RuntimeMethod* method) 
{
	{
		// public bool _animate = true;
		__this->____animate_5 = (bool)1;
		// public float _warmUp = 3f;
		__this->____warmUp_6 = (3.0f);
		// public float _onTime = 0.2f;
		__this->____onTime_7 = (0.200000003f);
		// public float _period = 4f;
		__this->____period_8 = (4.0f);
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
// System.Void CamController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamController_Awake_mECBA2DCD7FA57FE62F056D7379AC1F543531E7C6 (CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m1D22E7CA60B7DA94499EFF8D98588B2BD8950882_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _targetTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____targetTransform_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetTransform_12), (void*)L_0);
		// if (!TryGetComponent(out camera))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_1 = (&__this->___camera_13);
		bool L_2;
		L_2 = Component_TryGetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m1D22E7CA60B7DA94499EFF8D98588B2BD8950882(__this, L_1, Component_TryGetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m1D22E7CA60B7DA94499EFF8D98588B2BD8950882_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0022:
	{
		// if (XRSettings.enabled)
		bool L_3;
		L_3 = XRSettings_get_enabled_mC22ABF5BF7D835DAB861A1FA384DBB8904D15E70(NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// XRSettings.useOcclusionMesh = !_debug._disableOcclusionMesh;
		DebugFields_tB4412D974DB6F50983C57BD238B339874A225296* L_4 = __this->____debug_14;
		NullCheck(L_4);
		bool L_5 = L_4->____disableOcclusionMesh_1;
		XRSettings_set_useOcclusionMesh_m0FECDD87F3C902210458D21E5404910D5917EF52((bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		// XRSettings.occlusionMaskScale = _debug._occlusionMeshScale;
		DebugFields_tB4412D974DB6F50983C57BD238B339874A225296* L_6 = __this->____debug_14;
		NullCheck(L_6);
		float L_7 = L_6->____occlusionMeshScale_2;
		XRSettings_set_occlusionMaskScale_mFB321295E98DE1A01268FABCCB167CC2DCD8157E(L_7, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void CamController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamController_Update_mFDDC5E8E6280A4F0EDA744D144022FF7EC01044B (CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03B110474F335DD2CA2BD1A4A3547D70F7A2D6F2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float dt = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		// if (_fixedDt > 0f)
		float L_1 = __this->____fixedDt_11;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_001a;
		}
	}
	{
		// dt = _fixedDt;
		float L_2 = __this->____fixedDt_11;
		V_0 = L_2;
	}

IL_001a:
	{
		// UpdateMovement(dt);
		float L_3 = V_0;
		CamController_UpdateMovement_m6C987C3807FF853D48E81B430DDBD46FE67ADCF0(__this, L_3, NULL);
		// if (!XRSettings.enabled || XRSettings.loadedDeviceName.Contains("MockHMD"))
		bool L_4;
		L_4 = XRSettings_get_enabled_mC22ABF5BF7D835DAB861A1FA384DBB8904D15E70(NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_5;
		L_5 = XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_5, _stringLiteral03B110474F335DD2CA2BD1A4A3547D70F7A2D6F2, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}

IL_0039:
	{
		// UpdateDragging(dt);
		float L_7 = V_0;
		CamController_UpdateDragging_mAA989DD2722D386E7C66DD822C4C534A53F3D146(__this, L_7, NULL);
		// UpdateKillRoll();
		CamController_UpdateKillRoll_m5EDB0E07FCA909BADFF525BF4985307FDAF86607(__this, NULL);
	}

IL_0046:
	{
		// if (XRSettings.enabled)
		bool L_8;
		L_8 = XRSettings_get_enabled_mC22ABF5BF7D835DAB861A1FA384DBB8904D15E70(NULL);
		if (!L_8)
		{
			goto IL_0082;
		}
	}
	{
		// if (XRSettings.useOcclusionMesh == _debug._disableOcclusionMesh)
		bool L_9;
		L_9 = XRSettings_get_useOcclusionMesh_mE22A93654132323381A6D7C7C24CB5DAFF5371D9(NULL);
		DebugFields_tB4412D974DB6F50983C57BD238B339874A225296* L_10 = __this->____debug_14;
		NullCheck(L_10);
		bool L_11 = L_10->____disableOcclusionMesh_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0072;
		}
	}
	{
		// XRSettings.useOcclusionMesh = !_debug._disableOcclusionMesh;
		DebugFields_tB4412D974DB6F50983C57BD238B339874A225296* L_12 = __this->____debug_14;
		NullCheck(L_12);
		bool L_13 = L_12->____disableOcclusionMesh_1;
		XRSettings_set_useOcclusionMesh_m0FECDD87F3C902210458D21E5404910D5917EF52((bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0072:
	{
		// XRSettings.occlusionMaskScale = _debug._occlusionMeshScale;
		DebugFields_tB4412D974DB6F50983C57BD238B339874A225296* L_14 = __this->____debug_14;
		NullCheck(L_14);
		float L_15 = L_14->____occlusionMeshScale_2;
		XRSettings_set_occlusionMaskScale_mFB321295E98DE1A01268FABCCB167CC2DCD8157E(L_15, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void CamController::UpdateMovement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamController_UpdateMovement_m6C987C3807FF853D48E81B430DDBD46FE67ADCF0 (CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE* __this, float ___0_dt, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B17_1;
	memset((&G_B17_1), 0, sizeof(G_B17_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B17_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B16_1;
	memset((&G_B16_1), 0, sizeof(G_B16_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B18_1;
	memset((&G_B18_1), 0, sizeof(G_B18_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B18_2;
	memset((&G_B18_2), 0, sizeof(G_B18_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B18_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B20_1;
	memset((&G_B20_1), 0, sizeof(G_B20_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B20_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B19_1;
	memset((&G_B19_1), 0, sizeof(G_B19_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B19_2 = NULL;
	int32_t G_B21_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B21_1;
	memset((&G_B21_1), 0, sizeof(G_B21_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B21_2;
	memset((&G_B21_2), 0, sizeof(G_B21_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B21_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B23_1;
	memset((&G_B23_1), 0, sizeof(G_B23_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B23_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B22_1;
	memset((&G_B22_1), 0, sizeof(G_B22_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B22_2 = NULL;
	int32_t G_B24_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B24_1;
	memset((&G_B24_1), 0, sizeof(G_B24_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B24_2;
	memset((&G_B24_2), 0, sizeof(G_B24_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B24_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B26_0;
	memset((&G_B26_0), 0, sizeof(G_B26_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B26_1;
	memset((&G_B26_1), 0, sizeof(G_B26_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B26_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B25_1;
	memset((&G_B25_1), 0, sizeof(G_B25_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B25_2 = NULL;
	int32_t G_B27_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B27_1;
	memset((&G_B27_1), 0, sizeof(G_B27_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B27_2;
	memset((&G_B27_2), 0, sizeof(G_B27_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B27_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B29_1;
	memset((&G_B29_1), 0, sizeof(G_B29_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B29_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B28_1;
	memset((&G_B28_1), 0, sizeof(G_B28_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B28_2 = NULL;
	int32_t G_B30_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B30_1;
	memset((&G_B30_1), 0, sizeof(G_B30_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B30_2;
	memset((&G_B30_2), 0, sizeof(G_B30_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B30_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B32_0;
	memset((&G_B32_0), 0, sizeof(G_B32_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B32_1;
	memset((&G_B32_1), 0, sizeof(G_B32_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B32_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B31_0;
	memset((&G_B31_0), 0, sizeof(G_B31_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B31_1;
	memset((&G_B31_1), 0, sizeof(G_B31_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B31_2 = NULL;
	int32_t G_B33_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B33_1;
	memset((&G_B33_1), 0, sizeof(G_B33_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B33_2;
	memset((&G_B33_2), 0, sizeof(G_B33_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B33_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B35_0;
	memset((&G_B35_0), 0, sizeof(G_B35_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B35_1;
	memset((&G_B35_1), 0, sizeof(G_B35_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B35_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B34_1;
	memset((&G_B34_1), 0, sizeof(G_B34_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B34_2 = NULL;
	int32_t G_B36_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B36_1;
	memset((&G_B36_1), 0, sizeof(G_B36_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B36_2;
	memset((&G_B36_2), 0, sizeof(G_B36_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B36_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B38_0;
	memset((&G_B38_0), 0, sizeof(G_B38_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B38_1;
	memset((&G_B38_1), 0, sizeof(G_B38_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B38_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B37_0;
	memset((&G_B37_0), 0, sizeof(G_B37_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B37_1;
	memset((&G_B37_1), 0, sizeof(G_B37_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B37_2 = NULL;
	int32_t G_B39_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B39_1;
	memset((&G_B39_1), 0, sizeof(G_B39_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B39_2;
	memset((&G_B39_2), 0, sizeof(G_B39_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B39_3 = NULL;
	float G_B41_0 = 0.0f;
	float G_B40_0 = 0.0f;
	int32_t G_B42_0 = 0;
	float G_B42_1 = 0.0f;
	float G_B44_0 = 0.0f;
	float G_B43_0 = 0.0f;
	int32_t G_B45_0 = 0;
	float G_B45_1 = 0.0f;
	{
		// if (!Application.isFocused)
		bool L_0;
		L_0 = Application_get_isFocused_mFEEC52E355AA7AAA6B7250520CA544D80BE77524(NULL);
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
		// if (!Mouse.current.leftButton.isPressed && _requireLMBToMove) return;
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_1;
		L_1 = Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline(NULL);
		NullCheck(L_1);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_2;
		L_2 = Mouse_get_leftButton_m1015BCBE6BE30B1D1D2702736A4E64120F6B5DFB_inline(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		bool L_4 = __this->____requireLMBToMove_8;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// if (!Mouse.current.leftButton.isPressed && _requireLMBToMove) return;
		return;
	}

IL_0022:
	{
		// float forward = (Keyboard.current.wKey.isPressed ? 1 : 0) - (Keyboard.current.sKey.isPressed ? 1 : 0);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_5;
		L_5 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_5);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_6;
		L_6 = Keyboard_get_wKey_m007A60195D3D483BA82BFD9B8650F326E2C58805(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_6, NULL);
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B8_0 = 1;
	}

IL_0037:
	{
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_8;
		L_8 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_8);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_9;
		L_9 = Keyboard_get_sKey_m2830A1BAA36CADA4783EFD815216A637363F1AB4(L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_9, NULL);
		G_B9_0 = G_B8_0;
		if (L_10)
		{
			G_B10_0 = G_B8_0;
			goto IL_004b;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_004c;
	}

IL_004b:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_004c:
	{
		V_0 = ((float)((int32_t)il2cpp_codegen_subtract(G_B11_1, G_B11_0)));
		// if (simForwardInput)
		bool L_11 = __this->___simForwardInput_7;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		// forward = 1f;
		V_0 = (1.0f);
	}

IL_005d:
	{
		// _targetTransform.position += linSpeed * _targetTransform.forward * forward * dt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->____targetTransform_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = __this->___linSpeed_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->____targetTransform_12;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_15, L_17, NULL);
		float L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		float L_21 = ___0_dt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_22, NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_23, NULL);
		// var speed = linSpeed;
		float L_24 = __this->___linSpeed_5;
		V_1 = L_24;
		// if (Keyboard.current.leftShiftKey.isPressed)
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_25;
		L_25 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_25);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_26;
		L_26 = Keyboard_get_leftShiftKey_mD0E48DA49D8EE54E82721974646BAD69B9B1457C(L_25, NULL);
		NullCheck(L_26);
		bool L_27;
		L_27 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_26, NULL);
		if (!L_27)
		{
			goto IL_00b5;
		}
	}
	{
		// speed *= 3f;
		float L_28 = V_1;
		V_1 = ((float)il2cpp_codegen_multiply(L_28, (3.0f)));
	}

IL_00b5:
	{
		// _targetTransform.position += speed * _targetTransform.forward * forward * dt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->____targetTransform_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = L_29;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->____targetTransform_12;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_32, L_34, NULL);
		float L_36 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, L_36, NULL);
		float L_38 = ___0_dt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_37, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_39, NULL);
		NullCheck(L_30);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_30, L_40, NULL);
		// _targetTransform.position += linSpeed * _targetTransform.up * (Keyboard.current.eKey.isPressed ? 1 : 0) * dt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->____targetTransform_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = L_41;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		float L_44 = __this->___linSpeed_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->____targetTransform_12;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_44, L_46, NULL);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_48;
		L_48 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_48);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_49;
		L_49 = Keyboard_get_eKey_mC0BD3EF3515DE5B2445BFF7B353CD7EDF80E94C1(L_48, NULL);
		NullCheck(L_49);
		bool L_50;
		L_50 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_49, NULL);
		G_B16_0 = L_47;
		G_B16_1 = L_43;
		G_B16_2 = L_42;
		if (L_50)
		{
			G_B17_0 = L_47;
			G_B17_1 = L_43;
			G_B17_2 = L_42;
			goto IL_011e;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_011f;
	}

IL_011e:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_011f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B18_1, ((float)G_B18_0), NULL);
		float L_52 = ___0_dt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_51, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B18_2, L_53, NULL);
		NullCheck(G_B18_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B18_3, L_54, NULL);
		// _targetTransform.position -= linSpeed * _targetTransform.up * (Keyboard.current.qKey.isPressed ? 1 : 0) * dt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = __this->____targetTransform_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = L_55;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		float L_58 = __this->___linSpeed_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = __this->____targetTransform_12;
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_58, L_60, NULL);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_62;
		L_62 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_62);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_63;
		L_63 = Keyboard_get_qKey_mE507B4932B15ADA03A98B1CFA2483C9CA8DF56F4(L_62, NULL);
		NullCheck(L_63);
		bool L_64;
		L_64 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_63, NULL);
		G_B19_0 = L_61;
		G_B19_1 = L_57;
		G_B19_2 = L_56;
		if (L_64)
		{
			G_B20_0 = L_61;
			G_B20_1 = L_57;
			G_B20_2 = L_56;
			goto IL_016b;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		goto IL_016c;
	}

IL_016b:
	{
		G_B21_0 = 1;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
	}

IL_016c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B21_1, ((float)G_B21_0), NULL);
		float L_66 = ___0_dt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_65, L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(G_B21_2, L_67, NULL);
		NullCheck(G_B21_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B21_3, L_68, NULL);
		// _targetTransform.position -= linSpeed * _targetTransform.right * (Keyboard.current.aKey.isPressed ? 1 : 0) * dt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69 = __this->____targetTransform_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = L_69;
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		float L_72 = __this->___linSpeed_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73 = __this->____targetTransform_12;
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_73, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_72, L_74, NULL);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_76;
		L_76 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_76);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_77;
		L_77 = Keyboard_get_aKey_m532122A52C670F95ADC84B56A4DD32160DD1E7CB(L_76, NULL);
		NullCheck(L_77);
		bool L_78;
		L_78 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_77, NULL);
		G_B22_0 = L_75;
		G_B22_1 = L_71;
		G_B22_2 = L_70;
		if (L_78)
		{
			G_B23_0 = L_75;
			G_B23_1 = L_71;
			G_B23_2 = L_70;
			goto IL_01b8;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		G_B24_3 = G_B22_2;
		goto IL_01b9;
	}

IL_01b8:
	{
		G_B24_0 = 1;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
	}

IL_01b9:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B24_1, ((float)G_B24_0), NULL);
		float L_80 = ___0_dt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_79, L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(G_B24_2, L_81, NULL);
		NullCheck(G_B24_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B24_3, L_82, NULL);
		// _targetTransform.position += linSpeed * _targetTransform.right * (Keyboard.current.dKey.isPressed ? 1 : 0) * dt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83 = __this->____targetTransform_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = L_83;
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		float L_86 = __this->___linSpeed_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87 = __this->____targetTransform_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_86, L_88, NULL);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_90;
		L_90 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_90);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_91;
		L_91 = Keyboard_get_dKey_m0973269D5752E5EEA607BAFB24B39AD9F45122DC(L_90, NULL);
		NullCheck(L_91);
		bool L_92;
		L_92 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_91, NULL);
		G_B25_0 = L_89;
		G_B25_1 = L_85;
		G_B25_2 = L_84;
		if (L_92)
		{
			G_B26_0 = L_89;
			G_B26_1 = L_85;
			G_B26_2 = L_84;
			goto IL_0205;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		G_B27_3 = G_B25_2;
		goto IL_0206;
	}

IL_0205:
	{
		G_B27_0 = 1;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
		G_B27_3 = G_B26_2;
	}

IL_0206:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B27_1, ((float)G_B27_0), NULL);
		float L_94 = ___0_dt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_93, L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B27_2, L_95, NULL);
		NullCheck(G_B27_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B27_3, L_96, NULL);
		// _targetTransform.position += speed * _targetTransform.up * (Keyboard.current.eKey.isPressed ? 1 : 0) * dt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97 = __this->____targetTransform_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98 = L_97;
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_98, NULL);
		float L_100 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101 = __this->____targetTransform_12;
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_100, L_102, NULL);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_104;
		L_104 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_104);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_105;
		L_105 = Keyboard_get_eKey_mC0BD3EF3515DE5B2445BFF7B353CD7EDF80E94C1(L_104, NULL);
		NullCheck(L_105);
		bool L_106;
		L_106 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_105, NULL);
		G_B28_0 = L_103;
		G_B28_1 = L_99;
		G_B28_2 = L_98;
		if (L_106)
		{
			G_B29_0 = L_103;
			G_B29_1 = L_99;
			G_B29_2 = L_98;
			goto IL_024d;
		}
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		G_B30_3 = G_B28_2;
		goto IL_024e;
	}

IL_024d:
	{
		G_B30_0 = 1;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
		G_B30_3 = G_B29_2;
	}

IL_024e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B30_1, ((float)G_B30_0), NULL);
		float L_108 = ___0_dt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_107, L_108, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B30_2, L_109, NULL);
		NullCheck(G_B30_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B30_3, L_110, NULL);
		// _targetTransform.position -= speed * _targetTransform.up * (Keyboard.current.qKey.isPressed ? 1 : 0) * dt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111 = __this->____targetTransform_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112 = L_111;
		NullCheck(L_112);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_112, NULL);
		float L_114 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_115 = __this->____targetTransform_12;
		NullCheck(L_115);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_115, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_114, L_116, NULL);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_118;
		L_118 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_118);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_119;
		L_119 = Keyboard_get_qKey_mE507B4932B15ADA03A98B1CFA2483C9CA8DF56F4(L_118, NULL);
		NullCheck(L_119);
		bool L_120;
		L_120 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_119, NULL);
		G_B31_0 = L_117;
		G_B31_1 = L_113;
		G_B31_2 = L_112;
		if (L_120)
		{
			G_B32_0 = L_117;
			G_B32_1 = L_113;
			G_B32_2 = L_112;
			goto IL_0295;
		}
	}
	{
		G_B33_0 = 0;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		G_B33_3 = G_B31_2;
		goto IL_0296;
	}

IL_0295:
	{
		G_B33_0 = 1;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
		G_B33_3 = G_B32_2;
	}

IL_0296:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B33_1, ((float)G_B33_0), NULL);
		float L_122 = ___0_dt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_121, L_122, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(G_B33_2, L_123, NULL);
		NullCheck(G_B33_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B33_3, L_124, NULL);
		// _targetTransform.position -= speed * _targetTransform.right * (Keyboard.current.aKey.isPressed ? 1 : 0) * dt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125 = __this->____targetTransform_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126 = L_125;
		NullCheck(L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_126, NULL);
		float L_128 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129 = __this->____targetTransform_12;
		NullCheck(L_129);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_129, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_128, L_130, NULL);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_132;
		L_132 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_132);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_133;
		L_133 = Keyboard_get_aKey_m532122A52C670F95ADC84B56A4DD32160DD1E7CB(L_132, NULL);
		NullCheck(L_133);
		bool L_134;
		L_134 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_133, NULL);
		G_B34_0 = L_131;
		G_B34_1 = L_127;
		G_B34_2 = L_126;
		if (L_134)
		{
			G_B35_0 = L_131;
			G_B35_1 = L_127;
			G_B35_2 = L_126;
			goto IL_02dd;
		}
	}
	{
		G_B36_0 = 0;
		G_B36_1 = G_B34_0;
		G_B36_2 = G_B34_1;
		G_B36_3 = G_B34_2;
		goto IL_02de;
	}

IL_02dd:
	{
		G_B36_0 = 1;
		G_B36_1 = G_B35_0;
		G_B36_2 = G_B35_1;
		G_B36_3 = G_B35_2;
	}

IL_02de:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B36_1, ((float)G_B36_0), NULL);
		float L_136 = ___0_dt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		L_137 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_135, L_136, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(G_B36_2, L_137, NULL);
		NullCheck(G_B36_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B36_3, L_138, NULL);
		// _targetTransform.position += speed * _targetTransform.right * (Keyboard.current.dKey.isPressed ? 1 : 0) * dt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139 = __this->____targetTransform_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_140 = L_139;
		NullCheck(L_140);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_140, NULL);
		float L_142 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143 = __this->____targetTransform_12;
		NullCheck(L_143);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_143, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_142, L_144, NULL);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_146;
		L_146 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_146);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_147;
		L_147 = Keyboard_get_dKey_m0973269D5752E5EEA607BAFB24B39AD9F45122DC(L_146, NULL);
		NullCheck(L_147);
		bool L_148;
		L_148 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_147, NULL);
		G_B37_0 = L_145;
		G_B37_1 = L_141;
		G_B37_2 = L_140;
		if (L_148)
		{
			G_B38_0 = L_145;
			G_B38_1 = L_141;
			G_B38_2 = L_140;
			goto IL_0325;
		}
	}
	{
		G_B39_0 = 0;
		G_B39_1 = G_B37_0;
		G_B39_2 = G_B37_1;
		G_B39_3 = G_B37_2;
		goto IL_0326;
	}

IL_0325:
	{
		G_B39_0 = 1;
		G_B39_1 = G_B38_0;
		G_B39_2 = G_B38_1;
		G_B39_3 = G_B38_2;
	}

IL_0326:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B39_1, ((float)G_B39_0), NULL);
		float L_150 = ___0_dt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_149, L_150, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B39_2, L_151, NULL);
		NullCheck(G_B39_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B39_3, L_152, NULL);
		// float rotate = 0f;
		V_2 = (0.0f);
		// rotate += (Keyboard.current.rightArrowKey.isPressed ? 1 : 0);
		float L_153 = V_2;
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_154;
		L_154 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_154);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_155;
		L_155 = Keyboard_get_rightArrowKey_mECEFE3645349708104CB154806BD4F04F24B3439(L_154, NULL);
		NullCheck(L_155);
		bool L_156;
		L_156 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_155, NULL);
		G_B40_0 = L_153;
		if (L_156)
		{
			G_B41_0 = L_153;
			goto IL_0357;
		}
	}
	{
		G_B42_0 = 0;
		G_B42_1 = G_B40_0;
		goto IL_0358;
	}

IL_0357:
	{
		G_B42_0 = 1;
		G_B42_1 = G_B41_0;
	}

IL_0358:
	{
		V_2 = ((float)il2cpp_codegen_add(G_B42_1, ((float)G_B42_0)));
		// rotate -= (Keyboard.current.leftArrowKey.isPressed ? 1 : 0);
		float L_157 = V_2;
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_158;
		L_158 = Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline(NULL);
		NullCheck(L_158);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_159;
		L_159 = Keyboard_get_leftArrowKey_m892B16258F44B124B9ECC1D6F0EB53E9947597EB(L_158, NULL);
		NullCheck(L_159);
		bool L_160;
		L_160 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_159, NULL);
		G_B43_0 = L_157;
		if (L_160)
		{
			G_B44_0 = L_157;
			goto IL_0370;
		}
	}
	{
		G_B45_0 = 0;
		G_B45_1 = G_B43_0;
		goto IL_0371;
	}

IL_0370:
	{
		G_B45_0 = 1;
		G_B45_1 = G_B44_0;
	}

IL_0371:
	{
		V_2 = ((float)il2cpp_codegen_subtract(G_B45_1, ((float)G_B45_0)));
		// rotate *= 5f;
		float L_161 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_161, (5.0f)));
		// Vector3 ea = _targetTransform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_162 = __this->____targetTransform_12;
		NullCheck(L_162);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163;
		L_163 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_162, NULL);
		V_3 = L_163;
		// ea.y += 0.1f * rotSpeed * rotate * dt;
		float* L_164 = (&(&V_3)->___y_3);
		float* L_165 = L_164;
		float L_166 = *((float*)L_165);
		float L_167 = __this->___rotSpeed_6;
		float L_168 = V_2;
		float L_169 = ___0_dt;
		*((float*)L_165) = (float)((float)il2cpp_codegen_add(L_166, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.100000001f), L_167)), L_168)), L_169))));
		// _targetTransform.eulerAngles = ea;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_170 = __this->____targetTransform_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171 = V_3;
		NullCheck(L_170);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_170, L_171, NULL);
		// }
		return;
	}
}
// System.Void CamController::UpdateDragging(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamController_UpdateDragging_mAA989DD2722D386E7C66DD822C4C534A53F3D146 (CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE* __this, float ___0_dt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanDebugGUI_tB30111A8CE1A6F1AFD9E65076E3E692DDE7979C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!Application.isFocused)
		bool L_0;
		L_0 = Application_get_isFocused_mFEEC52E355AA7AAA6B7250520CA544D80BE77524(NULL);
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
		//         Vector2 mousePos =
		// #if ENABLE_INPUT_SYSTEM
		//             Mouse.current.position.ReadValue();
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_1;
		L_1 = Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline(NULL);
		NullCheck(L_1);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_2;
		L_2 = Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline(L_1, NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_2, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		V_0 = L_3;
		//         var wasLeftMouseButtonPressed =
		// #if ENABLE_INPUT_SYSTEM
		//             Mouse.current.leftButton.wasPressedThisFrame;
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_4;
		L_4 = Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline(NULL);
		NullCheck(L_4);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_5;
		L_5 = Mouse_get_leftButton_m1015BCBE6BE30B1D1D2702736A4E64120F6B5DFB_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B(L_5, NULL);
		V_1 = L_6;
		// if (!_dragging && wasLeftMouseButtonPressed && camera.rect.Contains(camera.ScreenToViewportPoint(mousePos)) &&
		//     !Crest.OceanDebugGUI.OverGUI(mousePos))
		bool L_7 = __this->____dragging_10;
		bool L_8 = V_1;
		if (!((int32_t)(((((int32_t)L_7) == ((int32_t)0))? 1 : 0)&(int32_t)L_8)))
		{
			goto IL_0071;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___camera_13;
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = Camera_get_rect_m848C23B32814D1351E43F0A0110DB8ECA19C6772(L_9, NULL);
		V_2 = L_10;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___camera_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_12, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Camera_ScreenToViewportPoint_m8907015773080F63D1034CEDEDEA4AF14FB2F3C5(L_11, L_13, NULL);
		bool L_15;
		L_15 = Rect_Contains_mB1160CD465F3E9616AA4EED72AFFD611BD8D2B6B((&V_2), L_14, NULL);
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(OceanDebugGUI_tB30111A8CE1A6F1AFD9E65076E3E692DDE7979C1_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = OceanDebugGUI_OverGUI_m36B4E578D589AACEDEF10B94B13E36209F57F79B(L_16, NULL);
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		// _dragging = true;
		__this->____dragging_10 = (bool)1;
		// _lastMousePos = mousePos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		__this->____lastMousePos_9 = L_18;
	}

IL_0071:
	{
		// if (_dragging && Mouse.current.leftButton.wasReleasedThisFrame)
		bool L_19 = __this->____dragging_10;
		if (!L_19)
		{
			goto IL_00a1;
		}
	}
	{
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_20;
		L_20 = Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline(NULL);
		NullCheck(L_20);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_21;
		L_21 = Mouse_get_leftButton_m1015BCBE6BE30B1D1D2702736A4E64120F6B5DFB_inline(L_20, NULL);
		NullCheck(L_21);
		bool L_22;
		L_22 = ButtonControl_get_wasReleasedThisFrame_m492DB9A10A1EED0FACE2330E230A6DF7650EEC7D(L_21, NULL);
		if (!L_22)
		{
			goto IL_00a1;
		}
	}
	{
		// _dragging = false;
		__this->____dragging_10 = (bool)0;
		// _lastMousePos = -Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_23, NULL);
		__this->____lastMousePos_9 = L_24;
	}

IL_00a1:
	{
		// if (_dragging)
		bool L_25 = __this->____dragging_10;
		if (!L_25)
		{
			goto IL_0117;
		}
	}
	{
		// Vector2 delta = mousePos - _lastMousePos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->____lastMousePos_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_26, L_27, NULL);
		V_3 = L_28;
		// Vector3 ea = _targetTransform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->____targetTransform_12;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_29, NULL);
		V_4 = L_30;
		// ea.x += -0.1f * rotSpeed * delta.y * dt;
		float* L_31 = (&(&V_4)->___x_2);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float L_34 = __this->___rotSpeed_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_3;
		float L_36 = L_35.___y_1;
		float L_37 = ___0_dt;
		*((float*)L_32) = (float)((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-0.100000001f), L_34)), L_36)), L_37))));
		// ea.y += 0.1f * rotSpeed * delta.x * dt;
		float* L_38 = (&(&V_4)->___y_3);
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		float L_41 = __this->___rotSpeed_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_3;
		float L_43 = L_42.___x_0;
		float L_44 = ___0_dt;
		*((float*)L_39) = (float)((float)il2cpp_codegen_add(L_40, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.100000001f), L_41)), L_43)), L_44))));
		// _targetTransform.eulerAngles = ea;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->____targetTransform_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_4;
		NullCheck(L_45);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_45, L_46, NULL);
		// _lastMousePos = mousePos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_0;
		__this->____lastMousePos_9 = L_47;
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void CamController::UpdateKillRoll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamController_UpdateKillRoll_m5EDB0E07FCA909BADFF525BF4985307FDAF86607 (CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_debug._enableCameraRoll) return;
		DebugFields_tB4412D974DB6F50983C57BD238B339874A225296* L_0 = __this->____debug_14;
		NullCheck(L_0);
		bool L_1 = L_0->____enableCameraRoll_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (_debug._enableCameraRoll) return;
		return;
	}

IL_000e:
	{
		// Vector3 ea = _targetTransform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____targetTransform_12;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_2, NULL);
		V_0 = L_3;
		// ea.z = 0f;
		(&V_0)->___z_4 = (0.0f);
		// transform.eulerAngles = ea;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void CamController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamController__ctor_mEC9FFB985904D5B9B73189CB99E8EF9DCF98D81F (CamController_t660A5F8B47B7910576137B5764A02F6FE3B1E4CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugFields_tB4412D974DB6F50983C57BD238B339874A225296_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float linSpeed = 10f;
		__this->___linSpeed_5 = (10.0f);
		// public float rotSpeed = 70f;
		__this->___rotSpeed_6 = (70.0f);
		// Vector2 _lastMousePos = -Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_0, NULL);
		__this->____lastMousePos_9 = L_1;
		// public float _fixedDt = 1 / 60f;
		__this->____fixedDt_11 = (0.0166666675f);
		// DebugFields _debug = new DebugFields();
		DebugFields_tB4412D974DB6F50983C57BD238B339874A225296* L_2 = (DebugFields_tB4412D974DB6F50983C57BD238B339874A225296*)il2cpp_codegen_object_new(DebugFields_tB4412D974DB6F50983C57BD238B339874A225296_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DebugFields__ctor_m3EE8584CE2E9C6DB49E1F7FCE5661C2D9280ADA6(L_2, NULL);
		__this->____debug_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____debug_14), (void*)L_2);
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
// System.Void CamController/DebugFields::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugFields__ctor_m3EE8584CE2E9C6DB49E1F7FCE5661C2D9280ADA6 (DebugFields_tB4412D974DB6F50983C57BD238B339874A225296* __this, const RuntimeMethod* method) 
{
	{
		// public float _occlusionMeshScale = 1f;
		__this->____occlusionMeshScale_2 = (1.0f);
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
// System.Void OceanSampleDisplacementDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OceanSampleDisplacementDemo_Update_mDBE576AC203064E1F615AE27D797F0A1160875F0 (OceanSampleDisplacementDemo_tB3E058293C6295EF39BADE168D3DD35D87572ABC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollProvider_t10FA4798F00BB850E96620FE79A66486F60D53D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// if (OceanRenderer.Instance == null)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_0;
		L_0 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (_trackCamera)
		bool L_2 = __this->____trackCamera_5;
		if (!L_2)
		{
			goto IL_012d;
		}
	}
	{
		// var height = Mathf.Abs(Camera.main.transform.position.y - OceanRenderer.Instance.SeaLevel);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y_3;
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_7;
		L_7 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_7);
		float L_8;
		L_8 = OceanRenderer_get_SeaLevel_m708EC6ECDFDA744AAA8246BF2DD627EFF3F35024(L_7, NULL);
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_8)));
		// var lookAngle = Mathf.Max(Mathf.Abs(Camera.main.transform.forward.y), 0.001f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		float L_13 = L_12.___y_3;
		float L_14;
		L_14 = fabsf(L_13);
		float L_15;
		L_15 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_14, (0.00100000005f), NULL);
		V_1 = L_15;
		// var offset = height / lookAngle;
		float L_16 = V_1;
		V_2 = ((float)(L_9/L_16));
		// _markerPos[0] = Camera.main.transform.position + Camera.main.transform.forward * offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = __this->____markerPos_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
		L_18 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21;
		L_21 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_22, NULL);
		float L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_25, NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_26);
		// _markerPos[1] = Camera.main.transform.position + Camera.main.transform.forward * offset + _samplesRadius * Vector3.right;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = __this->____markerPos_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28;
		L_28 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31;
		L_31 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_32, NULL);
		float L_34 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_30, L_35, NULL);
		float L_37 = __this->____samplesRadius_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_37, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_39, NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_40);
		// _markerPos[2] = Camera.main.transform.position + Camera.main.transform.forward * offset + _samplesRadius * Vector3.forward;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_41 = __this->____markerPos_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42;
		L_42 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_45;
		L_45 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_46, NULL);
		float L_48 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_47, L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_44, L_49, NULL);
		float L_51 = __this->____samplesRadius_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_51, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_50, L_53, NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_54);
	}

IL_012d:
	{
		// var collProvider = OceanRenderer.Instance.CollisionProvider;
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_55;
		L_55 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = OceanRenderer_get_CollisionProvider_mF92D16873C96007516EDF7F243C05E8AE6A376A7_inline(L_55, NULL);
		// var status = collProvider.Query(GetHashCode(), _minGridSize, _markerPos, _resultDisps, _resultNorms, _resultVels);
		RuntimeObject* L_57 = L_56;
		int32_t L_58;
		L_58 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, __this);
		float L_59 = __this->____minGridSize_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = __this->____markerPos_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_61 = __this->____resultDisps_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = __this->____resultNorms_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_63 = __this->____resultVels_11;
		NullCheck(L_57);
		int32_t L_64;
		L_64 = InterfaceFuncInvoker6< int32_t, int32_t, float, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* >::Invoke(1 /* System.Int32 Crest.ICollProvider::Query(System.Int32,System.Single,UnityEngine.Vector3[],UnityEngine.Vector3[],UnityEngine.Vector3[],UnityEngine.Vector3[]) */, ICollProvider_t10FA4798F00BB850E96620FE79A66486F60D53D1_il2cpp_TypeInfo_var, L_57, L_58, L_59, L_60, L_61, L_62, L_63);
		V_0 = L_64;
		// if (collProvider.RetrieveSucceeded(status))
		int32_t L_65 = V_0;
		NullCheck(L_57);
		bool L_66;
		L_66 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean Crest.ICollProvider::RetrieveSucceeded(System.Int32) */, ICollProvider_t10FA4798F00BB850E96620FE79A66486F60D53D1_il2cpp_TypeInfo_var, L_57, L_65);
		if (!L_66)
		{
			goto IL_0314;
		}
	}
	{
		// for (int i = 0; i < _resultDisps.Length; i++)
		V_3 = 0;
		goto IL_0254;
	}

IL_0174:
	{
		// if (_markerObjects[i] == null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_67 = __this->____markerObjects_7;
		int32_t L_68 = V_3;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_70, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_71)
		{
			goto IL_01c5;
		}
	}
	{
		// _markerObjects[i] = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_72 = __this->____markerObjects_7;
		int32_t L_73 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(3, NULL);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_74);
		// Destroy(_markerObjects[i].GetComponent<Collider>());
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_75 = __this->____markerObjects_7;
		int32_t L_76 = V_3;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_79;
		L_79 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_78, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_79, NULL);
		// _markerObjects[i].transform.localScale = Vector3.one * 0.5f;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_80 = __this->____markerObjects_7;
		int32_t L_81 = V_3;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_85, (0.5f), NULL);
		NullCheck(L_84);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_84, L_86, NULL);
	}

IL_01c5:
	{
		// var query = _markerPos[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_87 = __this->____markerPos_8;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_4 = L_90;
		// query.y = OceanRenderer.Instance.SeaLevel;
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_91;
		L_91 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_91);
		float L_92;
		L_92 = OceanRenderer_get_SeaLevel_m708EC6ECDFDA744AAA8246BF2DD627EFF3F35024(L_91, NULL);
		(&V_4)->___y_3 = L_92;
		// var disp = _resultDisps[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = __this->____resultDisps_9;
		int32_t L_94 = V_3;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_5 = L_96;
		// var pos = query;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_4;
		V_6 = L_97;
		// pos.y = disp.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = V_5;
		float L_99 = L_98.___y_3;
		(&V_6)->___y_3 = L_99;
		// Debug.DrawLine(pos, pos - disp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_101, L_102, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m8FB0C8DDC2C39DA046D90357EB6732CE2163AAE4(L_100, L_103, NULL);
		// _markerObjects[i].transform.position = pos;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_104 = __this->____markerObjects_7;
		int32_t L_105 = V_3;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
		L_108 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_107, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_6;
		NullCheck(L_108);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_108, L_109, NULL);
		// _markerObjects[i].transform.rotation = Quaternion.FromToRotation(Vector3.up, _resultNorms[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_110 = __this->____markerObjects_7;
		int32_t L_111 = V_3;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck(L_113);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_114;
		L_114 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_113, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_116 = __this->____resultNorms_10;
		int32_t L_117 = V_3;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_120;
		L_120 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_115, L_119, NULL);
		NullCheck(L_114);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_114, L_120, NULL);
		// for (int i = 0; i < _resultDisps.Length; i++)
		int32_t L_121 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_0254:
	{
		// for (int i = 0; i < _resultDisps.Length; i++)
		int32_t L_122 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_123 = __this->____resultDisps_9;
		NullCheck(L_123);
		if ((((int32_t)L_122) < ((int32_t)((int32_t)(((RuntimeArray*)L_123)->max_length)))))
		{
			goto IL_0174;
		}
	}
	{
		// for (var i = 0; i < _resultNorms.Length; i++)
		V_7 = 0;
		goto IL_02af;
	}

IL_0267:
	{
		// Debug.DrawLine(_markerObjects[i].transform.position, _markerObjects[i].transform.position + _resultNorms[i], Color.blue);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_124 = __this->____markerObjects_7;
		int32_t L_125 = V_7;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_127);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128;
		L_128 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_127, NULL);
		NullCheck(L_128);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_128, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_130 = __this->____markerObjects_7;
		int32_t L_131 = V_7;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_133);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134;
		L_134 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_133, NULL);
		NullCheck(L_134);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_134, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_136 = __this->____resultNorms_10;
		int32_t L_137 = V_7;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_135, L_139, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_141;
		L_141 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_129, L_140, L_141, NULL);
		// for (var i = 0; i < _resultNorms.Length; i++)
		int32_t L_142 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_02af:
	{
		// for (var i = 0; i < _resultNorms.Length; i++)
		int32_t L_143 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_144 = __this->____resultNorms_10;
		NullCheck(L_144);
		if ((((int32_t)L_143) < ((int32_t)((int32_t)(((RuntimeArray*)L_144)->max_length)))))
		{
			goto IL_0267;
		}
	}
	{
		// for (var i = 0; i < _resultVels.Length; i++)
		V_8 = 0;
		goto IL_0308;
	}

IL_02c0:
	{
		// Debug.DrawLine(_markerObjects[i].transform.position, _markerObjects[i].transform.position + _resultVels[i], Color.green);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_145 = __this->____markerObjects_7;
		int32_t L_146 = V_8;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		NullCheck(L_148);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_149;
		L_149 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_148, NULL);
		NullCheck(L_149);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_149, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_151 = __this->____markerObjects_7;
		int32_t L_152 = V_8;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_154);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_155;
		L_155 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_154, NULL);
		NullCheck(L_155);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156;
		L_156 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_155, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_157 = __this->____resultVels_11;
		int32_t L_158 = V_8;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161;
		L_161 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_156, L_160, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_162;
		L_162 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_150, L_161, L_162, NULL);
		// for (var i = 0; i < _resultVels.Length; i++)
		int32_t L_163 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_163, 1));
	}

IL_0308:
	{
		// for (var i = 0; i < _resultVels.Length; i++)
		int32_t L_164 = V_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_165 = __this->____resultVels_11;
		NullCheck(L_165);
		if ((((int32_t)L_164) < ((int32_t)((int32_t)(((RuntimeArray*)L_165)->max_length)))))
		{
			goto IL_02c0;
		}
	}

IL_0314:
	{
		// }
		return;
	}
}
// System.Void OceanSampleDisplacementDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OceanSampleDisplacementDemo__ctor_m6989651FE4028931084ED5D19CA58F69D4D16644 (OceanSampleDisplacementDemo_tB3E058293C6295EF39BADE168D3DD35D87572ABC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool _trackCamera = true;
		__this->____trackCamera_5 = (bool)1;
		// GameObject[] _markerObjects = new GameObject[3];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->____markerObjects_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____markerObjects_7), (void*)L_0);
		// Vector3[] _markerPos = new Vector3[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->____markerPos_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____markerPos_8), (void*)L_1);
		// Vector3[] _resultDisps = new Vector3[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->____resultDisps_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____resultDisps_9), (void*)L_2);
		// Vector3[] _resultNorms = new Vector3[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->____resultNorms_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____resultNorms_10), (void*)L_3);
		// Vector3[] _resultVels = new Vector3[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->____resultVels_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____resultVels_11), (void*)L_4);
		// float _samplesRadius = 5f;
		__this->____samplesRadius_12 = (5.0f);
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
// System.Void OceanSampleHeightDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OceanSampleHeightDemo_Update_m609305DED1146D12B0222DCD242FEB7532FF3C1A (OceanSampleHeightDemo_t49EDF122C3E5ABDA35789E11AD2894A550FC6FFC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var r = transform.lossyScale.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_0, NULL);
		V_2 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		V_0 = L_2;
		// _sampleHeightHelper.Init(transform.position, 2f * r);
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_3 = __this->____sampleHeightHelper_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = V_0;
		NullCheck(L_3);
		SampleHeightHelper_Init_mFBB6B140575288F0009EC8D262F93FE88C212258(L_3, L_5, ((float)il2cpp_codegen_multiply((2.0f), L_6)), (bool)0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// if (_sampleHeightHelper.Sample(out var height))
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_7 = __this->____sampleHeightHelper_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = SampleHeightHelper_Sample_m7CCA76E801D160404EB59417169323D068BE61FE(L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		// var pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		V_3 = L_10;
		// pos.y = height;
		float L_11 = V_1;
		(&V_3)->___y_3 = L_11;
		// transform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void OceanSampleHeightDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OceanSampleHeightDemo__ctor_m19935D0513BBEF30538FBB1C632845D9DBB83146 (OceanSampleHeightDemo_t49EDF122C3E5ABDA35789E11AD2894A550FC6FFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SampleHeightHelper _sampleHeightHelper = new SampleHeightHelper();
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_0 = (SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1*)il2cpp_codegen_object_new(SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SampleHeightHelper__ctor_m25E4C8B3553A29E39CCCC49B2203EE612D781825(L_0, NULL);
		__this->____sampleHeightHelper_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sampleHeightHelper_5), (void*)L_0);
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
// UnityEngine.Events.UnityEvent OceanSampleHeightEvents::get_OnBelowOceanSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* OceanSampleHeightEvents_get_OnBelowOceanSurface_m6F7BA41104264C338209CDFCF572F692A2478F5D (OceanSampleHeightEvents_t1437FC62AE2049F084964630B2E08C4C34CF729F* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnBelowOceanSurface => _onBelowOceanSurface;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onBelowOceanSurface_9;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent OceanSampleHeightEvents::get_OnAboveOceanSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* OceanSampleHeightEvents_get_OnAboveOceanSurface_m77F3D573AE6DCB9659ED4CD609E2215FE3811B2E (OceanSampleHeightEvents_t1437FC62AE2049F084964630B2E08C4C34CF729F* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnAboveOceanSurface => _onAboveOceanSurface;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onAboveOceanSurface_10;
		return L_0;
	}
}
// OceanSampleHeightEvents/FloatEvent OceanSampleHeightEvents::get_DistanceFromOceanSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169* OceanSampleHeightEvents_get_DistanceFromOceanSurface_mE548D462DE4794B63B04CBC3941957C0B33CA599 (OceanSampleHeightEvents_t1437FC62AE2049F084964630B2E08C4C34CF729F* __this, const RuntimeMethod* method) 
{
	{
		// public FloatEvent DistanceFromOceanSurface => _distanceFromOceanSurface;
		FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169* L_0 = __this->____distanceFromOceanSurface_11;
		return L_0;
	}
}
// System.Void OceanSampleHeightEvents::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OceanSampleHeightEvents_Update_m7A0CF9B5184AFC58847D771039B2D5F5A0C013C5 (OceanSampleHeightEvents_t1437FC62AE2049F084964630B2E08C4C34CF729F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		// _sampleHeightHelper.Init(transform.position, 2f * _minimumWaveLength);
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_0 = __this->____sampleHeightHelper_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->____minimumWaveLength_5;
		NullCheck(L_0);
		SampleHeightHelper_Init_mFBB6B140575288F0009EC8D262F93FE88C212258(L_0, L_2, ((float)il2cpp_codegen_multiply((2.0f), L_3)), (bool)0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// if (_sampleHeightHelper.Sample(out var height))
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_4 = __this->____sampleHeightHelper_14;
		NullCheck(L_4);
		bool L_5;
		L_5 = SampleHeightHelper_Sample_m7CCA76E801D160404EB59417169323D068BE61FE(L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_00e2;
		}
	}
	{
		// var distance = transform.position.y - height;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		float L_9 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		// var isAboveSurface = distance > 0;
		float L_10 = V_1;
		V_2 = (bool)((((float)L_10) > ((float)(0.0f)))? 1 : 0);
		// if (_isAboveSurface != isAboveSurface || _isFirstUpdate)
		bool L_11 = __this->____isAboveSurface_12;
		bool L_12 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0063;
		}
	}
	{
		bool L_13 = __this->____isFirstUpdate_13;
		if (!L_13)
		{
			goto IL_0091;
		}
	}

IL_0063:
	{
		// _isAboveSurface = isAboveSurface;
		bool L_14 = V_2;
		__this->____isAboveSurface_12 = L_14;
		// _isFirstUpdate = false;
		__this->____isFirstUpdate_13 = (bool)0;
		// if (_isAboveSurface)
		bool L_15 = __this->____isAboveSurface_12;
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		// _onAboveOceanSurface.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_16 = __this->____onAboveOceanSurface_10;
		NullCheck(L_16);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_16, NULL);
		goto IL_0091;
	}

IL_0086:
	{
		// _onBelowOceanSurface.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_17 = __this->____onBelowOceanSurface_9;
		NullCheck(L_17);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_17, NULL);
	}

IL_0091:
	{
		// if (_distanceFromOceanSurface.GetPersistentEventCount() > 0)
		FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169* L_18 = __this->____distanceFromOceanSurface_11;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = UnityEventBase_GetPersistentEventCount_mB1902016BED421E36781F7169554C7CF554430AF(L_18, NULL);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		// var distanceFromOceanSurface = _distanceCurve.Evaluate(1f - Mathf.Abs(distance) / _maximumDistance);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_20 = __this->____distanceCurve_8;
		float L_21 = V_1;
		float L_22;
		L_22 = fabsf(L_21);
		float L_23 = __this->____maximumDistance_7;
		NullCheck(L_20);
		float L_24;
		L_24 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_20, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_22/L_23)))), NULL);
		V_3 = L_24;
		// if (!_normaliseDistance)
		bool L_25 = __this->____normaliseDistance_6;
		if (L_25)
		{
			goto IL_00d6;
		}
	}
	{
		// distanceFromOceanSurface = _maximumDistance - distanceFromOceanSurface * _maximumDistance;
		float L_26 = __this->____maximumDistance_7;
		float L_27 = V_3;
		float L_28 = __this->____maximumDistance_7;
		V_3 = ((float)il2cpp_codegen_subtract(L_26, ((float)il2cpp_codegen_multiply(L_27, L_28))));
	}

IL_00d6:
	{
		// _distanceFromOceanSurface.Invoke(distanceFromOceanSurface);
		FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169* L_29 = __this->____distanceFromOceanSurface_11;
		float L_30 = V_3;
		NullCheck(L_29);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_29, L_30, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Void OceanSampleHeightEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OceanSampleHeightEvents__ctor_m3AEEAAF14748DB0DF6632881BC201F8226E10072 (OceanSampleHeightEvents_t1437FC62AE2049F084964630B2E08C4C34CF729F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] float _minimumWaveLength = 1f;
		__this->____minimumWaveLength_5 = (1.0f);
		// [SerializeField] bool _normaliseDistance = true;
		__this->____normaliseDistance_6 = (bool)1;
		// [SerializeField] float _maximumDistance = 100f;
		__this->____maximumDistance_7 = (100.0f);
		// [SerializeField] AnimationCurve _distanceCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_Linear_mAB497B8B64A4B1C8AC9547B2F5184DB118F544EB((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		__this->____distanceCurve_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____distanceCurve_8), (void*)L_0);
		// [SerializeField] UnityEvent _onBelowOceanSurface = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->____onBelowOceanSurface_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onBelowOceanSurface_9), (void*)L_1);
		// [SerializeField] UnityEvent _onAboveOceanSurface = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_2, NULL);
		__this->____onAboveOceanSurface_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onAboveOceanSurface_10), (void*)L_2);
		// [SerializeField] FloatEvent _distanceFromOceanSurface = new FloatEvent();
		FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169* L_3 = (FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169*)il2cpp_codegen_object_new(FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FloatEvent__ctor_m7E6AE184A0BB9CB934378A0362F26EAADAD727BD(L_3, NULL);
		__this->____distanceFromOceanSurface_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____distanceFromOceanSurface_11), (void*)L_3);
		// bool _isFirstUpdate = true;
		__this->____isFirstUpdate_13 = (bool)1;
		// readonly SampleHeightHelper _sampleHeightHelper = new SampleHeightHelper();
		SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1* L_4 = (SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1*)il2cpp_codegen_object_new(SampleHeightHelper_tE3C2B2CC255098FEFD4C1DCFB007E164903F5FE1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SampleHeightHelper__ctor_m25E4C8B3553A29E39CCCC49B2203EE612D781825(L_4, NULL);
		__this->____sampleHeightHelper_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sampleHeightHelper_14), (void*)L_4);
		CustomMonoBehaviour__ctor_mD1D909DC7D63D8DD2CCF388F4A72B01261CC4CF4(__this, NULL);
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
// System.Void OceanSampleHeightEvents/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m7E6AE184A0BB9CB934378A0362F26EAADAD727BD (FloatEvent_t1E6DFF5358D487B28697592F1202C3EE470F4169* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void RandomMotion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomMotion_Start_mF9E19765D27ED3C2ABCB71BBE88291DD3CE7657C (RandomMotion_t03B8E4D584482177E1E84BBD976D85D7E690311D* __this, const RuntimeMethod* method) 
{
	{
		// _origin = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->____origin_12 = L_1;
		// _orthoAxis = Quaternion.AngleAxis(90f, Vector3.up) * _axis;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((90.0f), L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->____axis_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_4, NULL);
		__this->____orthoAxis_6 = L_5;
		// }
		return;
	}
}
// System.Void RandomMotion::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomMotion_Update_mBB0E856F3F99291424C0D5BD89B61BA074261D2E (RandomMotion_t03B8E4D584482177E1E84BBD976D85D7E690311D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// float rnd = 2f * (Mathf.PerlinNoise(0.5f + 0.5f * Mathf.Cos(_freq * Time.time), 0.5f + 0.5f * Mathf.Sin(_freq * Time.time)) - 0.5f);
		float L_0 = __this->____freq_8;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2;
		L_2 = cosf(((float)il2cpp_codegen_multiply(L_0, L_1)));
		float L_3 = __this->____freq_8;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_5;
		L_5 = sinf(((float)il2cpp_codegen_multiply(L_3, L_4)));
		float L_6;
		L_6 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_add((0.5f), ((float)il2cpp_codegen_multiply((0.5f), L_2)))), ((float)il2cpp_codegen_add((0.5f), ((float)il2cpp_codegen_multiply((0.5f), L_5)))), NULL);
		V_0 = ((float)il2cpp_codegen_multiply((2.0f), ((float)il2cpp_codegen_subtract(L_6, (0.5f)))));
		// float orthoPhaseOff = Mathf.PI / 2f;
		V_1 = (1.57079637f);
		// float rndOrtho = 2f * (Mathf.PerlinNoise(0.5f + 0.5f * Mathf.Cos(_freq * Time.time + orthoPhaseOff), 0.5f + 0.5f * Mathf.Sin(_freq * Time.time + orthoPhaseOff)) - 0.5f);
		float L_7 = __this->____freq_8;
		float L_8;
		L_8 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_9 = V_1;
		float L_10;
		L_10 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_8)), L_9)));
		float L_11 = __this->____freq_8;
		float L_12;
		L_12 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_13 = V_1;
		float L_14;
		L_14 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13)));
		float L_15;
		L_15 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_add((0.5f), ((float)il2cpp_codegen_multiply((0.5f), L_10)))), ((float)il2cpp_codegen_add((0.5f), ((float)il2cpp_codegen_multiply((0.5f), L_14)))), NULL);
		V_2 = ((float)il2cpp_codegen_multiply((2.0f), ((float)il2cpp_codegen_subtract(L_15, (0.5f)))));
		// transform.position = _origin + (_axis * rnd + _orthoAxis * rndOrtho * _orthogonalMotion) * _amplitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->____origin_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->____axis_5;
		float L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->____orthoAxis_6;
		float L_22 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		float L_24 = __this->____orthogonalMotion_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_25, NULL);
		float L_27 = __this->____amplitude_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_28, NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_29, NULL);
		// var f1 = Mathf.Sin(Time.time * _rotationFreq * 1.0f);
		float L_30;
		L_30 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_31 = __this->____rotationFreq_10;
		float L_32;
		L_32 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_30, L_31)), (1.0f))));
		V_3 = L_32;
		// var f2 = Mathf.Sin(Time.time * _rotationFreq * 0.83f);
		float L_33;
		L_33 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_34 = __this->____rotationFreq_10;
		float L_35;
		L_35 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_33, L_34)), (0.829999983f))));
		V_4 = L_35;
		// var f3 = Mathf.Sin(Time.time * _rotationFreq * 1.14f);
		float L_36;
		L_36 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_37 = __this->____rotationFreq_10;
		float L_38;
		L_38 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_36, L_37)), (1.13999999f))));
		V_5 = L_38;
		// transform.rotation *= Quaternion.Euler(
		//     f1 * _rotationVel * Time.deltaTime,
		//     f2 * _rotationVel * Time.deltaTime,
		//     f3 * _rotationVel * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = L_39;
		NullCheck(L_40);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_40, NULL);
		float L_42 = V_3;
		float L_43 = __this->____rotationVel_11;
		float L_44;
		L_44 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_45 = V_4;
		float L_46 = __this->____rotationVel_11;
		float L_47;
		L_47 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_48 = V_5;
		float L_49 = __this->____rotationVel_11;
		float L_50;
		L_50 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_42, L_43)), L_44)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_45, L_46)), L_47)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_48, L_49)), L_50)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_41, L_51, NULL);
		NullCheck(L_40);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_40, L_52, NULL);
		// }
		return;
	}
}
// System.Void RandomMotion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomMotion__ctor_m9431DEFFD74741CAD51D65233E1EBFE8A9929D66 (RandomMotion_t03B8E4D584482177E1E84BBD976D85D7E690311D* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 _axis = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->____axis_5 = L_0;
		// public float _amplitude = 1f;
		__this->____amplitude_7 = (1.0f);
		// public float _freq = 1f;
		__this->____freq_8 = (1.0f);
		// public float _rotationFreq = 1f;
		__this->____rotationFreq_10 = (1.0f);
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
// System.Void Sleeper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sleeper_Update_m347EF4AF941A8101AF9371E24C4820D466E5D88F (Sleeper_t89F7B924CD63360EB3955694F715414DCE0D4B44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		// if (Crest.OceanRenderer.FrameCount % _sleepStride == 0)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OceanRenderer_get_FrameCount_m5061F5D692923166D751FF4C3DFA06566CB76816(NULL);
		int32_t L_1 = __this->____sleepStride_7;
		if (((int32_t)(L_0%L_1)))
		{
			goto IL_0031;
		}
	}
	{
		// var sleep = _jitter ? (int)(Random.value * _sleepMs) : _sleepMs;
		bool L_2 = __this->____jitter_6;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____sleepMs_5;
		G_B4_0 = L_3;
		goto IL_002c;
	}

IL_001e:
	{
		float L_4;
		L_4 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		int32_t L_5 = __this->____sleepMs_5;
		G_B4_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_4, ((float)L_5))));
	}

IL_002c:
	{
		// System.Threading.Thread.Sleep(sleep);
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(G_B4_0, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Sleeper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sleeper__ctor_m3854EFAD7B4A05D2615B3E71C5187EC4BC3F7FCF (Sleeper_t89F7B924CD63360EB3955694F715414DCE0D4B44* __this, const RuntimeMethod* method) 
{
	{
		// public int _sleepStride = 1;
		__this->____sleepStride_7 = 1;
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
// System.Void TimedDestroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedDestroy_Start_m46233AFBA0B676975B5B985D9B4BC7A3147405AA (TimedDestroy_tEE6E1DE0F7DBDC7A9D5DBA0C7103BDE61C88A81C* __this, const RuntimeMethod* method) 
{
	{
		// m_birthTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___m_birthTime_8 = L_0;
		// m_scale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		__this->___m_scale_7 = L_2;
		// }
		return;
	}
}
// System.Void TimedDestroy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedDestroy_Update_m7F0EEE949F6927824750AE4BDF83EC63FD75E620 (TimedDestroy_tEE6E1DE0F7DBDC7A9D5DBA0C7103BDE61C88A81C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float age = Time.time - m_birthTime;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___m_birthTime_8;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (age >= m_lifeTime)
		float L_2 = V_0;
		float L_3 = __this->___m_lifeTime_5;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		return;
	}

IL_0022:
	{
		// else if (age > m_lifeTime - m_scaleToZeroDuration)
		float L_5 = V_0;
		float L_6 = __this->___m_lifeTime_5;
		float L_7 = __this->___m_scaleToZeroDuration_6;
		if ((!(((float)L_5) > ((float)((float)il2cpp_codegen_subtract(L_6, L_7))))))
		{
			goto IL_0065;
		}
	}
	{
		// transform.localScale = m_scale * (1.0f - (age - (m_lifeTime - m_scaleToZeroDuration)) / m_scaleToZeroDuration);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___m_scale_7;
		float L_10 = V_0;
		float L_11 = __this->___m_lifeTime_5;
		float L_12 = __this->___m_scaleToZeroDuration_6;
		float L_13 = __this->___m_scaleToZeroDuration_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, ((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)il2cpp_codegen_subtract(L_10, ((float)il2cpp_codegen_subtract(L_11, L_12))))/L_13)))), NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_14, NULL);
		return;
	}

IL_0065:
	{
		// transform.localScale = m_scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___m_scale_7;
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void TimedDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedDestroy__ctor_m6C122BB483443FCE1AA79F3F24518675961ADA92 (TimedDestroy_tEE6E1DE0F7DBDC7A9D5DBA0C7103BDE61C88A81C* __this, const RuntimeMethod* method) 
{
	{
		// public float m_lifeTime = 2.0f;
		__this->___m_lifeTime_5 = (2.0f);
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
// System.Void Crest.UnderwaterEnvironmentalLighting::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnderwaterEnvironmentalLighting_OnEnable_mA3634531237F4496EC439778B07B2216F2DFCD2A (UnderwaterEnvironmentalLighting_tF196190867403B66CC73787E03C13973AE9D3C1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C2ABF26B92CA30505EC74359C788E9C9D1584BF);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (OceanRenderer.Instance == null)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_0;
		L_0 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0015:
	{
		// if (!OceanRenderer.Instance.OceanMaterial.HasProperty("_DepthFogDensity"))
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_2;
		L_2 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = OceanRenderer_get_OceanMaterial_m3544CA735E56C76C89AFA74CF6694DE661F8675F_inline(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_3, _stringLiteral4C2ABF26B92CA30505EC74359C788E9C9D1584BF, NULL);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0033:
	{
		// _primaryLight = OceanRenderer.Instance._primaryLight;
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_5;
		L_5 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_5);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_6 = L_5->____primaryLight_16;
		__this->____primaryLight_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____primaryLight_6), (void*)L_6);
		// if (_primaryLight)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7 = __this->____primaryLight_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		// _lightIntensity = _primaryLight.intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = __this->____primaryLight_6;
		NullCheck(L_9);
		float L_10;
		L_10 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_9, NULL);
		__this->____lightIntensity_7 = L_10;
	}

IL_0061:
	{
		// _ambientIntensity = RenderSettings.ambientIntensity;
		float L_11;
		L_11 = RenderSettings_get_ambientIntensity_mEF613E4E650E851D9F273B1D07A8FBABD078968E(NULL);
		__this->____ambientIntensity_8 = L_11;
		// _reflectionIntensity = RenderSettings.reflectionIntensity;
		float L_12;
		L_12 = RenderSettings_get_reflectionIntensity_m6476AC75EE6680098EB016C290EFB415CE4A1BBB(NULL);
		__this->____reflectionIntensity_9 = L_12;
		// _fogDensity = RenderSettings.fogDensity;
		float L_13;
		L_13 = RenderSettings_get_fogDensity_mACE336DB065800D763714CEF74A322FB83950389(NULL);
		__this->____fogDensity_10 = L_13;
		// var density = OceanRenderer.Instance.UnderwaterDepthFogDensity;
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_14;
		L_14 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = OceanRenderer_get_UnderwaterDepthFogDensity_mCEB8EAE577CAD61A5227BA6F429FE60638EE72C2_inline(L_14, NULL);
		V_0 = L_15;
		// _averageDensity = (density.x + density.y + density.z) / 3f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		float L_21 = L_20.___z_4;
		__this->____averageDensity_11 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_17, L_19)), L_21))/(3.0f)));
		// _isInitialised = true;
		__this->____isInitialised_13 = (bool)1;
		// }
		return;
	}
}
// System.Void Crest.UnderwaterEnvironmentalLighting::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnderwaterEnvironmentalLighting_OnDisable_m298D127F5249D5CEC0BCB4AD7734950C46A9DC8D (UnderwaterEnvironmentalLighting_tF196190867403B66CC73787E03C13973AE9D3C1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialised)
		bool L_0 = __this->____isInitialised_13;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_primaryLight)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = __this->____primaryLight_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// _primaryLight.intensity = _lightIntensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = __this->____primaryLight_6;
		float L_4 = __this->____lightIntensity_7;
		NullCheck(L_3);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_3, L_4, NULL);
	}

IL_0027:
	{
		// RenderSettings.ambientIntensity = _ambientIntensity;
		float L_5 = __this->____ambientIntensity_8;
		RenderSettings_set_ambientIntensity_m27875436E47E2D28C13F362DAE9C24D0DEC4A844(L_5, NULL);
		// RenderSettings.reflectionIntensity = _reflectionIntensity;
		float L_6 = __this->____reflectionIntensity_9;
		RenderSettings_set_reflectionIntensity_m70A9545EBFEE2100AEB017149034592AF23D224E(L_6, NULL);
		// RenderSettings.fogDensity = _fogDensity;
		float L_7 = __this->____fogDensity_10;
		RenderSettings_set_fogDensity_mFB0FD753E90E0B9E33EB4D813B4095BF04D1F5B5(L_7, NULL);
		// _isInitialised = false;
		__this->____isInitialised_13 = (bool)0;
		// }
		return;
	}
}
// System.Void Crest.UnderwaterEnvironmentalLighting::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnderwaterEnvironmentalLighting_LateUpdate_mC475EABCCA02077134866DDA3D160C65D1F7A370 (UnderwaterEnvironmentalLighting_tF196190867403B66CC73787E03C13973AE9D3C1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if (OceanRenderer.Instance == null || UnderwaterRenderer.Instance == null)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_0;
		L_0 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF_il2cpp_TypeInfo_var);
		UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF* L_2;
		L_2 = UnderwaterRenderer_get_Instance_m05AB2D58C2E71DFCA140A34E4B04EFB5EB6E3403_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		// return;
		return;
	}

IL_001b:
	{
		// var density = OceanRenderer.Instance.UnderwaterDepthFogDensity;
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_4;
		L_4 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = OceanRenderer_get_UnderwaterDepthFogDensity_mCEB8EAE577CAD61A5227BA6F429FE60638EE72C2_inline(L_4, NULL);
		V_0 = L_5;
		// _averageDensity = (density.x + density.y + density.z) / 3f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___z_4;
		__this->____averageDensity_11 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_7, L_9)), L_11))/(3.0f)));
		// float depthMultiplier = Mathf.Exp(_averageDensity *
		//     Mathf.Min(OceanRenderer.Instance.ViewerHeightAboveWater * DEPTH_OUTSCATTER_CONSTANT, 0f) *
		//     _weight);
		float L_12 = __this->____averageDensity_11;
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_13;
		L_13 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		NullCheck(L_13);
		float L_14;
		L_14 = OceanRenderer_get_ViewerHeightAboveWater_m991BD8256F02634651610E007F3924A00B86100F_inline(L_13, NULL);
		float L_15;
		L_15 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)il2cpp_codegen_multiply(L_14, (0.25f))), (0.0f), NULL);
		float L_16 = __this->____weight_5;
		float L_17;
		L_17 = expf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, L_15)), L_16)));
		V_1 = L_17;
		// if (_primaryLight)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_18 = __this->____primaryLight_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_18, NULL);
		if (!L_19)
		{
			goto IL_009d;
		}
	}
	{
		// _primaryLight.intensity = Mathf.Lerp(0, _lightIntensity, depthMultiplier);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_20 = __this->____primaryLight_6;
		float L_21 = __this->____lightIntensity_7;
		float L_22 = V_1;
		float L_23;
		L_23 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), L_21, L_22, NULL);
		NullCheck(L_20);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_20, L_23, NULL);
	}

IL_009d:
	{
		// RenderSettings.ambientIntensity = Mathf.Lerp(0, _ambientIntensity, depthMultiplier);
		float L_24 = __this->____ambientIntensity_8;
		float L_25 = V_1;
		float L_26;
		L_26 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), L_24, L_25, NULL);
		RenderSettings_set_ambientIntensity_m27875436E47E2D28C13F362DAE9C24D0DEC4A844(L_26, NULL);
		// RenderSettings.reflectionIntensity = Mathf.Lerp(0, _reflectionIntensity, depthMultiplier);
		float L_27 = __this->____reflectionIntensity_9;
		float L_28 = V_1;
		float L_29;
		L_29 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), L_27, L_28, NULL);
		RenderSettings_set_reflectionIntensity_m70A9545EBFEE2100AEB017149034592AF23D224E(L_29, NULL);
		// RenderSettings.fogDensity = Mathf.Lerp(0, _fogDensity, depthMultiplier);
		float L_30 = __this->____fogDensity_10;
		float L_31 = V_1;
		float L_32;
		L_32 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), L_30, L_31, NULL);
		RenderSettings_set_fogDensity_mFB0FD753E90E0B9E33EB4D813B4095BF04D1F5B5(L_32, NULL);
		// }
		return;
	}
}
// System.Void Crest.UnderwaterEnvironmentalLighting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnderwaterEnvironmentalLighting__ctor_m015F7B344529A2BB6CA820F5F72CB171B643D24D (UnderwaterEnvironmentalLighting_tF196190867403B66CC73787E03C13973AE9D3C1B* __this, const RuntimeMethod* method) 
{
	{
		// float _weight = 1f;
		__this->____weight_5 = (1.0f);
		CustomMonoBehaviour__ctor_mD1D909DC7D63D8DD2CCF388F4A72B01261CC4CF4(__this, NULL);
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
// System.Void Crest.Whirlpool::UpdateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_UpdateMaterials_m4C77DEF17FCF8E589F7FDB3BFE2122621ABFCCF3 (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA82DBE87B2AF7AD0805CF0CD8A671AFB5B924C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA96DB2873B94243CCF355AC78E3B43876794EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE06B53F9B6FDDA6A65F38986E1BA6B03495562F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_flowMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____flowMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// _flowMaterial.SetFloat("_EyeRadiusProportion", _eyeRadius / _radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____flowMaterial_12;
		float L_3 = __this->____eyeRadius_7;
		float L_4 = __this->____radius_6;
		NullCheck(L_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_2, _stringLiteralBA82DBE87B2AF7AD0805CF0CD8A671AFB5B924C1, ((float)(L_3/L_4)), NULL);
		// _flowMaterial.SetFloat("_MaxSpeed", _maxSpeed);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->____flowMaterial_12;
		float L_6 = __this->____maxSpeed_8;
		NullCheck(L_5);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_5, _stringLiteralBCA96DB2873B94243CCF355AC78E3B43876794EA, L_6, NULL);
	}

IL_0040:
	{
		// if (_displacementMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->____displacementMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		// _displacementMaterial.SetFloat("_Radius", _radius * 0.25f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->____displacementMaterial_13;
		float L_10 = __this->____radius_6;
		NullCheck(L_9);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_9, _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152, ((float)il2cpp_codegen_multiply(L_10, (0.25f))), NULL);
		// _displacementMaterial.SetFloat("_Amplitude", _amplitude);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->____displacementMaterial_13;
		float L_12 = __this->____amplitude_5;
		NullCheck(L_11);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_11, _stringLiteralEE06B53F9B6FDDA6A65F38986E1BA6B03495562F, L_12, NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Crest.Whirlpool::UpdateInputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_UpdateInputs_mE581D169734D9D58E5E6D9F206C14586DCD1A2C4 (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var scale = new Vector3(_radius, _radius, 1f);
		float L_0 = __this->____radius_6;
		float L_1 = __this->____radius_6;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_0, L_1, (1.0f), NULL);
		// if (_displacementInput) _displacementInput.transform.localScale = scale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____displacementInput_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// if (_displacementInput) _displacementInput.transform.localScale = scale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____displacementInput_15;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
	}

IL_0036:
	{
		// if (_flowInput) _flowInput.transform.localScale = scale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____flowInput_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// if (_flowInput) _flowInput.transform.localScale = scale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->____flowInput_16;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_11, NULL);
	}

IL_0054:
	{
		// if (_dynamicWavesInput) _dynamicWavesInput.transform.localScale = scale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____dynamicWavesInput_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		// if (_dynamicWavesInput) _dynamicWavesInput.transform.localScale = scale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->____dynamicWavesInput_17;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_16, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Crest.Whirlpool::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_OnEnable_m4A3A278F218993357A3CA8EE0524C4DC06CC63F7 (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LodDataMgrAnimWaves_t09E68698F1502C4427BC56A846787FF6896368EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OceanRenderer.Instance == null)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_0;
		L_0 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// CreateOrDestroyAnimatedWaves();
		Whirlpool_CreateOrDestroyAnimatedWaves_m94F87930E0245ECA2A844FEAF6191BA28C90DBDF(__this, NULL);
		// CreateOrDestroyFlow();
		Whirlpool_CreateOrDestroyFlow_m6EFA89B5E282BB3C21C35DD2A6B531275A0E13CB(__this, NULL);
		// CreateOrDestroyDynamicWaves();
		Whirlpool_CreateOrDestroyDynamicWaves_mF64BA94BF256CEDAAAC4BDFA160A89AC667269AB(__this, NULL);
		// UpdateMaterials();
		Whirlpool_UpdateMaterials_m4C77DEF17FCF8E589F7FDB3BFE2122621ABFCCF3(__this, NULL);
		// LodDataMgrAnimWaves.RegisterUpdatable(this);
		il2cpp_codegen_runtime_class_init_inline(LodDataMgrAnimWaves_t09E68698F1502C4427BC56A846787FF6896368EB_il2cpp_TypeInfo_var);
		LodDataMgrAnimWaves_RegisterUpdatable_m88072F66DA0D69DB6E0F069A1BC91F42184B684F(__this, NULL);
		// }
		return;
	}
}
// System.Void Crest.Whirlpool::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_OnDisable_m47C399B888DA64F8FF4635BC218369B79567699F (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helpers_t01E9EEB2D4EC7953953C9357D91255138B257FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LodDataMgrAnimWaves_t09E68698F1502C4427BC56A846787FF6896368EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Helpers.Destroy(_displacementInput);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____displacementInput_15;
		il2cpp_codegen_runtime_class_init_inline(Helpers_t01E9EEB2D4EC7953953C9357D91255138B257FDF_il2cpp_TypeInfo_var);
		Helpers_Destroy_mFA7104531C6E2B90676276EC746C8DCCAD0BA3F5(L_0, NULL);
		// Helpers.Destroy(_flowInput);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____flowInput_16;
		Helpers_Destroy_mFA7104531C6E2B90676276EC746C8DCCAD0BA3F5(L_1, NULL);
		// Helpers.Destroy(_dynamicWavesInput);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____dynamicWavesInput_17;
		Helpers_Destroy_mFA7104531C6E2B90676276EC746C8DCCAD0BA3F5(L_2, NULL);
		// Helpers.Destroy(_displacementMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->____displacementMaterial_13;
		Helpers_Destroy_mFA7104531C6E2B90676276EC746C8DCCAD0BA3F5(L_3, NULL);
		// Helpers.Destroy(_flowMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____flowMaterial_12;
		Helpers_Destroy_mFA7104531C6E2B90676276EC746C8DCCAD0BA3F5(L_4, NULL);
		// Helpers.Destroy(_dampDynWavesMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->____dampDynWavesMaterial_14;
		Helpers_Destroy_mFA7104531C6E2B90676276EC746C8DCCAD0BA3F5(L_5, NULL);
		// LodDataMgrAnimWaves.DeregisterUpdatable(this);
		il2cpp_codegen_runtime_class_init_inline(LodDataMgrAnimWaves_t09E68698F1502C4427BC56A846787FF6896368EB_il2cpp_TypeInfo_var);
		LodDataMgrAnimWaves_DeregisterUpdatable_m02DA27BA186B2760860BF69E4CBCB3A1CA11454C(__this, NULL);
		// }
		return;
	}
}
// System.Void Crest.Whirlpool::CrestUpdate(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_CrestUpdate_m1FB83C969D12A741E2B20B3528FE698648805730 (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buf, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OceanRenderer.Instance.ReportMaxDisplacementFromShape(0f, _amplitude, 0f);
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_0;
		L_0 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		float L_1 = __this->____amplitude_5;
		NullCheck(L_0);
		OceanRenderer_ReportMaxDisplacementFromShape_m742CA597EB7C5E43C4BAE2E7DE7F0F76E7207093(L_0, (0.0f), L_1, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Crest.Whirlpool::CreateOrDestroyAnimatedWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_CreateOrDestroyAnimatedWaves_m94F87930E0245ECA2A844FEAF6191BA28C90DBDF (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Whirlpool_CreateOrDestroy_TisRegisterAnimWavesInput_t08A22C322A6ED424443677A9A2564E4C84CF28BA_m43581A117E583D8E22B4F677F78D3B6B50215180_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2BBBF5F98498D0842E3656E4411052883A14AA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateOrDestroy<RegisterAnimWavesInput>(_createDisplacement, "Crest/Inputs/Animated Waves/Whirlpool", ref _displacementInput, ref _displacementMaterial);
		bool L_0 = __this->____createDisplacement_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_1 = (&__this->____displacementInput_15);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_2 = (&__this->____displacementMaterial_13);
		Whirlpool_CreateOrDestroy_TisRegisterAnimWavesInput_t08A22C322A6ED424443677A9A2564E4C84CF28BA_m43581A117E583D8E22B4F677F78D3B6B50215180(__this, L_0, _stringLiteralC2BBBF5F98498D0842E3656E4411052883A14AA8, L_1, L_2, Whirlpool_CreateOrDestroy_TisRegisterAnimWavesInput_t08A22C322A6ED424443677A9A2564E4C84CF28BA_m43581A117E583D8E22B4F677F78D3B6B50215180_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Crest.Whirlpool::CreateOrDestroyFlow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_CreateOrDestroyFlow_m6EFA89B5E282BB3C21C35DD2A6B531275A0E13CB (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Whirlpool_CreateOrDestroy_TisRegisterFlowInput_tB02D201593E576E4AFA603A6FA7AFA8960FB78BC_m4BDA149FBFBCC258DD4185D9C7593C7E53093917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89236E989F7E771E738AD619BDA3A2B0F067A879);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateOrDestroy<RegisterFlowInput>(_createFlow, "Crest/Inputs/Flow/Whirlpool", ref _flowInput, ref _flowMaterial);
		bool L_0 = __this->____createFlow_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_1 = (&__this->____flowInput_16);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_2 = (&__this->____flowMaterial_12);
		Whirlpool_CreateOrDestroy_TisRegisterFlowInput_tB02D201593E576E4AFA603A6FA7AFA8960FB78BC_m4BDA149FBFBCC258DD4185D9C7593C7E53093917(__this, L_0, _stringLiteral89236E989F7E771E738AD619BDA3A2B0F067A879, L_1, L_2, Whirlpool_CreateOrDestroy_TisRegisterFlowInput_tB02D201593E576E4AFA603A6FA7AFA8960FB78BC_m4BDA149FBFBCC258DD4185D9C7593C7E53093917_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Crest.Whirlpool::CreateOrDestroyDynamicWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_CreateOrDestroyDynamicWaves_mF64BA94BF256CEDAAAC4BDFA160A89AC667269AB (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Whirlpool_CreateOrDestroy_TisRegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60_m23C88022CB83B158B6667B639ABE6A1CC584524A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320FF37A871E8B2AB5013C65917C3515559768AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateOrDestroy<RegisterDynWavesInput>(_createDynWavesDampen, "Crest/Inputs/Dynamic Waves/Dampen Circle", ref _dynamicWavesInput, ref _dampDynWavesMaterial);
		bool L_0 = __this->____createDynWavesDampen_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_1 = (&__this->____dynamicWavesInput_17);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_2 = (&__this->____dampDynWavesMaterial_14);
		Whirlpool_CreateOrDestroy_TisRegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60_m23C88022CB83B158B6667B639ABE6A1CC584524A(__this, L_0, _stringLiteral320FF37A871E8B2AB5013C65917C3515559768AE, L_1, L_2, Whirlpool_CreateOrDestroy_TisRegisterDynWavesInput_t44CCAA1340102AA06E367994B119CBDA1BB42C60_m23C88022CB83B158B6667B639ABE6A1CC584524A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Crest.Whirlpool::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool_Update_mFDAB81BB36F4240E240E2C0E358F8C76B78D09B8 (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OceanRenderer.Instance == null)
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_0;
		L_0 = OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// UpdateMaterials();
		Whirlpool_UpdateMaterials_m4C77DEF17FCF8E589F7FDB3BFE2122621ABFCCF3(__this, NULL);
		// UpdateInputs();
		Whirlpool_UpdateInputs_mE581D169734D9D58E5E6D9F206C14586DCD1A2C4(__this, NULL);
		// }
		return;
	}
}
// System.Void Crest.Whirlpool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlpool__ctor_m6A34ED78888DF000559AFA2FC6175C27EECA067F (Whirlpool_tDAB7F075B9CB6B1C03253785DD9A3C0FDD2CA7F1* __this, const RuntimeMethod* method) 
{
	{
		// float _amplitude = 20f;
		__this->____amplitude_5 = (20.0f);
		// float _radius = 80f;
		__this->____radius_6 = (80.0f);
		// float _eyeRadius = 1f;
		__this->____eyeRadius_7 = (1.0f);
		// float _maxSpeed = 10f;
		__this->____maxSpeed_8 = (10.0f);
		// bool _createDisplacement = true;
		__this->____createDisplacement_9 = (bool)1;
		// bool _createFlow = true;
		__this->____createFlow_10 = (bool)1;
		// bool _createDynWavesDampen = true;
		__this->____createDynWavesDampen_11 = (bool)1;
		CustomMonoBehaviour__ctor_mD1D909DC7D63D8DD2CCF388F4A72B01261CC4CF4(__this, NULL);
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
// System.Void Crest.Examples.CustomPassForCameraBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPassForCameraBase_OnEnable_mA15E23E2C2275BBD4EC695453CCA6DFCD1F3C390 (CustomPassForCameraBase_tAFD66BC5E3B96C581ABE9B77D5F6704405D6CB36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomPassForCameraBase_OnBeforeRender_m17933A75A064B1296B46E9255B5B80E8E9C2410B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AE8652EEC5E5B482C439831BAF827B4FD862923);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_buffer == null)
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = __this->____buffer_5;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// _buffer = new CommandBuffer()
		// {
		//     name = "Execute Command Buffer",
		// };
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_1 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_1, NULL);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_2 = L_1;
		NullCheck(L_2);
		CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965(L_2, _stringLiteral3AE8652EEC5E5B482C439831BAF827B4FD862923, NULL);
		__this->____buffer_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_5), (void*)L_2);
	}

IL_001e:
	{
		// _currentEvent = Event;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Crest.Examples.CustomPassForCameraBase::get_Event() */, __this);
		__this->____currentEvent_4 = L_3;
		// Camera.onPreRender -= OnBeforeRender;
		CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* L_4 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5;
		CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* L_5 = (CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)il2cpp_codegen_object_new(CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CameraCallback__ctor_mB48D13F30E749B551E4692E4F2D762C375F62B41(L_5, __this, (intptr_t)((void*)CustomPassForCameraBase_OnBeforeRender_m17933A75A064B1296B46E9255B5B80E8E9C2410B_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5 = ((CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)CastclassSealed((RuntimeObject*)L_6, CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5), (void*)((CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)CastclassSealed((RuntimeObject*)L_6, CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var)));
		// Camera.onPreRender += OnBeforeRender;
		CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* L_7 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5;
		CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* L_8 = (CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)il2cpp_codegen_object_new(CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		CameraCallback__ctor_mB48D13F30E749B551E4692E4F2D762C375F62B41(L_8, __this, (intptr_t)((void*)CustomPassForCameraBase_OnBeforeRender_m17933A75A064B1296B46E9255B5B80E8E9C2410B_RuntimeMethod_var), NULL);
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_7, L_8, NULL);
		((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5 = ((CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)CastclassSealed((RuntimeObject*)L_9, CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5), (void*)((CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)CastclassSealed((RuntimeObject*)L_9, CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Crest.Examples.CustomPassForCameraBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPassForCameraBase_OnDisable_m30C34C008376D0D9FC7E0E7D1F6296D6C92FC63A (CustomPassForCameraBase_tAFD66BC5E3B96C581ABE9B77D5F6704405D6CB36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomPassForCameraBase_OnBeforeRender_m17933A75A064B1296B46E9255B5B80E8E9C2410B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Camera.onPreRender -= OnBeforeRender;
		CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* L_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5;
		CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* L_1 = (CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)il2cpp_codegen_object_new(CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CameraCallback__ctor_mB48D13F30E749B551E4692E4F2D762C375F62B41(L_1, __this, (intptr_t)((void*)CustomPassForCameraBase_OnBeforeRender_m17933A75A064B1296B46E9255B5B80E8E9C2410B_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5 = ((CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)CastclassSealed((RuntimeObject*)L_2, CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5), (void*)((CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)CastclassSealed((RuntimeObject*)L_2, CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var)));
		// CleanCameras();
		CustomPassForCameraBase_CleanCameras_mD385127A69395602BEDB50F7EC23A6A96A9A44B4(__this, NULL);
		// }
		return;
	}
}
// System.Void Crest.Examples.CustomPassForCameraBase::CleanCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPassForCameraBase_CleanCameras_mD385127A69395602BEDB50F7EC23A6A96A9A44B4 (CustomPassForCameraBase_tAFD66BC5E3B96C581ABE9B77D5F6704405D6CB36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvent_tAB9B803B9C806EC265ADB328417F41AD0FBD10FE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvent_tAB9B803B9C806EC265ADB328417F41AD0FBD10FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m952D668DE163B9341CCEDC01C0C12525996D6624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9EB9A31EBEC90FA3E951E245AD2F4A3585DB16C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6AB352F2089737A72DC284B801157073F82C1A5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7D0CB3BF9DA3F624753AE63D1292B99B42AB4170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// foreach (var camera in _cameras)
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = __this->____cameras_6;
		NullCheck(L_0);
		Enumerator_t93D203A9A9D816BAA70CE6E56C8D9994EF3AFEA9 L_1;
		L_1 = List_1_GetEnumerator_m7D0CB3BF9DA3F624753AE63D1292B99B42AB4170(L_0, List_1_GetEnumerator_m7D0CB3BF9DA3F624753AE63D1292B99B42AB4170_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0090:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m952D668DE163B9341CCEDC01C0C12525996D6624((&V_0), Enumerator_Dispose_m952D668DE163B9341CCEDC01C0C12525996D6624_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0085_1;
			}

IL_000e_1:
			{
				// foreach (var camera in _cameras)
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
				L_2 = Enumerator_get_Current_m6AB352F2089737A72DC284B801157073F82C1A5F_inline((&V_0), Enumerator_get_Current_m6AB352F2089737A72DC284B801157073F82C1A5F_RuntimeMethod_var);
				V_1 = L_2;
				// if (camera == null)
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_4)
				{
					goto IL_0085_1;
				}
			}
			{
				// foreach (CameraEvent @event in System.Enum.GetValues(typeof(CameraEvent)))
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (CameraEvent_tAB9B803B9C806EC265ADB328417F41AD0FBD10FE_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
				RuntimeArray* L_7;
				L_7 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_6, NULL);
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_7, NULL);
				V_2 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0059_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_9 = V_2;
							V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_10 = V_4;
							if (!L_10)
							{
								goto IL_006c_1;
							}
						}
						{
							RuntimeObject* L_11 = V_4;
							NullCheck(L_11);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
						}

IL_006c_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_004f_2;
					}

IL_0036_2:
					{
						// foreach (CameraEvent @event in System.Enum.GetValues(typeof(CameraEvent)))
						RuntimeObject* L_12 = V_2;
						NullCheck(L_12);
						RuntimeObject* L_13;
						L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
						V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_13, CameraEvent_tAB9B803B9C806EC265ADB328417F41AD0FBD10FE_il2cpp_TypeInfo_var))));
						// camera.RemoveCommandBuffer(@event, _buffer);
						Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = V_1;
						int32_t L_15 = V_3;
						CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_16 = __this->____buffer_5;
						NullCheck(L_14);
						Camera_RemoveCommandBuffer_m7749BA282C14AA7E9E71A68E911F41D1B8429F11(L_14, L_15, L_16, NULL);
					}

IL_004f_2:
					{
						// foreach (CameraEvent @event in System.Enum.GetValues(typeof(CameraEvent)))
						RuntimeObject* L_17 = V_2;
						NullCheck(L_17);
						bool L_18;
						L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
						if (L_18)
						{
							goto IL_0036_2;
						}
					}
					{
						goto IL_006d_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_006d_1:
			{
				// Clear(_buffer, camera);
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_19 = __this->____buffer_5;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = V_1;
				VirtualActionInvoker2< CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(6 /* System.Void Crest.Examples.CustomPassForCameraBase::Clear(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera) */, __this, L_19, L_20);
				// Graphics.ExecuteCommandBuffer(_buffer);
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_21 = __this->____buffer_5;
				il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
				Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9(L_21, NULL);
			}

IL_0085_1:
			{
				// foreach (var camera in _cameras)
				bool L_22;
				L_22 = Enumerator_MoveNext_mE9EB9A31EBEC90FA3E951E245AD2F4A3585DB16C((&V_0), Enumerator_MoveNext_mE9EB9A31EBEC90FA3E951E245AD2F4A3585DB16C_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		// _cameras.Clear();
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_23 = __this->____cameras_6;
		NullCheck(L_23);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_23, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Crest.Examples.CustomPassForCameraBase::OnBeforeRender(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPassForCameraBase_OnBeforeRender_m17933A75A064B1296B46E9255B5B80E8E9C2410B (CustomPassForCameraBase_tAFD66BC5E3B96C581ABE9B77D5F6704405D6CB36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helpers_t01E9EEB2D4EC7953953C9357D91255138B257FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m3845C98317530A7E40923FA39BF1A75403AE5288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHelpers_t793B3975A8D08E7488CB3FF503C0E151BEF6742F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A1A55224B7BABBF7047B3E1F3E56812C3ED941D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_cameras.Contains(camera))
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = __this->____cameras_6;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___0_camera;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m3845C98317530A7E40923FA39BF1A75403AE5288(L_0, L_1, List_1_Contains_m3845C98317530A7E40923FA39BF1A75403AE5288_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_004c;
		}
	}
	{
		// if (_currentEvent != Event)
		int32_t L_3 = __this->____currentEvent_4;
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Crest.Examples.CustomPassForCameraBase::get_Event() */, __this);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		// CleanCameras();
		CustomPassForCameraBase_CleanCameras_mD385127A69395602BEDB50F7EC23A6A96A9A44B4(__this, NULL);
		// _currentEvent = Event;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Crest.Examples.CustomPassForCameraBase::get_Event() */, __this);
		__this->____currentEvent_4 = L_5;
	}

IL_002e:
	{
		// _cameras.Add(camera);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_6 = __this->____cameras_6;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = ___0_camera;
		NullCheck(L_6);
		List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline(L_6, L_7, List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var);
		// camera.AddCommandBuffer((CameraEvent)Event, _buffer);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ___0_camera;
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Crest.Examples.CustomPassForCameraBase::get_Event() */, __this);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_10 = __this->____buffer_5;
		NullCheck(L_8);
		Camera_AddCommandBuffer_m2C1C3C2D93CB62D569714B3FFA694CAB9BF81A9A(L_8, L_9, L_10, NULL);
	}

IL_004c:
	{
		// _buffer.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_11 = __this->____buffer_5;
		NullCheck(L_11);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_11, NULL);
		// if (Camera.main != camera && camera.cameraType != CameraType.SceneView && !camera.name.StartsWithNoAlloc("Preview"))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = ___0_camera;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = ___0_camera;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_15, NULL);
		if ((((int32_t)L_16) == ((int32_t)2)))
		{
			goto IL_008d;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___0_camera;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Helpers_t01E9EEB2D4EC7953953C9357D91255138B257FDF_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Helpers_StartsWithNoAlloc_mFBB2872A53AFF3C82824B6387BF28B177574E9FE(L_18, _stringLiteral0A1A55224B7BABBF7047B3E1F3E56812C3ED941D, NULL);
		if (L_19)
		{
			goto IL_008d;
		}
	}
	{
		// Clear(_buffer, camera);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_20 = __this->____buffer_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = ___0_camera;
		VirtualActionInvoker2< CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(6 /* System.Void Crest.Examples.CustomPassForCameraBase::Clear(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera) */, __this, L_20, L_21);
		// return;
		return;
	}

IL_008d:
	{
		// Execute(_buffer, camera, XRHelpers.GetRenderTextureDescriptor(camera));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_22 = __this->____buffer_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = ___0_camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = ___0_camera;
		il2cpp_codegen_runtime_class_init_inline(XRHelpers_t793B3975A8D08E7488CB3FF503C0E151BEF6742F_il2cpp_TypeInfo_var);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_25;
		L_25 = XRHelpers_GetRenderTextureDescriptor_m98562E6B73D3D31B2A34CB0247270C7CB281747D(L_24, NULL);
		VirtualActionInvoker3< CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 >::Invoke(5 /* System.Void Crest.Examples.CustomPassForCameraBase::Execute(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor) */, __this, L_22, L_23, L_25);
		// }
		return;
	}
}
// System.Void Crest.Examples.CustomPassForCameraBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPassForCameraBase__ctor_mE6DEC9B3E5BCEA08A2A16279B26975BFF545AEE8 (CustomPassForCameraBase_tAFD66BC5E3B96C581ABE9B77D5F6704405D6CB36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Camera> _cameras = new List<Camera>();
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*)il2cpp_codegen_object_new(List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681(L_0, List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		__this->____cameras_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameras_6), (void*)L_0);
		CustomMonoBehaviour__ctor_mD1D909DC7D63D8DD2CCF388F4A72B01261CC4CF4(__this, NULL);
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
// System.Int32 Crest.Examples.CustomPassForCamera::get_Event()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomPassForCamera_get_Event_m08903F045FF6751404D198EB1DC7F9AECAF410EF (CustomPassForCamera_t317A1AB191553FFEEB99581632613AF97254A9AC* __this, const RuntimeMethod* method) 
{
	{
		// return (int)_event;
		int32_t L_0 = __this->____event_7;
		return L_0;
	}
}
// System.Void Crest.Examples.CustomPassForCamera::Execute(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPassForCamera_Execute_m40D75B17B6EAAB82DCF029D780CED001C292A208 (CustomPassForCamera_t317A1AB191553FFEEB99581632613AF97254A9AC* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buffer, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___2_descriptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_mDBC34075ABEA4C223FDB305E1CC0AB840C82BBEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onExecute.Invoke(buffer, camera, descriptor);
		UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA* L_0 = __this->____onExecute_8;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_1 = ___0_buffer;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___1_camera;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_3 = ___2_descriptor;
		NullCheck(L_0);
		UnityEvent_3_Invoke_mDBC34075ABEA4C223FDB305E1CC0AB840C82BBEF(L_0, L_1, L_2, L_3, UnityEvent_3_Invoke_mDBC34075ABEA4C223FDB305E1CC0AB840C82BBEF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Crest.Examples.CustomPassForCamera::Clear(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPassForCamera_Clear_mF218F875B56C0AA40F4FDF14E2750E4AC2C01109 (CustomPassForCamera_t317A1AB191553FFEEB99581632613AF97254A9AC* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buffer, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m2C77306BF732CC3ECFDAA87D5DDA5DB760E34DA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onClear.Invoke(buffer, camera);
		UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192* L_0 = __this->____onClear_9;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_1 = ___0_buffer;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___1_camera;
		NullCheck(L_0);
		UnityEvent_2_Invoke_m2C77306BF732CC3ECFDAA87D5DDA5DB760E34DA2(L_0, L_1, L_2, UnityEvent_2_Invoke_m2C77306BF732CC3ECFDAA87D5DDA5DB760E34DA2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Crest.Examples.CustomPassForCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPassForCamera__ctor_m67473DC9C0FFDA3609DCF1ACBC566CCC926EF710 (CustomPassForCamera_t317A1AB191553FFEEB99581632613AF97254A9AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mBCA8A560A48536FD9751A4E7E0206748CCD2122D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_m3F5625F3D5A5A996C685582541FC1248782B88E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEvent<CommandBuffer, Camera, RenderTextureDescriptor> _onExecute = new UnityEvent<CommandBuffer, Camera, RenderTextureDescriptor>();
		UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA* L_0 = (UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA*)il2cpp_codegen_object_new(UnityEvent_3_t0A8BDA768E00E045EF4FE3EAA5DBFD83B990DAEA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent_3__ctor_m3F5625F3D5A5A996C685582541FC1248782B88E3(L_0, UnityEvent_3__ctor_m3F5625F3D5A5A996C685582541FC1248782B88E3_RuntimeMethod_var);
		__this->____onExecute_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onExecute_8), (void*)L_0);
		// UnityEvent<CommandBuffer, Camera> _onClear = new UnityEvent<CommandBuffer, Camera>();
		UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192* L_1 = (UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192*)il2cpp_codegen_object_new(UnityEvent_2_tCD16275291EDA51B6A875EBCC2C783D666426192_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent_2__ctor_mBCA8A560A48536FD9751A4E7E0206748CCD2122D(L_1, UnityEvent_2__ctor_mBCA8A560A48536FD9751A4E7E0206748CCD2122D_RuntimeMethod_var);
		__this->____onClear_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onClear_9), (void*)L_1);
		CustomPassForCameraBase__ctor_mE6DEC9B3E5BCEA08A2A16279B26975BFF545AEE8(__this, NULL);
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
// System.Void Crest.Examples.ExamplesController::Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExamplesController_Previous_mEB17457001A52EB0FE501AE3541BD3102077DE0C (ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* __this, const RuntimeMethod* method) 
{
	{
		// public void Previous() => Cycle(true);
		ExamplesController_Cycle_m0CF32199FDB79E6C5586FCE10CBD82C72B0DB2C6(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Crest.Examples.ExamplesController::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExamplesController_Next_mD2440E0D8C8B14C1D6F3E8B9B09D87645200C4F2 (ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* __this, const RuntimeMethod* method) 
{
	{
		// public void Next() => Cycle(false);
		ExamplesController_Cycle_m0CF32199FDB79E6C5586FCE10CBD82C72B0DB2C6(__this, (bool)0, NULL);
		return;
	}
}
// System.Void Crest.Examples.ExamplesController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExamplesController_Start_m1CC2FF346CF1DE8541588E1EDA47DB97595DA287 (ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var hasActive = false;
		V_0 = (bool)0;
		// foreach (Transform current in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0045;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0045:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_0010_1:
			{
				// foreach (Transform current in transform)
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// if (current.gameObject.activeSelf)
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				NullCheck(L_7);
				bool L_8;
				L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
				if (!L_8)
				{
					goto IL_002b_1;
				}
			}
			{
				// hasActive = true;
				V_0 = (bool)1;
				// break;
				goto IL_0046;
			}

IL_002b_1:
			{
				// foreach (Transform current in transform)
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// if (!hasActive)
		bool L_11 = V_0;
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		// transform.GetChild(0).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_12, 0, NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Crest.Examples.ExamplesController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExamplesController_Update_m4FC361C86C6FFDFF091C98C585A64AA724CAE225 (ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyUp(_previous))
		int32_t L_0 = __this->____previous_4;
		bool L_1;
		L_1 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Previous();
		ExamplesController_Previous_mEB17457001A52EB0FE501AE3541BD3102077DE0C(__this, NULL);
		return;
	}

IL_0014:
	{
		// else if (Input.GetKeyUp(_next))
		int32_t L_2 = __this->____next_5;
		bool L_3;
		L_3 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// Next();
		ExamplesController_Next_mD2440E0D8C8B14C1D6F3E8B9B09D87645200C4F2(__this, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Boolean Crest.Examples.ExamplesController::IsController(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExamplesController_IsController_mE274ABD2BA4F95B44FBB2223CA9DD4C049DE124A (ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD_m8ED09576CE2D84CD6166683BD615B3F15DD0DB1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* V_0 = NULL;
	{
		// return transform.parent == null || !transform.parent.TryGetComponent<ExamplesController>(out _);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Component_TryGetComponent_TisExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD_m8ED09576CE2D84CD6166683BD615B3F15DD0DB1C(L_4, (&V_0), Component_TryGetComponent_TisExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD_m8ED09576CE2D84CD6166683BD615B3F15DD0DB1C_RuntimeMethod_var);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		return (bool)1;
	}
}
// System.Void Crest.Examples.ExamplesController::Cycle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExamplesController_Cycle_m0CF32199FDB79E6C5586FCE10CBD82C72B0DB2C6 (ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* __this, bool ___0_isReverse, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// var hasActive = false;
		V_0 = (bool)0;
		// var previous = transform.GetChild(transform.childCount - 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		V_1 = L_3;
		// foreach (Transform current in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_4, NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_2;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_4;
					if (!L_7)
					{
						goto IL_00a9;
					}
				}
				{
					RuntimeObject* L_8 = V_4;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008c_1;
			}

IL_0029_1:
			{
				// foreach (Transform current in transform)
				RuntimeObject* L_9 = V_2;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_3 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_10, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if (isReverse)
				bool L_11 = ___0_isReverse;
				if (!L_11)
				{
					goto IL_0061_1;
				}
			}
			{
				// if (current.gameObject.activeInHierarchy)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_3;
				NullCheck(L_12);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
				L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
				NullCheck(L_13);
				bool L_14;
				L_14 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_13, NULL);
				if (!L_14)
				{
					goto IL_008a_1;
				}
			}
			{
				// current.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_3;
				NullCheck(L_15);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
				L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
				NullCheck(L_16);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
				// previous.gameObject.SetActive(true);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_1;
				NullCheck(L_17);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
				L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
				NullCheck(L_18);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
				// hasActive = true;
				V_0 = (bool)1;
				// break;
				goto IL_00aa;
			}

IL_0061_1:
			{
				// if (previous.gameObject.activeInHierarchy)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_1;
				NullCheck(L_19);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
				L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
				NullCheck(L_20);
				bool L_21;
				L_21 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_20, NULL);
				if (!L_21)
				{
					goto IL_008a_1;
				}
			}
			{
				// previous.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_1;
				NullCheck(L_22);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
				L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
				NullCheck(L_23);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
				// current.gameObject.SetActive(true);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_3;
				NullCheck(L_24);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
				L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
				NullCheck(L_25);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
				// hasActive = true;
				V_0 = (bool)1;
				// break;
				goto IL_00aa;
			}

IL_008a_1:
			{
				// previous = current;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_3;
				V_1 = L_26;
			}

IL_008c_1:
			{
				// foreach (Transform current in transform)
				RuntimeObject* L_27 = V_2;
				NullCheck(L_27);
				bool L_28;
				L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
				if (L_28)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// if (!hasActive)
		bool L_29 = V_0;
		if (L_29)
		{
			goto IL_00c4;
		}
	}
	{
		// transform.GetChild(0).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_30, 0, NULL);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)1, NULL);
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void Crest.Examples.ExamplesController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExamplesController__ctor_mFB6A849FFF4629551C8D0727DBE9213F5E0B3DC4 (ExamplesController_tD08876D2BF85DDA87A86967608C69539FCE9C0DD* __this, const RuntimeMethod* method) 
{
	{
		// KeyCode _previous = KeyCode.Comma;
		__this->____previous_4 = ((int32_t)44);
		// KeyCode _next = KeyCode.Period;
		__this->____next_5 = ((int32_t)46);
		CustomMonoBehaviour__ctor_mD1D909DC7D63D8DD2CCF388F4A72B01261CC4CF4(__this, NULL);
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
// System.Void Crest.Examples.MaskFill::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskFill_OnEnable_mFCDA6177C7B61D382E6CBC2ECACB5B4835AD1F33 (MaskFill_t033838EC2EF42BFCC7DF377ED9BB6C042AA133C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helpers_t01E9EEB2D4EC7953953C9357D91255138B257FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F9025B1EAAB478EC849FFD95707CE66A7044676);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDB0C13A5C02165B98A40244A06FD05BA671A296);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_material == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// _material = new Material(Shader.Find("Hidden/Crest/Examples/Mask Fill"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralBDB0C13A5C02165B98A40244A06FD05BA671A296, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->____material_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_5), (void*)L_3);
	}

IL_0023:
	{
		// Helpers.CreateRenderTargetTextureReference(ref _texture, ref _target);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** L_4 = (&__this->____texture_6);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_5 = (&__this->____target_7);
		il2cpp_codegen_runtime_class_init_inline(Helpers_t01E9EEB2D4EC7953953C9357D91255138B257FDF_il2cpp_TypeInfo_var);
		Helpers_CreateRenderTargetTextureReference_mB825CC9BB555F632B4794412AFA43FB1FE09ADCF(L_4, L_5, NULL);
		// _texture.name = "_FillTexture";
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->____texture_6;
		NullCheck(L_6);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_6, _stringLiteral8F9025B1EAAB478EC849FFD95707CE66A7044676, NULL);
		// }
		return;
	}
}
// System.Void Crest.Examples.MaskFill::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskFill_OnDisable_m039242FE35E224A98B40E8AC6E219788E9BE8452 (MaskFill_t033838EC2EF42BFCC7DF377ED9BB6C042AA133C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_texture != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->____texture_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _texture.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->____texture_6;
		NullCheck(L_2);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Crest.Examples.MaskFill::ExecuteFillMask(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskFill_ExecuteFillMask_mA813FA55E14C7EC20929B08A8CAF16F6D3A737B8 (MaskFill_t033838EC2EF42BFCC7DF377ED9BB6C042AA133C5* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buffer, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___2_descriptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m50A5896C62B9ADBC7CDA569AED01965F732C0206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB3335A2F8C13E8560AD216C31C274039EAD6E5AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0E9B975BD111000DA67E4735FCB6FE908FAB1FF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helpers_t01E9EEB2D4EC7953953C9357D91255138B257FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m89A1D216F94797F1BFBDD647E317B8389D495E99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_t3EBCB88C28D9AE263AED0C8FD11495C603ECA68A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_1 = NULL;
	{
		// if (_meshes.Count == 0)
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_0 = __this->____meshes_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline(L_0, List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Helpers.RenderTargetTextureNeedsUpdating(_texture, descriptor))
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->____texture_6;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_3 = ___2_descriptor;
		il2cpp_codegen_runtime_class_init_inline(Helpers_t01E9EEB2D4EC7953953C9357D91255138B257FDF_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Helpers_RenderTargetTextureNeedsUpdating_m9B9F910B135DAA6858110C081E3737BC231F4C0F(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// descriptor.colorFormat = RenderTextureFormat.RFloat;
		RenderTextureDescriptor_set_colorFormat_m61B0FA4FCDE8A0F8A843DD6BF74097C21021C4FE((&___2_descriptor), ((int32_t)14), NULL);
		// descriptor.depthBufferBits = 24;
		RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819((&___2_descriptor), ((int32_t)24), NULL);
		// _texture.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->____texture_6;
		NullCheck(L_5);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_5, NULL);
		// _texture.descriptor = descriptor;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->____texture_6;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_7 = ___2_descriptor;
		NullCheck(L_6);
		RenderTexture_set_descriptor_m5BB8245412A1C60628AD0089A9B1937CBDBAA8B8(L_6, L_7, NULL);
	}

IL_0045:
	{
		// buffer.SetRenderTarget(_target);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_8 = ___0_buffer;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_9 = __this->____target_7;
		NullCheck(L_8);
		CommandBuffer_SetRenderTarget_m89782BA1E8AD50020DBDB9EABF32F8AA9356628A(L_8, L_9, NULL);
		// buffer.ClearRenderTarget(true, true, Color.black);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_10 = ___0_buffer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_10);
		CommandBuffer_ClearRenderTarget_mABBE498A16DCEADCAA8F5DB50073012F74D03F14(L_10, (bool)1, (bool)1, L_11, NULL);
		// buffer.SetGlobalTexture(ShaderIDs.s_FillTexture, _target);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_12 = ___0_buffer;
		il2cpp_codegen_runtime_class_init_inline(ShaderIDs_t3EBCB88C28D9AE263AED0C8FD11495C603ECA68A_il2cpp_TypeInfo_var);
		int32_t L_13 = ((ShaderIDs_t3EBCB88C28D9AE263AED0C8FD11495C603ECA68A_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t3EBCB88C28D9AE263AED0C8FD11495C603ECA68A_il2cpp_TypeInfo_var))->___s_FillTexture_0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_14 = __this->____target_7;
		NullCheck(L_12);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_12, L_13, L_14, NULL);
		// foreach (var meshFilter in _meshes)
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_15 = __this->____meshes_4;
		NullCheck(L_15);
		Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064 L_16;
		L_16 = List_1_GetEnumerator_m89A1D216F94797F1BFBDD647E317B8389D495E99(L_15, List_1_GetEnumerator_m89A1D216F94797F1BFBDD647E317B8389D495E99_RuntimeMethod_var);
		V_0 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m50A5896C62B9ADBC7CDA569AED01965F732C0206((&V_0), Enumerator_Dispose_m50A5896C62B9ADBC7CDA569AED01965F732C0206_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ae_1;
			}

IL_007d_1:
			{
				// foreach (var meshFilter in _meshes)
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_17;
				L_17 = Enumerator_get_Current_m0E9B975BD111000DA67E4735FCB6FE908FAB1FF9_inline((&V_0), Enumerator_get_Current_m0E9B975BD111000DA67E4735FCB6FE908FAB1FF9_RuntimeMethod_var);
				V_1 = L_17;
				// if (meshFilter == null)
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_18 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_19)
				{
					goto IL_00ae_1;
				}
			}
			{
				// buffer.DrawMesh(meshFilter.sharedMesh, meshFilter.transform.localToWorldMatrix, _material, 0, 0, null);
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_20 = ___0_buffer;
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_21 = V_1;
				NullCheck(L_21);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22;
				L_22 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_21, NULL);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_23 = V_1;
				NullCheck(L_23);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
				L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
				NullCheck(L_24);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25;
				L_25 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_24, NULL);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->____material_5;
				NullCheck(L_20);
				CommandBuffer_DrawMesh_m5C2FA266FB98E3B7F59009B501824511E47003D9(L_20, L_22, L_25, L_26, 0, 0, (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)NULL, NULL);
			}

IL_00ae_1:
			{
				// foreach (var meshFilter in _meshes)
				bool L_27;
				L_27 = Enumerator_MoveNext_mB3335A2F8C13E8560AD216C31C274039EAD6E5AF((&V_0), Enumerator_MoveNext_mB3335A2F8C13E8560AD216C31C274039EAD6E5AF_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_007d_1;
				}
			}
			{
				goto IL_00c7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void Crest.Examples.MaskFill::EnableShadowPassKeyword(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskFill_EnableShadowPassKeyword_mC8279B5EBCC7914B8A911744185EA392A85B9E93 (MaskFill_t033838EC2EF42BFCC7DF377ED9BB6C042AA133C5* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buffer, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___2_descriptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8F24493B16B68BA75B49964F7B381C56CEE80E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.EnableShaderKeyword("_SHADOW_PASS");
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___0_buffer;
		NullCheck(L_0);
		CommandBuffer_EnableShaderKeyword_m9DE5732149961F1EA14B295D9E72914E1CC7DA5A(L_0, _stringLiteralEA8F24493B16B68BA75B49964F7B381C56CEE80E, NULL);
		// }
		return;
	}
}
// System.Void Crest.Examples.MaskFill::DisableShadowPassKeyword(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera,UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskFill_DisableShadowPassKeyword_m31DC7A265EADC966F18EF1216A4A8E78B44C30CC (MaskFill_t033838EC2EF42BFCC7DF377ED9BB6C042AA133C5* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buffer, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___2_descriptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8F24493B16B68BA75B49964F7B381C56CEE80E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.DisableShaderKeyword("_SHADOW_PASS");
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___0_buffer;
		NullCheck(L_0);
		CommandBuffer_DisableShaderKeyword_m2B66FB1F672F3EE51FEA8A2CBA24AA6B7E4454BD(L_0, _stringLiteralEA8F24493B16B68BA75B49964F7B381C56CEE80E, NULL);
		// }
		return;
	}
}
// System.Void Crest.Examples.MaskFill::Clear(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskFill_Clear_m71B7B162DFDC27EC3637DE77AD4D6F0E561275CC (MaskFill_t033838EC2EF42BFCC7DF377ED9BB6C042AA133C5* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buffer, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8F24493B16B68BA75B49964F7B381C56CEE80E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_texture != null && _texture.IsCreated())
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->____texture_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->____texture_6;
		NullCheck(L_2);
		bool L_3;
		L_3 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_2, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// buffer.SetRenderTarget(_target);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_4 = ___0_buffer;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_5 = __this->____target_7;
		NullCheck(L_4);
		CommandBuffer_SetRenderTarget_m89782BA1E8AD50020DBDB9EABF32F8AA9356628A(L_4, L_5, NULL);
		// buffer.ClearRenderTarget(true, true, Color.black);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_6 = ___0_buffer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_6);
		CommandBuffer_ClearRenderTarget_mABBE498A16DCEADCAA8F5DB50073012F74D03F14(L_6, (bool)1, (bool)1, L_7, NULL);
	}

IL_0034:
	{
		// buffer.DisableShaderKeyword("_SHADOW_PASS");
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_8 = ___0_buffer;
		NullCheck(L_8);
		CommandBuffer_DisableShaderKeyword_m2B66FB1F672F3EE51FEA8A2CBA24AA6B7E4454BD(L_8, _stringLiteralEA8F24493B16B68BA75B49964F7B381C56CEE80E, NULL);
		// }
		return;
	}
}
// System.Void Crest.Examples.MaskFill::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskFill__ctor_m5311DD9510E4CEB3B75C20C1E8DA7F8CE4547CB1 (MaskFill_t033838EC2EF42BFCC7DF377ED9BB6C042AA133C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<MeshFilter> _meshes = new List<MeshFilter>();
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_0 = (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*)il2cpp_codegen_object_new(List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C(L_0, List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		__this->____meshes_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____meshes_4), (void*)L_0);
		CustomMonoBehaviour__ctor_mD1D909DC7D63D8DD2CCF388F4A72B01261CC4CF4(__this, NULL);
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
// System.Void Crest.Examples.MaskFill/ShaderIDs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderIDs__cctor_mAB75B9843AC74B61D75EBB919698C1D6D675399E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_t3EBCB88C28D9AE263AED0C8FD11495C603ECA68A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F9025B1EAAB478EC849FFD95707CE66A7044676);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int s_FillTexture = Shader.PropertyToID("_FillTexture");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral8F9025B1EAAB478EC849FFD95707CE66A7044676, NULL);
		((ShaderIDs_t3EBCB88C28D9AE263AED0C8FD11495C603ECA68A_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t3EBCB88C28D9AE263AED0C8FD11495C603ECA68A_il2cpp_TypeInfo_var))->___s_FillTexture_0 = L_0;
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
// System.Void Crest.Examples.SendUnityEvent::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendUnityEvent_OnEnable_m56D5F63C61D3B066F75C87B0AEE59BE7DF6B7AB6 (SendUnityEvent_t8E045F4E225E560B25F20E21658FA48629CDD056* __this, const RuntimeMethod* method) 
{
	{
		// _timeSinceEnabled = 0f;
		__this->____timeSinceEnabled_7 = (0.0f);
		// _onEnable.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onEnable_4;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void Crest.Examples.SendUnityEvent::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendUnityEvent_OnDisable_m915E47CA33CC3CFF2EB8B2A92395B956994CFD7D (SendUnityEvent_t8E045F4E225E560B25F20E21658FA48629CDD056* __this, const RuntimeMethod* method) 
{
	{
		// _onDisable.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onDisable_5;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void Crest.Examples.SendUnityEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendUnityEvent_Update_mC2EEAE86AAC85E0FCCCEF562763FA04FA214D2A0 (SendUnityEvent_t8E045F4E225E560B25F20E21658FA48629CDD056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _timeSinceEnabled += Time.deltaTime;
		float L_0 = __this->____timeSinceEnabled_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____timeSinceEnabled_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// _onUpdate.Invoke(_timeSinceEnabled);
		UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* L_2 = __this->____onUpdate_6;
		float L_3 = __this->____timeSinceEnabled_7;
		NullCheck(L_2);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_2, L_3, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Crest.Examples.SendUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendUnityEvent__ctor_mBFB346473F271E3D3AEC174A267CF1AF3A40141E (SendUnityEvent_t8E045F4E225E560B25F20E21658FA48629CDD056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEvent _onEnable = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->____onEnable_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onEnable_4), (void*)L_0);
		// UnityEvent _onDisable = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->____onDisable_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onDisable_5), (void*)L_1);
		// UnityEvent<float> _onUpdate = new UnityEvent<float>();
		UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* L_2 = (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*)il2cpp_codegen_object_new(UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(L_2, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		__this->____onUpdate_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onUpdate_6), (void*)L_2);
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
// System.Void Crest.Examples.SimpleMotion::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMotion_OnEnable_mB10969E11964AD8A834ED2EE3FD8BFEAB0280BC1 (SimpleMotion_t0472D01378CC2F31677526927EE16571669B65DF* __this, const RuntimeMethod* method) 
{
	{
		// _oldPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->____oldPosition_8 = L_1;
		// _oldRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		__this->____oldRotation_9 = L_3;
		// }
		return;
	}
}
// System.Void Crest.Examples.SimpleMotion::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMotion_OnDisable_m7CE4D32D8BD614860943301C0A3013CED01A7C24 (SimpleMotion_t0472D01378CC2F31677526927EE16571669B65DF* __this, const RuntimeMethod* method) 
{
	{
		// if (_resetOnDisable)
		bool L_0 = __this->____resetOnDisable_5;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// transform.position = _oldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____oldPosition_8;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// transform.rotation = _oldRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = __this->____oldRotation_9;
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_4, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Crest.Examples.SimpleMotion::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMotion_Update_mEEA1DF19CE2495C9F145B651C618BB2E53C96954 (SimpleMotion_t0472D01378CC2F31677526927EE16571669B65DF* __this, const RuntimeMethod* method) 
{
	{
		// transform.position += _velocity * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____velocity_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		// transform.rotation *= Quaternion.Euler(_angularVelocity * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->____angularVelocity_7;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_9, L_13, NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_14, NULL);
		// }
		return;
	}
}
// System.Void Crest.Examples.SimpleMotion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMotion__ctor_m007AA82408A9C476E71B090B566E49FCC686E3AF (SimpleMotion_t0472D01378CC2F31677526927EE16571669B65DF* __this, const RuntimeMethod* method) 
{
	{
		CustomMonoBehaviour__ctor_mD1D909DC7D63D8DD2CCF388F4A72B01261CC4CF4(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* OceanRenderer_get_Instance_m3C33035B552488E7C86707A05C0E2B464E798D2A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OceanRenderer Instance { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var);
		OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* L_0 = ((OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_StaticFields*)il2cpp_codegen_static_fields_for(OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_79;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_vector), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___1_maxLength;
		float L_3 = ___1_maxLength;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_vector;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___1_maxLength;
		float L_18 = V_4;
		float L_19 = ___1_maxLength;
		float L_20 = V_5;
		float L_21 = ___1_maxLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_vector;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* Keyboard_get_current_mDE773B54C9975CEFEAA469AD091C49E150A3FEC3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Keyboard current { get; private set; }
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_0 = ((Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_StaticFields*)il2cpp_codegen_static_fields_for(Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_50;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OceanRenderer_get_CreateDynamicWaveSim_mEA55ACCC9E3319537F5BABB742DE5324DDF44026_inline (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) 
{
	{
		// public bool CreateDynamicWaveSim => _createDynamicWaveSim;
		bool L_0 = __this->____createDynamicWaveSim_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public new static Mouse current { get; private set; }
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_0 = ((Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_58;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* Mouse_get_leftButton_m1015BCBE6BE30B1D1D2702736A4E64120F6B5DFB_inline (Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl leftButton { get; protected set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CleftButtonU3Ek__BackingField_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline (Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Control position { get; protected set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = __this->___U3CpositionU3Ek__BackingField_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OceanRenderer_get_CollisionProvider_mF92D16873C96007516EDF7F243C05E8AE6A376A7_inline (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) 
{
	{
		// public ICollProvider CollisionProvider { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCollisionProviderU3Ek__BackingField_110;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* OceanRenderer_get_OceanMaterial_m3544CA735E56C76C89AFA74CF6694DE661F8675F_inline (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) 
{
	{
		// public Material OceanMaterial { get => _material; set => _material = value; }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OceanRenderer_get_UnderwaterDepthFogDensity_mCEB8EAE577CAD61A5227BA6F429FE60638EE72C2_inline (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 UnderwaterDepthFogDensity { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CUnderwaterDepthFogDensityU3Ek__BackingField_74;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF* UnderwaterRenderer_get_Instance_m05AB2D58C2E71DFCA140A34E4B04EFB5EB6E3403_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnderwaterRenderer Instance { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF_il2cpp_TypeInfo_var);
		UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF* L_0 = ((UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF_StaticFields*)il2cpp_codegen_static_fields_for(UnderwaterRenderer_tA47BFA8F27D8C993C92E1D51318B931FFEC50CFF_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OceanRenderer_get_ViewerHeightAboveWater_m991BD8256F02634651610E007F3924A00B86100F_inline (OceanRenderer_tF715096A3296C9D7DC57226ECA6A4A5E31D4BBAA* __this, const RuntimeMethod* method) 
{
	{
		// public float ViewerHeightAboveWater { get; private set; }
		float L_0 = __this->___U3CViewerHeightAboveWaterU3Ek__BackingField_73;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}

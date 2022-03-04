#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<HutongGames.PlayMaker.FsmEvent>
struct Action_1_tE1DD63598D608D566A4E17D2EB5AE1F33FC745A1;
// System.Action`1<HutongGames.PlayMaker.FsmState>
struct Action_1_t9212767A523C24A36F10F5C38487A2040C673BEB;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Comparison`1<PlayMakerFSM>
struct Comparison_1_tB2106DAC315A6175BEBC71E0F150F0833D39B001;
// System.Collections.Generic.Dictionary`2<HutongGames.PlayMaker.Fsm,UnityEngine.RaycastHit2D>
struct Dictionary_2_tC5C4DDD30CBE22C2E681D17CAAC4EFDB82E9AFB5;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent>
struct List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.Fsm>
struct List_1_tD7024F62D6CEB05FED3EDD2429E96D5A02E0A72F;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmEvent>
struct List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D;
// System.Collections.Generic.List`1<PlayMakerFSM>
struct List_1_tE4F25CA67A8E800E4DE4A7323F0033AADABCB88C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B;
// HutongGames.PlayMaker.FsmState[]
struct FsmStateU5BU5D_tDBB92641587345478DF34938358F6BE619ADB154;
// HutongGames.PlayMaker.FsmTransition[]
struct FsmTransitionU5BU5D_t04E06263ABC3B89A4266A9D614A541E009BC8139;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// HutongGames.PlayMaker.NamedVariable[]
struct NamedVariableU5BU5D_t46BF6B013E1D4C724FFC3BA51924114AC0EAF50E;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// HutongGames.PlayMaker.Fsm
struct Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F;
// HutongGames.PlayMaker.FsmEventData
struct FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D;
// HutongGames.PlayMaker.FsmEventTarget
struct FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE;
// HutongGames.PlayMaker.FsmLog
struct FsmLog_tF21848ABE23995239708F075B3DBAE380D201846;
// HutongGames.PlayMaker.FsmState
struct FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981;
// FsmTemplate
struct FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458;
// HutongGames.PlayMaker.FsmTransition
struct FsmTransition_t0F3354FE53374C3EA811FC81F9089C34D615605E;
// HutongGames.PlayMaker.FsmVariables
struct FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Joint2D
struct Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayMakerFSM
struct PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// PlayMakerFSM/<DoCoroutine>d__45
struct U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670;
// PlayMakerFSM/AddEventHandlerDelegate
struct AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB;
// PlayMakerGUI/<>c
struct U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418;
// PlayMakerGlobals/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t7D9B4002613239FA54F3D1FF7580F6AA8B77C739;
// PlayMakerProxyBase/Collision2DEvent
struct Collision2DEvent_tC2ED69880D8FFBD691E016C25053D35FD6C57B61;
// PlayMakerProxyBase/CollisionEvent
struct CollisionEvent_t333A31C8E6B34B36BE3832401105DACEB21618B6;
// PlayMakerProxyBase/ControllerCollisionEvent
struct ControllerCollisionEvent_t653F7272D9CFD511EBD043FA0754CFF1857A70D2;
// PlayMakerProxyBase/ParticleCollisionEvent
struct ParticleCollisionEvent_tDB966C25FEBFECD7BFF9EEF9E08E1FEB89C11CCD;
// PlayMakerProxyBase/Trigger2DEvent
struct Trigger2DEvent_t97CDC12715DFDAD5A770005DD3C9B8C427788522;
// PlayMakerProxyBase/TriggerEvent
struct TriggerEvent_t9A24DA0AE6C31160D00EDFBBD7DE0E07AF3C8A96;

IL2CPP_EXTERN_C RuntimeClass* FsmExecutionStack_t044548FE34D395C2D79FEC504C31659FBB6686FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoCoroutineU3Ed__45_System_Collections_IEnumerator_Reset_m5CF4095CEB5FD48677A8F6E1C54BB103E2E81D85_RuntimeMethod_var;
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;;
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke;
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke;;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// PlayMakerFSM/<DoCoroutine>d__45
struct U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670  : public RuntimeObject
{
public:
	// System.Int32 PlayMakerFSM/<DoCoroutine>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayMakerFSM/<DoCoroutine>d__45::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayMakerFSM PlayMakerFSM/<DoCoroutine>d__45::<>4__this
	PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * ___U3CU3E4__this_2;
	// System.Collections.IEnumerator PlayMakerFSM/<DoCoroutine>d__45::routine
	RuntimeObject* ___routine_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670, ___U3CU3E4__this_2)); }
	inline PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_routine_3() { return static_cast<int32_t>(offsetof(U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670, ___routine_3)); }
	inline RuntimeObject* get_routine_3() const { return ___routine_3; }
	inline RuntimeObject** get_address_of_routine_3() { return &___routine_3; }
	inline void set_routine_3(RuntimeObject* value)
	{
		___routine_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___routine_3), (void*)value);
	}
};


// PlayMakerGUI/<>c
struct U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418_StaticFields
{
public:
	// PlayMakerGUI/<>c PlayMakerGUI/<>c::<>9
	U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418 * ___U3CU3E9_0;
	// System.Comparison`1<PlayMakerFSM> PlayMakerGUI/<>c::<>9__67_0
	Comparison_1_tB2106DAC315A6175BEBC71E0F150F0833D39B001 * ___U3CU3E9__67_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__67_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418_StaticFields, ___U3CU3E9__67_0_1)); }
	inline Comparison_1_tB2106DAC315A6175BEBC71E0F150F0833D39B001 * get_U3CU3E9__67_0_1() const { return ___U3CU3E9__67_0_1; }
	inline Comparison_1_tB2106DAC315A6175BEBC71E0F150F0833D39B001 ** get_address_of_U3CU3E9__67_0_1() { return &___U3CU3E9__67_0_1; }
	inline void set_U3CU3E9__67_0_1(Comparison_1_tB2106DAC315A6175BEBC71E0F150F0833D39B001 * value)
	{
		___U3CU3E9__67_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__67_0_1), (void*)value);
	}
};


// PlayMakerGlobals/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t7D9B4002613239FA54F3D1FF7580F6AA8B77C739  : public RuntimeObject
{
public:
	// System.String PlayMakerGlobals/<>c__DisplayClass34_0::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t7D9B4002613239FA54F3D1FF7580F6AA8B77C739, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventName_0), (void*)value);
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


// HutongGames.Extensions.TextureExtensions/Point
struct Point_t339E5555BE2246857B85758D60C57142A565EC02 
{
public:
	// System.Int16 HutongGames.Extensions.TextureExtensions/Point::x
	int16_t ___x_0;
	// System.Int16 HutongGames.Extensions.TextureExtensions/Point::y
	int16_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Point_t339E5555BE2246857B85758D60C57142A565EC02, ___x_0)); }
	inline int16_t get_x_0() const { return ___x_0; }
	inline int16_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int16_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Point_t339E5555BE2246857B85758D60C57142A565EC02, ___y_1)); }
	inline int16_t get_y_1() const { return ___y_1; }
	inline int16_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int16_t value)
	{
		___y_1 = value;
	}
};


// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
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

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550, ___m_Controller_0)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550, ___m_Collider_1)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550, ___m_Point_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550, ___m_Normal_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550, ___m_MoveDirection_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshaled_pinvoke
{
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ___m_Controller_0;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550_marshaled_com
{
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ___m_Controller_0;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
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

// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// HutongGames.PlayMaker.UiEvents
struct UiEvents_t23E84C96ADA1284A42555FD14C11046B088930D4 
{
public:
	// System.Int32 HutongGames.PlayMaker.UiEvents::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UiEvents_t23E84C96ADA1284A42555FD14C11046B088930D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Fsm/EditorFlags
struct EditorFlags_tB4034C37DE9970465126F449E9257310D6850EEA 
{
public:
	// System.Int32 HutongGames.PlayMaker.Fsm/EditorFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditorFlags_tB4034C37DE9970465126F449E9257310D6850EEA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.LayoutOption/LayoutOptionType
struct LayoutOptionType_tEFA6E5AB3C169B8E6CA4A9418BD7BF523F5DB40E 
{
public:
	// System.Int32 HutongGames.PlayMaker.LayoutOption/LayoutOptionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutOptionType_tEFA6E5AB3C169B8E6CA4A9418BD7BF523F5DB40E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// HutongGames.PlayMaker.Fsm
struct Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo HutongGames.PlayMaker.Fsm::updateHelperSetDirty
	MethodInfo_t * ___updateHelperSetDirty_2;
	// System.Action`1<HutongGames.PlayMaker.FsmEvent> HutongGames.PlayMaker.Fsm::OnOutputEvent
	Action_1_tE1DD63598D608D566A4E17D2EB5AE1F33FC745A1 * ___OnOutputEvent_5;
	// System.Int32 HutongGames.PlayMaker.Fsm::dataVersion
	int32_t ___dataVersion_6;
	// UnityEngine.MonoBehaviour HutongGames.PlayMaker.Fsm::owner
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___owner_7;
	// FsmTemplate HutongGames.PlayMaker.Fsm::usedInTemplate
	FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * ___usedInTemplate_8;
	// System.String HutongGames.PlayMaker.Fsm::name
	String_t* ___name_9;
	// System.String HutongGames.PlayMaker.Fsm::startState
	String_t* ___startState_10;
	// HutongGames.PlayMaker.FsmState[] HutongGames.PlayMaker.Fsm::states
	FsmStateU5BU5D_tDBB92641587345478DF34938358F6BE619ADB154* ___states_11;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Fsm::events
	FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B* ___events_12;
	// HutongGames.PlayMaker.FsmTransition[] HutongGames.PlayMaker.Fsm::globalTransitions
	FsmTransitionU5BU5D_t04E06263ABC3B89A4266A9D614A541E009BC8139* ___globalTransitions_13;
	// HutongGames.PlayMaker.FsmVariables HutongGames.PlayMaker.Fsm::variables
	FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * ___variables_14;
	// System.String HutongGames.PlayMaker.Fsm::description
	String_t* ___description_15;
	// System.String HutongGames.PlayMaker.Fsm::docUrl
	String_t* ___docUrl_16;
	// System.Boolean HutongGames.PlayMaker.Fsm::showStateLabel
	bool ___showStateLabel_17;
	// System.Int32 HutongGames.PlayMaker.Fsm::maxLoopCount
	int32_t ___maxLoopCount_18;
	// System.String HutongGames.PlayMaker.Fsm::watermark
	String_t* ___watermark_19;
	// System.String HutongGames.PlayMaker.Fsm::password
	String_t* ___password_20;
	// System.Boolean HutongGames.PlayMaker.Fsm::locked
	bool ___locked_21;
	// System.Boolean HutongGames.PlayMaker.Fsm::manualUpdate
	bool ___manualUpdate_22;
	// System.Int32[] HutongGames.PlayMaker.Fsm::outVariableIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___outVariableIndices_23;
	// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.Fsm::outputVariables
	NamedVariableU5BU5D_t46BF6B013E1D4C724FFC3BA51924114AC0EAF50E* ___outputVariables_24;
	// System.Boolean HutongGames.PlayMaker.Fsm::keepDelayedEventsOnStateExit
	bool ___keepDelayedEventsOnStateExit_25;
	// System.Boolean HutongGames.PlayMaker.Fsm::preprocessed
	bool ___preprocessed_26;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::host
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___host_27;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::rootFsm
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___rootFsm_28;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.Fsm> HutongGames.PlayMaker.Fsm::subFsmList
	List_1_tD7024F62D6CEB05FED3EDD2429E96D5A02E0A72F * ___subFsmList_29;
	// System.Boolean HutongGames.PlayMaker.Fsm::setDirty
	bool ___setDirty_30;
	// System.Boolean HutongGames.PlayMaker.Fsm::activeStateEntered
	bool ___activeStateEntered_31;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmEvent> HutongGames.PlayMaker.Fsm::ExposedEvents
	List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * ___ExposedEvents_32;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmEvent> HutongGames.PlayMaker.Fsm::OutputEvents
	List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * ___OutputEvents_33;
	// HutongGames.PlayMaker.FsmLog HutongGames.PlayMaker.Fsm::myLog
	FsmLog_tF21848ABE23995239708F075B3DBAE380D201846 * ___myLog_34;
	// System.Boolean HutongGames.PlayMaker.Fsm::RestartOnEnable
	bool ___RestartOnEnable_35;
	// System.Boolean HutongGames.PlayMaker.Fsm::ResetVariablesOnEnable
	bool ___ResetVariablesOnEnable_36;
	// HutongGames.PlayMaker.FsmVariables HutongGames.PlayMaker.Fsm::_defaultVariableValues
	FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * ____defaultVariableValues_37;
	// System.Boolean HutongGames.PlayMaker.Fsm::hasErrors
	bool ___hasErrors_38;
	// System.Boolean HutongGames.PlayMaker.Fsm::<Started>k__BackingField
	bool ___U3CStartedU3Ek__BackingField_39;
	// System.Boolean HutongGames.PlayMaker.Fsm::EnableDebugFlow
	bool ___EnableDebugFlow_40;
	// System.Boolean HutongGames.PlayMaker.Fsm::EnableBreakpoints
	bool ___EnableBreakpoints_41;
	// System.Boolean HutongGames.PlayMaker.Fsm::StepFrame
	bool ___StepFrame_42;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent> HutongGames.PlayMaker.Fsm::delayedEvents
	List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * ___delayedEvents_43;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent> HutongGames.PlayMaker.Fsm::updateEvents
	List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * ___updateEvents_44;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent> HutongGames.PlayMaker.Fsm::removeEvents
	List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * ___removeEvents_45;
	// HutongGames.PlayMaker.Fsm/EditorFlags HutongGames.PlayMaker.Fsm::editorFlags
	int32_t ___editorFlags_46;
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Fsm::<EventTarget>k__BackingField
	FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * ___U3CEventTargetU3Ek__BackingField_47;
	// System.Boolean HutongGames.PlayMaker.Fsm::initialized
	bool ___initialized_48;
	// System.Boolean HutongGames.PlayMaker.Fsm::<Finished>k__BackingField
	bool ___U3CFinishedU3Ek__BackingField_49;
	// System.String HutongGames.PlayMaker.Fsm::activeStateName
	String_t* ___activeStateName_50;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::activeState
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___activeState_51;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::switchToState
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___switchToState_52;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::previousActiveState
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___previousActiveState_53;
	// HutongGames.PlayMaker.FsmTransition HutongGames.PlayMaker.Fsm::<LastTransition>k__BackingField
	FsmTransition_t0F3354FE53374C3EA811FC81F9089C34D615605E * ___U3CLastTransitionU3Ek__BackingField_54;
	// System.Action`1<HutongGames.PlayMaker.FsmState> HutongGames.PlayMaker.Fsm::StateChanged
	Action_1_t9212767A523C24A36F10F5C38487A2040C673BEB * ___StateChanged_55;
	// System.Boolean HutongGames.PlayMaker.Fsm::<IsModifiedPrefabInstance>k__BackingField
	bool ___U3CIsModifiedPrefabInstanceU3Ek__BackingField_56;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::editState
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___editState_57;
	// System.Boolean HutongGames.PlayMaker.Fsm::<SwitchedState>k__BackingField
	bool ___U3CSwitchedStateU3Ek__BackingField_68;
	// System.Boolean HutongGames.PlayMaker.Fsm::mouseEvents
	bool ___mouseEvents_69;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleLevelLoaded
	bool ___handleLevelLoaded_70;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerEnter2D
	bool ___handleTriggerEnter2D_71;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerExit2D
	bool ___handleTriggerExit2D_72;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerStay2D
	bool ___handleTriggerStay2D_73;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionEnter2D
	bool ___handleCollisionEnter2D_74;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionExit2D
	bool ___handleCollisionExit2D_75;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionStay2D
	bool ___handleCollisionStay2D_76;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerEnter
	bool ___handleTriggerEnter_77;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerExit
	bool ___handleTriggerExit_78;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerStay
	bool ___handleTriggerStay_79;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionEnter
	bool ___handleCollisionEnter_80;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionExit
	bool ___handleCollisionExit_81;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionStay
	bool ___handleCollisionStay_82;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleParticleCollision
	bool ___handleParticleCollision_83;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleControllerColliderHit
	bool ___handleControllerColliderHit_84;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleJointBreak
	bool ___handleJointBreak_85;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleJointBreak2D
	bool ___handleJointBreak2D_86;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleOnGUI
	bool ___handleOnGUI_87;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleFixedUpdate
	bool ___handleFixedUpdate_88;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleLateUpdate
	bool ___handleLateUpdate_89;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleApplicationEvents
	bool ___handleApplicationEvents_90;
	// HutongGames.PlayMaker.UiEvents HutongGames.PlayMaker.Fsm::handleUiEvents
	int32_t ___handleUiEvents_91;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleLegacyNetworking
	bool ___handleLegacyNetworking_92;
	// UnityEngine.Collision HutongGames.PlayMaker.Fsm::<CollisionInfo>k__BackingField
	Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___U3CCollisionInfoU3Ek__BackingField_93;
	// UnityEngine.Collider HutongGames.PlayMaker.Fsm::<TriggerCollider>k__BackingField
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___U3CTriggerColliderU3Ek__BackingField_94;
	// UnityEngine.Collision2D HutongGames.PlayMaker.Fsm::<Collision2DInfo>k__BackingField
	Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___U3CCollision2DInfoU3Ek__BackingField_95;
	// UnityEngine.Collider2D HutongGames.PlayMaker.Fsm::<TriggerCollider2D>k__BackingField
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___U3CTriggerCollider2DU3Ek__BackingField_96;
	// System.Single HutongGames.PlayMaker.Fsm::<JointBreakForce>k__BackingField
	float ___U3CJointBreakForceU3Ek__BackingField_97;
	// UnityEngine.Joint2D HutongGames.PlayMaker.Fsm::<BrokenJoint2D>k__BackingField
	Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964 * ___U3CBrokenJoint2DU3Ek__BackingField_98;
	// UnityEngine.GameObject HutongGames.PlayMaker.Fsm::<ParticleCollisionGO>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CParticleCollisionGOU3Ek__BackingField_99;
	// System.String HutongGames.PlayMaker.Fsm::<TriggerName>k__BackingField
	String_t* ___U3CTriggerNameU3Ek__BackingField_100;
	// System.String HutongGames.PlayMaker.Fsm::<CollisionName>k__BackingField
	String_t* ___U3CCollisionNameU3Ek__BackingField_101;
	// System.String HutongGames.PlayMaker.Fsm::<Trigger2dName>k__BackingField
	String_t* ___U3CTrigger2dNameU3Ek__BackingField_102;
	// System.String HutongGames.PlayMaker.Fsm::<Collision2dName>k__BackingField
	String_t* ___U3CCollision2dNameU3Ek__BackingField_103;
	// UnityEngine.ControllerColliderHit HutongGames.PlayMaker.Fsm::<ControllerCollider>k__BackingField
	ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 * ___U3CControllerColliderU3Ek__BackingField_104;
	// UnityEngine.RaycastHit HutongGames.PlayMaker.Fsm::<RaycastHitInfo>k__BackingField
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___U3CRaycastHitInfoU3Ek__BackingField_105;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleAnimatorMove
	bool ___handleAnimatorMove_107;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleAnimatorIK
	bool ___handleAnimatorIK_108;
	// System.Boolean HutongGames.PlayMaker.Fsm::disableSent
	bool ___disableSent_109;

public:
	inline static int32_t get_offset_of_updateHelperSetDirty_2() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___updateHelperSetDirty_2)); }
	inline MethodInfo_t * get_updateHelperSetDirty_2() const { return ___updateHelperSetDirty_2; }
	inline MethodInfo_t ** get_address_of_updateHelperSetDirty_2() { return &___updateHelperSetDirty_2; }
	inline void set_updateHelperSetDirty_2(MethodInfo_t * value)
	{
		___updateHelperSetDirty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateHelperSetDirty_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnOutputEvent_5() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___OnOutputEvent_5)); }
	inline Action_1_tE1DD63598D608D566A4E17D2EB5AE1F33FC745A1 * get_OnOutputEvent_5() const { return ___OnOutputEvent_5; }
	inline Action_1_tE1DD63598D608D566A4E17D2EB5AE1F33FC745A1 ** get_address_of_OnOutputEvent_5() { return &___OnOutputEvent_5; }
	inline void set_OnOutputEvent_5(Action_1_tE1DD63598D608D566A4E17D2EB5AE1F33FC745A1 * value)
	{
		___OnOutputEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOutputEvent_5), (void*)value);
	}

	inline static int32_t get_offset_of_dataVersion_6() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___dataVersion_6)); }
	inline int32_t get_dataVersion_6() const { return ___dataVersion_6; }
	inline int32_t* get_address_of_dataVersion_6() { return &___dataVersion_6; }
	inline void set_dataVersion_6(int32_t value)
	{
		___dataVersion_6 = value;
	}

	inline static int32_t get_offset_of_owner_7() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___owner_7)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get_owner_7() const { return ___owner_7; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of_owner_7() { return &___owner_7; }
	inline void set_owner_7(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		___owner_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_7), (void*)value);
	}

	inline static int32_t get_offset_of_usedInTemplate_8() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___usedInTemplate_8)); }
	inline FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * get_usedInTemplate_8() const { return ___usedInTemplate_8; }
	inline FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 ** get_address_of_usedInTemplate_8() { return &___usedInTemplate_8; }
	inline void set_usedInTemplate_8(FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * value)
	{
		___usedInTemplate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedInTemplate_8), (void*)value);
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_startState_10() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___startState_10)); }
	inline String_t* get_startState_10() const { return ___startState_10; }
	inline String_t** get_address_of_startState_10() { return &___startState_10; }
	inline void set_startState_10(String_t* value)
	{
		___startState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startState_10), (void*)value);
	}

	inline static int32_t get_offset_of_states_11() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___states_11)); }
	inline FsmStateU5BU5D_tDBB92641587345478DF34938358F6BE619ADB154* get_states_11() const { return ___states_11; }
	inline FsmStateU5BU5D_tDBB92641587345478DF34938358F6BE619ADB154** get_address_of_states_11() { return &___states_11; }
	inline void set_states_11(FsmStateU5BU5D_tDBB92641587345478DF34938358F6BE619ADB154* value)
	{
		___states_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___states_11), (void*)value);
	}

	inline static int32_t get_offset_of_events_12() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___events_12)); }
	inline FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B* get_events_12() const { return ___events_12; }
	inline FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B** get_address_of_events_12() { return &___events_12; }
	inline void set_events_12(FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B* value)
	{
		___events_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_12), (void*)value);
	}

	inline static int32_t get_offset_of_globalTransitions_13() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___globalTransitions_13)); }
	inline FsmTransitionU5BU5D_t04E06263ABC3B89A4266A9D614A541E009BC8139* get_globalTransitions_13() const { return ___globalTransitions_13; }
	inline FsmTransitionU5BU5D_t04E06263ABC3B89A4266A9D614A541E009BC8139** get_address_of_globalTransitions_13() { return &___globalTransitions_13; }
	inline void set_globalTransitions_13(FsmTransitionU5BU5D_t04E06263ABC3B89A4266A9D614A541E009BC8139* value)
	{
		___globalTransitions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalTransitions_13), (void*)value);
	}

	inline static int32_t get_offset_of_variables_14() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___variables_14)); }
	inline FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * get_variables_14() const { return ___variables_14; }
	inline FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 ** get_address_of_variables_14() { return &___variables_14; }
	inline void set_variables_14(FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * value)
	{
		___variables_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variables_14), (void*)value);
	}

	inline static int32_t get_offset_of_description_15() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___description_15)); }
	inline String_t* get_description_15() const { return ___description_15; }
	inline String_t** get_address_of_description_15() { return &___description_15; }
	inline void set_description_15(String_t* value)
	{
		___description_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_15), (void*)value);
	}

	inline static int32_t get_offset_of_docUrl_16() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___docUrl_16)); }
	inline String_t* get_docUrl_16() const { return ___docUrl_16; }
	inline String_t** get_address_of_docUrl_16() { return &___docUrl_16; }
	inline void set_docUrl_16(String_t* value)
	{
		___docUrl_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___docUrl_16), (void*)value);
	}

	inline static int32_t get_offset_of_showStateLabel_17() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___showStateLabel_17)); }
	inline bool get_showStateLabel_17() const { return ___showStateLabel_17; }
	inline bool* get_address_of_showStateLabel_17() { return &___showStateLabel_17; }
	inline void set_showStateLabel_17(bool value)
	{
		___showStateLabel_17 = value;
	}

	inline static int32_t get_offset_of_maxLoopCount_18() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___maxLoopCount_18)); }
	inline int32_t get_maxLoopCount_18() const { return ___maxLoopCount_18; }
	inline int32_t* get_address_of_maxLoopCount_18() { return &___maxLoopCount_18; }
	inline void set_maxLoopCount_18(int32_t value)
	{
		___maxLoopCount_18 = value;
	}

	inline static int32_t get_offset_of_watermark_19() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___watermark_19)); }
	inline String_t* get_watermark_19() const { return ___watermark_19; }
	inline String_t** get_address_of_watermark_19() { return &___watermark_19; }
	inline void set_watermark_19(String_t* value)
	{
		___watermark_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watermark_19), (void*)value);
	}

	inline static int32_t get_offset_of_password_20() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___password_20)); }
	inline String_t* get_password_20() const { return ___password_20; }
	inline String_t** get_address_of_password_20() { return &___password_20; }
	inline void set_password_20(String_t* value)
	{
		___password_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_20), (void*)value);
	}

	inline static int32_t get_offset_of_locked_21() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___locked_21)); }
	inline bool get_locked_21() const { return ___locked_21; }
	inline bool* get_address_of_locked_21() { return &___locked_21; }
	inline void set_locked_21(bool value)
	{
		___locked_21 = value;
	}

	inline static int32_t get_offset_of_manualUpdate_22() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___manualUpdate_22)); }
	inline bool get_manualUpdate_22() const { return ___manualUpdate_22; }
	inline bool* get_address_of_manualUpdate_22() { return &___manualUpdate_22; }
	inline void set_manualUpdate_22(bool value)
	{
		___manualUpdate_22 = value;
	}

	inline static int32_t get_offset_of_outVariableIndices_23() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___outVariableIndices_23)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_outVariableIndices_23() const { return ___outVariableIndices_23; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_outVariableIndices_23() { return &___outVariableIndices_23; }
	inline void set_outVariableIndices_23(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___outVariableIndices_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outVariableIndices_23), (void*)value);
	}

	inline static int32_t get_offset_of_outputVariables_24() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___outputVariables_24)); }
	inline NamedVariableU5BU5D_t46BF6B013E1D4C724FFC3BA51924114AC0EAF50E* get_outputVariables_24() const { return ___outputVariables_24; }
	inline NamedVariableU5BU5D_t46BF6B013E1D4C724FFC3BA51924114AC0EAF50E** get_address_of_outputVariables_24() { return &___outputVariables_24; }
	inline void set_outputVariables_24(NamedVariableU5BU5D_t46BF6B013E1D4C724FFC3BA51924114AC0EAF50E* value)
	{
		___outputVariables_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputVariables_24), (void*)value);
	}

	inline static int32_t get_offset_of_keepDelayedEventsOnStateExit_25() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___keepDelayedEventsOnStateExit_25)); }
	inline bool get_keepDelayedEventsOnStateExit_25() const { return ___keepDelayedEventsOnStateExit_25; }
	inline bool* get_address_of_keepDelayedEventsOnStateExit_25() { return &___keepDelayedEventsOnStateExit_25; }
	inline void set_keepDelayedEventsOnStateExit_25(bool value)
	{
		___keepDelayedEventsOnStateExit_25 = value;
	}

	inline static int32_t get_offset_of_preprocessed_26() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___preprocessed_26)); }
	inline bool get_preprocessed_26() const { return ___preprocessed_26; }
	inline bool* get_address_of_preprocessed_26() { return &___preprocessed_26; }
	inline void set_preprocessed_26(bool value)
	{
		___preprocessed_26 = value;
	}

	inline static int32_t get_offset_of_host_27() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___host_27)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_host_27() const { return ___host_27; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_host_27() { return &___host_27; }
	inline void set_host_27(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___host_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___host_27), (void*)value);
	}

	inline static int32_t get_offset_of_rootFsm_28() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___rootFsm_28)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_rootFsm_28() const { return ___rootFsm_28; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_rootFsm_28() { return &___rootFsm_28; }
	inline void set_rootFsm_28(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___rootFsm_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootFsm_28), (void*)value);
	}

	inline static int32_t get_offset_of_subFsmList_29() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___subFsmList_29)); }
	inline List_1_tD7024F62D6CEB05FED3EDD2429E96D5A02E0A72F * get_subFsmList_29() const { return ___subFsmList_29; }
	inline List_1_tD7024F62D6CEB05FED3EDD2429E96D5A02E0A72F ** get_address_of_subFsmList_29() { return &___subFsmList_29; }
	inline void set_subFsmList_29(List_1_tD7024F62D6CEB05FED3EDD2429E96D5A02E0A72F * value)
	{
		___subFsmList_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subFsmList_29), (void*)value);
	}

	inline static int32_t get_offset_of_setDirty_30() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___setDirty_30)); }
	inline bool get_setDirty_30() const { return ___setDirty_30; }
	inline bool* get_address_of_setDirty_30() { return &___setDirty_30; }
	inline void set_setDirty_30(bool value)
	{
		___setDirty_30 = value;
	}

	inline static int32_t get_offset_of_activeStateEntered_31() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___activeStateEntered_31)); }
	inline bool get_activeStateEntered_31() const { return ___activeStateEntered_31; }
	inline bool* get_address_of_activeStateEntered_31() { return &___activeStateEntered_31; }
	inline void set_activeStateEntered_31(bool value)
	{
		___activeStateEntered_31 = value;
	}

	inline static int32_t get_offset_of_ExposedEvents_32() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___ExposedEvents_32)); }
	inline List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * get_ExposedEvents_32() const { return ___ExposedEvents_32; }
	inline List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D ** get_address_of_ExposedEvents_32() { return &___ExposedEvents_32; }
	inline void set_ExposedEvents_32(List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * value)
	{
		___ExposedEvents_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExposedEvents_32), (void*)value);
	}

	inline static int32_t get_offset_of_OutputEvents_33() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___OutputEvents_33)); }
	inline List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * get_OutputEvents_33() const { return ___OutputEvents_33; }
	inline List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D ** get_address_of_OutputEvents_33() { return &___OutputEvents_33; }
	inline void set_OutputEvents_33(List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * value)
	{
		___OutputEvents_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputEvents_33), (void*)value);
	}

	inline static int32_t get_offset_of_myLog_34() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___myLog_34)); }
	inline FsmLog_tF21848ABE23995239708F075B3DBAE380D201846 * get_myLog_34() const { return ___myLog_34; }
	inline FsmLog_tF21848ABE23995239708F075B3DBAE380D201846 ** get_address_of_myLog_34() { return &___myLog_34; }
	inline void set_myLog_34(FsmLog_tF21848ABE23995239708F075B3DBAE380D201846 * value)
	{
		___myLog_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myLog_34), (void*)value);
	}

	inline static int32_t get_offset_of_RestartOnEnable_35() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___RestartOnEnable_35)); }
	inline bool get_RestartOnEnable_35() const { return ___RestartOnEnable_35; }
	inline bool* get_address_of_RestartOnEnable_35() { return &___RestartOnEnable_35; }
	inline void set_RestartOnEnable_35(bool value)
	{
		___RestartOnEnable_35 = value;
	}

	inline static int32_t get_offset_of_ResetVariablesOnEnable_36() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___ResetVariablesOnEnable_36)); }
	inline bool get_ResetVariablesOnEnable_36() const { return ___ResetVariablesOnEnable_36; }
	inline bool* get_address_of_ResetVariablesOnEnable_36() { return &___ResetVariablesOnEnable_36; }
	inline void set_ResetVariablesOnEnable_36(bool value)
	{
		___ResetVariablesOnEnable_36 = value;
	}

	inline static int32_t get_offset_of__defaultVariableValues_37() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ____defaultVariableValues_37)); }
	inline FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * get__defaultVariableValues_37() const { return ____defaultVariableValues_37; }
	inline FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 ** get_address_of__defaultVariableValues_37() { return &____defaultVariableValues_37; }
	inline void set__defaultVariableValues_37(FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * value)
	{
		____defaultVariableValues_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultVariableValues_37), (void*)value);
	}

	inline static int32_t get_offset_of_hasErrors_38() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___hasErrors_38)); }
	inline bool get_hasErrors_38() const { return ___hasErrors_38; }
	inline bool* get_address_of_hasErrors_38() { return &___hasErrors_38; }
	inline void set_hasErrors_38(bool value)
	{
		___hasErrors_38 = value;
	}

	inline static int32_t get_offset_of_U3CStartedU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CStartedU3Ek__BackingField_39)); }
	inline bool get_U3CStartedU3Ek__BackingField_39() const { return ___U3CStartedU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CStartedU3Ek__BackingField_39() { return &___U3CStartedU3Ek__BackingField_39; }
	inline void set_U3CStartedU3Ek__BackingField_39(bool value)
	{
		___U3CStartedU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_EnableDebugFlow_40() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___EnableDebugFlow_40)); }
	inline bool get_EnableDebugFlow_40() const { return ___EnableDebugFlow_40; }
	inline bool* get_address_of_EnableDebugFlow_40() { return &___EnableDebugFlow_40; }
	inline void set_EnableDebugFlow_40(bool value)
	{
		___EnableDebugFlow_40 = value;
	}

	inline static int32_t get_offset_of_EnableBreakpoints_41() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___EnableBreakpoints_41)); }
	inline bool get_EnableBreakpoints_41() const { return ___EnableBreakpoints_41; }
	inline bool* get_address_of_EnableBreakpoints_41() { return &___EnableBreakpoints_41; }
	inline void set_EnableBreakpoints_41(bool value)
	{
		___EnableBreakpoints_41 = value;
	}

	inline static int32_t get_offset_of_StepFrame_42() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___StepFrame_42)); }
	inline bool get_StepFrame_42() const { return ___StepFrame_42; }
	inline bool* get_address_of_StepFrame_42() { return &___StepFrame_42; }
	inline void set_StepFrame_42(bool value)
	{
		___StepFrame_42 = value;
	}

	inline static int32_t get_offset_of_delayedEvents_43() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___delayedEvents_43)); }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * get_delayedEvents_43() const { return ___delayedEvents_43; }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 ** get_address_of_delayedEvents_43() { return &___delayedEvents_43; }
	inline void set_delayedEvents_43(List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * value)
	{
		___delayedEvents_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delayedEvents_43), (void*)value);
	}

	inline static int32_t get_offset_of_updateEvents_44() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___updateEvents_44)); }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * get_updateEvents_44() const { return ___updateEvents_44; }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 ** get_address_of_updateEvents_44() { return &___updateEvents_44; }
	inline void set_updateEvents_44(List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * value)
	{
		___updateEvents_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateEvents_44), (void*)value);
	}

	inline static int32_t get_offset_of_removeEvents_45() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___removeEvents_45)); }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * get_removeEvents_45() const { return ___removeEvents_45; }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 ** get_address_of_removeEvents_45() { return &___removeEvents_45; }
	inline void set_removeEvents_45(List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * value)
	{
		___removeEvents_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeEvents_45), (void*)value);
	}

	inline static int32_t get_offset_of_editorFlags_46() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___editorFlags_46)); }
	inline int32_t get_editorFlags_46() const { return ___editorFlags_46; }
	inline int32_t* get_address_of_editorFlags_46() { return &___editorFlags_46; }
	inline void set_editorFlags_46(int32_t value)
	{
		___editorFlags_46 = value;
	}

	inline static int32_t get_offset_of_U3CEventTargetU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CEventTargetU3Ek__BackingField_47)); }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * get_U3CEventTargetU3Ek__BackingField_47() const { return ___U3CEventTargetU3Ek__BackingField_47; }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE ** get_address_of_U3CEventTargetU3Ek__BackingField_47() { return &___U3CEventTargetU3Ek__BackingField_47; }
	inline void set_U3CEventTargetU3Ek__BackingField_47(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * value)
	{
		___U3CEventTargetU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventTargetU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_48() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___initialized_48)); }
	inline bool get_initialized_48() const { return ___initialized_48; }
	inline bool* get_address_of_initialized_48() { return &___initialized_48; }
	inline void set_initialized_48(bool value)
	{
		___initialized_48 = value;
	}

	inline static int32_t get_offset_of_U3CFinishedU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CFinishedU3Ek__BackingField_49)); }
	inline bool get_U3CFinishedU3Ek__BackingField_49() const { return ___U3CFinishedU3Ek__BackingField_49; }
	inline bool* get_address_of_U3CFinishedU3Ek__BackingField_49() { return &___U3CFinishedU3Ek__BackingField_49; }
	inline void set_U3CFinishedU3Ek__BackingField_49(bool value)
	{
		___U3CFinishedU3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_activeStateName_50() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___activeStateName_50)); }
	inline String_t* get_activeStateName_50() const { return ___activeStateName_50; }
	inline String_t** get_address_of_activeStateName_50() { return &___activeStateName_50; }
	inline void set_activeStateName_50(String_t* value)
	{
		___activeStateName_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeStateName_50), (void*)value);
	}

	inline static int32_t get_offset_of_activeState_51() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___activeState_51)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_activeState_51() const { return ___activeState_51; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_activeState_51() { return &___activeState_51; }
	inline void set_activeState_51(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___activeState_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeState_51), (void*)value);
	}

	inline static int32_t get_offset_of_switchToState_52() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___switchToState_52)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_switchToState_52() const { return ___switchToState_52; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_switchToState_52() { return &___switchToState_52; }
	inline void set_switchToState_52(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___switchToState_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switchToState_52), (void*)value);
	}

	inline static int32_t get_offset_of_previousActiveState_53() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___previousActiveState_53)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_previousActiveState_53() const { return ___previousActiveState_53; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_previousActiveState_53() { return &___previousActiveState_53; }
	inline void set_previousActiveState_53(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___previousActiveState_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousActiveState_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastTransitionU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CLastTransitionU3Ek__BackingField_54)); }
	inline FsmTransition_t0F3354FE53374C3EA811FC81F9089C34D615605E * get_U3CLastTransitionU3Ek__BackingField_54() const { return ___U3CLastTransitionU3Ek__BackingField_54; }
	inline FsmTransition_t0F3354FE53374C3EA811FC81F9089C34D615605E ** get_address_of_U3CLastTransitionU3Ek__BackingField_54() { return &___U3CLastTransitionU3Ek__BackingField_54; }
	inline void set_U3CLastTransitionU3Ek__BackingField_54(FsmTransition_t0F3354FE53374C3EA811FC81F9089C34D615605E * value)
	{
		___U3CLastTransitionU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLastTransitionU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_StateChanged_55() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___StateChanged_55)); }
	inline Action_1_t9212767A523C24A36F10F5C38487A2040C673BEB * get_StateChanged_55() const { return ___StateChanged_55; }
	inline Action_1_t9212767A523C24A36F10F5C38487A2040C673BEB ** get_address_of_StateChanged_55() { return &___StateChanged_55; }
	inline void set_StateChanged_55(Action_1_t9212767A523C24A36F10F5C38487A2040C673BEB * value)
	{
		___StateChanged_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsModifiedPrefabInstanceU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CIsModifiedPrefabInstanceU3Ek__BackingField_56)); }
	inline bool get_U3CIsModifiedPrefabInstanceU3Ek__BackingField_56() const { return ___U3CIsModifiedPrefabInstanceU3Ek__BackingField_56; }
	inline bool* get_address_of_U3CIsModifiedPrefabInstanceU3Ek__BackingField_56() { return &___U3CIsModifiedPrefabInstanceU3Ek__BackingField_56; }
	inline void set_U3CIsModifiedPrefabInstanceU3Ek__BackingField_56(bool value)
	{
		___U3CIsModifiedPrefabInstanceU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_editState_57() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___editState_57)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_editState_57() const { return ___editState_57; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_editState_57() { return &___editState_57; }
	inline void set_editState_57(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___editState_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editState_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSwitchedStateU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CSwitchedStateU3Ek__BackingField_68)); }
	inline bool get_U3CSwitchedStateU3Ek__BackingField_68() const { return ___U3CSwitchedStateU3Ek__BackingField_68; }
	inline bool* get_address_of_U3CSwitchedStateU3Ek__BackingField_68() { return &___U3CSwitchedStateU3Ek__BackingField_68; }
	inline void set_U3CSwitchedStateU3Ek__BackingField_68(bool value)
	{
		___U3CSwitchedStateU3Ek__BackingField_68 = value;
	}

	inline static int32_t get_offset_of_mouseEvents_69() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___mouseEvents_69)); }
	inline bool get_mouseEvents_69() const { return ___mouseEvents_69; }
	inline bool* get_address_of_mouseEvents_69() { return &___mouseEvents_69; }
	inline void set_mouseEvents_69(bool value)
	{
		___mouseEvents_69 = value;
	}

	inline static int32_t get_offset_of_handleLevelLoaded_70() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleLevelLoaded_70)); }
	inline bool get_handleLevelLoaded_70() const { return ___handleLevelLoaded_70; }
	inline bool* get_address_of_handleLevelLoaded_70() { return &___handleLevelLoaded_70; }
	inline void set_handleLevelLoaded_70(bool value)
	{
		___handleLevelLoaded_70 = value;
	}

	inline static int32_t get_offset_of_handleTriggerEnter2D_71() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerEnter2D_71)); }
	inline bool get_handleTriggerEnter2D_71() const { return ___handleTriggerEnter2D_71; }
	inline bool* get_address_of_handleTriggerEnter2D_71() { return &___handleTriggerEnter2D_71; }
	inline void set_handleTriggerEnter2D_71(bool value)
	{
		___handleTriggerEnter2D_71 = value;
	}

	inline static int32_t get_offset_of_handleTriggerExit2D_72() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerExit2D_72)); }
	inline bool get_handleTriggerExit2D_72() const { return ___handleTriggerExit2D_72; }
	inline bool* get_address_of_handleTriggerExit2D_72() { return &___handleTriggerExit2D_72; }
	inline void set_handleTriggerExit2D_72(bool value)
	{
		___handleTriggerExit2D_72 = value;
	}

	inline static int32_t get_offset_of_handleTriggerStay2D_73() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerStay2D_73)); }
	inline bool get_handleTriggerStay2D_73() const { return ___handleTriggerStay2D_73; }
	inline bool* get_address_of_handleTriggerStay2D_73() { return &___handleTriggerStay2D_73; }
	inline void set_handleTriggerStay2D_73(bool value)
	{
		___handleTriggerStay2D_73 = value;
	}

	inline static int32_t get_offset_of_handleCollisionEnter2D_74() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionEnter2D_74)); }
	inline bool get_handleCollisionEnter2D_74() const { return ___handleCollisionEnter2D_74; }
	inline bool* get_address_of_handleCollisionEnter2D_74() { return &___handleCollisionEnter2D_74; }
	inline void set_handleCollisionEnter2D_74(bool value)
	{
		___handleCollisionEnter2D_74 = value;
	}

	inline static int32_t get_offset_of_handleCollisionExit2D_75() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionExit2D_75)); }
	inline bool get_handleCollisionExit2D_75() const { return ___handleCollisionExit2D_75; }
	inline bool* get_address_of_handleCollisionExit2D_75() { return &___handleCollisionExit2D_75; }
	inline void set_handleCollisionExit2D_75(bool value)
	{
		___handleCollisionExit2D_75 = value;
	}

	inline static int32_t get_offset_of_handleCollisionStay2D_76() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionStay2D_76)); }
	inline bool get_handleCollisionStay2D_76() const { return ___handleCollisionStay2D_76; }
	inline bool* get_address_of_handleCollisionStay2D_76() { return &___handleCollisionStay2D_76; }
	inline void set_handleCollisionStay2D_76(bool value)
	{
		___handleCollisionStay2D_76 = value;
	}

	inline static int32_t get_offset_of_handleTriggerEnter_77() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerEnter_77)); }
	inline bool get_handleTriggerEnter_77() const { return ___handleTriggerEnter_77; }
	inline bool* get_address_of_handleTriggerEnter_77() { return &___handleTriggerEnter_77; }
	inline void set_handleTriggerEnter_77(bool value)
	{
		___handleTriggerEnter_77 = value;
	}

	inline static int32_t get_offset_of_handleTriggerExit_78() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerExit_78)); }
	inline bool get_handleTriggerExit_78() const { return ___handleTriggerExit_78; }
	inline bool* get_address_of_handleTriggerExit_78() { return &___handleTriggerExit_78; }
	inline void set_handleTriggerExit_78(bool value)
	{
		___handleTriggerExit_78 = value;
	}

	inline static int32_t get_offset_of_handleTriggerStay_79() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerStay_79)); }
	inline bool get_handleTriggerStay_79() const { return ___handleTriggerStay_79; }
	inline bool* get_address_of_handleTriggerStay_79() { return &___handleTriggerStay_79; }
	inline void set_handleTriggerStay_79(bool value)
	{
		___handleTriggerStay_79 = value;
	}

	inline static int32_t get_offset_of_handleCollisionEnter_80() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionEnter_80)); }
	inline bool get_handleCollisionEnter_80() const { return ___handleCollisionEnter_80; }
	inline bool* get_address_of_handleCollisionEnter_80() { return &___handleCollisionEnter_80; }
	inline void set_handleCollisionEnter_80(bool value)
	{
		___handleCollisionEnter_80 = value;
	}

	inline static int32_t get_offset_of_handleCollisionExit_81() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionExit_81)); }
	inline bool get_handleCollisionExit_81() const { return ___handleCollisionExit_81; }
	inline bool* get_address_of_handleCollisionExit_81() { return &___handleCollisionExit_81; }
	inline void set_handleCollisionExit_81(bool value)
	{
		___handleCollisionExit_81 = value;
	}

	inline static int32_t get_offset_of_handleCollisionStay_82() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionStay_82)); }
	inline bool get_handleCollisionStay_82() const { return ___handleCollisionStay_82; }
	inline bool* get_address_of_handleCollisionStay_82() { return &___handleCollisionStay_82; }
	inline void set_handleCollisionStay_82(bool value)
	{
		___handleCollisionStay_82 = value;
	}

	inline static int32_t get_offset_of_handleParticleCollision_83() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleParticleCollision_83)); }
	inline bool get_handleParticleCollision_83() const { return ___handleParticleCollision_83; }
	inline bool* get_address_of_handleParticleCollision_83() { return &___handleParticleCollision_83; }
	inline void set_handleParticleCollision_83(bool value)
	{
		___handleParticleCollision_83 = value;
	}

	inline static int32_t get_offset_of_handleControllerColliderHit_84() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleControllerColliderHit_84)); }
	inline bool get_handleControllerColliderHit_84() const { return ___handleControllerColliderHit_84; }
	inline bool* get_address_of_handleControllerColliderHit_84() { return &___handleControllerColliderHit_84; }
	inline void set_handleControllerColliderHit_84(bool value)
	{
		___handleControllerColliderHit_84 = value;
	}

	inline static int32_t get_offset_of_handleJointBreak_85() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleJointBreak_85)); }
	inline bool get_handleJointBreak_85() const { return ___handleJointBreak_85; }
	inline bool* get_address_of_handleJointBreak_85() { return &___handleJointBreak_85; }
	inline void set_handleJointBreak_85(bool value)
	{
		___handleJointBreak_85 = value;
	}

	inline static int32_t get_offset_of_handleJointBreak2D_86() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleJointBreak2D_86)); }
	inline bool get_handleJointBreak2D_86() const { return ___handleJointBreak2D_86; }
	inline bool* get_address_of_handleJointBreak2D_86() { return &___handleJointBreak2D_86; }
	inline void set_handleJointBreak2D_86(bool value)
	{
		___handleJointBreak2D_86 = value;
	}

	inline static int32_t get_offset_of_handleOnGUI_87() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleOnGUI_87)); }
	inline bool get_handleOnGUI_87() const { return ___handleOnGUI_87; }
	inline bool* get_address_of_handleOnGUI_87() { return &___handleOnGUI_87; }
	inline void set_handleOnGUI_87(bool value)
	{
		___handleOnGUI_87 = value;
	}

	inline static int32_t get_offset_of_handleFixedUpdate_88() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleFixedUpdate_88)); }
	inline bool get_handleFixedUpdate_88() const { return ___handleFixedUpdate_88; }
	inline bool* get_address_of_handleFixedUpdate_88() { return &___handleFixedUpdate_88; }
	inline void set_handleFixedUpdate_88(bool value)
	{
		___handleFixedUpdate_88 = value;
	}

	inline static int32_t get_offset_of_handleLateUpdate_89() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleLateUpdate_89)); }
	inline bool get_handleLateUpdate_89() const { return ___handleLateUpdate_89; }
	inline bool* get_address_of_handleLateUpdate_89() { return &___handleLateUpdate_89; }
	inline void set_handleLateUpdate_89(bool value)
	{
		___handleLateUpdate_89 = value;
	}

	inline static int32_t get_offset_of_handleApplicationEvents_90() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleApplicationEvents_90)); }
	inline bool get_handleApplicationEvents_90() const { return ___handleApplicationEvents_90; }
	inline bool* get_address_of_handleApplicationEvents_90() { return &___handleApplicationEvents_90; }
	inline void set_handleApplicationEvents_90(bool value)
	{
		___handleApplicationEvents_90 = value;
	}

	inline static int32_t get_offset_of_handleUiEvents_91() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleUiEvents_91)); }
	inline int32_t get_handleUiEvents_91() const { return ___handleUiEvents_91; }
	inline int32_t* get_address_of_handleUiEvents_91() { return &___handleUiEvents_91; }
	inline void set_handleUiEvents_91(int32_t value)
	{
		___handleUiEvents_91 = value;
	}

	inline static int32_t get_offset_of_handleLegacyNetworking_92() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleLegacyNetworking_92)); }
	inline bool get_handleLegacyNetworking_92() const { return ___handleLegacyNetworking_92; }
	inline bool* get_address_of_handleLegacyNetworking_92() { return &___handleLegacyNetworking_92; }
	inline void set_handleLegacyNetworking_92(bool value)
	{
		___handleLegacyNetworking_92 = value;
	}

	inline static int32_t get_offset_of_U3CCollisionInfoU3Ek__BackingField_93() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CCollisionInfoU3Ek__BackingField_93)); }
	inline Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * get_U3CCollisionInfoU3Ek__BackingField_93() const { return ___U3CCollisionInfoU3Ek__BackingField_93; }
	inline Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 ** get_address_of_U3CCollisionInfoU3Ek__BackingField_93() { return &___U3CCollisionInfoU3Ek__BackingField_93; }
	inline void set_U3CCollisionInfoU3Ek__BackingField_93(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * value)
	{
		___U3CCollisionInfoU3Ek__BackingField_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollisionInfoU3Ek__BackingField_93), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerColliderU3Ek__BackingField_94() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CTriggerColliderU3Ek__BackingField_94)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_U3CTriggerColliderU3Ek__BackingField_94() const { return ___U3CTriggerColliderU3Ek__BackingField_94; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_U3CTriggerColliderU3Ek__BackingField_94() { return &___U3CTriggerColliderU3Ek__BackingField_94; }
	inline void set_U3CTriggerColliderU3Ek__BackingField_94(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___U3CTriggerColliderU3Ek__BackingField_94 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerColliderU3Ek__BackingField_94), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollision2DInfoU3Ek__BackingField_95() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CCollision2DInfoU3Ek__BackingField_95)); }
	inline Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * get_U3CCollision2DInfoU3Ek__BackingField_95() const { return ___U3CCollision2DInfoU3Ek__BackingField_95; }
	inline Collision2D_t95B5FD331CE95276D3658140844190B485D26564 ** get_address_of_U3CCollision2DInfoU3Ek__BackingField_95() { return &___U3CCollision2DInfoU3Ek__BackingField_95; }
	inline void set_U3CCollision2DInfoU3Ek__BackingField_95(Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * value)
	{
		___U3CCollision2DInfoU3Ek__BackingField_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollision2DInfoU3Ek__BackingField_95), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerCollider2DU3Ek__BackingField_96() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CTriggerCollider2DU3Ek__BackingField_96)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_U3CTriggerCollider2DU3Ek__BackingField_96() const { return ___U3CTriggerCollider2DU3Ek__BackingField_96; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_U3CTriggerCollider2DU3Ek__BackingField_96() { return &___U3CTriggerCollider2DU3Ek__BackingField_96; }
	inline void set_U3CTriggerCollider2DU3Ek__BackingField_96(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___U3CTriggerCollider2DU3Ek__BackingField_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerCollider2DU3Ek__BackingField_96), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJointBreakForceU3Ek__BackingField_97() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CJointBreakForceU3Ek__BackingField_97)); }
	inline float get_U3CJointBreakForceU3Ek__BackingField_97() const { return ___U3CJointBreakForceU3Ek__BackingField_97; }
	inline float* get_address_of_U3CJointBreakForceU3Ek__BackingField_97() { return &___U3CJointBreakForceU3Ek__BackingField_97; }
	inline void set_U3CJointBreakForceU3Ek__BackingField_97(float value)
	{
		___U3CJointBreakForceU3Ek__BackingField_97 = value;
	}

	inline static int32_t get_offset_of_U3CBrokenJoint2DU3Ek__BackingField_98() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CBrokenJoint2DU3Ek__BackingField_98)); }
	inline Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964 * get_U3CBrokenJoint2DU3Ek__BackingField_98() const { return ___U3CBrokenJoint2DU3Ek__BackingField_98; }
	inline Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964 ** get_address_of_U3CBrokenJoint2DU3Ek__BackingField_98() { return &___U3CBrokenJoint2DU3Ek__BackingField_98; }
	inline void set_U3CBrokenJoint2DU3Ek__BackingField_98(Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964 * value)
	{
		___U3CBrokenJoint2DU3Ek__BackingField_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBrokenJoint2DU3Ek__BackingField_98), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParticleCollisionGOU3Ek__BackingField_99() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CParticleCollisionGOU3Ek__BackingField_99)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CParticleCollisionGOU3Ek__BackingField_99() const { return ___U3CParticleCollisionGOU3Ek__BackingField_99; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CParticleCollisionGOU3Ek__BackingField_99() { return &___U3CParticleCollisionGOU3Ek__BackingField_99; }
	inline void set_U3CParticleCollisionGOU3Ek__BackingField_99(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CParticleCollisionGOU3Ek__BackingField_99 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParticleCollisionGOU3Ek__BackingField_99), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerNameU3Ek__BackingField_100() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CTriggerNameU3Ek__BackingField_100)); }
	inline String_t* get_U3CTriggerNameU3Ek__BackingField_100() const { return ___U3CTriggerNameU3Ek__BackingField_100; }
	inline String_t** get_address_of_U3CTriggerNameU3Ek__BackingField_100() { return &___U3CTriggerNameU3Ek__BackingField_100; }
	inline void set_U3CTriggerNameU3Ek__BackingField_100(String_t* value)
	{
		___U3CTriggerNameU3Ek__BackingField_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerNameU3Ek__BackingField_100), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollisionNameU3Ek__BackingField_101() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CCollisionNameU3Ek__BackingField_101)); }
	inline String_t* get_U3CCollisionNameU3Ek__BackingField_101() const { return ___U3CCollisionNameU3Ek__BackingField_101; }
	inline String_t** get_address_of_U3CCollisionNameU3Ek__BackingField_101() { return &___U3CCollisionNameU3Ek__BackingField_101; }
	inline void set_U3CCollisionNameU3Ek__BackingField_101(String_t* value)
	{
		___U3CCollisionNameU3Ek__BackingField_101 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollisionNameU3Ek__BackingField_101), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrigger2dNameU3Ek__BackingField_102() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CTrigger2dNameU3Ek__BackingField_102)); }
	inline String_t* get_U3CTrigger2dNameU3Ek__BackingField_102() const { return ___U3CTrigger2dNameU3Ek__BackingField_102; }
	inline String_t** get_address_of_U3CTrigger2dNameU3Ek__BackingField_102() { return &___U3CTrigger2dNameU3Ek__BackingField_102; }
	inline void set_U3CTrigger2dNameU3Ek__BackingField_102(String_t* value)
	{
		___U3CTrigger2dNameU3Ek__BackingField_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrigger2dNameU3Ek__BackingField_102), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollision2dNameU3Ek__BackingField_103() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CCollision2dNameU3Ek__BackingField_103)); }
	inline String_t* get_U3CCollision2dNameU3Ek__BackingField_103() const { return ___U3CCollision2dNameU3Ek__BackingField_103; }
	inline String_t** get_address_of_U3CCollision2dNameU3Ek__BackingField_103() { return &___U3CCollision2dNameU3Ek__BackingField_103; }
	inline void set_U3CCollision2dNameU3Ek__BackingField_103(String_t* value)
	{
		___U3CCollision2dNameU3Ek__BackingField_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollision2dNameU3Ek__BackingField_103), (void*)value);
	}

	inline static int32_t get_offset_of_U3CControllerColliderU3Ek__BackingField_104() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CControllerColliderU3Ek__BackingField_104)); }
	inline ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 * get_U3CControllerColliderU3Ek__BackingField_104() const { return ___U3CControllerColliderU3Ek__BackingField_104; }
	inline ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 ** get_address_of_U3CControllerColliderU3Ek__BackingField_104() { return &___U3CControllerColliderU3Ek__BackingField_104; }
	inline void set_U3CControllerColliderU3Ek__BackingField_104(ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 * value)
	{
		___U3CControllerColliderU3Ek__BackingField_104 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerColliderU3Ek__BackingField_104), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRaycastHitInfoU3Ek__BackingField_105() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CRaycastHitInfoU3Ek__BackingField_105)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_U3CRaycastHitInfoU3Ek__BackingField_105() const { return ___U3CRaycastHitInfoU3Ek__BackingField_105; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_U3CRaycastHitInfoU3Ek__BackingField_105() { return &___U3CRaycastHitInfoU3Ek__BackingField_105; }
	inline void set_U3CRaycastHitInfoU3Ek__BackingField_105(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___U3CRaycastHitInfoU3Ek__BackingField_105 = value;
	}

	inline static int32_t get_offset_of_handleAnimatorMove_107() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleAnimatorMove_107)); }
	inline bool get_handleAnimatorMove_107() const { return ___handleAnimatorMove_107; }
	inline bool* get_address_of_handleAnimatorMove_107() { return &___handleAnimatorMove_107; }
	inline void set_handleAnimatorMove_107(bool value)
	{
		___handleAnimatorMove_107 = value;
	}

	inline static int32_t get_offset_of_handleAnimatorIK_108() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleAnimatorIK_108)); }
	inline bool get_handleAnimatorIK_108() const { return ___handleAnimatorIK_108; }
	inline bool* get_address_of_handleAnimatorIK_108() { return &___handleAnimatorIK_108; }
	inline void set_handleAnimatorIK_108(bool value)
	{
		___handleAnimatorIK_108 = value;
	}

	inline static int32_t get_offset_of_disableSent_109() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___disableSent_109)); }
	inline bool get_disableSent_109() const { return ___disableSent_109; }
	inline bool* get_address_of_disableSent_109() { return &___disableSent_109; }
	inline void set_disableSent_109(bool value)
	{
		___disableSent_109 = value;
	}
};

struct Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields
{
public:
	// HutongGames.PlayMaker.FsmEventData HutongGames.PlayMaker.Fsm::EventData
	FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D * ___EventData_4;
	// UnityEngine.GameObject HutongGames.PlayMaker.Fsm::<LastClickedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CLastClickedObjectU3Ek__BackingField_58;
	// System.Boolean HutongGames.PlayMaker.Fsm::<BreakpointsEnabled>k__BackingField
	bool ___U3CBreakpointsEnabledU3Ek__BackingField_59;
	// System.Boolean HutongGames.PlayMaker.Fsm::<HitBreakpoint>k__BackingField
	bool ___U3CHitBreakpointU3Ek__BackingField_60;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::<BreakAtFsm>k__BackingField
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___U3CBreakAtFsmU3Ek__BackingField_61;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::<BreakAtState>k__BackingField
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___U3CBreakAtStateU3Ek__BackingField_62;
	// System.Boolean HutongGames.PlayMaker.Fsm::<IsBreak>k__BackingField
	bool ___U3CIsBreakU3Ek__BackingField_63;
	// System.Boolean HutongGames.PlayMaker.Fsm::<IsErrorBreak>k__BackingField
	bool ___U3CIsErrorBreakU3Ek__BackingField_64;
	// System.String HutongGames.PlayMaker.Fsm::<LastError>k__BackingField
	String_t* ___U3CLastErrorU3Ek__BackingField_65;
	// System.Boolean HutongGames.PlayMaker.Fsm::<StepToStateChange>k__BackingField
	bool ___U3CStepToStateChangeU3Ek__BackingField_66;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::<StepFsm>k__BackingField
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___U3CStepFsmU3Ek__BackingField_67;
	// System.Collections.Generic.Dictionary`2<HutongGames.PlayMaker.Fsm,UnityEngine.RaycastHit2D> HutongGames.PlayMaker.Fsm::lastRaycastHit2DInfoLUT
	Dictionary_2_tC5C4DDD30CBE22C2E681D17CAAC4EFDB82E9AFB5 * ___lastRaycastHit2DInfoLUT_106;
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Fsm::targetSelf
	FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * ___targetSelf_110;
	// UnityEngine.Color HutongGames.PlayMaker.Fsm::<DebugLookAtColor>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CDebugLookAtColorU3Ek__BackingField_111;
	// UnityEngine.Color HutongGames.PlayMaker.Fsm::<DebugRaycastColor>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CDebugRaycastColorU3Ek__BackingField_112;
	// UnityEngine.Color[] HutongGames.PlayMaker.Fsm::StateColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___StateColors_113;

public:
	inline static int32_t get_offset_of_EventData_4() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___EventData_4)); }
	inline FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D * get_EventData_4() const { return ___EventData_4; }
	inline FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D ** get_address_of_EventData_4() { return &___EventData_4; }
	inline void set_EventData_4(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D * value)
	{
		___EventData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventData_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastClickedObjectU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CLastClickedObjectU3Ek__BackingField_58)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CLastClickedObjectU3Ek__BackingField_58() const { return ___U3CLastClickedObjectU3Ek__BackingField_58; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CLastClickedObjectU3Ek__BackingField_58() { return &___U3CLastClickedObjectU3Ek__BackingField_58; }
	inline void set_U3CLastClickedObjectU3Ek__BackingField_58(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CLastClickedObjectU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLastClickedObjectU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBreakpointsEnabledU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CBreakpointsEnabledU3Ek__BackingField_59)); }
	inline bool get_U3CBreakpointsEnabledU3Ek__BackingField_59() const { return ___U3CBreakpointsEnabledU3Ek__BackingField_59; }
	inline bool* get_address_of_U3CBreakpointsEnabledU3Ek__BackingField_59() { return &___U3CBreakpointsEnabledU3Ek__BackingField_59; }
	inline void set_U3CBreakpointsEnabledU3Ek__BackingField_59(bool value)
	{
		___U3CBreakpointsEnabledU3Ek__BackingField_59 = value;
	}

	inline static int32_t get_offset_of_U3CHitBreakpointU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CHitBreakpointU3Ek__BackingField_60)); }
	inline bool get_U3CHitBreakpointU3Ek__BackingField_60() const { return ___U3CHitBreakpointU3Ek__BackingField_60; }
	inline bool* get_address_of_U3CHitBreakpointU3Ek__BackingField_60() { return &___U3CHitBreakpointU3Ek__BackingField_60; }
	inline void set_U3CHitBreakpointU3Ek__BackingField_60(bool value)
	{
		___U3CHitBreakpointU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CBreakAtFsmU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CBreakAtFsmU3Ek__BackingField_61)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_U3CBreakAtFsmU3Ek__BackingField_61() const { return ___U3CBreakAtFsmU3Ek__BackingField_61; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_U3CBreakAtFsmU3Ek__BackingField_61() { return &___U3CBreakAtFsmU3Ek__BackingField_61; }
	inline void set_U3CBreakAtFsmU3Ek__BackingField_61(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___U3CBreakAtFsmU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBreakAtFsmU3Ek__BackingField_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBreakAtStateU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CBreakAtStateU3Ek__BackingField_62)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_U3CBreakAtStateU3Ek__BackingField_62() const { return ___U3CBreakAtStateU3Ek__BackingField_62; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_U3CBreakAtStateU3Ek__BackingField_62() { return &___U3CBreakAtStateU3Ek__BackingField_62; }
	inline void set_U3CBreakAtStateU3Ek__BackingField_62(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___U3CBreakAtStateU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBreakAtStateU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsBreakU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CIsBreakU3Ek__BackingField_63)); }
	inline bool get_U3CIsBreakU3Ek__BackingField_63() const { return ___U3CIsBreakU3Ek__BackingField_63; }
	inline bool* get_address_of_U3CIsBreakU3Ek__BackingField_63() { return &___U3CIsBreakU3Ek__BackingField_63; }
	inline void set_U3CIsBreakU3Ek__BackingField_63(bool value)
	{
		___U3CIsBreakU3Ek__BackingField_63 = value;
	}

	inline static int32_t get_offset_of_U3CIsErrorBreakU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CIsErrorBreakU3Ek__BackingField_64)); }
	inline bool get_U3CIsErrorBreakU3Ek__BackingField_64() const { return ___U3CIsErrorBreakU3Ek__BackingField_64; }
	inline bool* get_address_of_U3CIsErrorBreakU3Ek__BackingField_64() { return &___U3CIsErrorBreakU3Ek__BackingField_64; }
	inline void set_U3CIsErrorBreakU3Ek__BackingField_64(bool value)
	{
		___U3CIsErrorBreakU3Ek__BackingField_64 = value;
	}

	inline static int32_t get_offset_of_U3CLastErrorU3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CLastErrorU3Ek__BackingField_65)); }
	inline String_t* get_U3CLastErrorU3Ek__BackingField_65() const { return ___U3CLastErrorU3Ek__BackingField_65; }
	inline String_t** get_address_of_U3CLastErrorU3Ek__BackingField_65() { return &___U3CLastErrorU3Ek__BackingField_65; }
	inline void set_U3CLastErrorU3Ek__BackingField_65(String_t* value)
	{
		___U3CLastErrorU3Ek__BackingField_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLastErrorU3Ek__BackingField_65), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStepToStateChangeU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CStepToStateChangeU3Ek__BackingField_66)); }
	inline bool get_U3CStepToStateChangeU3Ek__BackingField_66() const { return ___U3CStepToStateChangeU3Ek__BackingField_66; }
	inline bool* get_address_of_U3CStepToStateChangeU3Ek__BackingField_66() { return &___U3CStepToStateChangeU3Ek__BackingField_66; }
	inline void set_U3CStepToStateChangeU3Ek__BackingField_66(bool value)
	{
		___U3CStepToStateChangeU3Ek__BackingField_66 = value;
	}

	inline static int32_t get_offset_of_U3CStepFsmU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CStepFsmU3Ek__BackingField_67)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_U3CStepFsmU3Ek__BackingField_67() const { return ___U3CStepFsmU3Ek__BackingField_67; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_U3CStepFsmU3Ek__BackingField_67() { return &___U3CStepFsmU3Ek__BackingField_67; }
	inline void set_U3CStepFsmU3Ek__BackingField_67(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___U3CStepFsmU3Ek__BackingField_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStepFsmU3Ek__BackingField_67), (void*)value);
	}

	inline static int32_t get_offset_of_lastRaycastHit2DInfoLUT_106() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___lastRaycastHit2DInfoLUT_106)); }
	inline Dictionary_2_tC5C4DDD30CBE22C2E681D17CAAC4EFDB82E9AFB5 * get_lastRaycastHit2DInfoLUT_106() const { return ___lastRaycastHit2DInfoLUT_106; }
	inline Dictionary_2_tC5C4DDD30CBE22C2E681D17CAAC4EFDB82E9AFB5 ** get_address_of_lastRaycastHit2DInfoLUT_106() { return &___lastRaycastHit2DInfoLUT_106; }
	inline void set_lastRaycastHit2DInfoLUT_106(Dictionary_2_tC5C4DDD30CBE22C2E681D17CAAC4EFDB82E9AFB5 * value)
	{
		___lastRaycastHit2DInfoLUT_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastRaycastHit2DInfoLUT_106), (void*)value);
	}

	inline static int32_t get_offset_of_targetSelf_110() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___targetSelf_110)); }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * get_targetSelf_110() const { return ___targetSelf_110; }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE ** get_address_of_targetSelf_110() { return &___targetSelf_110; }
	inline void set_targetSelf_110(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * value)
	{
		___targetSelf_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetSelf_110), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDebugLookAtColorU3Ek__BackingField_111() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CDebugLookAtColorU3Ek__BackingField_111)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CDebugLookAtColorU3Ek__BackingField_111() const { return ___U3CDebugLookAtColorU3Ek__BackingField_111; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CDebugLookAtColorU3Ek__BackingField_111() { return &___U3CDebugLookAtColorU3Ek__BackingField_111; }
	inline void set_U3CDebugLookAtColorU3Ek__BackingField_111(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CDebugLookAtColorU3Ek__BackingField_111 = value;
	}

	inline static int32_t get_offset_of_U3CDebugRaycastColorU3Ek__BackingField_112() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CDebugRaycastColorU3Ek__BackingField_112)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CDebugRaycastColorU3Ek__BackingField_112() const { return ___U3CDebugRaycastColorU3Ek__BackingField_112; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CDebugRaycastColorU3Ek__BackingField_112() { return &___U3CDebugRaycastColorU3Ek__BackingField_112; }
	inline void set_U3CDebugRaycastColorU3Ek__BackingField_112(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CDebugRaycastColorU3Ek__BackingField_112 = value;
	}

	inline static int32_t get_offset_of_StateColors_113() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___StateColors_113)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_StateColors_113() const { return ___StateColors_113; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_StateColors_113() { return &___StateColors_113; }
	inline void set_StateColors_113(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___StateColors_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateColors_113), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// PlayMakerFSM/AddEventHandlerDelegate
struct AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB  : public MulticastDelegate_t
{
public:

public:
};


// PlayMakerProxyBase/Collision2DEvent
struct Collision2DEvent_tC2ED69880D8FFBD691E016C25053D35FD6C57B61  : public MulticastDelegate_t
{
public:

public:
};


// PlayMakerProxyBase/CollisionEvent
struct CollisionEvent_t333A31C8E6B34B36BE3832401105DACEB21618B6  : public MulticastDelegate_t
{
public:

public:
};


// PlayMakerProxyBase/ControllerCollisionEvent
struct ControllerCollisionEvent_t653F7272D9CFD511EBD043FA0754CFF1857A70D2  : public MulticastDelegate_t
{
public:

public:
};


// PlayMakerProxyBase/ParticleCollisionEvent
struct ParticleCollisionEvent_tDB966C25FEBFECD7BFF9EEF9E08E1FEB89C11CCD  : public MulticastDelegate_t
{
public:

public:
};


// PlayMakerProxyBase/Trigger2DEvent
struct Trigger2DEvent_t97CDC12715DFDAD5A770005DD3C9B8C427788522  : public MulticastDelegate_t
{
public:

public:
};


// PlayMakerProxyBase/TriggerEvent
struct TriggerEvent_t9A24DA0AE6C31160D00EDFBBD7DE0E07AF3C8A96  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// PlayMakerFSM
struct PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// HutongGames.PlayMaker.Fsm PlayMakerFSM::fsm
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___fsm_7;
	// FsmTemplate PlayMakerFSM::fsmTemplate
	FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * ___fsmTemplate_8;
	// System.Boolean PlayMakerFSM::eventHandlerComponentsAdded
	bool ___eventHandlerComponentsAdded_9;
	// System.Action PlayMakerFSM::OnReset
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnReset_11;
	// System.Action PlayMakerFSM::OnValidated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnValidated_12;
	// PlayMakerFSM/AddEventHandlerDelegate PlayMakerFSM::addEventHandlers
	AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB * ___addEventHandlers_14;

public:
	inline static int32_t get_offset_of_fsm_7() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___fsm_7)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_fsm_7() const { return ___fsm_7; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_fsm_7() { return &___fsm_7; }
	inline void set_fsm_7(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___fsm_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_7), (void*)value);
	}

	inline static int32_t get_offset_of_fsmTemplate_8() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___fsmTemplate_8)); }
	inline FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * get_fsmTemplate_8() const { return ___fsmTemplate_8; }
	inline FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 ** get_address_of_fsmTemplate_8() { return &___fsmTemplate_8; }
	inline void set_fsmTemplate_8(FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * value)
	{
		___fsmTemplate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsmTemplate_8), (void*)value);
	}

	inline static int32_t get_offset_of_eventHandlerComponentsAdded_9() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___eventHandlerComponentsAdded_9)); }
	inline bool get_eventHandlerComponentsAdded_9() const { return ___eventHandlerComponentsAdded_9; }
	inline bool* get_address_of_eventHandlerComponentsAdded_9() { return &___eventHandlerComponentsAdded_9; }
	inline void set_eventHandlerComponentsAdded_9(bool value)
	{
		___eventHandlerComponentsAdded_9 = value;
	}

	inline static int32_t get_offset_of_OnReset_11() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___OnReset_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnReset_11() const { return ___OnReset_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnReset_11() { return &___OnReset_11; }
	inline void set_OnReset_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnReset_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnReset_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnValidated_12() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___OnValidated_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnValidated_12() const { return ___OnValidated_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnValidated_12() { return &___OnValidated_12; }
	inline void set_OnValidated_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnValidated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValidated_12), (void*)value);
	}

	inline static int32_t get_offset_of_addEventHandlers_14() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___addEventHandlers_14)); }
	inline AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB * get_addEventHandlers_14() const { return ___addEventHandlers_14; }
	inline AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB ** get_address_of_addEventHandlers_14() { return &___addEventHandlers_14; }
	inline void set_addEventHandlers_14(AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB * value)
	{
		___addEventHandlers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addEventHandlers_14), (void*)value);
	}
};

struct PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields
{
public:
	// System.Action`1<System.String> PlayMakerFSM::OnSettingChanged
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnSettingChanged_4;
	// System.Collections.Generic.List`1<PlayMakerFSM> PlayMakerFSM::fsmList
	List_1_tE4F25CA67A8E800E4DE4A7323F0033AADABCB88C * ___fsmList_5;
	// System.Boolean PlayMakerFSM::ApplicationIsQuitting
	bool ___ApplicationIsQuitting_6;
	// System.Boolean PlayMakerFSM::<DrawGizmos>k__BackingField
	bool ___U3CDrawGizmosU3Ek__BackingField_10;
	// System.Threading.Thread PlayMakerFSM::mainThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___mainThread_13;

public:
	inline static int32_t get_offset_of_OnSettingChanged_4() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields, ___OnSettingChanged_4)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnSettingChanged_4() const { return ___OnSettingChanged_4; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnSettingChanged_4() { return &___OnSettingChanged_4; }
	inline void set_OnSettingChanged_4(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnSettingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSettingChanged_4), (void*)value);
	}

	inline static int32_t get_offset_of_fsmList_5() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields, ___fsmList_5)); }
	inline List_1_tE4F25CA67A8E800E4DE4A7323F0033AADABCB88C * get_fsmList_5() const { return ___fsmList_5; }
	inline List_1_tE4F25CA67A8E800E4DE4A7323F0033AADABCB88C ** get_address_of_fsmList_5() { return &___fsmList_5; }
	inline void set_fsmList_5(List_1_tE4F25CA67A8E800E4DE4A7323F0033AADABCB88C * value)
	{
		___fsmList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsmList_5), (void*)value);
	}

	inline static int32_t get_offset_of_ApplicationIsQuitting_6() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields, ___ApplicationIsQuitting_6)); }
	inline bool get_ApplicationIsQuitting_6() const { return ___ApplicationIsQuitting_6; }
	inline bool* get_address_of_ApplicationIsQuitting_6() { return &___ApplicationIsQuitting_6; }
	inline void set_ApplicationIsQuitting_6(bool value)
	{
		___ApplicationIsQuitting_6 = value;
	}

	inline static int32_t get_offset_of_U3CDrawGizmosU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields, ___U3CDrawGizmosU3Ek__BackingField_10)); }
	inline bool get_U3CDrawGizmosU3Ek__BackingField_10() const { return ___U3CDrawGizmosU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CDrawGizmosU3Ek__BackingField_10() { return &___U3CDrawGizmosU3Ek__BackingField_10; }
	inline void set_U3CDrawGizmosU3Ek__BackingField_10(bool value)
	{
		___U3CDrawGizmosU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_mainThread_13() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields, ___mainThread_13)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_mainThread_13() const { return ___mainThread_13; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_mainThread_13() { return &___mainThread_13; }
	inline void set_mainThread_13(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___mainThread_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainThread_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke(const Collision2D_t95B5FD331CE95276D3658140844190B485D26564& unmarshaled, Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_back(const Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke& marshaled, Collision2D_t95B5FD331CE95276D3658140844190B485D26564& unmarshaled);
IL2CPP_EXTERN_C void Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_cleanup(Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke& marshaled);


// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.FsmExecutionStack::PushFsm(HutongGames.PlayMaker.Fsm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmExecutionStack_PushFsm_mFF81BCCBE12DD723D28B542F182627BC8E25ED71 (Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___executingFsm0, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.FsmExecutionStack::PopFsm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmExecutionStack_PopFsm_m149407864DE1CE8AF6FF953B660A5DA2EE424DA2 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void PlayMakerGUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A387E2D5E3F7C6CF3F00635EA0DDD996773DDDA (U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Int32 System.String::CompareOrdinal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m1C7F94040504F35C89EBC8826D77FEA81B9C2C0E (String_t* ___strA0, String_t* ___strB1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void HutongGames.Extensions.TextureExtensions/Point::.ctor(System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m1174C15B384DB0DBDCBFCDE33FE2A7366493A904 (Point_t339E5555BE2246857B85758D60C57142A565EC02 * __this, int16_t ___aX0, int16_t ___aY1, const RuntimeMethod* method);
// System.Void HutongGames.Extensions.TextureExtensions/Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m747CBA76CE25FC118963A795B3B85100186F96A5 (Point_t339E5555BE2246857B85758D60C57142A565EC02 * __this, int32_t ___aX0, int32_t ___aY1, const RuntimeMethod* method);
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
// System.Void PlayMakerFSM/<DoCoroutine>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoCoroutineU3Ed__45__ctor_mD26C92AA1E5BFCF9D30D569725485AD4CE85EAB2 (U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayMakerFSM/<DoCoroutine>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoCoroutineU3Ed__45_System_IDisposable_Dispose_m6DB46EAA55AADBC7B138FE1D51E9C094F7196D49 (U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayMakerFSM/<DoCoroutine>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoCoroutineU3Ed__45_MoveNext_mFEFBEFB834FB063657005E9EB9623446F40CB94A (U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmExecutionStack_t044548FE34D395C2D79FEC504C31659FBB6686FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0017:
	{
		PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * L_3 = __this->get_U3CU3E4__this_2();
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_4 = L_3->get_fsm_7();
		IL2CPP_RUNTIME_CLASS_INIT(FsmExecutionStack_t044548FE34D395C2D79FEC504C31659FBB6686FD_il2cpp_TypeInfo_var);
		FsmExecutionStack_PushFsm_mFF81BCCBE12DD723D28B542F182627BC8E25ED71(L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = __this->get_routine_3();
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FsmExecutionStack_t044548FE34D395C2D79FEC504C31659FBB6686FD_il2cpp_TypeInfo_var);
		FsmExecutionStack_PopFsm_m149407864DE1CE8AF6FF953B660A5DA2EE424DA2(/*hidden argument*/NULL);
		return (bool)0;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FsmExecutionStack_t044548FE34D395C2D79FEC504C31659FBB6686FD_il2cpp_TypeInfo_var);
		FsmExecutionStack_PopFsm_m149407864DE1CE8AF6FF953B660A5DA2EE424DA2(/*hidden argument*/NULL);
		RuntimeObject* L_7 = __this->get_routine_3();
		RuntimeObject * L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0017;
	}
}
// System.Object PlayMakerFSM/<DoCoroutine>d__45::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoCoroutineU3Ed__45_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDA20530BFF421183F7E0CB7B691619E7F02395F2 (U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayMakerFSM/<DoCoroutine>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoCoroutineU3Ed__45_System_Collections_IEnumerator_Reset_m5CF4095CEB5FD48677A8F6E1C54BB103E2E81D85 (U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoCoroutineU3Ed__45_System_Collections_IEnumerator_Reset_m5CF4095CEB5FD48677A8F6E1C54BB103E2E81D85_RuntimeMethod_var)));
	}
}
// System.Object PlayMakerFSM/<DoCoroutine>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoCoroutineU3Ed__45_System_Collections_IEnumerator_get_Current_mD9A6FD2210BE9B3FC5D07AC6EDBE61E6048A17CD (U3CDoCoroutineU3Ed__45_tA9FF900EAAF5D10A7AC68FF5C4318723C61D9670 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayMakerFSM/AddEventHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddEventHandlerDelegate__ctor_mAC95425C3DA5FE1F5B3F599455248EB3FB423F98 (AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayMakerFSM/AddEventHandlerDelegate::Invoke(PlayMakerFSM)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddEventHandlerDelegate_Invoke_m117D6C99E851D1B616893A6B8F0988EF1B82A870 (AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB * __this, PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * ___fsm0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___fsm0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___fsm0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___fsm0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___fsm0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___fsm0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___fsm0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___fsm0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___fsm0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___fsm0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult PlayMakerFSM/AddEventHandlerDelegate::BeginInvoke(PlayMakerFSM,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AddEventHandlerDelegate_BeginInvoke_m96A6E125CE4228DD3742D593D89B79838A556C61 (AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB * __this, PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * ___fsm0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___fsm0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void PlayMakerFSM/AddEventHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddEventHandlerDelegate_EndInvoke_m1EC7BDC7C29F597C5934B301CC6EACF9756946A6 (AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void PlayMakerGUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6B50E4BE2FB4B0E4F950E91E86E2FE6B9DECB74C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418 * L_0 = (U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418 *)il2cpp_codegen_object_new(U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6A387E2D5E3F7C6CF3F00635EA0DDD996773DDDA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void PlayMakerGUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A387E2D5E3F7C6CF3F00635EA0DDD996773DDDA (U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PlayMakerGUI/<>c::<DrawStateLabels>b__67_0(PlayMakerFSM,PlayMakerFSM)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CDrawStateLabelsU3Eb__67_0_mF820D6A6D0EAE44DE49D0ADAD769D9F5A0F1012C (U3CU3Ec_t5C2609B03A8224D1A9E746B9594CB9F865DA1418 * __this, PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * ___x0, PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * ___y1, const RuntimeMethod* method)
{
	{
		PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * L_0 = ___x0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * L_3 = ___y1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = String_CompareOrdinal_m1C7F94040504F35C89EBC8826D77FEA81B9C2C0E(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
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
// System.Void PlayMakerGlobals/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mC0DD01EB7D53525D7134D21400636BBE7A362A7C (U3CU3Ec__DisplayClass34_0_t7D9B4002613239FA54F3D1FF7580F6AA8B77C739 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PlayMakerGlobals/<>c__DisplayClass34_0::<RemoveGlobalEvent>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass34_0_U3CRemoveGlobalEventU3Eb__0_m3D3711EAF8372613AAFCB34F7A9B549DA6BAF18F (U3CU3Ec__DisplayClass34_0_t7D9B4002613239FA54F3D1FF7580F6AA8B77C739 * __this, String_t* ___m0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___m0;
		String_t* L_1 = __this->get_eventName_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Collision2DEvent_tC2ED69880D8FFBD691E016C25053D35FD6C57B61 (Collision2DEvent_tC2ED69880D8FFBD691E016C25053D35FD6C57B61 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collisionInfo0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___collisionInfo0' to native representation
	Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke ____collisionInfo0_marshaled = {};
	if (___collisionInfo0 != NULL)
	{
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke(*___collisionInfo0, ____collisionInfo0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___collisionInfo0 != NULL ? (&____collisionInfo0_marshaled) : NULL);

	// Marshaling cleanup of parameter '___collisionInfo0' native representation
	if ((&____collisionInfo0_marshaled) != NULL)
	{
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshal_pinvoke_cleanup(____collisionInfo0_marshaled);
	}

}
// System.Void PlayMakerProxyBase/Collision2DEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collision2DEvent__ctor_mDD44393A9F1BCEF4CF55DA2DB4D95E3756628C3D (Collision2DEvent_tC2ED69880D8FFBD691E016C25053D35FD6C57B61 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayMakerProxyBase/Collision2DEvent::Invoke(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collision2DEvent_Invoke_mF8E88EB10A26F6CCAE31310582EDABE431B711E3 (Collision2DEvent_tC2ED69880D8FFBD691E016C25053D35FD6C57B61 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collisionInfo0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___collisionInfo0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___collisionInfo0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___collisionInfo0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___collisionInfo0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___collisionInfo0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___collisionInfo0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___collisionInfo0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___collisionInfo0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___collisionInfo0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult PlayMakerProxyBase/Collision2DEvent::BeginInvoke(UnityEngine.Collision2D,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collision2DEvent_BeginInvoke_m987931065047CBDCA2FD9B8028267F083945B89E (Collision2DEvent_tC2ED69880D8FFBD691E016C25053D35FD6C57B61 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collisionInfo0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collisionInfo0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void PlayMakerProxyBase/Collision2DEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collision2DEvent_EndInvoke_m06D9DD1B4982CC41805F35BE7447CAB299C5BD53 (Collision2DEvent_tC2ED69880D8FFBD691E016C25053D35FD6C57B61 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void PlayMakerProxyBase/CollisionEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvent__ctor_m2A1EE74A50977C5173DFE3DAA99729AF300E9B70 (CollisionEvent_t333A31C8E6B34B36BE3832401105DACEB21618B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayMakerProxyBase/CollisionEvent::Invoke(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvent_Invoke_mEEFADE08699B529DB1D8B5B3D0DD13CA6D0556D1 (CollisionEvent_t333A31C8E6B34B36BE3832401105DACEB21618B6 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collisionInfo0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___collisionInfo0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___collisionInfo0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___collisionInfo0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___collisionInfo0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___collisionInfo0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___collisionInfo0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___collisionInfo0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___collisionInfo0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___collisionInfo0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult PlayMakerProxyBase/CollisionEvent::BeginInvoke(UnityEngine.Collision,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollisionEvent_BeginInvoke_m7203E1ED82DCCD66047C19D51CD66CC87BA92D54 (CollisionEvent_t333A31C8E6B34B36BE3832401105DACEB21618B6 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collisionInfo0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collisionInfo0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void PlayMakerProxyBase/CollisionEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvent_EndInvoke_mBBBBE78AF24EC5728A8D968697C616991EDD1B1B (CollisionEvent_t333A31C8E6B34B36BE3832401105DACEB21618B6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void PlayMakerProxyBase/ControllerCollisionEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerCollisionEvent__ctor_mCE4228F75C0D013A9CC7CF1026294C09A034BD32 (ControllerCollisionEvent_t653F7272D9CFD511EBD043FA0754CFF1857A70D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayMakerProxyBase/ControllerCollisionEvent::Invoke(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerCollisionEvent_Invoke_m1AA2DE7BB080A4CA312A0B693F374A007FAA2069 (ControllerCollisionEvent_t653F7272D9CFD511EBD043FA0754CFF1857A70D2 * __this, ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 * ___hitCollider0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hitCollider0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hitCollider0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___hitCollider0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___hitCollider0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___hitCollider0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___hitCollider0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hitCollider0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hitCollider0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hitCollider0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult PlayMakerProxyBase/ControllerCollisionEvent::BeginInvoke(UnityEngine.ControllerColliderHit,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerCollisionEvent_BeginInvoke_mCC7C849B5C09251FC193A5DEFD08225A593FC530 (ControllerCollisionEvent_t653F7272D9CFD511EBD043FA0754CFF1857A70D2 * __this, ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 * ___hitCollider0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___hitCollider0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void PlayMakerProxyBase/ControllerCollisionEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerCollisionEvent_EndInvoke_m673C5051FB738970E0767A06E18A9F058A200B85 (ControllerCollisionEvent_t653F7272D9CFD511EBD043FA0754CFF1857A70D2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void PlayMakerProxyBase/ParticleCollisionEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleCollisionEvent__ctor_m9E07BD3D99ECD8BA00ACA9F4470EA301E79FA9F4 (ParticleCollisionEvent_tDB966C25FEBFECD7BFF9EEF9E08E1FEB89C11CCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayMakerProxyBase/ParticleCollisionEvent::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleCollisionEvent_Invoke_mAC03CFA86A78B3BA445F56B19A0BF66683AAF46C (ParticleCollisionEvent_tDB966C25FEBFECD7BFF9EEF9E08E1FEB89C11CCD * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___gameObject0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___gameObject0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___gameObject0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___gameObject0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___gameObject0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___gameObject0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___gameObject0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___gameObject0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___gameObject0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult PlayMakerProxyBase/ParticleCollisionEvent::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParticleCollisionEvent_BeginInvoke_mBA02EF05FABD501E2054D500D5BF5FF1A4E73BD7 (ParticleCollisionEvent_tDB966C25FEBFECD7BFF9EEF9E08E1FEB89C11CCD * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___gameObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void PlayMakerProxyBase/ParticleCollisionEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleCollisionEvent_EndInvoke_m384BB70F8EAF37AB228777D54ED9418060F2F8E4 (ParticleCollisionEvent_tDB966C25FEBFECD7BFF9EEF9E08E1FEB89C11CCD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void PlayMakerProxyBase/Trigger2DEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger2DEvent__ctor_m74B5204879EA87D35CDF2AFF9DBC8AD69AD9DB98 (Trigger2DEvent_t97CDC12715DFDAD5A770005DD3C9B8C427788522 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayMakerProxyBase/Trigger2DEvent::Invoke(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger2DEvent_Invoke_mB3E7B998F6BCDA30A8F7C4AD454D46E2D341FB82 (Trigger2DEvent_t97CDC12715DFDAD5A770005DD3C9B8C427788522 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___other0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___other0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___other0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___other0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___other0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___other0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___other0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___other0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___other0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult PlayMakerProxyBase/Trigger2DEvent::BeginInvoke(UnityEngine.Collider2D,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Trigger2DEvent_BeginInvoke_mD6F3287C6AA5B420C6AAC92F56579CF49480763D (Trigger2DEvent_t97CDC12715DFDAD5A770005DD3C9B8C427788522 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___other0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void PlayMakerProxyBase/Trigger2DEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger2DEvent_EndInvoke_mC2D52D60CB63A77B681E81F87404FE98E71BE95E (Trigger2DEvent_t97CDC12715DFDAD5A770005DD3C9B8C427788522 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void PlayMakerProxyBase/TriggerEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent__ctor_m5942A0E9FA558C49B2D879DD69E9A350D9B4E3AE (TriggerEvent_t9A24DA0AE6C31160D00EDFBBD7DE0E07AF3C8A96 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayMakerProxyBase/TriggerEvent::Invoke(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent_Invoke_m383858B1947D7446B15BC5179E09BBFE9CA095A0 (TriggerEvent_t9A24DA0AE6C31160D00EDFBBD7DE0E07AF3C8A96 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___other0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___other0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___other0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___other0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___other0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___other0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___other0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___other0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___other0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult PlayMakerProxyBase/TriggerEvent::BeginInvoke(UnityEngine.Collider,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriggerEvent_BeginInvoke_m63FD3A6DC8EC1E36E26E14761B11DADB890089B7 (TriggerEvent_t9A24DA0AE6C31160D00EDFBBD7DE0E07AF3C8A96 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___other0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void PlayMakerProxyBase/TriggerEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent_EndInvoke_mC84AE3E7D078706F5498067E48275FD6E7D8197D (TriggerEvent_t9A24DA0AE6C31160D00EDFBBD7DE0E07AF3C8A96 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void HutongGames.Extensions.TextureExtensions/Point::.ctor(System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m1174C15B384DB0DBDCBFCDE33FE2A7366493A904 (Point_t339E5555BE2246857B85758D60C57142A565EC02 * __this, int16_t ___aX0, int16_t ___aY1, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___aX0;
		__this->set_x_0(L_0);
		int16_t L_1 = ___aY1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Point__ctor_m1174C15B384DB0DBDCBFCDE33FE2A7366493A904_AdjustorThunk (RuntimeObject * __this, int16_t ___aX0, int16_t ___aY1, const RuntimeMethod* method)
{
	Point_t339E5555BE2246857B85758D60C57142A565EC02 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_t339E5555BE2246857B85758D60C57142A565EC02 *>(__this + _offset);
	Point__ctor_m1174C15B384DB0DBDCBFCDE33FE2A7366493A904(_thisAdjusted, ___aX0, ___aY1, method);
}
// System.Void HutongGames.Extensions.TextureExtensions/Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m747CBA76CE25FC118963A795B3B85100186F96A5 (Point_t339E5555BE2246857B85758D60C57142A565EC02 * __this, int32_t ___aX0, int32_t ___aY1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___aX0;
		int32_t L_1 = ___aY1;
		Point__ctor_m1174C15B384DB0DBDCBFCDE33FE2A7366493A904((Point_t339E5555BE2246857B85758D60C57142A565EC02 *)__this, ((int16_t)((int16_t)L_0)), ((int16_t)((int16_t)L_1)), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Point__ctor_m747CBA76CE25FC118963A795B3B85100186F96A5_AdjustorThunk (RuntimeObject * __this, int32_t ___aX0, int32_t ___aY1, const RuntimeMethod* method)
{
	Point_t339E5555BE2246857B85758D60C57142A565EC02 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_t339E5555BE2246857B85758D60C57142A565EC02 *>(__this + _offset);
	Point__ctor_m747CBA76CE25FC118963A795B3B85100186F96A5(_thisAdjusted, ___aX0, ___aY1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tA624903E1259A700E57AC71565033F4E3C8470F9;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebSockets.WebSocketReceiveResult>
struct TaskFactory_1_tDF44923F8546D9F436C6170729E85A2BE7377D99;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>
struct Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.ArraySegment`1<System.Byte>[]
struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Net.WebSockets.ClientWebSocket
struct ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F;
// System.Net.WebSockets.ClientWebSocketOptions
struct ClientWebSocketOptions_t5FB2F0C705144B57583EDFB14A12FCB0583FC19C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Net.CookieContainer
struct CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Net.ICredentials
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Net.IWebProxy
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
// MainThreadUtil
struct MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F;
// WaitForUpdate
struct WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// NativeWebSocket.WebSocket
struct WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F;
// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466;
// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3;
// NativeWebSocket.WebSocketException
struct WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525;
// System.Net.WebSockets.WebSocketHandle
struct WebSocketHandle_t9C8D33BD3D8553B1FD363A68ABDF5B81FC089F50;
// NativeWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979;
// NativeWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B;
// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C;
// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E;
// System.Net.WebSockets.WebSocketReceiveResult
struct WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C;
// NativeWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9;
// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF;
// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71;
// NativeWebSocket.WebSocket/<Close>d__37
struct U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA;
// NativeWebSocket.WebSocket/<Connect>d__27
struct U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6;
// NativeWebSocket.WebSocket/<HandleQueue>d__33
struct U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E;
// NativeWebSocket.WebSocket/<Receive>d__36
struct U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6;
// NativeWebSocket.WebSocket/<SendMessage>d__32
struct U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B;
IL2CPP_EXTERN_C String_t* _stringLiteral1742337439BBC66D76773857596C8E79F12FE929;
IL2CPP_EXTERN_C String_t* _stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69;
IL2CPP_EXTERN_C String_t* _stringLiteral479625953694FC0583C3D8F93F44332026972846;
IL2CPP_EXTERN_C String_t* _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612;
IL2CPP_EXTERN_C String_t* _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48;
IL2CPP_EXTERN_C String_t* _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisMainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mD1B717CADBAED093CEE35D6C9A2B3E4B856C4B38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mD658E4E68D94E87881C3DBF621CBEFD9EE3C07E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mF7CDEFCFE2378E69A4CD54D3CB3DF32E8C8ABE0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_mEBFC7689038F82B343993364821326C6092FDB1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_m8499003A9CEFB87ED901A2CB53A6631317E1DEA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_m99BCDC069A53D6ED34F0AD3101CE9C1D1133BEFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_m9F6F0B441830D4655FA0534376E13DCAC36BBF46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_m088E13E5D4FA5CE6023A08F499A235D5C76E3E41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_mECD355B8A44C9E25ADD347202CD79E36D7D11898_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_mC5D31670F717EB7E1B2B5C9895DC3C9E7DF2B760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_m781BC03854969572B3FED279F38E3BD48F0EF3A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_m07FF840C2CE7E01D8711874ADF30714BDFB78E17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_mB31F006FF606D32F7CA649B930620ADDE1B7701B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_m92E71D16AF61352A6E7148033389DE22ACB6CE74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF7134F9420DF47E26B6E714015DBB2CBFF5BC1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m4EDF2363B7349132ACF4E0A84CEEE5A680BC6004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC672310507957782353FEB9D28F8FE9708AAB736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m8BD0D19C1FECD5AA3D9EA1EC4E5943D0C489F6FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m4782CA3577F6DE2D5857AD8F7EE9C1B2A4D82107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mBDA5969E9CC3D2A99ADCDF5DDB0E44448035CB8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m3D82EC56DC7C2A43849959484D39F01B7857B5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReceiveU3Ed__36_MoveNext_mC59EB3655D4080FB405AA958112F0256193C14DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mFDD0FD9389C71F771348ADE10DAA60AB7ECDD980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m0F3B58C434FCB0B603320CFBF1E7FF116BC3DE56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_m587EE74CAC1152DE4889BC903EAF666EDB6A484A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_mBFF4356E4E9DE13DE725B70833E8A2397B35A401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t93286EC3939E6D2A3848A46758C92B54C6C9E961 
{
};

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

// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tA624903E1259A700E57AC71565033F4E3C8470F9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items_1;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_kernelEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_state
	int32_t ____state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_threadIDExecutingCallbacks
	int32_t ____threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::_disposed
	bool ____disposed_11;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_executingCallback
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback_12;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_13;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
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

// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F  : public RuntimeObject
{
};

// System.Net.WebSockets.WebSocket
struct WebSocket_tE3DEAFF0F68BD5AF9A526D29D56B6E5C6E24C3A1  : public RuntimeObject
{
};

// NativeWebSocket.WebSocketFactory
struct WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953  : public RuntimeObject
{
};

// NativeWebSocket.WebSocketHelpers
struct WebSocketHelpers_tA390BCA68E5570108D9674A85A47212CA153F7E9  : public RuntimeObject
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

// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5  : public RuntimeObject
{
	// System.Collections.IEnumerator MainThreadUtil/<>c__DisplayClass9_0::waitForUpdate
	RuntimeObject* ___waitForUpdate_0;
};

// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9  : public RuntimeObject
{
};

// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF  : public RuntimeObject
{
	// System.Int32 WaitForUpdate/<CoroutineWrapper>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WaitForUpdate/<CoroutineWrapper>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Collections.IEnumerator WaitForUpdate/<CoroutineWrapper>d__4::theWorker
	RuntimeObject* ___theWorker_2;
	// WaitForUpdate/MainThreadAwaiter WaitForUpdate/<CoroutineWrapper>d__4::awaiter
	MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* ___awaiter_3;
};

// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71  : public RuntimeObject
{
	// System.Action WaitForUpdate/MainThreadAwaiter::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_0;
	// System.Boolean WaitForUpdate/MainThreadAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_1;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
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

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
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

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>
struct Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult>
struct TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>
struct Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* ___m_result_38;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Net.WebSockets.ClientWebSocket
struct ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F  : public WebSocket_tE3DEAFF0F68BD5AF9A526D29D56B6E5C6E24C3A1
{
	// System.Net.WebSockets.ClientWebSocketOptions System.Net.WebSockets.ClientWebSocket::_options
	ClientWebSocketOptions_t5FB2F0C705144B57583EDFB14A12FCB0583FC19C* ____options_0;
	// System.Net.WebSockets.WebSocketHandle System.Net.WebSockets.ClientWebSocket::_innerWebSocket
	WebSocketHandle_t9C8D33BD3D8553B1FD363A68ABDF5B81FC089F50* ____innerWebSocket_1;
	// System.Int32 System.Net.WebSockets.ClientWebSocket::_state
	int32_t ____state_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// WaitForUpdate
struct WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Nullable`1<System.ArraySegment`1<System.Byte>>
struct Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___value_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// NativeWebSocket.WebSocket
struct WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F  : public RuntimeObject
{
	// NativeWebSocket.WebSocketOpenEventHandler NativeWebSocket.WebSocket::OnOpen
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___OnOpen_0;
	// NativeWebSocket.WebSocketMessageEventHandler NativeWebSocket.WebSocket::OnMessage
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___OnMessage_1;
	// NativeWebSocket.WebSocketErrorEventHandler NativeWebSocket.WebSocket::OnError
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___OnError_2;
	// NativeWebSocket.WebSocketCloseEventHandler NativeWebSocket.WebSocket::OnClose
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___OnClose_3;
	// System.Uri NativeWebSocket.WebSocket::uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> NativeWebSocket.WebSocket::headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers_5;
	// System.Collections.Generic.List`1<System.String> NativeWebSocket.WebSocket::subprotocols
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___subprotocols_6;
	// System.Net.WebSockets.ClientWebSocket NativeWebSocket.WebSocket::m_Socket
	ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* ___m_Socket_7;
	// System.Threading.CancellationTokenSource NativeWebSocket.WebSocket::m_TokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_TokenSource_8;
	// System.Threading.CancellationToken NativeWebSocket.WebSocket::m_CancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_CancellationToken_9;
	// System.Object NativeWebSocket.WebSocket::OutgoingMessageLock
	RuntimeObject* ___OutgoingMessageLock_10;
	// System.Object NativeWebSocket.WebSocket::IncomingMessageLock
	RuntimeObject* ___IncomingMessageLock_11;
	// System.Boolean NativeWebSocket.WebSocket::isSending
	bool ___isSending_12;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> NativeWebSocket.WebSocket::sendBytesQueue
	List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ___sendBytesQueue_13;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> NativeWebSocket.WebSocket::sendTextQueue
	List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ___sendTextQueue_14;
	// System.Collections.Generic.List`1<System.Byte[]> NativeWebSocket.WebSocket::m_MessageList
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___m_MessageList_15;
};

// System.Net.WebSockets.WebSocketReceiveResult
struct WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C  : public RuntimeObject
{
	// System.Int32 System.Net.WebSockets.WebSocketReceiveResult::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_0;
	// System.Boolean System.Net.WebSockets.WebSocketReceiveResult::<EndOfMessage>k__BackingField
	bool ___U3CEndOfMessageU3Ek__BackingField_1;
	// System.Net.WebSockets.WebSocketMessageType System.Net.WebSockets.WebSocketReceiveResult::<MessageType>k__BackingField
	int32_t ___U3CMessageTypeU3Ek__BackingField_2;
	// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> System.Net.WebSockets.WebSocketReceiveResult::<CloseStatus>k__BackingField
	Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 ___U3CCloseStatusU3Ek__BackingField_3;
	// System.String System.Net.WebSockets.WebSocketReceiveResult::<CloseStatusDescription>k__BackingField
	String_t* ___U3CCloseStatusDescriptionU3Ek__BackingField_4;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// System.Net.WebSockets.ClientWebSocketOptions
struct ClientWebSocketOptions_t5FB2F0C705144B57583EDFB14A12FCB0583FC19C  : public RuntimeObject
{
	// System.Boolean System.Net.WebSockets.ClientWebSocketOptions::_isReadOnly
	bool ____isReadOnly_0;
	// System.Collections.Generic.List`1<System.String> System.Net.WebSockets.ClientWebSocketOptions::_requestedSubProtocols
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____requestedSubProtocols_1;
	// System.Net.WebHeaderCollection System.Net.WebSockets.ClientWebSocketOptions::_requestHeaders
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ____requestHeaders_2;
	// System.TimeSpan System.Net.WebSockets.ClientWebSocketOptions::_keepAliveInterval
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____keepAliveInterval_3;
	// System.Boolean System.Net.WebSockets.ClientWebSocketOptions::_useDefaultCredentials
	bool ____useDefaultCredentials_4;
	// System.Net.ICredentials System.Net.WebSockets.ClientWebSocketOptions::_credentials
	RuntimeObject* ____credentials_5;
	// System.Net.IWebProxy System.Net.WebSockets.ClientWebSocketOptions::_proxy
	RuntimeObject* ____proxy_6;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.WebSockets.ClientWebSocketOptions::_clientCertificates
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ____clientCertificates_7;
	// System.Net.CookieContainer System.Net.WebSockets.ClientWebSocketOptions::_cookies
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ____cookies_8;
	// System.Int32 System.Net.WebSockets.ClientWebSocketOptions::_receiveBufferSize
	int32_t ____receiveBufferSize_9;
	// System.Int32 System.Net.WebSockets.ClientWebSocketOptions::_sendBufferSize
	int32_t ____sendBufferSize_10;
	// System.Nullable`1<System.ArraySegment`1<System.Byte>> System.Net.WebSockets.ClientWebSocketOptions::_buffer
	Nullable_1_tB6272BACE7A1FD9B331610C8D96A0BE3618C14B5 ____buffer_11;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.WebSockets.ClientWebSocketOptions::_remoteCertificateValidationCallback
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ____remoteCertificateValidationCallback_12;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// NativeWebSocket.WebSocketException
struct WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525  : public Exception_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979  : public WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525
{
};

// NativeWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B  : public WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525
{
};

// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06  : public WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525
{
};

// NativeWebSocket.WebSocket/<Close>d__37
struct U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA  : public RuntimeObject
{
	// System.Int32 NativeWebSocket.WebSocket/<Close>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder NativeWebSocket.WebSocket/<Close>d__37::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// NativeWebSocket.WebSocket NativeWebSocket.WebSocket/<Close>d__37::<>4__this
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter NativeWebSocket.WebSocket/<Close>d__37::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// NativeWebSocket.WebSocket/<Connect>d__27
struct U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6  : public RuntimeObject
{
	// System.Int32 NativeWebSocket.WebSocket/<Connect>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder NativeWebSocket.WebSocket/<Connect>d__27::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// NativeWebSocket.WebSocket NativeWebSocket.WebSocket/<Connect>d__27::<>4__this
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* ___U3CU3E4__this_2;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String> NativeWebSocket.WebSocket/<Connect>d__27::<>s__1
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 ___U3CU3Es__1_3;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.String> NativeWebSocket.WebSocket/<Connect>d__27::<header>5__2
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___U3CheaderU3E5__2_4;
	// System.Collections.Generic.List`1/Enumerator<System.String> NativeWebSocket.WebSocket/<Connect>d__27::<>s__3
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 ___U3CU3Es__3_5;
	// System.String NativeWebSocket.WebSocket/<Connect>d__27::<subprotocol>5__4
	String_t* ___U3CsubprotocolU3E5__4_6;
	// System.Exception NativeWebSocket.WebSocket/<Connect>d__27::<ex>5__5
	Exception_t* ___U3CexU3E5__5_7;
	// System.Runtime.CompilerServices.TaskAwaiter NativeWebSocket.WebSocket/<Connect>d__27::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_8;
};

// NativeWebSocket.WebSocket/<HandleQueue>d__33
struct U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E  : public RuntimeObject
{
	// System.Int32 NativeWebSocket.WebSocket/<HandleQueue>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder NativeWebSocket.WebSocket/<HandleQueue>d__33::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> NativeWebSocket.WebSocket/<HandleQueue>d__33::queue
	List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ___queue_2;
	// System.Net.WebSockets.WebSocketMessageType NativeWebSocket.WebSocket/<HandleQueue>d__33::messageType
	int32_t ___messageType_3;
	// NativeWebSocket.WebSocket NativeWebSocket.WebSocket/<HandleQueue>d__33::<>4__this
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* ___U3CU3E4__this_4;
	// System.ArraySegment`1<System.Byte> NativeWebSocket.WebSocket/<HandleQueue>d__33::<buffer>5__1
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CbufferU3E5__1_5;
	// System.Object NativeWebSocket.WebSocket/<HandleQueue>d__33::<>s__2
	RuntimeObject* ___U3CU3Es__2_6;
	// System.Boolean NativeWebSocket.WebSocket/<HandleQueue>d__33::<>s__3
	bool ___U3CU3Es__3_7;
	// System.Runtime.CompilerServices.TaskAwaiter NativeWebSocket.WebSocket/<HandleQueue>d__33::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_8;
};

// NativeWebSocket.WebSocket/<Receive>d__36
struct U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6  : public RuntimeObject
{
	// System.Int32 NativeWebSocket.WebSocket/<Receive>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder NativeWebSocket.WebSocket/<Receive>d__36::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// NativeWebSocket.WebSocket NativeWebSocket.WebSocket/<Receive>d__36::<>4__this
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* ___U3CU3E4__this_2;
	// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocket/<Receive>d__36::<closeCode>5__1
	int32_t ___U3CcloseCodeU3E5__1_3;
	// System.ArraySegment`1<System.Byte> NativeWebSocket.WebSocket/<Receive>d__36::<buffer>5__2
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CbufferU3E5__2_4;
	// System.Object NativeWebSocket.WebSocket/<Receive>d__36::<>s__3
	RuntimeObject* ___U3CU3Es__3_5;
	// System.Int32 NativeWebSocket.WebSocket/<Receive>d__36::<>s__4
	int32_t ___U3CU3Es__4_6;
	// System.Net.WebSockets.WebSocketReceiveResult NativeWebSocket.WebSocket/<Receive>d__36::<result>5__5
	WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* ___U3CresultU3E5__5_7;
	// System.IO.MemoryStream NativeWebSocket.WebSocket/<Receive>d__36::<ms>5__6
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___U3CmsU3E5__6_8;
	// System.Net.WebSockets.WebSocketReceiveResult NativeWebSocket.WebSocket/<Receive>d__36::<>s__7
	WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* ___U3CU3Es__7_9;
	// System.Object NativeWebSocket.WebSocket/<Receive>d__36::<>s__8
	RuntimeObject* ___U3CU3Es__8_10;
	// System.Boolean NativeWebSocket.WebSocket/<Receive>d__36::<>s__9
	bool ___U3CU3Es__9_11;
	// System.Object NativeWebSocket.WebSocket/<Receive>d__36::<>s__10
	RuntimeObject* ___U3CU3Es__10_12;
	// System.Boolean NativeWebSocket.WebSocket/<Receive>d__36::<>s__11
	bool ___U3CU3Es__11_13;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter NativeWebSocket.WebSocket/<Receive>d__36::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_14;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult> NativeWebSocket.WebSocket/<Receive>d__36::<>u__2
	TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4 ___U3CU3Eu__2_15;
	// System.Runtime.CompilerServices.TaskAwaiter NativeWebSocket.WebSocket/<Receive>d__36::<>u__3
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__3_16;
	// System.Object NativeWebSocket.WebSocket/<Receive>d__36::<>u__4
	RuntimeObject* ___U3CU3Eu__4_17;
};

// NativeWebSocket.WebSocket/<SendMessage>d__32
struct U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF  : public RuntimeObject
{
	// System.Int32 NativeWebSocket.WebSocket/<SendMessage>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder NativeWebSocket.WebSocket/<SendMessage>d__32::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> NativeWebSocket.WebSocket/<SendMessage>d__32::queue
	List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ___queue_2;
	// System.Net.WebSockets.WebSocketMessageType NativeWebSocket.WebSocket/<SendMessage>d__32::messageType
	int32_t ___messageType_3;
	// System.ArraySegment`1<System.Byte> NativeWebSocket.WebSocket/<SendMessage>d__32::buffer
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___buffer_4;
	// NativeWebSocket.WebSocket NativeWebSocket.WebSocket/<SendMessage>d__32::<>4__this
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* ___U3CU3E4__this_5;
	// System.Boolean NativeWebSocket.WebSocket/<SendMessage>d__32::<sending>5__1
	bool ___U3CsendingU3E5__1_6;
	// System.Object NativeWebSocket.WebSocket/<SendMessage>d__32::<>s__2
	RuntimeObject* ___U3CU3Es__2_7;
	// System.Boolean NativeWebSocket.WebSocket/<SendMessage>d__32::<>s__3
	bool ___U3CU3Es__3_8;
	// System.Threading.Tasks.Task NativeWebSocket.WebSocket/<SendMessage>d__32::<t>5__4
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CtU3E5__4_9;
	// System.Object NativeWebSocket.WebSocket/<SendMessage>d__32::<>s__5
	RuntimeObject* ___U3CU3Es__5_10;
	// System.Boolean NativeWebSocket.WebSocket/<SendMessage>d__32::<>s__6
	bool ___U3CU3Es__6_11;
	// System.Object NativeWebSocket.WebSocket/<SendMessage>d__32::<>s__7
	RuntimeObject* ___U3CU3Es__7_12;
	// System.Boolean NativeWebSocket.WebSocket/<SendMessage>d__32::<>s__8
	bool ___U3CU3Es__8_13;
	// System.Runtime.CompilerServices.TaskAwaiter NativeWebSocket.WebSocket/<SendMessage>d__32::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_14;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// MainThreadUtil
struct MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte[]>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_canceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_neverCanceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback_14;
};

// System.Threading.CancellationTokenSource

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.Text.Encoding

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.Threading.SynchronizationContext

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.Uri

// System.ValueType

// System.ValueType

// NativeWebSocket.WaitForBackgroundThread

// NativeWebSocket.WaitForBackgroundThread

// System.Net.WebSockets.WebSocket

// System.Net.WebSockets.WebSocket

// NativeWebSocket.WebSocketFactory

// NativeWebSocket.WebSocketFactory

// NativeWebSocket.WebSocketHelpers

// NativeWebSocket.WebSocketHelpers

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// MainThreadUtil/<>c__DisplayClass9_0

// MainThreadUtil/<>c__DisplayClass9_0

// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields
{
	// NativeWebSocket.WaitForBackgroundThread/<>c NativeWebSocket.WaitForBackgroundThread/<>c::<>9
	U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* ___U3CU3E9_0;
	// System.Action NativeWebSocket.WaitForBackgroundThread/<>c::<>9__0_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__0_0_1;
};

// NativeWebSocket.WaitForBackgroundThread/<>c

// WaitForUpdate/<CoroutineWrapper>d__4

// WaitForUpdate/<CoroutineWrapper>d__4

// WaitForUpdate/MainThreadAwaiter

// WaitForUpdate/MainThreadAwaiter

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>

// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult>

// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>
struct Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tDF44923F8546D9F436C6170729E85A2BE7377D99* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Net.WebSockets.ClientWebSocket

// System.Net.WebSockets.ClientWebSocket

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// WaitForUpdate

// WaitForUpdate

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Nullable`1<System.ArraySegment`1<System.Byte>>

// System.Nullable`1<System.ArraySegment`1<System.Byte>>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.MemoryStream

// System.IO.MemoryStream

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// NativeWebSocket.WebSocket

// NativeWebSocket.WebSocket

// System.Net.WebSockets.WebSocketReceiveResult

// System.Net.WebSockets.WebSocketReceiveResult

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// System.Net.WebSockets.ClientWebSocketOptions

// System.Net.WebSockets.ClientWebSocketOptions

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

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

// NativeWebSocket.WebSocketException

// NativeWebSocket.WebSocketException

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// System.Threading.SendOrPostCallback

// System.Threading.SendOrPostCallback

// NativeWebSocket.WebSocketCloseEventHandler

// NativeWebSocket.WebSocketCloseEventHandler

// NativeWebSocket.WebSocketErrorEventHandler

// NativeWebSocket.WebSocketErrorEventHandler

// NativeWebSocket.WebSocketInvalidArgumentException

// NativeWebSocket.WebSocketInvalidArgumentException

// NativeWebSocket.WebSocketInvalidStateException

// NativeWebSocket.WebSocketInvalidStateException

// NativeWebSocket.WebSocketMessageEventHandler

// NativeWebSocket.WebSocketMessageEventHandler

// NativeWebSocket.WebSocketOpenEventHandler

// NativeWebSocket.WebSocketOpenEventHandler

// NativeWebSocket.WebSocketUnexpectedException

// NativeWebSocket.WebSocketUnexpectedException

// NativeWebSocket.WebSocket/<Close>d__37

// NativeWebSocket.WebSocket/<Close>d__37

// NativeWebSocket.WebSocket/<Connect>d__27

// NativeWebSocket.WebSocket/<Connect>d__27

// NativeWebSocket.WebSocket/<HandleQueue>d__33

// NativeWebSocket.WebSocket/<HandleQueue>d__33

// NativeWebSocket.WebSocket/<Receive>d__36

// NativeWebSocket.WebSocket/<Receive>d__36

// NativeWebSocket.WebSocket/<SendMessage>d__32

// NativeWebSocket.WebSocket/<SendMessage>d__32

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// MainThreadUtil
struct MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields
{
	// MainThreadUtil MainThreadUtil::<Instance>k__BackingField
	MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* ___U3CInstanceU3Ek__BackingField_4;
	// System.Threading.SynchronizationContext MainThreadUtil::<synchronizationContext>k__BackingField
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___U3CsynchronizationContextU3Ek__BackingField_5;
};

// MainThreadUtil
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.ArraySegment`1<System.Byte>[]
struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F  : public RuntimeArray
{
	ALIGN_FIELD (8) ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 m_Items[1];

	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array_1), (void*)NULL);
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array_1), (void*)NULL);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_gshared (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, RuntimeObject** ___1_stateMachine, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF7134F9420DF47E26B6E714015DBB2CBFF5BC1DB_gshared_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_gshared_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_gshared (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4EDF2363B7349132ACF4E0A84CEEE5A680BC6004_gshared (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisRuntimeObject_m1655EB11BC45B4E6C33A133DDD84092A2FF0543B_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, RuntimeObject** ___1_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m0E4A3F3D0E99E62AE6305318EB422A88B8D36DC4_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, RuntimeObject** ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_mB0BA7C66B9A5FF7708FEF4A2B98589DD6D63F34A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___0_awaiter, RuntimeObject** ___1_stateMachine, const RuntimeMethod* method) ;

// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<MainThreadUtil>()
inline MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* GameObject_AddComponent_TisMainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_m92E71D16AF61352A6E7148033389DE22ACB6CE74 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mCC9E86FB5D6CA9E9765DA15CEAC40A2097FA7B1D_inline (MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* ___0_value, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_mCAAE2E112A6B05340E0642270FEBAA1D1912E5F7_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) ;
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mB06DBF3AB8930EE0AB977D79A03FC4D95CF378C1 (U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* __this, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* MainThreadUtil_get_synchronizationContext_m2E8C4435E5F339E3F95FB164BFF66EAF654ED43B_inline (const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* MainThreadUtil_get_Instance_mACAAECA4BF768341AD32A92592C6970ED302C4D2_inline (const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_m3540C6B9BCACE777A12635C545A3CC2A294E757A (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_m11E499E7DE7F929488E0AAC0F2307E6A45A54EB7 (RuntimeObject* ___0_theWorker, MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* ___1_awaiter, const RuntimeMethod* method) ;
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_m8FB282D6410D1AB9BDBF301FE5457B77B5A2F496 (RuntimeObject* ___0_waitForUpdate, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_mFCB32C22F75BF38ADEE0D6D437115B22C5C6A495 (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_m2CC67562B58AED84A4D52BCB2F848C33414355FF_inline (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_mC13A5BC24DB6EB6DE1A605A5BFBD634969A0F4FC (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28 (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mC5A752D3BD5F838A648F5378A95EF97C0BEBB542 (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m46EB1E930E8BC5B9E4E42594C205D876A26C1C7C (WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m157EADEEBE6A00DC1EFCB69566CECD6C03A249C0 (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mEE531950700010B746626D9EC8055577FE09B7C8 (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mD588369E6718B3CF063B52BF1DF124C03E623C5B (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B0196104B567545C8C9E67C81D37C8CCDC57F5F (U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Net.WebSockets.ClientWebSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientWebSocket__ctor_m75DD6220EA55DB5AEEA0AEE5E5809885EE52E138 (ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::.ctor()
inline void List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78 (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*, const RuntimeMethod*))List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket/<Connect>d__27::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__27__ctor_mB92A141543AD597B6E676D4DAA98EB88E7D8879C (U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<Connect>d__27>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_mC5D31670F717EB7E1B2B5C9895DC3C9E7DF2B760 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6**, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
inline void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared)(__this, ___0_array, method);
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendMessage(System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>,System.Net.WebSockets.WebSocketMessageType,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_SendMessage_m28BD9EEC00184F6A416466BD4DC9B719E84786BA (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ___0_queue, int32_t ___1_messageType, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_buffer, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___0_array, ___1_offset, ___2_count, method);
}
// System.Void NativeWebSocket.WebSocket/<SendMessage>d__32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32__ctor_m0A6CB26B45064818A6DACC8DD7C9712408D20AF4 (U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<SendMessage>d__32>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_mB31F006FF606D32F7CA649B930620ADDE1B7701B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF**, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared)(__this, ___0_stateMachine, method);
}
// System.Void NativeWebSocket.WebSocket/<HandleQueue>d__33::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleQueueU3Ed__33__ctor_mF1BC2491F7D4903090C9354C1B517B68EB294824 (U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<HandleQueue>d__33>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_m781BC03854969572B3FED279F38E3BD48F0EF3A8 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E**, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared)(__this, ___0_stateMachine, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
inline int32_t List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
inline void List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_inline (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket/<Receive>d__36::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveU3Ed__36__ctor_m3CD4D99931C4A278A1FC8AC213EBAFFB2711D007 (U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<Receive>d__36>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_m07FF840C2CE7E01D8711874ADF30714BDFB78E17 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6**, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared)(__this, ___0_stateMachine, method);
}
// System.Void NativeWebSocket.WebSocket/<Close>d__37::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__37__ctor_m2A22F47BC4AA88116418665753115255D4EC8B87 (U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<Close>d__37>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_mECD355B8A44C9E25ADD347202CD79E36D7D11898 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA**, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4 (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// System.Net.WebSockets.ClientWebSocketOptions System.Net.WebSockets.ClientWebSocket::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ClientWebSocketOptions_t5FB2F0C705144B57583EDFB14A12FCB0583FC19C* ClientWebSocket_get_Options_mEB09171A7134836DF9CA3A811334D527BECDFED6_inline (ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* __this, const RuntimeMethod* method) ;
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
// System.Void System.Net.WebSockets.ClientWebSocketOptions::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientWebSocketOptions_SetRequestHeader_mA5F6BB6132CF5A5B2A477F38DE66DB6B149D9B1D (ClientWebSocketOptions_t5FB2F0C705144B57583EDFB14A12FCB0583FC19C* __this, String_t* ___0_headerName, String_t* ___1_headerValue, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Net.WebSockets.ClientWebSocketOptions::AddSubProtocol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientWebSocketOptions_AddSubProtocol_m33B989A54FBF2DEE8A7C2C3AC40ED488E5044973 (ClientWebSocketOptions_t5FB2F0C705144B57583EDFB14A12FCB0583FC19C* __this, String_t* ___0_subProtocol, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Net.WebSockets.ClientWebSocket::ConnectAsync(System.Uri,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ClientWebSocket_ConnectAsync_m66E32FDD7E68FAF34A71DDAC72D948B93C6E6082 (ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_uri, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<Connect>d__27>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_m8499003A9CEFB87ED901A2CB53A6631317E1DEA1 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_inline (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Receive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Receive_m5C8ADEEE62E8385A70E5F0ECB66C0A8A11629729 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_inline (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_inline (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Boolean System.Threading.Monitor::TryEnter(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_TryEnter_m89907881926C57B9AA956150686CA49B013F3B24 (RuntimeObject* ___0_obj, int32_t ___1_millisecondsTimeout, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<SendMessage>d__32>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_m088E13E5D4FA5CE6023A08F499A235D5C76E3E41 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Threading.Tasks.Task::Wait(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Wait_m7EDB332683CB70654D6D89AC6EFD990F8249306B (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::HandleQueue(System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>,System.Net.WebSockets.WebSocketMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_HandleQueue_m0FF9D971AB3DA5FA8C1144E8823BA3944BE587F6 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ___0_queue, int32_t ___1_messageType, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::Add(T)
inline void List_1_Add_mF7134F9420DF47E26B6E714015DBB2CBFF5BC1DB_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, const RuntimeMethod*))List_1_Add_mF7134F9420DF47E26B6E714015DBB2CBFF5BC1DB_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Count()
inline int32_t List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*, const RuntimeMethod*))List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Item(System.Int32)
inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770 (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 (*) (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*, int32_t, const RuntimeMethod*))List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m4EDF2363B7349132ACF4E0A84CEEE5A680BC6004 (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m4EDF2363B7349132ACF4E0A84CEEE5A680BC6004_gshared)(__this, ___0_index, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<HandleQueue>d__33>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_m99BCDC069A53D6ED34F0AD3101CE9C1D1133BEFC (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void NativeWebSocket.WaitForBackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForBackgroundThread__ctor_m5FA299CF241DBDAD9413498751323F62D1D325FC (WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter NativeWebSocket.WaitForBackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 WaitForBackgroundThread_GetAwaiter_m46658C23E3A73C971C6156466AF6645E1F1D85C8 (WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,NativeWebSocket.WebSocket/<Receive>d__36>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mD658E4E68D94E87881C3DBF621CBEFD9EE3C07E1 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisRuntimeObject_m1655EB11BC45B4E6C33A133DDD84092A2FF0543B_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>::GetAwaiter()
inline TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4 Task_1_GetAwaiter_mBDA5969E9CC3D2A99ADCDF5DDB0E44448035CB8B (Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4 (*) (Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m4782CA3577F6DE2D5857AD8F7EE9C1B2A4D82107 (TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult>,NativeWebSocket.WebSocket/<Receive>d__36>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mF7CDEFCFE2378E69A4CD54D3CB3DF32E8C8ABE0A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4* ___0_awaiter, U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4*, U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m0E4A3F3D0E99E62AE6305318EB422A88B8D36DC4_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult>::GetResult()
inline WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* TaskAwaiter_1_GetResult_m8BD0D19C1FECD5AA3D9EA1EC4E5943D0C489F6FC (TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4* __this, const RuntimeMethod* method)
{
	return ((  WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* (*) (TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// System.Int32 System.Net.WebSockets.WebSocketReceiveResult::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebSocketReceiveResult_get_Count_mCD1591C6EAFAA98DDEBA26821531A80EB9E614C6_inline (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.WebSockets.WebSocketReceiveResult::get_EndOfMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebSocketReceiveResult_get_EndOfMessage_mC01D0E54A8A32BB01FC96087AA5B3ACB07EB062A_inline (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* __this, const RuntimeMethod* method) ;
// System.Net.WebSockets.WebSocketMessageType System.Net.WebSockets.WebSocketReceiveResult::get_MessageType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebSocketReceiveResult_get_MessageType_m227E3FB536FEC68E06F1070195AF20BD032EBF50_inline (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Close_m8EF33167E215E9898AF33A787C3E9FABCBB789E3 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<Receive>d__36>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_m9F6F0B441830D4655FA0534376E13DCAC36BBF46 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> System.Net.WebSockets.WebSocketReceiveResult::get_CloseStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 WebSocketReceiveResult_get_CloseStatus_mEE75E1D6F7984C897FB02A84D36842451AE089E4_inline (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>::get_Value()
inline int32_t Nullable_1_get_Value_mC672310507957782353FEB9D28F8FE9708AAB736 (Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_m836B8A2B93FCA3807BA213AF89C6DDA82FBEA49C (int32_t ___0_closeCode, const RuntimeMethod* method) ;
// System.Void WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_mFF05044547F6948426D9D97EE983E27CA0779A72 (WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468* __this, const RuntimeMethod* method) ;
// WaitForUpdate/MainThreadAwaiter WaitForUpdate::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* WaitForUpdate_GetAwaiter_m0AFC1E5EEBB62B1D5A4C7518105E62D19C3A5E09 (WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468* __this, const RuntimeMethod* method) ;
// System.Boolean WaitForUpdate/MainThreadAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MainThreadAwaiter_get_IsCompleted_mAABDD292AFFB6638820C22103692B70BBB7AD9F0_inline (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<WaitForUpdate/MainThreadAwaiter,NativeWebSocket.WebSocket/<Receive>d__36>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisMainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mD1B717CADBAED093CEE35D6C9A2B3E4B856C4B38 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71** ___0_awaiter, U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71**, U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_mB0BA7C66B9A5FF7708FEF4A2B98589DD6D63F34A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void WaitForUpdate/MainThreadAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_GetResult_mE7D7A67486FC52CB3D382089C1449DAC4E511F1E (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<Close>d__37>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_mEBFC7689038F82B343993364821326C6092FDB1A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_url, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_headers, const RuntimeMethod* method) ;
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
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* MainThreadUtil_get_Instance_mACAAECA4BF768341AD32A92592C6970ED302C4D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_0 = ((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mCC9E86FB5D6CA9E9765DA15CEAC40A2097FA7B1D (MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_0 = ___0_value;
		((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* MainThreadUtil_get_synchronizationContext_m2E8C4435E5F339E3F95FB164BFF66EAF654ED43B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_mCAAE2E112A6B05340E0642270FEBAA1D1912E5F7 (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___0_value;
		((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void MainThreadUtil::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Setup_m8814A6CE6BF068CF3511EFE9AD1EB94267EC6219 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_m92E71D16AF61352A6E7148033389DE22ACB6CE74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral479625953694FC0583C3D8F93F44332026972846);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = new GameObject("MainThreadUtil")
		//     .AddComponent<MainThreadUtil>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral479625953694FC0583C3D8F93F44332026972846, NULL);
		NullCheck(L_0);
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_1;
		L_1 = GameObject_AddComponent_TisMainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_m92E71D16AF61352A6E7148033389DE22ACB6CE74(L_0, GameObject_AddComponent_TisMainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_m92E71D16AF61352A6E7148033389DE22ACB6CE74_RuntimeMethod_var);
		MainThreadUtil_set_Instance_mCC9E86FB5D6CA9E9765DA15CEAC40A2097FA7B1D_inline(L_1, NULL);
		// synchronizationContext = SynchronizationContext.Current;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_2;
		L_2 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		MainThreadUtil_set_synchronizationContext_mCAAE2E112A6B05340E0642270FEBAA1D1912E5F7_inline(L_2, NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_m8FB282D6410D1AB9BDBF301FE5457B77B5A2F496 (RuntimeObject* ___0_waitForUpdate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m0F3B58C434FCB0B603320CFBF1E7FF116BC3DE56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* L_0 = (U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_mB06DBF3AB8930EE0AB977D79A03FC4D95CF378C1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* L_1 = V_0;
		RuntimeObject* L_2 = ___0_waitForUpdate;
		NullCheck(L_1);
		L_1->___waitForUpdate_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___waitForUpdate_0), (void*)L_2);
		// synchronizationContext.Post(_ => Instance.StartCoroutine(
		//             waitForUpdate), null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3;
		L_3 = MainThreadUtil_get_synchronizationContext_m2E8C4435E5F339E3F95FB164BFF66EAF654ED43B_inline(NULL);
		U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* L_4 = V_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_5 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m0F3B58C434FCB0B603320CFBF1E7FF116BC3DE56_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Awake_mEF6BB0CDCBD7D36EE831BB64866819ECF768A788 (MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.hideFlags = HideFlags.HideAndDontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_0, ((int32_t)61), NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil__ctor_m6CB94A0F19A70BBE196A8EA7524BBB2E1CC602F8 (MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* __this, const RuntimeMethod* method) 
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
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mB06DBF3AB8930EE0AB977D79A03FC4D95CF378C1 (U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MainThreadUtil/<>c__DisplayClass9_0::<Run>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m0F3B58C434FCB0B603320CFBF1E7FF116BC3DE56 (U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* __this, RuntimeObject* ___0__, const RuntimeMethod* method) 
{
	{
		// synchronizationContext.Post(_ => Instance.StartCoroutine(
		//             waitForUpdate), null);
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_0;
		L_0 = MainThreadUtil_get_Instance_mACAAECA4BF768341AD32A92592C6970ED302C4D2_inline(NULL);
		RuntimeObject* L_1 = __this->___waitForUpdate_0;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
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
// System.Boolean WaitForUpdate::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForUpdate_get_keepWaiting_m480490B3002E6F4BE3ACB3DB39E92097CF3B4B01 (WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return false; }
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return false; }
		bool L_0 = V_0;
		return L_0;
	}
}
// WaitForUpdate/MainThreadAwaiter WaitForUpdate::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* WaitForUpdate_GetAwaiter_m0AFC1E5EEBB62B1D5A4C7518105E62D19C3A5E09 (WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* V_0 = NULL;
	MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* V_1 = NULL;
	{
		// var awaiter = new MainThreadAwaiter();
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_0 = (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71*)il2cpp_codegen_object_new(MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MainThreadAwaiter__ctor_m3540C6B9BCACE777A12635C545A3CC2A294E757A(L_0, NULL);
		V_0 = L_0;
		// MainThreadUtil.Run(CoroutineWrapper(this, awaiter));
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = WaitForUpdate_CoroutineWrapper_m11E499E7DE7F929488E0AAC0F2307E6A45A54EB7(__this, L_1, NULL);
		MainThreadUtil_Run_m8FB282D6410D1AB9BDBF301FE5457B77B5A2F496(L_2, NULL);
		// return awaiter;
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_4 = V_1;
		return L_4;
	}
}
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_m11E499E7DE7F929488E0AAC0F2307E6A45A54EB7 (RuntimeObject* ___0_theWorker, MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* ___1_awaiter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* L_0 = (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF*)il2cpp_codegen_object_new(U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoroutineWrapperU3Ed__4__ctor_mFCB32C22F75BF38ADEE0D6D437115B22C5C6A495(L_0, 0, NULL);
		U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* L_1 = L_0;
		RuntimeObject* L_2 = ___0_theWorker;
		NullCheck(L_1);
		L_1->___theWorker_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___theWorker_2), (void*)L_2);
		U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* L_3 = L_1;
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_4 = ___1_awaiter;
		NullCheck(L_3);
		L_3->___awaiter_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___awaiter_3), (void*)L_4);
		return L_3;
	}
}
// System.Void WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_mFF05044547F6948426D9D97EE983E27CA0779A72 (WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468* __this, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
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
// System.Boolean WaitForUpdate/MainThreadAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadAwaiter_get_IsCompleted_mAABDD292AFFB6638820C22103692B70BBB7AD9F0 (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_m2CC67562B58AED84A4D52BCB2F848C33414355FF (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCompletedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_GetResult_mE7D7A67486FC52CB3D382089C1449DAC4E511F1E (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) 
{
	{
		// public void GetResult() { }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_mC13A5BC24DB6EB6DE1A605A5BFBD634969A0F4FC (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// IsCompleted = true;
		MainThreadAwaiter_set_IsCompleted_m2CC67562B58AED84A4D52BCB2F848C33414355FF_inline(__this, (bool)1, NULL);
		// continuation?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		goto IL_001b;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_mBDF459C9C554139C6387EEF57F7208FAC3F53C5D (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	{
		// this.continuation = continuation;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_continuation;
		__this->___continuation_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___continuation_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_m3540C6B9BCACE777A12635C545A3CC2A294E757A (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) 
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
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_mFCB32C22F75BF38ADEE0D6D437115B22C5C6A495 (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_IDisposable_Dispose_m4E2553F7993D8E896A9A9D39DB84FE14B3B3885A (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WaitForUpdate/<CoroutineWrapper>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutineWrapperU3Ed__4_MoveNext_mECC93C8D079EA70C248B6C6D3430CFB03A8D5BC7 (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0035;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return theWorker;
		RuntimeObject* L_3 = __this->___theWorker_2;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0035:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete();
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_4 = __this->___awaiter_3;
		NullCheck(L_4);
		MainThreadAwaiter_Complete_mC13A5BC24DB6EB6DE1A605A5BFBD634969A0F4FC(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoroutineWrapperU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5D385EA010E507ECC7562AEF0B8E412C1CF41896 (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m3D82EC56DC7C2A43849959484D39F01B7857B5A3 (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m3D82EC56DC7C2A43849959484D39F01B7857B5A3_RuntimeMethod_var)));
	}
}
// System.Object WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_get_Current_mADB1E2B7913828E96AED6E88B320052BA26B2E0C (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, const RuntimeMethod* method) 
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
void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_Multicast(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* currentDelegate = reinterpret_cast<WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_OpenInst(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_OpenStatic(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_OpenStaticInvoker(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_ClosedStaticInvoker(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_m9C0F1F9240E959710FE2E7F9F1F97AF5D3D440AF (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_Multicast;
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketOpenEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketOpenEventHandler_BeginInvoke_mEA31CB521D6AC0C6BEDF2715BDF7292E51E7B5AF (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_EndInvoke_m2FE99EBFFE5ABE6192E1928A42471BEF3F9AAA43 (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_Multicast(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* currentDelegate = reinterpret_cast<WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenInst(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_data, method);
}
void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenStatic(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_data, method);
}
void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenStaticInvoker(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_data);
}
void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_ClosedStaticInvoker(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_data);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_data' to native representation
	uint8_t* ____0_data_marshaled = NULL;
	if (___0_data != NULL)
	{
		____0_data_marshaled = reinterpret_cast<uint8_t*>((___0_data)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_data_marshaled);

}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_m15BC0672C78EDC192A2ECACCD3B9762149A5A7A8 (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_Multicast;
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350 (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketMessageEventHandler::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketMessageEventHandler_BeginInvoke_m93F2144C9CCDF9658BC703DBBA00D94F6FA181ED (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_data;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_EndInvoke_m9BE9B6B8580AD8283FD29A5FD1430C71AD4C8463 (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_Multicast(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* currentDelegate = reinterpret_cast<WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_errorMsg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenInst(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	NullCheck(___0_errorMsg);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_errorMsg, method);
}
void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenStatic(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_errorMsg, method);
}
void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenStaticInvoker(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_errorMsg);
}
void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_ClosedStaticInvoker(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_errorMsg);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_errorMsg' to native representation
	char* ____0_errorMsg_marshaled = NULL;
	____0_errorMsg_marshaled = il2cpp_codegen_marshal_string(___0_errorMsg);

	// Native function invocation
	il2cppPInvokeFunc(____0_errorMsg_marshaled);

	// Marshaling cleanup of parameter '___0_errorMsg' native representation
	il2cpp_codegen_marshal_free(____0_errorMsg_marshaled);
	____0_errorMsg_marshaled = NULL;

}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_m57F2C1BA800F30F50FD411F8461AAA24D40FBAF9 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_Multicast;
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_errorMsg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketErrorEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketErrorEventHandler_BeginInvoke_m11A21D70CBFADF4206B3DD7BB1A34C8C83B2DF47 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_errorMsg;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_EndInvoke_m3E7CE2E3744A74B8B46ABB6EDED79AB87D0079CD (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_Multicast(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* currentDelegate = reinterpret_cast<WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_closeCode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_OpenInst(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_closeCode, method);
}
void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_OpenStatic(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_closeCode, method);
}
void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_OpenStaticInvoker(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_closeCode);
}
void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_ClosedStaticInvoker(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_closeCode);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466 (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_closeCode);

}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_mCF39CA9F24C0F9804D5B6E51EF946CEB60142764 (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_Multicast;
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_closeCode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketCloseEventHandler::BeginInvoke(NativeWebSocket.WebSocketCloseCode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketCloseEventHandler_BeginInvoke_mD3B7F3CABD0626BE1DA93B329A21A1325ACC718B (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_il2cpp_TypeInfo_var, &___0_closeCode);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_EndInvoke_m56CC8B8002B2A3C71BEC88F0419370914DB66D2B (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_m836B8A2B93FCA3807BA213AF89C6DDA82FBEA49C (int32_t ___0_closeCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (WebSocketCloseCode.IsDefined(typeof(WebSocketCloseCode), closeCode))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___0_closeCode;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_1, L_4, NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		// return (WebSocketCloseCode)closeCode;
		int32_t L_7 = ___0_closeCode;
		V_1 = L_7;
		goto IL_0028;
	}

IL_001f:
	{
		// return WebSocketCloseCode.Undefined;
		V_1 = ((int32_t)1004);
		goto IL_0028;
	}

IL_0028:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// NativeWebSocket.WebSocketException NativeWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* WebSocketHelpers_GetErrorMessageFromCode_m79662BAFD5D32C7F8652DF7FE8619344D7DAD5EB (int32_t ___0_errorCode, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1742337439BBC66D76773857596C8E79F12FE929);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* V_2 = NULL;
	{
		// switch (errorCode)
		int32_t L_0 = ___0_errorCode;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)-7))))
		{
			case 0:
			{
				goto IL_0080;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0048;
			}
			case 5:
			{
				goto IL_003a;
			}
			case 6:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_002c:
	{
		// return new WebSocketUnexpectedException("WebSocket instance not found.", inner);
		Exception_t* L_3 = ___1_inner;
		WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* L_4 = (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06*)il2cpp_codegen_object_new(WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WebSocketUnexpectedException__ctor_mC5A752D3BD5F838A648F5378A95EF97C0BEBB542(L_4, _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B, L_3, NULL);
		V_2 = L_4;
		goto IL_009c;
	}

IL_003a:
	{
		// return new WebSocketInvalidStateException("WebSocket is already connected or in connecting state.", inner);
		Exception_t* L_5 = ___1_inner;
		WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* L_6 = (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)il2cpp_codegen_object_new(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B(L_6, _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48, L_5, NULL);
		V_2 = L_6;
		goto IL_009c;
	}

IL_0048:
	{
		// return new WebSocketInvalidStateException("WebSocket is not connected.", inner);
		Exception_t* L_7 = ___1_inner;
		WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* L_8 = (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)il2cpp_codegen_object_new(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B(L_8, _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612, L_7, NULL);
		V_2 = L_8;
		goto IL_009c;
	}

IL_0056:
	{
		// return new WebSocketInvalidStateException("WebSocket is already closing.", inner);
		Exception_t* L_9 = ___1_inner;
		WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* L_10 = (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)il2cpp_codegen_object_new(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B(L_10, _stringLiteral1742337439BBC66D76773857596C8E79F12FE929, L_9, NULL);
		V_2 = L_10;
		goto IL_009c;
	}

IL_0064:
	{
		// return new WebSocketInvalidStateException("WebSocket is already closed.", inner);
		Exception_t* L_11 = ___1_inner;
		WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* L_12 = (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)il2cpp_codegen_object_new(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B(L_12, _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C, L_11, NULL);
		V_2 = L_12;
		goto IL_009c;
	}

IL_0072:
	{
		// return new WebSocketInvalidStateException("WebSocket is not in open state.", inner);
		Exception_t* L_13 = ___1_inner;
		WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* L_14 = (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)il2cpp_codegen_object_new(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B(L_14, _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A, L_13, NULL);
		V_2 = L_14;
		goto IL_009c;
	}

IL_0080:
	{
		// return new WebSocketInvalidArgumentException("Cannot close WebSocket. An invalid code was specified or reason is too long.", inner);
		Exception_t* L_15 = ___1_inner;
		WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979* L_16 = (WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979*)il2cpp_codegen_object_new(WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WebSocketInvalidArgumentException__ctor_m46EB1E930E8BC5B9E4E42594C205D876A26C1C7C(L_16, _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69, L_15, NULL);
		V_2 = L_16;
		goto IL_009c;
	}

IL_008e:
	{
		// return new WebSocketUnexpectedException("Unknown error.", inner);
		Exception_t* L_17 = ___1_inner;
		WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* L_18 = (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06*)il2cpp_codegen_object_new(WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WebSocketUnexpectedException__ctor_mC5A752D3BD5F838A648F5378A95EF97C0BEBB542(L_18, _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D, L_17, NULL);
		V_2 = L_18;
		goto IL_009c;
	}

IL_009c:
	{
		// }
		WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* L_19 = V_2;
		return L_19;
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
// System.Void NativeWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m157EADEEBE6A00DC1EFCB69566CECD6C03A249C0 (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException() { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public WebSocketException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mEE531950700010B746626D9EC8055577FE09B7C8 (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException(string message) : base(message) { }
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public WebSocketException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mD588369E6718B3CF063B52BF1DF124C03E623C5B (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// public WebSocketException(string message, Exception inner) : base(message, inner) { }
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
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m49EC20BE0F5BED5F23A5ADDE4054199310DB4B4D (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* __this, const RuntimeMethod* method) 
{
	{
		// public WebSocketUnexpectedException() { }
		WebSocketException__ctor_m157EADEEBE6A00DC1EFCB69566CECD6C03A249C0(__this, NULL);
		// public WebSocketUnexpectedException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m880085532CEAF9A2ED0D623EFDF7AE279FC03E4F (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public WebSocketUnexpectedException(string message) : base(message) { }
		String_t* L_0 = ___0_message;
		WebSocketException__ctor_mEE531950700010B746626D9EC8055577FE09B7C8(__this, L_0, NULL);
		// public WebSocketUnexpectedException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mC5A752D3BD5F838A648F5378A95EF97C0BEBB542 (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	{
		// public WebSocketUnexpectedException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		WebSocketException__ctor_mD588369E6718B3CF063B52BF1DF124C03E623C5B(__this, L_0, L_1, NULL);
		// public WebSocketUnexpectedException(string message, Exception inner) : base(message, inner) { }
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
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_mFFE10926149E92DE51FFB0B026CCFA72DC096EB6 (WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979* __this, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidArgumentException() { }
		WebSocketException__ctor_m157EADEEBE6A00DC1EFCB69566CECD6C03A249C0(__this, NULL);
		// public WebSocketInvalidArgumentException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m8785E6A477242477FB69E4F7F6268D9D5ADC48DC (WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidArgumentException(string message) : base(message) { }
		String_t* L_0 = ___0_message;
		WebSocketException__ctor_mEE531950700010B746626D9EC8055577FE09B7C8(__this, L_0, NULL);
		// public WebSocketInvalidArgumentException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m46EB1E930E8BC5B9E4E42594C205D876A26C1C7C (WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidArgumentException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		WebSocketException__ctor_mD588369E6718B3CF063B52BF1DF124C03E623C5B(__this, L_0, L_1, NULL);
		// public WebSocketInvalidArgumentException(string message, Exception inner) : base(message, inner) { }
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
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m7054E83B2115F5B81C8FC991D97D856AAC88CBFB (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* __this, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidStateException() { }
		WebSocketException__ctor_m157EADEEBE6A00DC1EFCB69566CECD6C03A249C0(__this, NULL);
		// public WebSocketInvalidStateException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mBABAE6E35C4B57372A4F5AA8E82984C7C92FDBCC (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidStateException(string message) : base(message) { }
		String_t* L_0 = ___0_message;
		WebSocketException__ctor_mEE531950700010B746626D9EC8055577FE09B7C8(__this, L_0, NULL);
		// public WebSocketInvalidStateException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidStateException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		WebSocketException__ctor_mD588369E6718B3CF063B52BF1DF124C03E623C5B(__this, L_0, L_1, NULL);
		// public WebSocketInvalidStateException(string message, Exception inner) : base(message, inner) { }
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
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter NativeWebSocket.WaitForBackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 WaitForBackgroundThread_GetAwaiter_m46658C23E3A73C971C6156466AF6645E1F1D85C8 (WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mFDD0FD9389C71F771348ADE10DAA60AB7ECDD980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* L_2 = ((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mFDD0FD9389C71F771348ADE10DAA60AB7ECDD980_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(G_B2_0, NULL);
		NullCheck(L_5);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_6;
		L_6 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_5, (bool)0, NULL);
		V_0 = L_6;
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_7;
		L_7 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_0), NULL);
		V_1 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_8 = V_1;
		return L_8;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForBackgroundThread__ctor_m5FA299CF241DBDAD9413498751323F62D1D325FC (WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F* __this, const RuntimeMethod* method) 
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
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA16E073715862776C372EB8D0AAF7C4DBAD7F077 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* L_0 = (U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9*)il2cpp_codegen_object_new(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3B0196104B567545C8C9E67C81D37C8CCDC57F5F(L_0, NULL);
		((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B0196104B567545C8C9E67C81D37C8CCDC57F5F (U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::<GetAwaiter>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mFDD0FD9389C71F771348ADE10DAA60AB7ECDD980 (U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* __this, const RuntimeMethod* method) 
{
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
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
// System.Void NativeWebSocket.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_mE4848C3EB53A6CF346B790895D636D7A8BA4DDA3 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_0 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_1 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_2 = NULL;
	{
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_0 = __this->___OnOpen_0;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_2 = V_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E** L_5 = (&__this->___OnOpen_0);
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_6 = V_2;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_7 = V_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_9 = V_0;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnOpen_mD70BF7EE68490BB802CA3F20DC891F32CB8248AD (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_0 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_1 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_2 = NULL;
	{
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_0 = __this->___OnOpen_0;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_2 = V_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E** L_5 = (&__this->___OnOpen_0);
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_6 = V_2;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_7 = V_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_9 = V_0;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_mB2D438685DB29D57498A0AC6BEF756F5FEB0BDE5 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_0 = NULL;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_1 = NULL;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_2 = NULL;
	{
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_0 = __this->___OnMessage_1;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_2 = V_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C** L_5 = (&__this->___OnMessage_1);
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_6 = V_2;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_7 = V_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_9 = V_0;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnMessage_m4B642AAA23B71F53A5A2ADEC0872384C4917EB94 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_0 = NULL;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_1 = NULL;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_2 = NULL;
	{
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_0 = __this->___OnMessage_1;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_2 = V_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C** L_5 = (&__this->___OnMessage_1);
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_6 = V_2;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_7 = V_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_9 = V_0;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_mA10F34789A6C13F5AA64EC0F35D45ED4EDCDABA0 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_0 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_1 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_2 = NULL;
	{
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_0 = __this->___OnError_2;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_2 = V_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3** L_5 = (&__this->___OnError_2);
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_6 = V_2;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_7 = V_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_9 = V_0;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnError_m908C41B83BB34AFE942A97981C1C048B5C050AD7 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_0 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_1 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_2 = NULL;
	{
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_0 = __this->___OnError_2;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_2 = V_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3** L_5 = (&__this->___OnError_2);
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_6 = V_2;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_7 = V_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_9 = V_0;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m5D0A672A02F5BF6252DA825D7AB7EFC1020C2B4A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_0 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_1 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_2 = NULL;
	{
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_0 = __this->___OnClose_3;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_2 = V_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466** L_5 = (&__this->___OnClose_3);
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_6 = V_2;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_7 = V_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_9 = V_0;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnClose_m051BE16B74A02FA76B6B33E8E8AFBA7411F9177C (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_0 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_1 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_2 = NULL;
	{
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_0 = __this->___OnClose_3;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_2 = V_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466** L_5 = (&__this->___OnClose_3);
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_6 = V_2;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_7 = V_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_9 = V_0;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_url, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	{
		// private ClientWebSocket m_Socket = new ClientWebSocket();
		ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_0 = (ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F*)il2cpp_codegen_object_new(ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ClientWebSocket__ctor_m75DD6220EA55DB5AEEA0AEE5E5809885EE52E138(L_0, NULL);
		__this->___m_Socket_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Socket_7), (void*)L_0);
		// private readonly object OutgoingMessageLock = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___OutgoingMessageLock_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OutgoingMessageLock_10), (void*)L_1);
		// private readonly object IncomingMessageLock = new object();
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		__this->___IncomingMessageLock_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IncomingMessageLock_11), (void*)L_2);
		// private bool isSending = false;
		__this->___isSending_12 = (bool)0;
		// private List<ArraySegment<byte>> sendBytesQueue = new List<ArraySegment<byte>>();
		List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_3 = (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*)il2cpp_codegen_object_new(List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78(L_3, List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_RuntimeMethod_var);
		__this->___sendBytesQueue_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sendBytesQueue_13), (void*)L_3);
		// private List<ArraySegment<byte>> sendTextQueue = new List<ArraySegment<byte>>();
		List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_4 = (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*)il2cpp_codegen_object_new(List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78(L_4, List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_RuntimeMethod_var);
		__this->___sendTextQueue_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sendTextQueue_14), (void*)L_4);
		// private List<byte[]> m_MessageList = new List<byte[]>();
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_5, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___m_MessageList_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MessageList_15), (void*)L_5);
		// public WebSocket(string url, Dictionary<string, string> headers = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// uri = new Uri(url);
		String_t* L_6 = ___0_url;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_7 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_7, L_6, NULL);
		__this->___uri_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uri_4), (void*)L_7);
		// if (headers == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = ___1_headers;
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		// this.headers = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_10, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___headers_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headers_5), (void*)L_10);
		goto IL_007d;
	}

IL_0074:
	{
		// this.headers = headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = ___1_headers;
		__this->___headers_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headers_5), (void*)L_11);
	}

IL_007d:
	{
		// subprotocols = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_12, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___subprotocols_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subprotocols_6), (void*)L_12);
		// string protocol = uri.Scheme;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_13 = __this->___uri_4;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_13, NULL);
		V_0 = L_14;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_15, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, NULL);
		if (L_16)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_17 = V_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_17, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, NULL);
		G_B6_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B6_0 = 0;
	}

IL_00b2:
	{
		V_2 = (bool)G_B6_0;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00c7;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_20 = V_0;
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5)), L_20, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24_RuntimeMethod_var)));
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mBFF4356E4E9DE13DE725B70833E8A2397B35A401 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_url, String_t* ___1_subprotocol, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___2_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	{
		// private ClientWebSocket m_Socket = new ClientWebSocket();
		ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_0 = (ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F*)il2cpp_codegen_object_new(ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ClientWebSocket__ctor_m75DD6220EA55DB5AEEA0AEE5E5809885EE52E138(L_0, NULL);
		__this->___m_Socket_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Socket_7), (void*)L_0);
		// private readonly object OutgoingMessageLock = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___OutgoingMessageLock_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OutgoingMessageLock_10), (void*)L_1);
		// private readonly object IncomingMessageLock = new object();
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		__this->___IncomingMessageLock_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IncomingMessageLock_11), (void*)L_2);
		// private bool isSending = false;
		__this->___isSending_12 = (bool)0;
		// private List<ArraySegment<byte>> sendBytesQueue = new List<ArraySegment<byte>>();
		List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_3 = (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*)il2cpp_codegen_object_new(List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78(L_3, List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_RuntimeMethod_var);
		__this->___sendBytesQueue_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sendBytesQueue_13), (void*)L_3);
		// private List<ArraySegment<byte>> sendTextQueue = new List<ArraySegment<byte>>();
		List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_4 = (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*)il2cpp_codegen_object_new(List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78(L_4, List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_RuntimeMethod_var);
		__this->___sendTextQueue_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sendTextQueue_14), (void*)L_4);
		// private List<byte[]> m_MessageList = new List<byte[]>();
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_5, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___m_MessageList_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MessageList_15), (void*)L_5);
		// public WebSocket(string url, string subprotocol, Dictionary<string, string> headers = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// uri = new Uri(url);
		String_t* L_6 = ___0_url;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_7 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_7, L_6, NULL);
		__this->___uri_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uri_4), (void*)L_7);
		// if (headers == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = ___2_headers;
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		// this.headers = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_10, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___headers_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headers_5), (void*)L_10);
		goto IL_007d;
	}

IL_0074:
	{
		// this.headers = headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = ___2_headers;
		__this->___headers_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headers_5), (void*)L_11);
	}

IL_007d:
	{
		// subprotocols = new List<string> {subprotocol};
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_12, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = L_12;
		String_t* L_14 = ___1_subprotocol;
		NullCheck(L_13);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___subprotocols_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subprotocols_6), (void*)L_13);
		// string protocol = uri.Scheme;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_15 = __this->___uri_4;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_15, NULL);
		V_0 = L_16;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_17 = V_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_17, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, NULL);
		if (L_18)
		{
			goto IL_00b9;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		bool L_20;
		L_20 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_19, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, NULL);
		G_B6_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_00ba;
	}

IL_00b9:
	{
		G_B6_0 = 0;
	}

IL_00ba:
	{
		V_2 = (bool)G_B6_0;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_00cf;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_22 = V_0;
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5)), L_22, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_24, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket__ctor_mBFF4356E4E9DE13DE725B70833E8A2397B35A401_RuntimeMethod_var)));
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m587EE74CAC1152DE4889BC903EAF666EDB6A484A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_url, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_subprotocols, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___2_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	{
		// private ClientWebSocket m_Socket = new ClientWebSocket();
		ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_0 = (ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F*)il2cpp_codegen_object_new(ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ClientWebSocket__ctor_m75DD6220EA55DB5AEEA0AEE5E5809885EE52E138(L_0, NULL);
		__this->___m_Socket_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Socket_7), (void*)L_0);
		// private readonly object OutgoingMessageLock = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___OutgoingMessageLock_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OutgoingMessageLock_10), (void*)L_1);
		// private readonly object IncomingMessageLock = new object();
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		__this->___IncomingMessageLock_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IncomingMessageLock_11), (void*)L_2);
		// private bool isSending = false;
		__this->___isSending_12 = (bool)0;
		// private List<ArraySegment<byte>> sendBytesQueue = new List<ArraySegment<byte>>();
		List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_3 = (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*)il2cpp_codegen_object_new(List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78(L_3, List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_RuntimeMethod_var);
		__this->___sendBytesQueue_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sendBytesQueue_13), (void*)L_3);
		// private List<ArraySegment<byte>> sendTextQueue = new List<ArraySegment<byte>>();
		List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_4 = (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*)il2cpp_codegen_object_new(List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78(L_4, List_1__ctor_m6B96ACFF1ABEC3990FDCA24946E82E6D1D92CF78_RuntimeMethod_var);
		__this->___sendTextQueue_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sendTextQueue_14), (void*)L_4);
		// private List<byte[]> m_MessageList = new List<byte[]>();
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_5, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___m_MessageList_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MessageList_15), (void*)L_5);
		// public WebSocket(string url, List<string> subprotocols, Dictionary<string, string> headers = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// uri = new Uri(url);
		String_t* L_6 = ___0_url;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_7 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_7, L_6, NULL);
		__this->___uri_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uri_4), (void*)L_7);
		// if (headers == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = ___2_headers;
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		// this.headers = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_10, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___headers_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headers_5), (void*)L_10);
		goto IL_007d;
	}

IL_0074:
	{
		// this.headers = headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = ___2_headers;
		__this->___headers_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headers_5), (void*)L_11);
	}

IL_007d:
	{
		// this.subprotocols = subprotocols;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = ___1_subprotocols;
		__this->___subprotocols_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subprotocols_6), (void*)L_12);
		// string protocol = uri.Scheme;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_13 = __this->___uri_4;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_13, NULL);
		V_0 = L_14;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_15, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, NULL);
		if (L_16)
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_17 = V_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_17, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, NULL);
		G_B6_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B6_0 = 0;
	}

IL_00ae:
	{
		V_2 = (bool)G_B6_0;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00c3;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_20 = V_0;
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5)), L_20, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket__ctor_m587EE74CAC1152DE4889BC903EAF666EDB6A484A_RuntimeMethod_var)));
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::CancelConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_CancelConnection_mABA9078D10A52EC11D01A37C34216DF28DB2EC16 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* G_B2_0 = NULL;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* G_B1_0 = NULL;
	{
		// m_TokenSource?.Cancel();
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->___m_TokenSource_8;
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(G_B2_0, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Connect_m6668D9F07FE1BFD16D5391B1AB8980FA740E705A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_mC5D31670F717EB7E1B2B5C9895DC3C9E7DF2B760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* V_0 = NULL;
	{
		U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* L_0 = (U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6*)il2cpp_codegen_object_new(U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CConnectU3Ed__27__ctor_mB92A141543AD597B6E676D4DAA98EB88E7D8879C(L_0, NULL);
		V_0 = L_0;
		U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_mC5D31670F717EB7E1B2B5C9895DC3C9E7DF2B760(L_6, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_mC5D31670F717EB7E1B2B5C9895DC3C9E7DF2B760_RuntimeMethod_var);
		U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_8, NULL);
		return L_9;
	}
}
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (m_Socket.State)
		ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_0 = __this->___m_Socket_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Net.WebSockets.WebSocketState System.Net.WebSockets.WebSocket::get_State() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_0039;
			}
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		// return WebSocketState.Connecting;
		V_2 = 0;
		goto IL_0041;
	}

IL_0031:
	{
		// return WebSocketState.Open;
		V_2 = 1;
		goto IL_0041;
	}

IL_0035:
	{
		// return WebSocketState.Closing;
		V_2 = 2;
		goto IL_0041;
	}

IL_0039:
	{
		// return WebSocketState.Closed;
		V_2 = 3;
		goto IL_0041;
	}

IL_003d:
	{
		// return WebSocketState.Closed;
		V_2 = 3;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		int32_t L_4 = V_2;
		return L_4;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Send_mD28BF1375EBB89AD846765454D361350BF604B97 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		// return SendMessage(sendBytesQueue, WebSocketMessageType.Binary, new ArraySegment<byte>(bytes));
		List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_0 = __this->___sendBytesQueue_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bytes;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_2), L_1, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = WebSocket_SendMessage_m28BD9EEC00184F6A416466BD4DC9B719E84786BA(__this, L_0, 1, L_2, NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_0;
		return L_4;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		// var encoded = Encoding.UTF8.GetBytes(message);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_message;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// return SendMessage(sendTextQueue, WebSocketMessageType.Text, new ArraySegment<byte>(encoded, 0, encoded.Length));
		List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_3 = __this->___sendTextQueue_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_6), L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = WebSocket_SendMessage_m28BD9EEC00184F6A416466BD4DC9B719E84786BA(__this, L_3, 0, L_6, NULL);
		V_1 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8 = V_1;
		return L_8;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendMessage(System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>,System.Net.WebSockets.WebSocketMessageType,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_SendMessage_m28BD9EEC00184F6A416466BD4DC9B719E84786BA (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ___0_queue, int32_t ___1_messageType, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_mB31F006FF606D32F7CA649B930620ADDE1B7701B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* V_0 = NULL;
	{
		U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* L_0 = (U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF*)il2cpp_codegen_object_new(U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendMessageU3Ed__32__ctor_m0A6CB26B45064818A6DACC8DD7C9712408D20AF4(L_0, NULL);
		V_0 = L_0;
		U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_5), (void*)__this);
		U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* L_4 = V_0;
		List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_5 = ___0_queue;
		NullCheck(L_4);
		L_4->___queue_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___queue_2), (void*)L_5);
		U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* L_6 = V_0;
		int32_t L_7 = ___1_messageType;
		NullCheck(L_6);
		L_6->___messageType_3 = L_7;
		U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* L_8 = V_0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_9 = ___2_buffer;
		NullCheck(L_8);
		L_8->___buffer_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_8->___buffer_4))->____array_1), (void*)NULL);
		U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* L_10 = V_0;
		NullCheck(L_10);
		L_10->___U3CU3E1__state_0 = (-1);
		U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* L_11 = V_0;
		NullCheck(L_11);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_12 = (&L_11->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_mB31F006FF606D32F7CA649B930620ADDE1B7701B(L_12, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_mB31F006FF606D32F7CA649B930620ADDE1B7701B_RuntimeMethod_var);
		U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* L_13 = V_0;
		NullCheck(L_13);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_14 = (&L_13->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_15;
		L_15 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_14, NULL);
		return L_15;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::HandleQueue(System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>,System.Net.WebSockets.WebSocketMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_HandleQueue_m0FF9D971AB3DA5FA8C1144E8823BA3944BE587F6 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ___0_queue, int32_t ___1_messageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_m781BC03854969572B3FED279F38E3BD48F0EF3A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* V_0 = NULL;
	{
		U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* L_0 = (U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E*)il2cpp_codegen_object_new(U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CHandleQueueU3Ed__33__ctor_mF1BC2491F7D4903090C9354C1B517B68EB294824(L_0, NULL);
		V_0 = L_0;
		U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_4), (void*)__this);
		U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* L_4 = V_0;
		List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_5 = ___0_queue;
		NullCheck(L_4);
		L_4->___queue_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___queue_2), (void*)L_5);
		U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* L_6 = V_0;
		int32_t L_7 = ___1_messageType;
		NullCheck(L_6);
		L_6->___messageType_3 = L_7;
		U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* L_8 = V_0;
		NullCheck(L_8);
		L_8->___U3CU3E1__state_0 = (-1);
		U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_10 = (&L_9->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_m781BC03854969572B3FED279F38E3BD48F0EF3A8(L_10, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_m781BC03854969572B3FED279F38E3BD48F0EF3A8_RuntimeMethod_var);
		U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* L_11 = V_0;
		NullCheck(L_11);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_12 = (&L_11->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_13;
		L_13 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_12, NULL);
		return L_13;
	}
}
// System.Void NativeWebSocket.WebSocket::DispatchMessageQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DispatchMessageQueue_mDA040E2402463DCE13B04120793B745AE72CC1D5 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* G_B10_0 = NULL;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* G_B9_0 = NULL;
	{
		// if (m_MessageList.Count == 0)
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_MessageList_15;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_0, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_008a;
	}

IL_0016:
	{
		// lock (IncomingMessageLock)
		RuntimeObject* L_3 = __this->___IncomingMessageLock_11;
		V_3 = L_3;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_4;
					if (!L_4)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_5 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_4), NULL);
			// messageListCopy = new List<byte[]>(m_MessageList);
			List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_7 = __this->___m_MessageList_15;
			List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_8 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E(L_8, L_7, List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var);
			V_0 = L_8;
			// m_MessageList.Clear();
			List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_9 = __this->___m_MessageList_15;
			NullCheck(L_9);
			List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_inline(L_9, List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var);
			goto IL_0051;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// var len = messageListCopy.Count;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_10, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		V_1 = L_11;
		// for (int i = 0; i < len; i++)
		V_5 = 0;
		goto IL_007f;
	}

IL_005d:
	{
		// OnMessage?.Invoke(messageListCopy[i]);
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_12 = __this->___OnMessage_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_13 = L_12;
		G_B9_0 = L_13;
		if (L_13)
		{
			G_B10_0 = L_13;
			goto IL_006a;
		}
	}
	{
		goto IL_0078;
	}

IL_006a:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_14 = V_0;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6(L_14, L_15, List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
		NullCheck(G_B10_0);
		WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_inline(G_B10_0, L_16, NULL);
	}

IL_0078:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_17 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_007f:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_18 = V_5;
		int32_t L_19 = V_1;
		V_6 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_6;
		if (L_20)
		{
			goto IL_005d;
		}
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Receive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Receive_m5C8ADEEE62E8385A70E5F0ECB66C0A8A11629729 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_m07FF840C2CE7E01D8711874ADF30714BDFB78E17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* V_0 = NULL;
	{
		U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* L_0 = (U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6*)il2cpp_codegen_object_new(U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReceiveU3Ed__36__ctor_m3CD4D99931C4A278A1FC8AC213EBAFFB2711D007(L_0, NULL);
		V_0 = L_0;
		U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_m07FF840C2CE7E01D8711874ADF30714BDFB78E17(L_6, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_m07FF840C2CE7E01D8711874ADF30714BDFB78E17_RuntimeMethod_var);
		U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_8, NULL);
		return L_9;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Close_m8EF33167E215E9898AF33A787C3E9FABCBB789E3 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_mECD355B8A44C9E25ADD347202CD79E36D7D11898_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* V_0 = NULL;
	{
		U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* L_0 = (U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA*)il2cpp_codegen_object_new(U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCloseU3Ed__37__ctor_m2A22F47BC4AA88116418665753115255D4EC8B87(L_0, NULL);
		V_0 = L_0;
		U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_mECD355B8A44C9E25ADD347202CD79E36D7D11898(L_6, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_mECD355B8A44C9E25ADD347202CD79E36D7D11898_RuntimeMethod_var);
		U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_8, NULL);
		return L_9;
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
// System.Void NativeWebSocket.WebSocket/<Connect>d__27::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__27__ctor_mB92A141543AD597B6E676D4DAA98EB88E7D8879C (U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<Connect>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__27_MoveNext_m6E504C7BDA5397D024AA28941AEB3E3BEFD02A6B (U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_m8499003A9CEFB87ED901A2CB53A6631317E1DEA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* G_B33_0 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* G_B32_0 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* G_B40_0 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* G_B39_0 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* G_B43_0 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* G_B42_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_000d_1;
			}
		}
		{
			goto IL_000f_1;
		}

IL_000d_1:
		{
			goto IL_0010_1;
		}

IL_000f_1:
		{
		}

IL_0010_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_02c6_1:
				{// begin finally (depth: 2)
					{
						int32_t L_2 = V_0;
						if ((((int32_t)L_2) >= ((int32_t)0)))
						{
							goto IL_0304_1;
						}
					}
					{
						// if (m_Socket != null)
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_3 = __this->___U3CU3E4__this_2;
						NullCheck(L_3);
						ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_4 = L_3->___m_Socket_7;
						V_5 = (bool)((!(((RuntimeObject*)(ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
						bool L_5 = V_5;
						if (!L_5)
						{
							goto IL_0303_1;
						}
					}
					{
						// m_TokenSource.Cancel();
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_6 = __this->___U3CU3E4__this_2;
						NullCheck(L_6);
						CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_7 = L_6->___m_TokenSource_8;
						NullCheck(L_7);
						CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(L_7, NULL);
						// m_Socket.Dispose();
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_8 = __this->___U3CU3E4__this_2;
						NullCheck(L_8);
						ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_9 = L_8->___m_Socket_7;
						NullCheck(L_9);
						VirtualActionInvoker0::Invoke(9 /* System.Void System.Net.WebSockets.WebSocket::Dispose() */, L_9);
					}

IL_0303_1:
					{
					}

IL_0304_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				try
				{// begin try (depth: 3)
					{
						int32_t L_10 = V_0;
						if (!L_10)
						{
							goto IL_001c_3;
						}
					}
					{
						goto IL_0016_3;
					}

IL_0016_3:
					{
						int32_t L_11 = V_0;
						if ((((int32_t)L_11) == ((int32_t)1)))
						{
							goto IL_0021_3;
						}
					}
					{
						goto IL_0026_3;
					}

IL_001c_3:
					{
						goto IL_01d5_3;
					}

IL_0021_3:
					{
						goto IL_0251_3;
					}

IL_0026_3:
					{
						// m_TokenSource = new CancellationTokenSource();
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_12 = __this->___U3CU3E4__this_2;
						CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_13 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
						NullCheck(L_13);
						CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_13, NULL);
						NullCheck(L_12);
						L_12->___m_TokenSource_8 = L_13;
						Il2CppCodeGenWriteBarrier((void**)(&L_12->___m_TokenSource_8), (void*)L_13);
						// m_CancellationToken = m_TokenSource.Token;
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_14 = __this->___U3CU3E4__this_2;
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_15 = __this->___U3CU3E4__this_2;
						NullCheck(L_15);
						CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_16 = L_15->___m_TokenSource_8;
						NullCheck(L_16);
						CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_17;
						L_17 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_16, NULL);
						NullCheck(L_14);
						L_14->___m_CancellationToken_9 = L_17;
						Il2CppCodeGenWriteBarrier((void**)&(((&L_14->___m_CancellationToken_9))->____source_0), (void*)NULL);
						// m_Socket = new ClientWebSocket();
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_18 = __this->___U3CU3E4__this_2;
						ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_19 = (ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F*)il2cpp_codegen_object_new(ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F_il2cpp_TypeInfo_var);
						NullCheck(L_19);
						ClientWebSocket__ctor_m75DD6220EA55DB5AEEA0AEE5E5809885EE52E138(L_19, NULL);
						NullCheck(L_18);
						L_18->___m_Socket_7 = L_19;
						Il2CppCodeGenWriteBarrier((void**)(&L_18->___m_Socket_7), (void*)L_19);
						// foreach (var header in headers)
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_20 = __this->___U3CU3E4__this_2;
						NullCheck(L_20);
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = L_20->___headers_5;
						NullCheck(L_21);
						Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_22;
						L_22 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_21, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
						__this->___U3CU3Es__1_3 = L_22;
						Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__1_3))->____dictionary_0), (void*)NULL);
						#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
						Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Es__1_3))->____current_3))->___key_0), (void*)NULL);
						#endif
						#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
						Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Es__1_3))->____current_3))->___value_1), (void*)NULL);
						#endif
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00d5_3:
							{// begin finally (depth: 4)
								{
									int32_t L_23 = V_0;
									if ((((int32_t)L_23) >= ((int32_t)0)))
									{
										goto IL_00eb_3;
									}
								}
								{
									Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_24 = (&__this->___U3CU3Es__1_3);
									Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD(L_24, Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
								}

IL_00eb_3:
								{
									return;
								}
							}// end finally (depth: 4)
						});
						try
						{// begin try (depth: 4)
							{
								goto IL_00c6_4;
							}

IL_007b_4:
							{
								// foreach (var header in headers)
								Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_25 = (&__this->___U3CU3Es__1_3);
								KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_26;
								L_26 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline(L_25, Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
								__this->___U3CheaderU3E5__2_4 = L_26;
								Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CheaderU3E5__2_4))->___key_0), (void*)NULL);
								#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
								Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CheaderU3E5__2_4))->___value_1), (void*)NULL);
								#endif
								// m_Socket.Options.SetRequestHeader(header.Key, header.Value);
								WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_27 = __this->___U3CU3E4__this_2;
								NullCheck(L_27);
								ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_28 = L_27->___m_Socket_7;
								NullCheck(L_28);
								ClientWebSocketOptions_t5FB2F0C705144B57583EDFB14A12FCB0583FC19C* L_29;
								L_29 = ClientWebSocket_get_Options_mEB09171A7134836DF9CA3A811334D527BECDFED6_inline(L_28, NULL);
								KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* L_30 = (&__this->___U3CheaderU3E5__2_4);
								String_t* L_31;
								L_31 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline(L_30, KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
								KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* L_32 = (&__this->___U3CheaderU3E5__2_4);
								String_t* L_33;
								L_33 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline(L_32, KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
								NullCheck(L_29);
								ClientWebSocketOptions_SetRequestHeader_mA5F6BB6132CF5A5B2A477F38DE66DB6B149D9B1D(L_29, L_31, L_33, NULL);
								KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* L_34 = (&__this->___U3CheaderU3E5__2_4);
								il2cpp_codegen_initobj(L_34, sizeof(KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A));
							}

IL_00c6_4:
							{
								// foreach (var header in headers)
								Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_35 = (&__this->___U3CU3Es__1_3);
								bool L_36;
								L_36 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438(L_35, Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
								if (L_36)
								{
									goto IL_007b_4;
								}
							}
							{
								goto IL_00ec_3;
							}
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_00ec_3:
					{
						Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_37 = (&__this->___U3CU3Es__1_3);
						il2cpp_codegen_initobj(L_37, sizeof(Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562));
						// foreach (string subprotocol in subprotocols) {
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_38 = __this->___U3CU3E4__this_2;
						NullCheck(L_38);
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_39 = L_38->___subprotocols_6;
						NullCheck(L_39);
						Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_40;
						L_40 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_39, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
						__this->___U3CU3Es__3_5 = L_40;
						Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__3_5))->____list_0), (void*)NULL);
						#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
						Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__3_5))->____current_3), (void*)NULL);
						#endif
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0156_3:
							{// begin finally (depth: 4)
								{
									int32_t L_41 = V_0;
									if ((((int32_t)L_41) >= ((int32_t)0)))
									{
										goto IL_016c_3;
									}
								}
								{
									Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_42 = (&__this->___U3CU3Es__3_5);
									Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7(L_42, Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
								}

IL_016c_3:
								{
									return;
								}
							}// end finally (depth: 4)
						});
						try
						{// begin try (depth: 4)
							{
								goto IL_0147_4;
							}

IL_0111_4:
							{
								// foreach (string subprotocol in subprotocols) {
								Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_43 = (&__this->___U3CU3Es__3_5);
								String_t* L_44;
								L_44 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline(L_43, Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
								__this->___U3CsubprotocolU3E5__4_6 = L_44;
								Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubprotocolU3E5__4_6), (void*)L_44);
								// m_Socket.Options.AddSubProtocol(subprotocol);
								WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_45 = __this->___U3CU3E4__this_2;
								NullCheck(L_45);
								ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_46 = L_45->___m_Socket_7;
								NullCheck(L_46);
								ClientWebSocketOptions_t5FB2F0C705144B57583EDFB14A12FCB0583FC19C* L_47;
								L_47 = ClientWebSocket_get_Options_mEB09171A7134836DF9CA3A811334D527BECDFED6_inline(L_46, NULL);
								String_t* L_48 = __this->___U3CsubprotocolU3E5__4_6;
								NullCheck(L_47);
								ClientWebSocketOptions_AddSubProtocol_m33B989A54FBF2DEE8A7C2C3AC40ED488E5044973(L_47, L_48, NULL);
								__this->___U3CsubprotocolU3E5__4_6 = (String_t*)NULL;
								Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubprotocolU3E5__4_6), (void*)(String_t*)NULL);
							}

IL_0147_4:
							{
								// foreach (string subprotocol in subprotocols) {
								Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_49 = (&__this->___U3CU3Es__3_5);
								bool L_50;
								L_50 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED(L_49, Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
								if (L_50)
								{
									goto IL_0111_4;
								}
							}
							{
								goto IL_016d_3;
							}
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_016d_3:
					{
						Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_51 = (&__this->___U3CU3Es__3_5);
						il2cpp_codegen_initobj(L_51, sizeof(Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1));
						// await m_Socket.ConnectAsync(uri, m_CancellationToken);
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_52 = __this->___U3CU3E4__this_2;
						NullCheck(L_52);
						ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_53 = L_52->___m_Socket_7;
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_54 = __this->___U3CU3E4__this_2;
						NullCheck(L_54);
						Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_55 = L_54->___uri_4;
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_56 = __this->___U3CU3E4__this_2;
						NullCheck(L_56);
						CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_57 = L_56->___m_CancellationToken_9;
						NullCheck(L_53);
						Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_58;
						L_58 = ClientWebSocket_ConnectAsync_m66E32FDD7E68FAF34A71DDAC72D948B93C6E6082(L_53, L_55, L_57, NULL);
						NullCheck(L_58);
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_59;
						L_59 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_58, NULL);
						V_1 = L_59;
						bool L_60;
						L_60 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
						if (L_60)
						{
							goto IL_01f1_3;
						}
					}
					{
						int32_t L_61 = 0;
						V_0 = L_61;
						__this->___U3CU3E1__state_0 = L_61;
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_62 = V_1;
						__this->___U3CU3Eu__1_8 = L_62;
						Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
						V_2 = __this;
						AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_63 = (&__this->___U3CU3Et__builder_1);
						AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_m8499003A9CEFB87ED901A2CB53A6631317E1DEA1(L_63, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_m8499003A9CEFB87ED901A2CB53A6631317E1DEA1_RuntimeMethod_var);
						goto IL_0335;
					}

IL_01d5_3:
					{
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_64 = __this->___U3CU3Eu__1_8;
						V_1 = L_64;
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_65 = (&__this->___U3CU3Eu__1_8);
						il2cpp_codegen_initobj(L_65, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
						int32_t L_66 = (-1);
						V_0 = L_66;
						__this->___U3CU3E1__state_0 = L_66;
					}

IL_01f1_3:
					{
						TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
						// OnOpen?.Invoke();
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_67 = __this->___U3CU3E4__this_2;
						NullCheck(L_67);
						WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_68 = L_67->___OnOpen_0;
						WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_69 = L_68;
						G_B32_0 = L_69;
						if (L_69)
						{
							G_B33_0 = L_69;
							goto IL_020a_3;
						}
					}
					{
						goto IL_0210_3;
					}

IL_020a_3:
					{
						NullCheck(G_B33_0);
						WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_inline(G_B33_0, NULL);
					}

IL_0210_3:
					{
						// await Receive();
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_70 = __this->___U3CU3E4__this_2;
						NullCheck(L_70);
						Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_71;
						L_71 = WebSocket_Receive_m5C8ADEEE62E8385A70E5F0ECB66C0A8A11629729(L_70, NULL);
						NullCheck(L_71);
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_72;
						L_72 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_71, NULL);
						V_3 = L_72;
						bool L_73;
						L_73 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
						if (L_73)
						{
							goto IL_026d_3;
						}
					}
					{
						int32_t L_74 = 1;
						V_0 = L_74;
						__this->___U3CU3E1__state_0 = L_74;
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_75 = V_3;
						__this->___U3CU3Eu__1_8 = L_75;
						Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
						V_2 = __this;
						AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_76 = (&__this->___U3CU3Et__builder_1);
						AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_m8499003A9CEFB87ED901A2CB53A6631317E1DEA1(L_76, (&V_3), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6_m8499003A9CEFB87ED901A2CB53A6631317E1DEA1_RuntimeMethod_var);
						goto IL_0335;
					}

IL_0251_3:
					{
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_77 = __this->___U3CU3Eu__1_8;
						V_3 = L_77;
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_78 = (&__this->___U3CU3Eu__1_8);
						il2cpp_codegen_initobj(L_78, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
						int32_t L_79 = (-1);
						V_0 = L_79;
						__this->___U3CU3E1__state_0 = L_79;
					}

IL_026d_3:
					{
						TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
						goto IL_02c4_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_0278_2;
					}
					throw e;
				}

CATCH_0278_2:
				{// begin catch(System.Exception)
					{
						// catch (Exception ex)
						V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
						Exception_t* L_80 = V_4;
						__this->___U3CexU3E5__5_7 = L_80;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__5_7), (void*)L_80);
						// OnError?.Invoke(ex.Message);
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_81 = __this->___U3CU3E4__this_2;
						NullCheck(L_81);
						WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_82 = L_81->___OnError_2;
						WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_83 = L_82;
						G_B39_0 = L_83;
						if (L_83)
						{
							G_B40_0 = L_83;
							goto IL_0294_2;
						}
					}
					{
						goto IL_02a5_2;
					}

IL_0294_2:
					{
						Exception_t* L_84 = __this->___U3CexU3E5__5_7;
						NullCheck(L_84);
						String_t* L_85;
						L_85 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_84);
						NullCheck(G_B40_0);
						WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_inline(G_B40_0, L_85, NULL);
					}

IL_02a5_2:
					{
						// OnClose?.Invoke(WebSocketCloseCode.Abnormal);
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_86 = __this->___U3CU3E4__this_2;
						NullCheck(L_86);
						WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_87 = L_86->___OnClose_3;
						WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_88 = L_87;
						G_B42_0 = L_88;
						if (L_88)
						{
							G_B43_0 = L_88;
							goto IL_02b6_2;
						}
					}
					{
						goto IL_02c1_2;
					}

IL_02b6_2:
					{
						NullCheck(G_B43_0);
						WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_inline(G_B43_0, ((int32_t)1006), NULL);
					}

IL_02c1_2:
					{
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_02c4_2;
					}
				}// end catch (depth: 3)

IL_02c4_2:
				{
					goto IL_0305_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0305_1:
		{
			goto IL_0321;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0307;
		}
		throw e;
	}

CATCH_0307:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_89 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_90 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_89, L_90, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0335;
	}// end catch (depth: 1)

IL_0321:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_91 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_91, NULL);
	}

IL_0335:
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<Connect>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__27_SetStateMachine_mE0F5B156F39C7FE85FA578378AF0C00E0CBA62DC (U3CConnectU3Ed__27_t9268D21BA7848B8CFF969DFE97855DD0B44AA6D6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void NativeWebSocket.WebSocket/<SendMessage>d__32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32__ctor_m0A6CB26B45064818A6DACC8DD7C9712408D20AF4 (U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<SendMessage>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32_MoveNext_m07E25597E9834F46E4E12CBCE28F73DF5E5A7638 (U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_m088E13E5D4FA5CE6023A08F499A235D5C76E3E41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF7134F9420DF47E26B6E714015DBB2CBFF5BC1DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* V_6 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_0145_1;
		}

IL_0017_1:
		{
			goto IL_0282_1;
		}

IL_001c_1:
		{
			// if (buffer.Count == 0)
			ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_3 = (&__this->___buffer_4);
			int32_t L_4;
			L_4 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline(L_3, ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
			V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0035_1;
			}
		}
		{
			// return;
			goto IL_0328;
		}

IL_0035_1:
		{
			// lock (OutgoingMessageLock)
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_6 = __this->___U3CU3E4__this_5;
			NullCheck(L_6);
			RuntimeObject* L_7 = L_6->___OutgoingMessageLock_10;
			__this->___U3CU3Es__2_7 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_7), (void*)L_7);
			__this->___U3CU3Es__3_8 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0094_1:
				{// begin finally (depth: 2)
					{
						int32_t L_8 = V_0;
						if ((((int32_t)L_8) >= ((int32_t)0)))
						{
							goto IL_00ac_1;
						}
					}
					{
						bool L_9 = __this->___U3CU3Es__3_8;
						if (!L_9)
						{
							goto IL_00ac_1;
						}
					}
					{
						RuntimeObject* L_10 = __this->___U3CU3Es__2_7;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
					}

IL_00ac_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					RuntimeObject* L_11 = __this->___U3CU3Es__2_7;
					bool* L_12 = (&__this->___U3CU3Es__3_8);
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, L_12, NULL);
					// sending = isSending;
					WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_13 = __this->___U3CU3E4__this_5;
					NullCheck(L_13);
					bool L_14 = L_13->___isSending_12;
					__this->___U3CsendingU3E5__1_6 = L_14;
					// if (!isSending)
					WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_15 = __this->___U3CU3E4__this_5;
					NullCheck(L_15);
					bool L_16 = L_15->___isSending_12;
					V_2 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
					bool L_17 = V_2;
					if (!L_17)
					{
						goto IL_0091_2;
					}
				}
				{
					// isSending = true;
					WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_18 = __this->___U3CU3E4__this_5;
					NullCheck(L_18);
					L_18->___isSending_12 = (bool)1;
				}

IL_0091_2:
				{
					goto IL_00ad_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00ad_1:
		{
			__this->___U3CU3Es__2_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_7), (void*)NULL);
			// if (!sending)
			bool L_19 = __this->___U3CsendingU3E5__1_6;
			V_3 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
			bool L_20 = V_3;
			if (!L_20)
			{
				goto IL_02aa_1;
			}
		}
		{
			// if (!Monitor.TryEnter(m_Socket, 1000))
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_21 = __this->___U3CU3E4__this_5;
			NullCheck(L_21);
			ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_22 = L_21->___m_Socket_7;
			bool L_23;
			L_23 = Monitor_TryEnter_m89907881926C57B9AA956150686CA49B013F3B24(L_22, ((int32_t)1000), NULL);
			V_4 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
			bool L_24 = V_4;
			if (!L_24)
			{
				goto IL_016f_1;
			}
		}
		{
			// await m_Socket.CloseAsync(WebSocketCloseStatus.InternalServerError, string.Empty, m_CancellationToken);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_25 = __this->___U3CU3E4__this_5;
			NullCheck(L_25);
			ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_26 = L_25->___m_Socket_7;
			String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_28 = __this->___U3CU3E4__this_5;
			NullCheck(L_28);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_29 = L_28->___m_CancellationToken_9;
			NullCheck(L_26);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
			L_30 = VirtualFuncInvoker3< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, int32_t, String_t*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(7 /* System.Threading.Tasks.Task System.Net.WebSockets.WebSocket::CloseAsync(System.Net.WebSockets.WebSocketCloseStatus,System.String,System.Threading.CancellationToken) */, L_26, ((int32_t)1011), L_27, L_29);
			NullCheck(L_30);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_31;
			L_31 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_30, NULL);
			V_5 = L_31;
			bool L_32;
			L_32 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_5), NULL);
			if (L_32)
			{
				goto IL_0162_1;
			}
		}
		{
			int32_t L_33 = 0;
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_34 = V_5;
			__this->___U3CU3Eu__1_14 = L_34;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
			V_6 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_35 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_m088E13E5D4FA5CE6023A08F499A235D5C76E3E41(L_35, (&V_5), (&V_6), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_m088E13E5D4FA5CE6023A08F499A235D5C76E3E41_RuntimeMethod_var);
			goto IL_033c;
		}

IL_0145_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_36 = __this->___U3CU3Eu__1_14;
			V_5 = L_36;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_37 = (&__this->___U3CU3Eu__1_14);
			il2cpp_codegen_initobj(L_37, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
		}

IL_0162_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_5), NULL);
			// return;
			goto IL_0328;
		}

IL_016f_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_01c0_1:
				{// begin finally (depth: 2)
					{
						int32_t L_39 = V_0;
						if ((((int32_t)L_39) >= ((int32_t)0)))
						{
							goto IL_01d7_1;
						}
					}
					{
						// Monitor.Exit(m_Socket);
						WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_40 = __this->___U3CU3E4__this_5;
						NullCheck(L_40);
						ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_41 = L_40->___m_Socket_7;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_41, NULL);
					}

IL_01d7_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// var t = m_Socket.SendAsync(buffer, messageType, true, m_CancellationToken);
				WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_42 = __this->___U3CU3E4__this_5;
				NullCheck(L_42);
				ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_43 = L_42->___m_Socket_7;
				ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_44 = __this->___buffer_4;
				int32_t L_45 = __this->___messageType_3;
				WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_46 = __this->___U3CU3E4__this_5;
				NullCheck(L_46);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_47 = L_46->___m_CancellationToken_9;
				NullCheck(L_43);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_48;
				L_48 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(11 /* System.Threading.Tasks.Task System.Net.WebSockets.WebSocket::SendAsync(System.ArraySegment`1<System.Byte>,System.Net.WebSockets.WebSocketMessageType,System.Boolean,System.Threading.CancellationToken) */, L_43, L_44, L_45, (bool)1, L_47);
				__this->___U3CtU3E5__4_9 = L_48;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtU3E5__4_9), (void*)L_48);
				// t.Wait(m_CancellationToken);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_49 = __this->___U3CtU3E5__4_9;
				WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_50 = __this->___U3CU3E4__this_5;
				NullCheck(L_50);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_51 = L_50->___m_CancellationToken_9;
				NullCheck(L_49);
				Task_Wait_m7EDB332683CB70654D6D89AC6EFD990F8249306B(L_49, L_51, NULL);
				__this->___U3CtU3E5__4_9 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtU3E5__4_9), (void*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL);
				goto IL_01d8_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_01d8_1:
		{
			// lock (OutgoingMessageLock)
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_52 = __this->___U3CU3E4__this_5;
			NullCheck(L_52);
			RuntimeObject* L_53 = L_52->___OutgoingMessageLock_10;
			__this->___U3CU3Es__5_10 = L_53;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__5_10), (void*)L_53);
			__this->___U3CU3Es__6_11 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0212_1:
				{// begin finally (depth: 2)
					{
						int32_t L_54 = V_0;
						if ((((int32_t)L_54) >= ((int32_t)0)))
						{
							goto IL_022a_1;
						}
					}
					{
						bool L_55 = __this->___U3CU3Es__6_11;
						if (!L_55)
						{
							goto IL_022a_1;
						}
					}
					{
						RuntimeObject* L_56 = __this->___U3CU3Es__5_10;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_56, NULL);
					}

IL_022a_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				RuntimeObject* L_57 = __this->___U3CU3Es__5_10;
				bool* L_58 = (&__this->___U3CU3Es__6_11);
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_57, L_58, NULL);
				// isSending = false;
				WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_59 = __this->___U3CU3E4__this_5;
				NullCheck(L_59);
				L_59->___isSending_12 = (bool)0;
				goto IL_022b_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_022b_1:
		{
			__this->___U3CU3Es__5_10 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__5_10), (void*)NULL);
			// await HandleQueue(queue, messageType);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_60 = __this->___U3CU3E4__this_5;
			List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_61 = __this->___queue_2;
			int32_t L_62 = __this->___messageType_3;
			NullCheck(L_60);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_63;
			L_63 = WebSocket_HandleQueue_m0FF9D971AB3DA5FA8C1144E8823BA3944BE587F6(L_60, L_61, L_62, NULL);
			NullCheck(L_63);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_64;
			L_64 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_63, NULL);
			V_7 = L_64;
			bool L_65;
			L_65 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_7), NULL);
			if (L_65)
			{
				goto IL_029f_1;
			}
		}
		{
			int32_t L_66 = 1;
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_67 = V_7;
			__this->___U3CU3Eu__1_14 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
			V_6 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_68 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_m088E13E5D4FA5CE6023A08F499A235D5C76E3E41(L_68, (&V_7), (&V_6), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF_m088E13E5D4FA5CE6023A08F499A235D5C76E3E41_RuntimeMethod_var);
			goto IL_033c;
		}

IL_0282_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_69 = __this->___U3CU3Eu__1_14;
			V_7 = L_69;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_70 = (&__this->___U3CU3Eu__1_14);
			il2cpp_codegen_initobj(L_70, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state_0 = L_71;
		}

IL_029f_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_7), NULL);
			goto IL_030c_1;
		}

IL_02aa_1:
		{
			// lock (OutgoingMessageLock)
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_72 = __this->___U3CU3E4__this_5;
			NullCheck(L_72);
			RuntimeObject* L_73 = L_72->___OutgoingMessageLock_10;
			__this->___U3CU3Es__7_12 = L_73;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__7_12), (void*)L_73);
			__this->___U3CU3Es__8_13 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_02eb_1:
				{// begin finally (depth: 2)
					{
						int32_t L_74 = V_0;
						if ((((int32_t)L_74) >= ((int32_t)0)))
						{
							goto IL_0303_1;
						}
					}
					{
						bool L_75 = __this->___U3CU3Es__8_13;
						if (!L_75)
						{
							goto IL_0303_1;
						}
					}
					{
						RuntimeObject* L_76 = __this->___U3CU3Es__7_12;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_76, NULL);
					}

IL_0303_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				RuntimeObject* L_77 = __this->___U3CU3Es__7_12;
				bool* L_78 = (&__this->___U3CU3Es__8_13);
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_77, L_78, NULL);
				// queue.Add(buffer);
				List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_79 = __this->___queue_2;
				ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_80 = __this->___buffer_4;
				NullCheck(L_79);
				List_1_Add_mF7134F9420DF47E26B6E714015DBB2CBFF5BC1DB_inline(L_79, L_80, List_1_Add_mF7134F9420DF47E26B6E714015DBB2CBFF5BC1DB_RuntimeMethod_var);
				goto IL_0304_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0304_1:
		{
			__this->___U3CU3Es__7_12 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__7_12), (void*)NULL);
		}

IL_030c_1:
		{
			goto IL_0328;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_030e;
		}
		throw e;
	}

CATCH_030e:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_81 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_82 = V_8;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_81, L_82, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_033c;
	}// end catch (depth: 1)

IL_0328:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_83 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_83, NULL);
	}

IL_033c:
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<SendMessage>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32_SetStateMachine_m42113A7DD9DFE1DC81BD06F5160889EB7042E273 (U3CSendMessageU3Ed__32_t0103B16D0B430E9BF44DA8593CEF1451357E4BDF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void NativeWebSocket.WebSocket/<HandleQueue>d__33::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleQueueU3Ed__33__ctor_mF1BC2491F7D4903090C9354C1B517B68EB294824 (U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<HandleQueue>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleQueueU3Ed__33_MoveNext_mCB5F2F849BC636F343564FFB269B8C5DC0B48AAC (U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_m99BCDC069A53D6ED34F0AD3101CE9C1D1133BEFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m4EDF2363B7349132ACF4E0A84CEEE5A680BC6004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_0103_1;
		}

IL_0011_1:
		{
			// var buffer = new ArraySegment<byte>();
			ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_2 = (&__this->___U3CbufferU3E5__1_5);
			il2cpp_codegen_initobj(L_2, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
			// lock (OutgoingMessageLock)
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_3 = __this->___U3CU3E4__this_4;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->___OutgoingMessageLock_10;
			__this->___U3CU3Es__2_6 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_4);
			__this->___U3CU3Es__3_7 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_007f_1:
				{// begin finally (depth: 2)
					{
						int32_t L_5 = V_0;
						if ((((int32_t)L_5) >= ((int32_t)0)))
						{
							goto IL_0097_1;
						}
					}
					{
						bool L_6 = __this->___U3CU3Es__3_7;
						if (!L_6)
						{
							goto IL_0097_1;
						}
					}
					{
						RuntimeObject* L_7 = __this->___U3CU3Es__2_6;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_7, NULL);
					}

IL_0097_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					RuntimeObject* L_8 = __this->___U3CU3Es__2_6;
					bool* L_9 = (&__this->___U3CU3Es__3_7);
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_8, L_9, NULL);
					// if (queue.Count > 0)
					List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_10 = __this->___queue_2;
					NullCheck(L_10);
					int32_t L_11;
					L_11 = List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_inline(L_10, List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_RuntimeMethod_var);
					V_1 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
					bool L_12 = V_1;
					if (!L_12)
					{
						goto IL_007c_2;
					}
				}
				{
					// buffer = queue[0];
					List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_13 = __this->___queue_2;
					NullCheck(L_13);
					ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_14;
					L_14 = List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770(L_13, 0, List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_RuntimeMethod_var);
					__this->___U3CbufferU3E5__1_5 = L_14;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__1_5))->____array_1), (void*)NULL);
					// queue.RemoveAt(0);
					List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_15 = __this->___queue_2;
					NullCheck(L_15);
					List_1_RemoveAt_m4EDF2363B7349132ACF4E0A84CEEE5A680BC6004(L_15, 0, List_1_RemoveAt_m4EDF2363B7349132ACF4E0A84CEEE5A680BC6004_RuntimeMethod_var);
				}

IL_007c_2:
				{
					goto IL_0098_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0098_1:
		{
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			// if (buffer.Count > 0)
			ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_16 = (&__this->___U3CbufferU3E5__1_5);
			int32_t L_17;
			L_17 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline(L_16, ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
			V_2 = (bool)((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
			bool L_18 = V_2;
			if (!L_18)
			{
				goto IL_0128_1;
			}
		}
		{
			// await SendMessage(queue, messageType, buffer);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_19 = __this->___U3CU3E4__this_4;
			List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* L_20 = __this->___queue_2;
			int32_t L_21 = __this->___messageType_3;
			ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_22 = __this->___U3CbufferU3E5__1_5;
			NullCheck(L_19);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_23;
			L_23 = WebSocket_SendMessage_m28BD9EEC00184F6A416466BD4DC9B719E84786BA(L_19, L_20, L_21, L_22, NULL);
			NullCheck(L_23);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_24;
			L_24 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_23, NULL);
			V_3 = L_24;
			bool L_25;
			L_25 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_25)
			{
				goto IL_011f_1;
			}
		}
		{
			int32_t L_26 = 0;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_27 = V_3;
			__this->___U3CU3Eu__1_8 = L_27;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_28 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_m99BCDC069A53D6ED34F0AD3101CE9C1D1133BEFC(L_28, (&V_3), (&V_4), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E_m99BCDC069A53D6ED34F0AD3101CE9C1D1133BEFC_RuntimeMethod_var);
			goto IL_0170;
		}

IL_0103_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_29 = __this->___U3CU3Eu__1_8;
			V_3 = L_29;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_30 = (&__this->___U3CU3Eu__1_8);
			il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
		}

IL_011f_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
		}

IL_0128_1:
		{
			goto IL_0150;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_012a;
		}
		throw e;
	}

CATCH_012a:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_32 = (&__this->___U3CbufferU3E5__1_5);
		il2cpp_codegen_initobj(L_32, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_33 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_34 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_33, L_34, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0170;
	}// end catch (depth: 1)

IL_0150:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_35 = (&__this->___U3CbufferU3E5__1_5);
		il2cpp_codegen_initobj(L_35, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_36 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_36, NULL);
	}

IL_0170:
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<HandleQueue>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleQueueU3Ed__33_SetStateMachine_m64E0BF727BDDF077E876A1A4942738F2216F0085 (U3CHandleQueueU3Ed__33_t2BAFCD79A0A9679E814337AA5B473A7F0D979F4E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void NativeWebSocket.WebSocket/<Receive>d__36::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveU3Ed__36__ctor_m3CD4D99931C4A278A1FC8AC213EBAFFB2711D007 (U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<Receive>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveU3Ed__36_MoveNext_mC59EB3655D4080FB405AA958112F0256193C14DE (U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisMainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mD1B717CADBAED093CEE35D6C9A2B3E4B856C4B38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mD658E4E68D94E87881C3DBF621CBEFD9EE3C07E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mF7CDEFCFE2378E69A4CD54D3CB3DF32E8C8ABE0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_m9F6F0B441830D4655FA0534376E13DCAC36BBF46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC672310507957782353FEB9D28F8FE9708AAB736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m8BD0D19C1FECD5AA3D9EA1EC4E5943D0C489F6FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m4782CA3577F6DE2D5857AD8F7EE9C1B2A4D82107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mBDA5969E9CC3D2A99ADCDF5DDB0E44448035CB8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* V_2 = NULL;
	TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	RuntimeObject* V_11 = NULL;
	MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* V_12 = NULL;
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* G_B69_0 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* G_B68_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_001f_1;
				}
				case 1:
				{
					goto IL_0021_1;
				}
				case 2:
				{
					goto IL_0021_1;
				}
				case 3:
				{
					goto IL_0026_1;
				}
			}
		}
		{
			goto IL_002b_1;
		}

IL_001f_1:
		{
			goto IL_0072_1;
		}

IL_0021_1:
		{
			goto IL_00b9_1;
		}

IL_0026_1:
		{
			goto IL_043c_1;
		}

IL_002b_1:
		{
			// WebSocketCloseCode closeCode = WebSocketCloseCode.Abnormal;
			__this->___U3CcloseCodeU3E5__1_3 = ((int32_t)1006);
			// await new WaitForBackgroundThread();
			WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F* L_2 = (WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F*)il2cpp_codegen_object_new(WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			WaitForBackgroundThread__ctor_m5FA299CF241DBDAD9413498751323F62D1D325FC(L_2, NULL);
			NullCheck(L_2);
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_3;
			L_3 = WaitForBackgroundThread_GetAwaiter_m46658C23E3A73C971C6156466AF6645E1F1D85C8(L_2, NULL);
			V_1 = L_3;
			bool L_4;
			L_4 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_1), NULL);
			if (L_4)
			{
				goto IL_008e_1;
			}
		}
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->___U3CU3E1__state_0 = L_5;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_6 = V_1;
			__this->___U3CU3Eu__1_14 = L_6;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_7 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mD658E4E68D94E87881C3DBF621CBEFD9EE3C07E1(L_7, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mD658E4E68D94E87881C3DBF621CBEFD9EE3C07E1_RuntimeMethod_var);
			goto IL_04fe;
		}

IL_0072_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_8 = __this->___U3CU3Eu__1_14;
			V_1 = L_8;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_9 = (&__this->___U3CU3Eu__1_14);
			il2cpp_codegen_initobj(L_9, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
		}

IL_008e_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_1), NULL);
			// ArraySegment<byte> buffer = new ArraySegment<byte>(new byte[8192]);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
			ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_12;
			memset((&L_12), 0, sizeof(L_12));
			ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_12), L_11, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
			__this->___U3CbufferU3E5__2_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2_4))->____array_1), (void*)NULL);
			__this->___U3CU3Es__3_5 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)NULL);
			__this->___U3CU3Es__4_6 = 0;
		}

IL_00b9_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_13 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1))) > ((uint32_t)1))))
				{
					goto IL_00c2_2;
				}
			}
			{
				goto IL_00c4_2;
			}

IL_00c2_2:
			{
				goto IL_00c4_2;
			}

IL_00c4_2:
			{
			}
			try
			{// begin try (depth: 3)
				{
					int32_t L_14 = V_0;
					if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_14, 1))) > ((uint32_t)1))))
					{
						goto IL_00cd_3;
					}
				}
				{
					goto IL_00cf_3;
				}

IL_00cd_3:
				{
					goto IL_00e8_3;
				}

IL_00cf_3:
				{
					goto IL_03bb_3;
				}

IL_00d5_3:
				{
					// WebSocketReceiveResult result = null;
					__this->___U3CresultU3E5__5_7 = (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__5_7), (void*)(WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C*)NULL);
					// using (var ms = new MemoryStream())
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
					NullCheck(L_15);
					MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_15, NULL);
					__this->___U3CmsU3E5__6_8 = L_15;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmsU3E5__6_8), (void*)L_15);
				}

IL_00e8_3:
				{
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0393_3:
						{// begin finally (depth: 4)
							{
								int32_t L_16 = V_0;
								if ((((int32_t)L_16) >= ((int32_t)0)))
								{
									goto IL_03ab_3;
								}
							}
							{
								MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = __this->___U3CmsU3E5__6_8;
								if (!L_17)
								{
									goto IL_03ab_3;
								}
							}
							{
								MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = __this->___U3CmsU3E5__6_8;
								NullCheck(L_18);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
							}

IL_03ab_3:
							{
								return;
							}
						}// end finally (depth: 4)
					});
					try
					{// begin try (depth: 4)
						{
							int32_t L_19 = V_0;
							if ((((int32_t)L_19) == ((int32_t)1)))
							{
								goto IL_00f5_4;
							}
						}
						{
							goto IL_00ef_4;
						}

IL_00ef_4:
						{
							int32_t L_20 = V_0;
							if ((((int32_t)L_20) == ((int32_t)2)))
							{
								goto IL_00f7_4;
							}
						}
						{
							goto IL_00fc_4;
						}

IL_00f5_4:
						{
							goto IL_0155_4;
						}

IL_00f7_4:
						{
							goto IL_034a_4;
						}

IL_00fc_4:
						{
						}

IL_00fd_4:
						{
							// result = await m_Socket.ReceiveAsync(buffer, m_CancellationToken);
							WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_21 = __this->___U3CU3E4__this_2;
							NullCheck(L_21);
							ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_22 = L_21->___m_Socket_7;
							ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_23 = __this->___U3CbufferU3E5__2_4;
							WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_24 = __this->___U3CU3E4__this_2;
							NullCheck(L_24);
							CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_25 = L_24->___m_CancellationToken_9;
							NullCheck(L_22);
							Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40* L_26;
							L_26 = VirtualFuncInvoker2< Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(10 /* System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult> System.Net.WebSockets.WebSocket::ReceiveAsync(System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken) */, L_22, L_23, L_25);
							NullCheck(L_26);
							TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4 L_27;
							L_27 = Task_1_GetAwaiter_mBDA5969E9CC3D2A99ADCDF5DDB0E44448035CB8B(L_26, Task_1_GetAwaiter_mBDA5969E9CC3D2A99ADCDF5DDB0E44448035CB8B_RuntimeMethod_var);
							V_3 = L_27;
							bool L_28;
							L_28 = TaskAwaiter_1_get_IsCompleted_m4782CA3577F6DE2D5857AD8F7EE9C1B2A4D82107((&V_3), TaskAwaiter_1_get_IsCompleted_m4782CA3577F6DE2D5857AD8F7EE9C1B2A4D82107_RuntimeMethod_var);
							if (L_28)
							{
								goto IL_0171_4;
							}
						}
						{
							int32_t L_29 = 1;
							V_0 = L_29;
							__this->___U3CU3E1__state_0 = L_29;
							TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4 L_30 = V_3;
							__this->___U3CU3Eu__2_15 = L_30;
							Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_15))->___m_task_0), (void*)NULL);
							V_2 = __this;
							AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_31 = (&__this->___U3CU3Et__builder_1);
							AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mF7CDEFCFE2378E69A4CD54D3CB3DF32E8C8ABE0A(L_31, (&V_3), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mF7CDEFCFE2378E69A4CD54D3CB3DF32E8C8ABE0A_RuntimeMethod_var);
							goto IL_04fe;
						}

IL_0155_4:
						{
							TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4 L_32 = __this->___U3CU3Eu__2_15;
							V_3 = L_32;
							TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4* L_33 = (&__this->___U3CU3Eu__2_15);
							il2cpp_codegen_initobj(L_33, sizeof(TaskAwaiter_1_tF26279FDD7DAE219B589EA87A08534B486DFF0E4));
							int32_t L_34 = (-1);
							V_0 = L_34;
							__this->___U3CU3E1__state_0 = L_34;
						}

IL_0171_4:
						{
							WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* L_35;
							L_35 = TaskAwaiter_1_GetResult_m8BD0D19C1FECD5AA3D9EA1EC4E5943D0C489F6FC((&V_3), TaskAwaiter_1_GetResult_m8BD0D19C1FECD5AA3D9EA1EC4E5943D0C489F6FC_RuntimeMethod_var);
							__this->___U3CU3Es__7_9 = L_35;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__7_9), (void*)L_35);
							WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* L_36 = __this->___U3CU3Es__7_9;
							__this->___U3CresultU3E5__5_7 = L_36;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__5_7), (void*)L_36);
							__this->___U3CU3Es__7_9 = (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C*)NULL;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__7_9), (void*)(WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C*)NULL);
							// ms.Write(buffer.Array, buffer.Offset, result.Count);
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_37 = __this->___U3CmsU3E5__6_8;
							ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_38 = (&__this->___U3CbufferU3E5__2_4);
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
							L_39 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline(L_38, ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
							ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_40 = (&__this->___U3CbufferU3E5__2_4);
							int32_t L_41;
							L_41 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline(L_40, ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
							WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* L_42 = __this->___U3CresultU3E5__5_7;
							NullCheck(L_42);
							int32_t L_43;
							L_43 = WebSocketReceiveResult_get_Count_mCD1591C6EAFAA98DDEBA26821531A80EB9E614C6_inline(L_42, NULL);
							NullCheck(L_37);
							VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_39, L_41, L_43);
							// while (!result.EndOfMessage);
							WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* L_44 = __this->___U3CresultU3E5__5_7;
							NullCheck(L_44);
							bool L_45;
							L_45 = WebSocketReceiveResult_get_EndOfMessage_mC01D0E54A8A32BB01FC96087AA5B3ACB07EB062A_inline(L_44, NULL);
							V_4 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
							bool L_46 = V_4;
							if (L_46)
							{
								goto IL_00fd_4;
							}
						}
						{
							// ms.Seek(0, SeekOrigin.Begin);
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_47 = __this->___U3CmsU3E5__6_8;
							NullCheck(L_47);
							int64_t L_48;
							L_48 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_47, ((int64_t)0), 0);
							// if (result.MessageType == WebSocketMessageType.Text)
							WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* L_49 = __this->___U3CresultU3E5__5_7;
							NullCheck(L_49);
							int32_t L_50;
							L_50 = WebSocketReceiveResult_get_MessageType_m227E3FB536FEC68E06F1070195AF20BD032EBF50_inline(L_49, NULL);
							V_5 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
							bool L_51 = V_5;
							if (!L_51)
							{
								goto IL_026a_4;
							}
						}
						{
							// lock (IncomingMessageLock)
							WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_52 = __this->___U3CU3E4__this_2;
							NullCheck(L_52);
							RuntimeObject* L_53 = L_52->___IncomingMessageLock_11;
							__this->___U3CU3Es__8_10 = L_53;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__8_10), (void*)L_53);
							__this->___U3CU3Es__9_11 = (bool)0;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_0244_4:
								{// begin finally (depth: 5)
									{
										int32_t L_54 = V_0;
										if ((((int32_t)L_54) >= ((int32_t)0)))
										{
											goto IL_025c_4;
										}
									}
									{
										bool L_55 = __this->___U3CU3Es__9_11;
										if (!L_55)
										{
											goto IL_025c_4;
										}
									}
									{
										RuntimeObject* L_56 = __this->___U3CU3Es__8_10;
										Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_56, NULL);
									}

IL_025c_4:
									{
										return;
									}
								}// end finally (depth: 5)
							});
							try
							{// begin try (depth: 5)
								RuntimeObject* L_57 = __this->___U3CU3Es__8_10;
								bool* L_58 = (&__this->___U3CU3Es__9_11);
								Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_57, L_58, NULL);
								// m_MessageList.Add(ms.ToArray());
								WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_59 = __this->___U3CU3E4__this_2;
								NullCheck(L_59);
								List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_60 = L_59->___m_MessageList_15;
								MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_61 = __this->___U3CmsU3E5__6_8;
								NullCheck(L_61);
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
								L_62 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(39 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_61);
								NullCheck(L_60);
								List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_60, L_62, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
								goto IL_025d_4;
							}// end try (depth: 5)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}

IL_025d_4:
						{
							__this->___U3CU3Es__8_10 = NULL;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__8_10), (void*)NULL);
							goto IL_0390_4;
						}

IL_026a_4:
						{
							// else if (result.MessageType == WebSocketMessageType.Binary)
							WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* L_63 = __this->___U3CresultU3E5__5_7;
							NullCheck(L_63);
							int32_t L_64;
							L_64 = WebSocketReceiveResult_get_MessageType_m227E3FB536FEC68E06F1070195AF20BD032EBF50_inline(L_63, NULL);
							V_6 = (bool)((((int32_t)L_64) == ((int32_t)1))? 1 : 0);
							bool L_65 = V_6;
							if (!L_65)
							{
								goto IL_02ef_4;
							}
						}
						{
							// lock (IncomingMessageLock)
							WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_66 = __this->___U3CU3E4__this_2;
							NullCheck(L_66);
							RuntimeObject* L_67 = L_66->___IncomingMessageLock_11;
							__this->___U3CU3Es__10_12 = L_67;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__10_12), (void*)L_67);
							__this->___U3CU3Es__11_13 = (bool)0;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_02c9_4:
								{// begin finally (depth: 5)
									{
										int32_t L_68 = V_0;
										if ((((int32_t)L_68) >= ((int32_t)0)))
										{
											goto IL_02e1_4;
										}
									}
									{
										bool L_69 = __this->___U3CU3Es__11_13;
										if (!L_69)
										{
											goto IL_02e1_4;
										}
									}
									{
										RuntimeObject* L_70 = __this->___U3CU3Es__10_12;
										Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_70, NULL);
									}

IL_02e1_4:
									{
										return;
									}
								}// end finally (depth: 5)
							});
							try
							{// begin try (depth: 5)
								RuntimeObject* L_71 = __this->___U3CU3Es__10_12;
								bool* L_72 = (&__this->___U3CU3Es__11_13);
								Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_71, L_72, NULL);
								// m_MessageList.Add(ms.ToArray());
								WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_73 = __this->___U3CU3E4__this_2;
								NullCheck(L_73);
								List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_74 = L_73->___m_MessageList_15;
								MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_75 = __this->___U3CmsU3E5__6_8;
								NullCheck(L_75);
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76;
								L_76 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(39 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_75);
								NullCheck(L_74);
								List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_74, L_76, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
								goto IL_02e2_4;
							}// end try (depth: 5)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}

IL_02e2_4:
						{
							__this->___U3CU3Es__10_12 = NULL;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__10_12), (void*)NULL);
							goto IL_0390_4;
						}

IL_02ef_4:
						{
							// else if (result.MessageType == WebSocketMessageType.Close)
							WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* L_77 = __this->___U3CresultU3E5__5_7;
							NullCheck(L_77);
							int32_t L_78;
							L_78 = WebSocketReceiveResult_get_MessageType_m227E3FB536FEC68E06F1070195AF20BD032EBF50_inline(L_77, NULL);
							V_7 = (bool)((((int32_t)L_78) == ((int32_t)2))? 1 : 0);
							bool L_79 = V_7;
							if (!L_79)
							{
								goto IL_0390_4;
							}
						}
						{
							// await Close();
							WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_80 = __this->___U3CU3E4__this_2;
							NullCheck(L_80);
							Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_81;
							L_81 = WebSocket_Close_m8EF33167E215E9898AF33A787C3E9FABCBB789E3(L_80, NULL);
							NullCheck(L_81);
							TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_82;
							L_82 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_81, NULL);
							V_8 = L_82;
							bool L_83;
							L_83 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_8), NULL);
							if (L_83)
							{
								goto IL_0367_4;
							}
						}
						{
							int32_t L_84 = 2;
							V_0 = L_84;
							__this->___U3CU3E1__state_0 = L_84;
							TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_85 = V_8;
							__this->___U3CU3Eu__3_16 = L_85;
							Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__3_16))->___m_task_0), (void*)NULL);
							V_2 = __this;
							AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_86 = (&__this->___U3CU3Et__builder_1);
							AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_m9F6F0B441830D4655FA0534376E13DCAC36BBF46(L_86, (&V_8), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_m9F6F0B441830D4655FA0534376E13DCAC36BBF46_RuntimeMethod_var);
							goto IL_04fe;
						}

IL_034a_4:
						{
							TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_87 = __this->___U3CU3Eu__3_16;
							V_8 = L_87;
							TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_88 = (&__this->___U3CU3Eu__3_16);
							il2cpp_codegen_initobj(L_88, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
							int32_t L_89 = (-1);
							V_0 = L_89;
							__this->___U3CU3E1__state_0 = L_89;
						}

IL_0367_4:
						{
							TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_8), NULL);
							// closeCode = WebSocketHelpers.ParseCloseCodeEnum((int)result.CloseStatus);
							WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* L_90 = __this->___U3CresultU3E5__5_7;
							NullCheck(L_90);
							Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 L_91;
							L_91 = WebSocketReceiveResult_get_CloseStatus_mEE75E1D6F7984C897FB02A84D36842451AE089E4_inline(L_90, NULL);
							V_9 = L_91;
							int32_t L_92;
							L_92 = Nullable_1_get_Value_mC672310507957782353FEB9D28F8FE9708AAB736((&V_9), Nullable_1_get_Value_mC672310507957782353FEB9D28F8FE9708AAB736_RuntimeMethod_var);
							int32_t L_93;
							L_93 = WebSocketHelpers_ParseCloseCodeEnum_m836B8A2B93FCA3807BA213AF89C6DDA82FBEA49C(L_92, NULL);
							__this->___U3CcloseCodeU3E5__1_3 = L_93;
							// break;
							goto IL_03d7_3;
						}

IL_0390_4:
						{
							goto IL_03ac_3;
						}
					}// end try (depth: 4)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_03ac_3:
				{
					__this->___U3CmsU3E5__6_8 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmsU3E5__6_8), (void*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL);
					__this->___U3CresultU3E5__5_7 = (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__5_7), (void*)(WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C*)NULL);
				}

IL_03bb_3:
				{
					// while (m_Socket.State == System.Net.WebSockets.WebSocketState.Open)
					WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_94 = __this->___U3CU3E4__this_2;
					NullCheck(L_94);
					ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_95 = L_94->___m_Socket_7;
					NullCheck(L_95);
					int32_t L_96;
					L_96 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Net.WebSockets.WebSocketState System.Net.WebSockets.WebSocket::get_State() */, L_95);
					V_10 = (bool)((((int32_t)L_96) == ((int32_t)2))? 1 : 0);
					bool L_97 = V_10;
					if (L_97)
					{
						goto IL_00d5_3;
					}
				}

IL_03d7_3:
				{
					goto IL_03f0_2;
				}
			}// end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_03da_2;
				}
				throw e;
			}

CATCH_03da_2:
			{// begin catch(System.Exception)
				// catch (Exception)
				// m_TokenSource.Cancel();
				WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_98 = __this->___U3CU3E4__this_2;
				NullCheck(L_98);
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_99 = L_98->___m_TokenSource_8;
				NullCheck(L_99);
				CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(L_99, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_03f0_2;
			}// end catch (depth: 3)

IL_03f0_2:
			{
				goto IL_03fe_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_03f2_1;
			}
			throw e;
		}

CATCH_03f2_1:
		{// begin catch(System.Object)
			V_11 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_100 = V_11;
			__this->___U3CU3Es__3_5 = L_100;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)L_100);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_03fe_1;
		}// end catch (depth: 2)

IL_03fe_1:
		{
			// await new WaitForUpdate();
			WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468* L_101 = (WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468*)il2cpp_codegen_object_new(WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468_il2cpp_TypeInfo_var);
			NullCheck(L_101);
			WaitForUpdate__ctor_mFF05044547F6948426D9D97EE983E27CA0779A72(L_101, NULL);
			NullCheck(L_101);
			MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_102;
			L_102 = WaitForUpdate_GetAwaiter_m0AFC1E5EEBB62B1D5A4C7518105E62D19C3A5E09(L_101, NULL);
			V_12 = L_102;
			MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_103 = V_12;
			NullCheck(L_103);
			bool L_104;
			L_104 = MainThreadAwaiter_get_IsCompleted_mAABDD292AFFB6638820C22103692B70BBB7AD9F0_inline(L_103, NULL);
			if (L_104)
			{
				goto IL_0459_1;
			}
		}
		{
			int32_t L_105 = 3;
			V_0 = L_105;
			__this->___U3CU3E1__state_0 = L_105;
			MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_106 = V_12;
			__this->___U3CU3Eu__4_17 = L_106;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__4_17), (void*)L_106);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_107 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisMainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mD1B717CADBAED093CEE35D6C9A2B3E4B856C4B38(L_107, (&V_12), (&V_2), AsyncTaskMethodBuilder_AwaitOnCompleted_TisMainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_TisU3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6_mD1B717CADBAED093CEE35D6C9A2B3E4B856C4B38_RuntimeMethod_var);
			goto IL_04fe;
		}

IL_043c_1:
		{
			RuntimeObject* L_108 = __this->___U3CU3Eu__4_17;
			V_12 = ((MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71*)CastclassClass((RuntimeObject*)L_108, MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__4_17 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__4_17), (void*)NULL);
			int32_t L_109 = (-1);
			V_0 = L_109;
			__this->___U3CU3E1__state_0 = L_109;
		}

IL_0459_1:
		{
			MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_110 = V_12;
			NullCheck(L_110);
			MainThreadAwaiter_GetResult_mE7D7A67486FC52CB3D382089C1449DAC4E511F1E(L_110, NULL);
			// OnClose?.Invoke(closeCode);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_111 = __this->___U3CU3E4__this_2;
			NullCheck(L_111);
			WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_112 = L_111->___OnClose_3;
			WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_113 = L_112;
			G_B68_0 = L_113;
			if (L_113)
			{
				G_B69_0 = L_113;
				goto IL_0472_1;
			}
		}
		{
			goto IL_047e_1;
		}

IL_0472_1:
		{
			int32_t L_114 = __this->___U3CcloseCodeU3E5__1_3;
			NullCheck(G_B69_0);
			WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_inline(G_B69_0, L_114, NULL);
		}

IL_047e_1:
		{
			RuntimeObject* L_115 = __this->___U3CU3Es__3_5;
			V_11 = L_115;
			RuntimeObject* L_116 = V_11;
			if (!L_116)
			{
				goto IL_04a8_1;
			}
		}
		{
			RuntimeObject* L_117 = V_11;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_117, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_118 = V_13;
			if (L_118)
			{
				goto IL_049b_1;
			}
		}
		{
			RuntimeObject* L_119 = V_11;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_119, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReceiveU3Ed__36_MoveNext_mC59EB3655D4080FB405AA958112F0256193C14DE_RuntimeMethod_var)));
		}

IL_049b_1:
		{
			Exception_t* L_120 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_121;
			L_121 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_120, NULL);
			NullCheck(L_121);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_121, NULL);
		}

IL_04a8_1:
		{
			int32_t L_122 = __this->___U3CU3Es__4_6;
			__this->___U3CU3Es__3_5 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)NULL);
			goto IL_04de;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_04b8;
		}
		throw e;
	}

CATCH_04b8:
	{// begin catch(System.Exception)
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_123 = (&__this->___U3CbufferU3E5__2_4);
		il2cpp_codegen_initobj(L_123, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_124 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_125 = V_13;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_124, L_125, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_04fe;
	}// end catch (depth: 1)

IL_04de:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_126 = (&__this->___U3CbufferU3E5__2_4);
		il2cpp_codegen_initobj(L_126, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_127 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_127, NULL);
	}

IL_04fe:
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<Receive>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveU3Ed__36_SetStateMachine_mA839BC34B1D4DD6A8050950AC5BBC681EC9E99FE (U3CReceiveU3Ed__36_t85BA06676D5D992B92CB199CC97AC5A49A9572B6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void NativeWebSocket.WebSocket/<Close>d__37::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__37__ctor_m2A22F47BC4AA88116418665753115255D4EC8B87 (U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<Close>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__37_MoveNext_mC26E25B16D31BE720C6EF57D564B37C3A9835091 (U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_mEBFC7689038F82B343993364821326C6092FDB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_007a_1;
		}

IL_000e_1:
		{
			// if (State == WebSocketState.Open)
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD(L_2, NULL);
			V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_009f_1;
			}
		}
		{
			// await m_Socket.CloseAsync(WebSocketCloseStatus.NormalClosure, string.Empty, m_CancellationToken);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_5 = __this->___U3CU3E4__this_2;
			NullCheck(L_5);
			ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* L_6 = L_5->___m_Socket_7;
			String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_8 = __this->___U3CU3E4__this_2;
			NullCheck(L_8);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = L_8->___m_CancellationToken_9;
			NullCheck(L_6);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
			L_10 = VirtualFuncInvoker3< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, int32_t, String_t*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(7 /* System.Threading.Tasks.Task System.Net.WebSockets.WebSocket::CloseAsync(System.Net.WebSockets.WebSocketCloseStatus,System.String,System.Threading.CancellationToken) */, L_6, ((int32_t)1000), L_7, L_9);
			NullCheck(L_10);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11;
			L_11 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_10, NULL);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_12)
			{
				goto IL_0096_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = V_2;
			__this->___U3CU3Eu__1_3 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_mEBFC7689038F82B343993364821326C6092FDB1A(L_15, (&V_2), (&V_3), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA_mEBFC7689038F82B343993364821326C6092FDB1A_RuntimeMethod_var);
			goto IL_00cf;
		}

IL_007a_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16 = __this->___U3CU3Eu__1_3;
			V_2 = L_16;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_17 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0096_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		}

IL_009f_1:
		{
			goto IL_00bb;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a1;
		}
		throw e;
	}

CATCH_00a1:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_19, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cf;
	}// end catch (depth: 1)

IL_00bb:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_21 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_21, NULL);
	}

IL_00cf:
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<Close>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__37_SetStateMachine_mE356087DE58D9B86F63E5AD6BAA161E371FEE8FA (U3CCloseU3Ed__37_tE488CBC8A9C0AF6A2A114FD48145BE96F307E2DA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// NativeWebSocket.WebSocket NativeWebSocket.WebSocketFactory::CreateInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* WebSocketFactory_CreateInstance_m07FE080584425D2D21D8C5686C5F304432C8E7FA (String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* V_0 = NULL;
	{
		// return new WebSocket(url);
		String_t* L_0 = ___0_url;
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_1 = (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F*)il2cpp_codegen_object_new(WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24(L_1, L_0, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mCC9E86FB5D6CA9E9765DA15CEAC40A2097FA7B1D_inline (MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_0 = ___0_value;
		((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_mCAAE2E112A6B05340E0642270FEBAA1D1912E5F7_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___0_value;
		((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* MainThreadUtil_get_synchronizationContext_m2E8C4435E5F339E3F95FB164BFF66EAF654ED43B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* MainThreadUtil_get_Instance_mACAAECA4BF768341AD32A92592C6970ED302C4D2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_0 = ((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_m2CC67562B58AED84A4D52BCB2F848C33414355FF_inline (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCompletedU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_inline (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ClientWebSocketOptions_t5FB2F0C705144B57583EDFB14A12FCB0583FC19C* ClientWebSocket_get_Options_mEB09171A7134836DF9CA3A811334D527BECDFED6_inline (ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* __this, const RuntimeMethod* method) 
{
	{
		ClientWebSocketOptions_t5FB2F0C705144B57583EDFB14A12FCB0583FC19C* L_0 = __this->____options_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_inline (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_inline (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_errorMsg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_inline (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_closeCode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebSocketReceiveResult_get_Count_mCD1591C6EAFAA98DDEBA26821531A80EB9E614C6_inline (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebSocketReceiveResult_get_EndOfMessage_mC01D0E54A8A32BB01FC96087AA5B3ACB07EB062A_inline (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CEndOfMessageU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebSocketReceiveResult_get_MessageType_m227E3FB536FEC68E06F1070195AF20BD032EBF50_inline (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMessageTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 WebSocketReceiveResult_get_CloseStatus_mEE75E1D6F7984C897FB02A84D36842451AE089E4_inline (WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 L_0 = __this->___U3CCloseStatusU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MainThreadAwaiter_get_IsCompleted_mAABDD292AFFB6638820C22103692B70BBB7AD9F0_inline (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF7134F9420DF47E26B6E714015DBB2CBFF5BC1DB_gshared_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_item, const RuntimeMethod* method) 
{
	ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* L_1 = (ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* L_6 = V_0;
		int32_t L_7 = V_1;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093)L_8);
		return;
	}

IL_0034:
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_9 = ___0_item;
		((  void (*) (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_gshared_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}

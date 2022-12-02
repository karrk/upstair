#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_tC40E26186DDE2EA6C05B44317E07B118EA5107E3;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>
struct Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6;
// System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E;
// System.Func`2<System.Boolean,System.Object>
struct Func_2_t058E85C490577FC5BDB6A16EAE2C7C9728A3798B;
// System.Func`2<System.Boolean,System.String>
struct Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct KeyCollection_tA378CC5359EAE5A52276413B644AB21701CF32A6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct ValueCollection_t1ACC8B8AB7C4F36DA5DA534EF772981729D14C24;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,GooglePlayGames.BasicApi.SignInStatus>[]
struct EntryU5BU5D_t636D22DEC08114A9642837BF7342E92CC2E490F8;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
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
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// GooglePlayGames.BasicApi.Events.Event
struct Event_t35DF2427C1F49CB119E897612BB4FABF4D731538;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_tEA3794D00B8FA3D00EA267F2174A0E86BB1E0DF5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_tA303E9DD8E277B5C4706952A74CC2EDE1CD20F9E;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_t2CB29BC933802DD7667C202D450D171D11F4A2DB;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t131F8FE87633785662CE1446FCC319E9E81D49AA;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C;
// GooglePlayGames.BasicApi.SignInHelper
struct SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE;
// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8;
// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoCaptureMode_t9BD16FB6552C017E9707BBF6FF69B1DDC02E0D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoQualityLevel_t290A450CFBB37E4E28DEDFED35CBD6308C1AE2CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5;
IL2CPP_EXTERN_C String_t* _stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F;
IL2CPP_EXTERN_C String_t* _stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB;
IL2CPP_EXTERN_C String_t* _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
IL2CPP_EXTERN_C String_t* _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
IL2CPP_EXTERN_C String_t* _stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC;
IL2CPP_EXTERN_C String_t* _stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93;
IL2CPP_EXTERN_C String_t* _stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF;
IL2CPP_EXTERN_C String_t* _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
IL2CPP_EXTERN_C String_t* _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
IL2CPP_EXTERN_C String_t* _stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA;
IL2CPP_EXTERN_C String_t* _stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A;
IL2CPP_EXTERN_C String_t* _stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68;
IL2CPP_EXTERN_C String_t* _stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711;
IL2CPP_EXTERN_C String_t* _stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28;
IL2CPP_EXTERN_C String_t* _stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_mB0E95847A60F679490EA30590A61DF3F9A8F583A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m4A14721DDFBDCA488ACBDE8B11E845CAFCA4BB7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBDA06155C3B7615E1A991433FB99D8240211E826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0;;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com;;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t636D22DEC08114A9642837BF7342E92CC2E490F8* ____entries_1;
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
	KeyCollection_tA378CC5359EAE5A52276413B644AB21701CF32A6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1ACC8B8AB7C4F36DA5DA534EF772981729D14C24* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300  : public RuntimeObject
{
};

// GooglePlayGames.BasicApi.Events.Event
struct Event_t35DF2427C1F49CB119E897612BB4FABF4D731538  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.Events.Event::mId
	String_t* ___mId_0;
	// System.String GooglePlayGames.BasicApi.Events.Event::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Events.Event::mDescription
	String_t* ___mDescription_2;
	// System.String GooglePlayGames.BasicApi.Events.Event::mImageUrl
	String_t* ___mImageUrl_3;
	// System.UInt64 GooglePlayGames.BasicApi.Events.Event::mCurrentCount
	uint64_t ___mCurrentCount_4;
	// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::mVisibility
	int32_t ___mVisibility_5;
};

// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.ScorePageToken::mId
	String_t* ___mId_0;
	// System.Object GooglePlayGames.BasicApi.ScorePageToken::mInternalObject
	RuntimeObject* ___mInternalObject_1;
	// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::mCollection
	int32_t ___mCollection_2;
	// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::mTimespan
	int32_t ___mTimespan_3;
	// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::mDirection
	int32_t ___mDirection_4;
};

// GooglePlayGames.BasicApi.SignInHelper
struct SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564  : public RuntimeObject
{
};

struct SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields
{
	// System.Int32 GooglePlayGames.BasicApi.SignInHelper::True
	int32_t ___True_0;
	// System.Int32 GooglePlayGames.BasicApi.SignInHelper::False
	int32_t ___False_1;
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

// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsCameraSupported
	bool ___mIsCameraSupported_0;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsMicSupported
	bool ___mIsMicSupported_1;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsWriteStorageSupported
	bool ___mIsWriteStorageSupported_2;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mCaptureModesSupported
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___mCaptureModesSupported_3;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mQualityLevelsSupported
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___mQualityLevelsSupported_4;
};

// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsCapturing
	bool ___mIsCapturing_0;
	// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::mCaptureMode
	int32_t ___mCaptureMode_1;
	// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::mQualityLevel
	int32_t ___mQualityLevel_2;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsOverlayVisible
	bool ___mIsOverlayVisible_3;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsPaused
	bool ___mIsPaused_4;
};

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mEnableSaveGames
	bool ___mEnableSaveGames_0;
	// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mScopes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___mScopes_1;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mHidePopups
	bool ___mHidePopups_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestEmail
	bool ___mRequestEmail_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestIdToken
	bool ___mRequestIdToken_6;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mAccountName
	String_t* ___mAccountName_7;
};

// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6  : public RuntimeObject
{
};

struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields
{
	// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9
	U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* ___U3CU3E9_0;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_0
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* ___U3CU3E9__14_0_1;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_1
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* ___U3CU3E9__14_1_2;
};

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC 
{
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mStatus
	int32_t ___mStatus_0;
	// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mLocalEndpointName
	String_t* ___mLocalEndpointName_1;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke
{
	int32_t ___mStatus_0;
	char* ___mLocalEndpointName_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com
{
	int32_t ___mStatus_0;
	Il2CppChar* ___mLocalEndpointName_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA 
{
	// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mLocalClientId
	int64_t ___mLocalClientId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mRemoteEndpointId
	String_t* ___mRemoteEndpointId_2;
	// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mResponseStatus
	int32_t ___mResponseStatus_3;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPayload_4;
};

struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields
{
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EmptyPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyPayload_0;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke
{
	int64_t ___mLocalClientId_1;
	char* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com
{
	int64_t ___mLocalClientId_1;
	Il2CppChar* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 
{
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA 
{
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mInitializationCallback
	Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___mInitializationCallback_2;
	// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mLocalClientId
	int64_t ___mLocalClientId_3;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 
{
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mEnableSavedGames
	bool ___mEnableSavedGames_1;
	// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mScopes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___mScopes_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mHidePopups
	bool ___mHidePopups_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestEmail
	bool ___mRequestEmail_6;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestIdToken
	bool ___mRequestIdToken_7;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mAccountName
	String_t* ___mAccountName_8;
};

struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_StaticFields
{
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration::DefaultConfiguration
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___DefaultConfiguration_0;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_pinvoke
{
	int32_t ___mEnableSavedGames_1;
	char** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	char* ___mAccountName_8;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_com
{
	int32_t ___mEnableSavedGames_1;
	Il2CppChar** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	Il2CppChar* ___mAccountName_8;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391 
{
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mRemoteEndpoint
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ___mRemoteEndpoint_0;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPayload_1;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
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

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B 
{
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F 
{
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_tC40E26186DDE2EA6C05B44317E07B118EA5107E3  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61  : public MulticastDelegate_t
{
};

// System.Func`2<System.Boolean,System.String>
struct Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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

IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9C175D184F142682355D54F32FC231BBDCE6FD0_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m95641EE4325D83C122BF87ECF2A0F729A1CF14D3_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m794A187157001F642B5FE7C534F0E8E86D07B46B_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m9FA30F53765A643B7740AE4F2D0884EB983E7CA1_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mFBEAB690C0784153A594218C5017CA665413FCF6_gshared (Func_2_t058E85C490577FC5BDB6A16EAE2C7C9728A3798B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Boolean,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_mDAD207E1F8582EC57626D62FEE6D0DA4061A1369_gshared (RuntimeObject* ___source0, Func_2_t058E85C490577FC5BDB6A16EAE2C7C9728A3798B* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Misc_CheckNotNull_TisRuntimeObject_mB9454D6C90F3ACF9B7DF60491533515C883FD67C_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_gshared_inline (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* __this, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_gshared_inline (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* __this, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ___obj0, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* ___builder0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::.ctor()
inline void Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, const RuntimeMethod*))Dictionary_2__ctor_mC9C175D184F142682355D54F32FC231BBDCE6FD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::Add(TKey,TValue)
inline void Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683 (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m95641EE4325D83C122BF87ECF2A0F729A1CF14D3_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m794A187157001F642B5FE7C534F0E8E86D07B46B_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88 (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9FA30F53765A643B7740AE4F2D0884EB983E7CA1_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_mFB07921DB5938146717C1BF327CF77EA2F088D24 (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m81FB45901BD6276DF3DB9976DB97D2F6A906B02F (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mFBEAB690C0784153A594218C5017CA665413FCF6_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Boolean,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_mB0E95847A60F679490EA30590A61DF3F9A8F583A (RuntimeObject* ___source0, Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*, const RuntimeMethod*))Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_mDAD207E1F8582EC57626D62FEE6D0DA4061A1369_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mE405D676C6881553258F8BAD40A20B462D611068 (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF6C01D79CC0C34263FA6C73CD02CD8E3A36EC4A (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F ___builder0, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline)(__this, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
inline String_t* Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mB9454D6C90F3ACF9B7DF60491533515C883FD67C_gshared)(___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, String_t* ___description0, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___newPngCoverImage0, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
inline void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared)(__this, ___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___newPlayedTime0, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6_inline (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4_inline (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63 (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Byte[]>(T)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBDA06155C3B7615E1A991433FB99D8240211E826 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mB9454D6C90F3ACF9B7DF60491533515C883FD67C_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84_inline (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2_inline (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) ;
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(T)
inline void Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_inline (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* __this, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE*, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC, const RuntimeMethod*))Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_gshared_inline)(__this, ___obj0, method);
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_Rejected_mC05BA20D95207ED2E3E3A305452B4EAE59498BFB (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>::Invoke(T)
inline void Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_inline (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* __this, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E*, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA, const RuntimeMethod*))Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_gshared_inline)(__this, ___obj0, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>>(T)
inline Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m4A14721DDFBDCA488ACBDE8B11E845CAFCA4BB7E (Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___value0, const RuntimeMethod* method)
{
	return ((  Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* (*) (Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mB9454D6C90F3ACF9B7DF60491533515C883FD67C_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___callback0, int64_t ___localClientId1, const RuntimeMethod* method) ;
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683_inline (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) ;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A_inline (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableSavedGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_EnableSavedGames_mB3BFCFC0D31D53C06EF9C78D767C94C7C55A7D72 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// mEnableSaveGames = true;
		__this->___mEnableSaveGames_0 = (bool)1;
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableHidePopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_EnableHidePopups_m8AF1EFEE2F021B5F02598B642BDF61E97BC640DD (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// mHidePopups = true;
		__this->___mHidePopups_2 = (bool)1;
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestServerAuthCode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestServerAuthCode_m35297CBA0854EFF0879A608DD134A6701C09E345 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, bool ___forceRefresh0, const RuntimeMethod* method) 
{
	{
		// mRequestAuthCode = true;
		__this->___mRequestAuthCode_3 = (bool)1;
		// mForceRefresh = forceRefresh;
		bool L_0 = ___forceRefresh0;
		__this->___mForceRefresh_4 = L_0;
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestEmail_m4CFF58538C86C36043D89E3B7351BFA17BF29C19 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// mRequestEmail = true;
		__this->___mRequestEmail_5 = (bool)1;
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestIdToken_mE8372548261C229559A68F0D86AAACEC1308262C (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// mRequestIdToken = true;
		__this->___mRequestIdToken_6 = (bool)1;
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::SetAccountName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_SetAccountName_m399973F9978DAF5EACCF08A2645298476C051B16 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, String_t* ___accountName0, const RuntimeMethod* method) 
{
	{
		// mAccountName = accountName;
		String_t* L_0 = ___accountName0;
		__this->___mAccountName_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mAccountName_7), (void*)L_0);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::AddOauthScope(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_AddOauthScope_mBF88B5A77857E19F5AEB9971833A03BD797FDD4A (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, String_t* ___scope0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mScopes == null) mScopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___mScopes_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (mScopes == null) mScopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___mScopes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScopes_1), (void*)L_1);
	}

IL_0013:
	{
		// mScopes.Add(scope);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___mScopes_1;
		String_t* L_3 = ___scope0;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 Builder_Build_m4625B07468AEBAB946A4350DAD11D6429A11B8C6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return new PlayGamesClientConfiguration(this);
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableSaveGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mEnableSaveGames;
		bool L_0 = __this->___mEnableSaveGames_0;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mRequestAuthCode;
		bool L_0 = __this->___mRequestAuthCode_3;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mHidePopups;
		bool L_0 = __this->___mHidePopups_2;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mForceRefresh;
		bool L_0 = __this->___mForceRefresh_4;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mRequestEmail;
		bool L_0 = __this->___mRequestEmail_5;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mRequestIdToken;
		bool L_0 = __this->___mRequestIdToken_6;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetAccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mAccountName;
		String_t* L_0 = __this->___mAccountName_7;
		return L_0;
	}
}
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::getScopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Builder_getScopes_m8F0821940E0448250116EFA19AF61BDA1893D0E6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mScopes == null ? new string[0] : mScopes.ToArray();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___mScopes_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___mScopes_1;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_1, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		return L_2;
	}

IL_0014:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_3;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m388AB45315E2F3197C804CCF2097E650BC940894 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
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
// System.Void GooglePlayGames.BasicApi.ScorePageToken::.ctor(System.Object,System.String,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,GooglePlayGames.BasicApi.ScorePageDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorePageToken__ctor_m431FAF86C22A8B545F71B1AF2F1224D9FB8B708B (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, RuntimeObject* ___internalObject0, String_t* ___id1, int32_t ___collection2, int32_t ___timespan3, int32_t ___direction4, const RuntimeMethod* method) 
{
	{
		// internal ScorePageToken(object internalObject, string id,
		//     LeaderboardCollection collection, LeaderboardTimeSpan timespan,
		//     ScorePageDirection direction)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mInternalObject = internalObject;
		RuntimeObject* L_0 = ___internalObject0;
		__this->___mInternalObject_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInternalObject_1), (void*)L_0);
		// mId = id;
		String_t* L_1 = ___id1;
		__this->___mId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_1);
		// mCollection = collection;
		int32_t L_2 = ___collection2;
		__this->___mCollection_2 = L_2;
		// mTimespan = timespan;
		int32_t L_3 = ___timespan3;
		__this->___mTimespan_3 = L_3;
		// mDirection = direction;
		int32_t L_4 = ___direction4;
		__this->___mDirection_4 = L_4;
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::get_Collection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Collection_m81A6D22719966B08DF294DFACE425D527D2EEAA0 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCollection; }
		int32_t L_0 = __this->___mCollection_2;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::get_TimeSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_TimeSpan_mFC519002264A338C9C9FD20D0E4ABBAF185C19D2 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mTimespan; }
		int32_t L_0 = __this->___mTimespan_3;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Direction_m1666DE97676B246F0E7FDA31232401FB1B7973A0 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mDirection; }
		int32_t L_0 = __this->___mDirection_4;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.ScorePageToken::get_LeaderboardId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_m12697020F7B2EFC1D646C38D4AB9E2637FDF74BE (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		return L_0;
	}
}
// System.Object GooglePlayGames.BasicApi.ScorePageToken::get_InternalObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScorePageToken_get_InternalObject_m37A928592D5497D4D646E6868EDA834D2063C6DB (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mInternalObject; }
		RuntimeObject* L_0 = __this->___mInternalObject_1;
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
// GooglePlayGames.BasicApi.SignInStatus GooglePlayGames.BasicApi.SignInHelper::ToSignInStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignInHelper_ToSignInStatus_mC9509C36F96E17E1307DB65F541E87A92BB2D661 (int32_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* V_0 = NULL;
	{
		// Dictionary<int, SignInStatus> dictionary = new Dictionary<int, SignInStatus>()
		// {
		//     {
		//         /* CommonUIStatus.UI_BUSY */ -12, SignInStatus.AlreadyInProgress
		//     },
		//     {
		//         /* CommonStatusCodes.SUCCESS */ 0, SignInStatus.Success
		//     },
		//     {
		//         /* CommonStatusCodes.SIGN_IN_REQUIRED */ 4, SignInStatus.UiSignInRequired
		//     },
		//     {
		//         /* CommonStatusCodes.NETWORK_ERROR */ 7, SignInStatus.NetworkError
		//     },
		//     {
		//         /* CommonStatusCodes.INTERNAL_ERROR */ 8, SignInStatus.InternalError
		//     },
		//     {
		//         /* CommonStatusCodes.DEVELOPER_ERROR */ 10, SignInStatus.DeveloperError
		//     },
		//     {
		//         /* CommonStatusCodes.CANCELED */ 16, SignInStatus.Canceled
		//     },
		//     {
		//         /* CommonStatusCodes.API_NOT_CONNECTED */ 17, SignInStatus.Failed
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_FAILED */ 12500, SignInStatus.Failed
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_CANCELLED */ 12501, SignInStatus.Canceled
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_CURRENTLY_IN_PROGRESS */ 12502, SignInStatus.AlreadyInProgress
		//     },
		// };
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_0 = (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*)il2cpp_codegen_object_new(Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC(L_0, Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_1, ((int32_t)-12), 6, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_2, 0, 0, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_3, 4, 1, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_4, 7, 3, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_5, 8, 4, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_6, ((int32_t)10), 2, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_7, ((int32_t)16), 5, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_8, ((int32_t)17), 7, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_9, ((int32_t)12500), 7, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_10, ((int32_t)12501), 5, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_11, ((int32_t)12502), 6, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		V_0 = L_11;
		// return dictionary.ContainsKey(code) ? dictionary[code] : SignInStatus.Failed;
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_12 = V_0;
		int32_t L_13 = ___code0;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E(L_12, L_13, Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		return (int32_t)(7);
	}

IL_0079:
	{
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_15 = V_0;
		int32_t L_16 = ___code0;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88(L_15, L_16, Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::SetPromptUiSignIn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper_SetPromptUiSignIn_m0F1FED13D9D66C08C3BA8E7124D1BAA81297D717 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	{
		// PlayerPrefs.SetInt(PromptSignInKey, value ? True : False);
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
		if (L_0)
		{
			G_B2_0 = _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_1 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_2 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.SignInHelper::ShouldPromptUiSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignInHelper_ShouldPromptUiSignIn_m26147A2B263EF28FF4818CD6D63201D4BF0413CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt(PromptSignInKey, True) != False;
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581, L_0, NULL);
		int32_t L_2 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1;
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper__ctor_mAACD363A620B49A48D7E65E08562B6B5442799D8 (SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper__cctor_m72DC3E8E80F4C1314CBEFF98BFE24FD5A6671119 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int True = 0;
		((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0 = 0;
		// private static int False = 1;
		((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1 = 1;
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapabilities__ctor_mE8546E8B5CB6AF1F8919493CDD0177059A3290BA (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, bool ___isCameraSupported0, bool ___isMicSupported1, bool ___isWriteStorageSupported2, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___captureModesSupported3, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___qualityLevelsSupported4, const RuntimeMethod* method) 
{
	{
		// internal VideoCapabilities(bool isCameraSupported, bool isMicSupported, bool isWriteStorageSupported,
		//     bool[] captureModesSupported, bool[] qualityLevelsSupported)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mIsCameraSupported = isCameraSupported;
		bool L_0 = ___isCameraSupported0;
		__this->___mIsCameraSupported_0 = L_0;
		// mIsMicSupported = isMicSupported;
		bool L_1 = ___isMicSupported1;
		__this->___mIsMicSupported_1 = L_1;
		// mIsWriteStorageSupported = isWriteStorageSupported;
		bool L_2 = ___isWriteStorageSupported2;
		__this->___mIsWriteStorageSupported_2 = L_2;
		// mCaptureModesSupported = captureModesSupported;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = ___captureModesSupported3;
		__this->___mCaptureModesSupported_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCaptureModesSupported_3), (void*)L_3);
		// mQualityLevelsSupported = qualityLevelsSupported;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = ___qualityLevelsSupported4;
		__this->___mQualityLevelsSupported_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mQualityLevelsSupported_4), (void*)L_4);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsCameraSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsCameraSupported_m2A5ABD6B6C1BFDFF57437EB5AB898C17A4BF2D36 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsCameraSupported; }
		bool L_0 = __this->___mIsCameraSupported_0;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsMicSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsMicSupported_m9D602DDC5C684AB39A3806A9682C07F917E07655 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsMicSupported; }
		bool L_0 = __this->___mIsMicSupported_1;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsWriteStorageSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsWriteStorageSupported_mBDD45763B0DA5D6925C0FE68A392E1BD9AB34FF8 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsWriteStorageSupported; }
		bool L_0 = __this->___mIsWriteStorageSupported_2;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::SupportsCaptureMode(GooglePlayGames.BasicApi.VideoCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_SupportsCaptureMode_m7DBCAA7C978825AF114B2F4D5EFD027B4682E675 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, int32_t ___captureMode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (captureMode != VideoCaptureMode.Unknown)
		int32_t L_0 = ___captureMode0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_000d;
		}
	}
	{
		// return mCaptureModesSupported[(int) captureMode];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->___mCaptureModesSupported_3;
		int32_t L_2 = ___captureMode0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (uint8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)L_4;
	}

IL_000d:
	{
		// Logger.w("SupportsCaptureMode called with an unknown captureMode.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_w_mFB07921DB5938146717C1BF327CF77EA2F088D24(_stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::SupportsQualityLevel(GooglePlayGames.BasicApi.VideoQualityLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_SupportsQualityLevel_mEBB3875FA0DAA0E234BD29D0BDBCDC7D15509A08 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, int32_t ___qualityLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (qualityLevel != VideoQualityLevel.Unknown)
		int32_t L_0 = ___qualityLevel0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_000d;
		}
	}
	{
		// return mQualityLevelsSupported[(int) qualityLevel];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->___mQualityLevelsSupported_4;
		int32_t L_2 = ___qualityLevel0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (uint8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)L_4;
	}

IL_000d:
	{
		// Logger.w("SupportsCaptureMode called with an unknown qualityLevel.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_w_mFB07921DB5938146717C1BF327CF77EA2F088D24(_stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D, NULL);
		// return false;
		return (bool)0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoCapabilities_ToString_m85E5D94390B8638DE15BA9A9FC15DC70FF9CC7CD (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_mB0E95847A60F679490EA30590A61DF3F9A8F583A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B2_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	int32_t G_B2_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_5 = NULL;
	String_t* G_B2_6 = NULL;
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B1_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	int32_t G_B1_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_5 = NULL;
	String_t* G_B1_6 = NULL;
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B4_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	int32_t G_B4_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_5 = NULL;
	String_t* G_B4_6 = NULL;
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B3_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	int32_t G_B3_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_5 = NULL;
	String_t* G_B3_6 = NULL;
	{
		// return string.Format(
		//     "[VideoCapabilities: mIsCameraSupported={0}, mIsMicSupported={1}, mIsWriteStorageSupported={2}, " +
		//     "mCaptureModesSupported={3}, mQualityLevelsSupported={4}]",
		//     mIsCameraSupported,
		//     mIsMicSupported,
		//     mIsWriteStorageSupported,
		//     string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		//     string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = __this->___mIsCameraSupported_0;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		bool L_6 = __this->___mIsMicSupported_1;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		bool L_10 = __this->___mIsWriteStorageSupported_2;
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = __this->___mCaptureModesSupported_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_15 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_16 = L_15;
		G_B1_0 = L_16;
		G_B1_1 = L_14;
		G_B1_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B1_3 = 3;
		G_B1_4 = L_13;
		G_B1_5 = L_13;
		G_B1_6 = _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
		if (L_16)
		{
			G_B2_0 = L_16;
			G_B2_1 = L_14;
			G_B2_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B2_3 = 3;
			G_B2_4 = L_13;
			G_B2_5 = L_13;
			G_B2_6 = _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* L_17 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_18 = (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*)il2cpp_codegen_object_new(Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_2__ctor_m81FB45901BD6276DF3DB9976DB97D2F6A906B02F(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9_RuntimeMethod_var), NULL);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_19 = L_18;
		((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_19);
		G_B2_0 = L_19;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
		G_B2_5 = G_B1_5;
		G_B2_6 = G_B1_6;
	}

IL_0061:
	{
		RuntimeObject* L_20;
		L_20 = Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_mB0E95847A60F679490EA30590A61DF3F9A8F583A((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_mB0E95847A60F679490EA30590A61DF3F9A8F583A_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21;
		L_21 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_20, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		String_t* L_22;
		L_22 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(G_B2_2, L_21, NULL);
		NullCheck(G_B2_4);
		ArrayElementTypeCheck (G_B2_4, L_22);
		(G_B2_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B2_3), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = G_B2_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = __this->___mQualityLevelsSupported_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_25 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_26 = L_25;
		G_B3_0 = L_26;
		G_B3_1 = L_24;
		G_B3_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B3_3 = 4;
		G_B3_4 = L_23;
		G_B3_5 = L_23;
		G_B3_6 = G_B2_6;
		if (L_26)
		{
			G_B4_0 = L_26;
			G_B4_1 = L_24;
			G_B4_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B4_3 = 4;
			G_B4_4 = L_23;
			G_B4_5 = L_23;
			G_B4_6 = G_B2_6;
			goto IL_009d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* L_27 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_28 = (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*)il2cpp_codegen_object_new(Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Func_2__ctor_m81FB45901BD6276DF3DB9976DB97D2F6A906B02F(L_28, L_27, (intptr_t)((void*)U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC_RuntimeMethod_var), NULL);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_29 = L_28;
		((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2), (void*)L_29);
		G_B4_0 = L_29;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
		G_B4_5 = G_B3_5;
		G_B4_6 = G_B3_6;
	}

IL_009d:
	{
		RuntimeObject* L_30;
		L_30 = Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_mB0E95847A60F679490EA30590A61DF3F9A8F583A((RuntimeObject*)G_B4_1, G_B4_0, Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_mB0E95847A60F679490EA30590A61DF3F9A8F583A_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31;
		L_31 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_30, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		String_t* L_32;
		L_32 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(G_B4_2, L_31, NULL);
		NullCheck(G_B4_4);
		ArrayElementTypeCheck (G_B4_4, L_32);
		(G_B4_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_3), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(G_B4_6, G_B4_5, NULL);
		return L_33;
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9917BECB6AF78B6EA7E40C8E39D63A7C7F99A582 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* L_0 = (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6*)il2cpp_codegen_object_new(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEF6C01D79CC0C34263FA6C73CD02CD8E3A36EC4A(L_0, NULL);
		((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF6C01D79CC0C34263FA6C73CD02CD8E3A36EC4A (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9 (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, bool ___p0, const RuntimeMethod* method) 
{
	{
		// string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		String_t* L_0;
		L_0 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___p0), NULL);
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, bool ___p0, const RuntimeMethod* method) 
{
	{
		// string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		String_t* L_0;
		L_0 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___p0), NULL);
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCaptureState::.ctor(System.Boolean,GooglePlayGames.BasicApi.VideoCaptureMode,GooglePlayGames.BasicApi.VideoQualityLevel,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCaptureState__ctor_m2B2B27B6716AEE8A5DFA5CFA91402AD73F76E3A6 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, bool ___isCapturing0, int32_t ___captureMode1, int32_t ___qualityLevel2, bool ___isOverlayVisible3, bool ___isPaused4, const RuntimeMethod* method) 
{
	{
		// internal VideoCaptureState(bool isCapturing, VideoCaptureMode captureMode,
		//     VideoQualityLevel qualityLevel, bool isOverlayVisible, bool isPaused)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mIsCapturing = isCapturing;
		bool L_0 = ___isCapturing0;
		__this->___mIsCapturing_0 = L_0;
		// mCaptureMode = captureMode;
		int32_t L_1 = ___captureMode1;
		__this->___mCaptureMode_1 = L_1;
		// mQualityLevel = qualityLevel;
		int32_t L_2 = ___qualityLevel2;
		__this->___mQualityLevel_2 = L_2;
		// mIsOverlayVisible = isOverlayVisible;
		bool L_3 = ___isOverlayVisible3;
		__this->___mIsOverlayVisible_3 = L_3;
		// mIsPaused = isPaused;
		bool L_4 = ___isPaused4;
		__this->___mIsPaused_4 = L_4;
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsCapturing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsCapturing_m79259E68EFB6988C652F65191D76EA168AAD2D48 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsCapturing; }
		bool L_0 = __this->___mIsCapturing_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::get_CaptureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoCaptureState_get_CaptureMode_m4FA4B9D18DB6653CA6C7893ADE4B0FDDF80A39E1 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCaptureMode; }
		int32_t L_0 = __this->___mCaptureMode_1;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::get_QualityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoCaptureState_get_QualityLevel_mEF7D5F70B0DBD8EE8D56878C16D639FE080BECE5 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	{
		// get { return mQualityLevel; }
		int32_t L_0 = __this->___mQualityLevel_2;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsOverlayVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsOverlayVisible_m091B7546AE3EBC1E750A0CB513D3CD9D72866CE5 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsOverlayVisible; }
		bool L_0 = __this->___mIsOverlayVisible_3;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsPaused_mD2C050CBD84B1744B97B31C3B6836AEFBB4C6D2E (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsPaused; }
		bool L_0 = __this->___mIsPaused_4;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCaptureState::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoCaptureState_ToString_m293496CA599DCA9B670B407F2C01FF253AA189D9 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoCaptureMode_t9BD16FB6552C017E9707BBF6FF69B1DDC02E0D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoQualityLevel_t290A450CFBB37E4E28DEDFED35CBD6308C1AE2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("[VideoCaptureState: mIsCapturing={0}, mCaptureMode={1}, mQualityLevel={2}, " +
		//                      "mIsOverlayVisible={3}, mIsPaused={4}]",
		//     mIsCapturing,
		//     mCaptureMode.ToString(),
		//     mQualityLevel.ToString(),
		//     mIsOverlayVisible,
		//     mIsPaused);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = __this->___mIsCapturing_0;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t* L_6 = (&__this->___mCaptureMode_1);
		Il2CppFakeBox<int32_t> L_7(VideoCaptureMode_t9BD16FB6552C017E9707BBF6FF69B1DDC02E0D84_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t* L_10 = (&__this->___mQualityLevel_2);
		Il2CppFakeBox<int32_t> L_11(VideoQualityLevel_t290A450CFBB37E4E28DEDFED35CBD6308C1AE2CC_il2cpp_TypeInfo_var, L_10);
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		bool L_14 = __this->___mIsOverlayVisible_3;
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		bool L_18 = __this->___mIsPaused_4;
		bool L_19 = L_18;
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB, L_17, NULL);
		return L_21;
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
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_Multicast(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* currentDelegate = reinterpret_cast<ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInst(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, method);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStatic(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, method);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStaticInvoker(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_ClosedStaticInvoker(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenVirtual(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	VirtualActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(il2cpp_codegen_method_get_slot(method), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInterface(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	InterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericVirtual(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	GenericVirtualActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(method, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericInterface(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	GenericInterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(method, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback__ctor_mA4005D04BD1E3B8BAE1B2C7587F5F6CD9F01AE7F (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_Multicast;
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20 (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GooglePlayGames.BasicApi.SavedGame.ConflictCallback::BeginInvoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCallback_BeginInvoke_mD49E7DD5D0F3465015DC9954C5D168E0CB7004F9 (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___resolver0;
	__d_args[1] = ___original1;
	__d_args[2] = ___originalData2;
	__d_args[3] = ___unmerged3;
	__d_args[4] = ___unmergedData4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_EndInvoke_m1850006035C4BA5A2414B6E9A4F5F979B2E0B1AA (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_pinvoke(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_pinvoke_back(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke& marshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_pinvoke_cleanup(SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_com(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_com_back(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com& marshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_com_cleanup(SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F ___builder0, const RuntimeMethod* method) 
{
	{
		// mDescriptionUpdated = builder.mDescriptionUpdated;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_0 = ___builder0;
		bool L_1 = L_0.___mDescriptionUpdated_0;
		__this->___mDescriptionUpdated_0 = L_1;
		// mNewDescription = builder.mNewDescription;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_2 = ___builder0;
		String_t* L_3 = L_2.___mNewDescription_1;
		__this->___mNewDescription_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewDescription_1), (void*)L_3);
		// mCoverImageUpdated = builder.mCoverImageUpdated;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_4 = ___builder0;
		bool L_5 = L_4.___mCoverImageUpdated_2;
		__this->___mCoverImageUpdated_2 = L_5;
		// mNewPngCoverImage = builder.mNewPngCoverImage;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_6 = ___builder0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6.___mNewPngCoverImage_3;
		__this->___mNewPngCoverImage_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage_3), (void*)L_7);
		// mNewPlayedTime = builder.mNewPlayedTime;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_8 = ___builder0;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_9 = L_8.___mNewPlayedTime_4;
		__this->___mNewPlayedTime_4 = L_9;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF_AdjustorThunk (RuntimeObject* __this, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F ___builder0, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF(_thisAdjusted, ___builder0, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->___mDescriptionUpdated_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->___mNewDescription_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->___mCoverImageUpdated_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mNewPngCoverImage_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return mNewPlayedTime.HasValue; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* L_0 = (&__this->___mNewPlayedTime_4);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline(L_0, Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___mNewPlayedTime_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_pinvoke(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_pinvoke_back(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke& marshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_pinvoke_cleanup(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_com(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_com_back(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com& marshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_com_cleanup(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com& marshaled)
{
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, String_t* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mNewDescription = Misc.CheckNotNull(description);
		String_t* L_0 = ___description0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A(L_0, Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var);
		__this->___mNewDescription_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewDescription_1), (void*)L_1);
		// mDescriptionUpdated = true;
		__this->___mDescriptionUpdated_0 = (bool)1;
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_2 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9_AdjustorThunk (RuntimeObject* __this, String_t* ___description0, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F _returnValue;
	_returnValue = Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9(_thisAdjusted, ___description0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___newPngCoverImage0, const RuntimeMethod* method) 
{
	{
		// mCoverImageUpdated = true;
		__this->___mCoverImageUpdated_2 = (bool)1;
		// mNewPngCoverImage = newPngCoverImage;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___newPngCoverImage0;
		__this->___mNewPngCoverImage_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage_3), (void*)L_0);
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_1 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___newPngCoverImage0, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F _returnValue;
	_returnValue = Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7(_thisAdjusted, ___newPngCoverImage0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___newPlayedTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newPlayedTime.TotalMilliseconds > ulong.MaxValue)
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&___newPlayedTime0), NULL);
		if ((!(((double)L_0) > ((double)(1.8446744073709552E+19)))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new InvalidOperationException("Timespans longer than ulong.MaxValue " +
		//                                     "milliseconds are not allowed");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_RuntimeMethod_var)));
	}

IL_001d:
	{
		// mNewPlayedTime = newPlayedTime;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = ___newPlayedTime0;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		__this->___mNewPlayedTime_4 = L_3;
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_4 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_AdjustorThunk (RuntimeObject* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___newPlayedTime0, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F _returnValue;
	_returnValue = Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE(_thisAdjusted, ___newPlayedTime0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, const RuntimeMethod* method) 
{
	{
		// return new SavedGameMetadataUpdate(this);
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_0 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B _returnValue;
	_returnValue = Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_pinvoke(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.___mStatus_0;
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_string(unmarshaled.___mLocalEndpointName_1);
}
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_pinvoke_back(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke& marshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled)
{
	int32_t unmarshaledmStatus_temp_0 = 0;
	unmarshaledmStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.___mStatus_0 = unmarshaledmStatus_temp_0;
	unmarshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mLocalEndpointName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_pinvoke_cleanup(AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_com(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.___mStatus_0;
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___mLocalEndpointName_1);
}
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_com_back(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com& marshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled)
{
	int32_t unmarshaledmStatus_temp_0 = 0;
	unmarshaledmStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.___mStatus_0 = unmarshaledmStatus_temp_0;
	unmarshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mLocalEndpointName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_com_cleanup(AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mStatus = status;
		int32_t L_0 = ___status0;
		__this->___mStatus_0 = L_0;
		// this.mLocalEndpointName = Misc.CheckNotNull(localEndpointName);
		String_t* L_1 = ___localEndpointName1;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A(L_1, Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var);
		__this->___mLocalEndpointName_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mLocalEndpointName_1), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881_AdjustorThunk (RuntimeObject* __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881(_thisAdjusted, ___status0, ___localEndpointName1, method);
}
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return mStatus == ResponseStatus.Success; }
		int32_t L_0 = __this->___mStatus_0;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalEndpointName; }
		String_t* L_0 = __this->___mLocalEndpointName_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_pinvoke(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke(unmarshaled.___mRemoteEndpoint_0, marshaled.___mRemoteEndpoint_0);
	marshaled.___mPayload_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_1);
}
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_pinvoke_back(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke& marshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 unmarshaledmRemoteEndpoint_temp_0;
	memset((&unmarshaledmRemoteEndpoint_temp_0), 0, sizeof(unmarshaledmRemoteEndpoint_temp_0));
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_back(marshaled.___mRemoteEndpoint_0, unmarshaledmRemoteEndpoint_temp_0);
	unmarshaled.___mRemoteEndpoint_0 = unmarshaledmRemoteEndpoint_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
	#endif
	unmarshaled.___mPayload_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_pinvoke_cleanup(ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_cleanup(marshaled.___mRemoteEndpoint_0);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_1);
	marshaled.___mPayload_1 = NULL;
}


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_com(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com(unmarshaled.___mRemoteEndpoint_0, marshaled.___mRemoteEndpoint_0);
	marshaled.___mPayload_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_1);
}
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_com_back(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com& marshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 unmarshaledmRemoteEndpoint_temp_0;
	memset((&unmarshaledmRemoteEndpoint_temp_0), 0, sizeof(unmarshaledmRemoteEndpoint_temp_0));
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_back(marshaled.___mRemoteEndpoint_0, unmarshaledmRemoteEndpoint_temp_0);
	unmarshaled.___mRemoteEndpoint_0 = unmarshaledmRemoteEndpoint_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
	#endif
	unmarshaled.___mPayload_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_com_cleanup(ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_cleanup(marshaled.___mRemoteEndpoint_0);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_1);
	marshaled.___mPayload_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBDA06155C3B7615E1A991433FB99D8240211E826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Logger.d("Constructing ConnectionRequest");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5, NULL);
		// mRemoteEndpoint = new EndpointDetails(remoteEndpointId, remoteEndpointName, serviceId);
		String_t* L_0 = ___remoteEndpointId0;
		String_t* L_1 = ___remoteEndpointName1;
		String_t* L_2 = ___serviceId2;
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___mRemoteEndpoint_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
		#endif
		// this.mPayload = Misc.CheckNotNull(payload);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___payload3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBDA06155C3B7615E1A991433FB99D8240211E826(L_4, Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBDA06155C3B7615E1A991433FB99D8240211E826_RuntimeMethod_var);
		__this->___mPayload_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPayload_1), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A_AdjustorThunk (RuntimeObject* __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A(_thisAdjusted, ___remoteEndpointId0, ___remoteEndpointName1, ___serviceId2, ___payload3, method);
}
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_0 = __this->___mRemoteEndpoint_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 _returnValue;
	_returnValue = ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_pinvoke(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.___mLocalClientId_1;
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_string(unmarshaled.___mRemoteEndpointId_2);
	marshaled.___mResponseStatus_3 = unmarshaled.___mResponseStatus_3;
	marshaled.___mPayload_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_4);
}
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_pinvoke_back(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke& marshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledmLocalClientId_temp_0 = 0;
	unmarshaledmLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.___mLocalClientId_1 = unmarshaledmLocalClientId_temp_0;
	unmarshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mRemoteEndpointId_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaledmResponseStatus_temp_2 = 0;
	unmarshaledmResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.___mResponseStatus_3 = unmarshaledmResponseStatus_temp_2;
	unmarshaled.___mPayload_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_pinvoke_cleanup(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_4);
	marshaled.___mPayload_4 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_com(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.___mLocalClientId_1;
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mRemoteEndpointId_2);
	marshaled.___mResponseStatus_3 = unmarshaled.___mResponseStatus_3;
	marshaled.___mPayload_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_4);
}
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_com_back(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com& marshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledmLocalClientId_temp_0 = 0;
	unmarshaledmLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.___mLocalClientId_1 = unmarshaledmLocalClientId_temp_0;
	unmarshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mRemoteEndpointId_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaledmResponseStatus_temp_2 = 0;
	unmarshaledmResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.___mResponseStatus_3 = unmarshaledmResponseStatus_temp_2;
	unmarshaled.___mPayload_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_com_cleanup(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_4);
	marshaled.___mPayload_4 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBDA06155C3B7615E1A991433FB99D8240211E826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mLocalClientId = localClientId;
		int64_t L_0 = ___localClientId0;
		__this->___mLocalClientId_1 = L_0;
		// this.mRemoteEndpointId = Misc.CheckNotNull(remoteEndpointId);
		String_t* L_1 = ___remoteEndpointId1;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A(L_1, Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var);
		__this->___mRemoteEndpointId_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRemoteEndpointId_2), (void*)L_2);
		// this.mResponseStatus = code;
		int32_t L_3 = ___code2;
		__this->___mResponseStatus_3 = L_3;
		// this.mPayload = Misc.CheckNotNull(payload);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___payload3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBDA06155C3B7615E1A991433FB99D8240211E826(L_4, Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBDA06155C3B7615E1A991433FB99D8240211E826_RuntimeMethod_var);
		__this->___mPayload_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPayload_4), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1_AdjustorThunk (RuntimeObject* __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1(_thisAdjusted, ___localClientId0, ___remoteEndpointId1, ___code2, ___payload3, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRemoteEndpointId; }
		String_t* L_0 = __this->___mRemoteEndpointId_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238_inline(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mResponseStatus; }
		int32_t L_0 = __this->___mResponseStatus_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C_inline(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_Rejected_mC05BA20D95207ED2E3E3A305452B4EAE59498BFB (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Rejected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::NetworkNotConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_NetworkNotConnected_m4C0E97D34F723D237FB44F195CD04694D372D95E (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorNetworkNotConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::InternalError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_InternalError_mBD1B53A3ECB1D330D06E9272E7676F4BD85A4ADA (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorInternal,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 2, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EndpointNotConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_EndpointNotConnected_m61E59EB330DB561A06387F136BCF4314BBF504FA (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorEndpointNotConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 4, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Accepted(System.Int64,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_Accepted_m59A0D5CBF8D4B5569261DEB4550BBF08BF7DBF5A (int64_t ___localClientId0, String_t* ___remoteEndpointId1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload2, const RuntimeMethod* method) 
{
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Accepted,
		//     payload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___payload2;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::AlreadyConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_AlreadyConnected_mD25DE0BE804DB0D82DD7E4F1BD75FF1A11D58134 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId,
		//     Status.ErrorAlreadyConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 5, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__cctor_mB30DCFA158C992DE2206392158157DA87C417B99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[] EmptyPayload = new byte[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0), (void*)L_0);
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
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxUnreliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxUnreliableMessagePayloadLength_m4963EFFBC7006B70F130C54A4394D218353EF6C3 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	{
		// return NearbyConnectionConfiguration.MaxUnreliableMessagePayloadLength;
		return ((int32_t)1168);
	}
}
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxReliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxReliableMessagePayloadLength_mC4250D2FB414B3FF275C9E594493DC4985A53E94 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	{
		// return NearbyConnectionConfiguration.MaxReliableMessagePayloadLength;
		return ((int32_t)4096);
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendReliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendReliable_mBF4DCC52828944F5A08108434D729117C3CDA1AC (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___recipientEndpointIds0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("SendReliable called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendUnreliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendUnreliable_mBFC6E22A366146AB057A323DC9F5A0F7F4CE3A2E (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___recipientEndpointIds0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("SendUnreliable called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartAdvertising(System.String,System.Collections.Generic.List`1<System.String>,System.Nullable`1<System.TimeSpan>,System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>,System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartAdvertising_m769BCD23744FF396C09EB9A58F2964444A2C427F (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___name0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___appIdentifiers1, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___advertisingDuration2, Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* ___resultCallback3, Action_1_tC40E26186DDE2EA6C05B44317E07B118EA5107E3* ___connectionRequestCallback4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AdvertisingResult obj = new AdvertisingResult(ResponseStatus.LicenseCheckFailed, string.Empty);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881((&V_0), (-1), L_0, NULL);
		// resultCallback.Invoke(obj);
		Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* L_1 = ___resultCallback3;
		AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_inline(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAdvertising()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAdvertising_m48C0689BF58F495F39726F9CA5C0D8DF140A868F (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopAvertising in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendConnectionRequest(System.String,System.String,System.Byte[],System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>,GooglePlayGames.BasicApi.Nearby.IMessageListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendConnectionRequest_mFD6373183CB3AE67142645979CE6C3D7B6852D4F (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___name0, String_t* ___remoteEndpointId1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload2, Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* ___responseCallback3, RuntimeObject* ___listener4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// OurUtils.Logger.d("SendConnectionRequest called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645, NULL);
		// if (responseCallback != null)
		Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* L_0 = ___responseCallback3;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// ConnectionResponse obj = ConnectionResponse.Rejected(0, string.Empty);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_2;
		L_2 = ConnectionResponse_Rejected_mC05BA20D95207ED2E3E3A305452B4EAE59498BFB(((int64_t)0), L_1, NULL);
		V_0 = L_2;
		// responseCallback.Invoke(obj);
		Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* L_3 = ___responseCallback3;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		NullCheck(L_3);
		Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_inline(L_3, L_4, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::AcceptConnectionRequest(System.String,System.Byte[],GooglePlayGames.BasicApi.Nearby.IMessageListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_AcceptConnectionRequest_m18A6FE9E4E5F556ED545AFF93045072D313C97C4 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___remoteEndpointId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, RuntimeObject* ___listener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("AcceptConnectionRequest in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartDiscovery(System.String,System.Nullable`1<System.TimeSpan>,GooglePlayGames.BasicApi.Nearby.IDiscoveryListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartDiscovery_m22042E623E2034C7711625F0F22F1EBA1FC968DD (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___serviceId0, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___advertisingTimeout1, RuntimeObject* ___listener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StartDiscovery in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopDiscovery(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopDiscovery_mE3F67C9136B16C24CD10E6A46DB40CECA326F0AD (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___serviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopDiscovery in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::RejectConnectionRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_RejectConnectionRequest_mCD0163B5E142048717319C76576C7F18F6D6AC3E (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___requestingEndpointId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("RejectConnectionRequest in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::DisconnectFromEndpoint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_DisconnectFromEndpoint_m41F5477E14AAD9F59A8388E68D9FAFEF82BAF691 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___remoteEndpointId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("DisconnectFromEndpoint in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAllConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAllConnections_mA2CD05D911E89C18EFEA15E32024810307F34BFF (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopAllConnections in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_m4D0762B2BABFD4B0B83A7A4CA9AABFDF2AB71E63(_stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39, NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalEndpointId_m693DF94B2A56BDB05F5E031D6D59E25994C152DB (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalDeviceId_mBD1F45BD9F0286C9C4ACABCF1E0C1A74CDD94BB6 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "DummyDevice";
		return _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetAppBundleId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetAppBundleId_mCA3AEF93D1241577A74AACBE26C9081E17686E6A (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "dummy.bundle.id";
		return _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetServiceId_m565A5A8817CD3F45312BAB02CF2D9B87776E1503 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "dummy.service.id";
		return _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient__ctor_m4D2EC0602685E7FC545780BFCB337CB10F5A4174 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string(unmarshaled.___mEndpointId_0);
	marshaled.___mName_1 = il2cpp_codegen_marshal_string(unmarshaled.___mName_1);
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_string(unmarshaled.___mServiceId_2);
}
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled)
{
	unmarshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mEndpointId_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0));
	unmarshaled.___mName_1 = il2cpp_codegen_marshal_string_result(marshaled.___mName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mName_1));
	unmarshaled.___mServiceId_2 = il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mServiceId_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___mEndpointId_0);
	marshaled.___mName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___mName_1);
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mServiceId_2);
}
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled)
{
	unmarshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mEndpointId_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0));
	unmarshaled.___mName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1));
	unmarshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mServiceId_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mEndpointId = Misc.CheckNotNull(endpointId);
		String_t* L_0 = ___endpointId0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A(L_0, Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var);
		__this->___mEndpointId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mEndpointId_0), (void*)L_1);
		// this.mName = Misc.CheckNotNull(name);
		String_t* L_2 = ___name1;
		String_t* L_3;
		L_3 = Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A(L_2, Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var);
		__this->___mName_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_1), (void*)L_3);
		// this.mServiceId = Misc.CheckNotNull(serviceId);
		String_t* L_4 = ___serviceId2;
		String_t* L_5;
		L_5 = Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A(L_4, Misc_CheckNotNull_TisString_t_m94109204F9FF2FB027C5565FEBD771241C02E75A_RuntimeMethod_var);
		__this->___mServiceId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mServiceId_2), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC_AdjustorThunk (RuntimeObject* __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC(_thisAdjusted, ___endpointId0, ___name1, ___serviceId2, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->___mEndpointId_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->___mServiceId_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_pinvoke(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___mInitializationCallback_2));
	marshaled.___mLocalClientId_3 = unmarshaled.___mLocalClientId_3;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_pinvoke_back(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke& marshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mInitializationCallback_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var));
	int64_t unmarshaledmLocalClientId_temp_1 = 0;
	unmarshaledmLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.___mLocalClientId_3 = unmarshaledmLocalClientId_temp_1;
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_pinvoke_cleanup(NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_com(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___mInitializationCallback_2));
	marshaled.___mLocalClientId_3 = unmarshaled.___mLocalClientId_3;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_com_back(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com& marshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mInitializationCallback_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var));
	int64_t unmarshaledmLocalClientId_temp_1 = 0;
	unmarshaledmLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.___mLocalClientId_3 = unmarshaledmLocalClientId_temp_1;
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_com_cleanup(NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___callback0, int64_t ___localClientId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m4A14721DDFBDCA488ACBDE8B11E845CAFCA4BB7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mInitializationCallback = Misc.CheckNotNull(callback);
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_0 = ___callback0;
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_1;
		L_1 = Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m4A14721DDFBDCA488ACBDE8B11E845CAFCA4BB7E(L_0, Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m4A14721DDFBDCA488ACBDE8B11E845CAFCA4BB7E_RuntimeMethod_var);
		__this->___mInitializationCallback_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInitializationCallback_2), (void*)L_1);
		// this.mLocalClientId = localClientId;
		int64_t L_2 = ___localClientId1;
		__this->___mLocalClientId_3 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94_AdjustorThunk (RuntimeObject* __this, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___callback0, int64_t ___localClientId1, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94(_thisAdjusted, ___callback0, ___localClientId1, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mInitializationCallback; }
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_0 = __this->___mInitializationCallback_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.BasicApi.Events.Event::.ctor(System.String,System.String,System.String,System.String,System.UInt64,GooglePlayGames.BasicApi.Events.EventVisibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m94C05B7DEB8D7577CEEEC4B2336037A8252819D8 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, String_t* ___id0, String_t* ___name1, String_t* ___description2, String_t* ___imageUrl3, uint64_t ___currentCount4, int32_t ___visibility5, const RuntimeMethod* method) 
{
	{
		// internal Event(string id, string name, string description, string imageUrl,
		//     ulong currentCount, EventVisibility visibility)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mId = id;
		String_t* L_0 = ___id0;
		__this->___mId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_0);
		// mName = name;
		String_t* L_1 = ___name1;
		__this->___mName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_1), (void*)L_1);
		// mDescription = description;
		String_t* L_2 = ___description2;
		__this->___mDescription_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription_2), (void*)L_2);
		// mImageUrl = imageUrl;
		String_t* L_3 = ___imageUrl3;
		__this->___mImageUrl_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mImageUrl_3), (void*)L_3);
		// mCurrentCount = currentCount;
		uint64_t L_4 = ___currentCount4;
		__this->___mCurrentCount_4 = L_4;
		// mVisibility = visibility;
		int32_t L_5 = ___visibility5;
		__this->___mVisibility_5 = L_5;
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Id_m068D5C8E601A6631DF512C72B5FBBFE0786B1ABF (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Name_m5DD8C06F8EA7F61A9E82130C25C4B3F633C54166 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Description_mC13A4161720C1803517724129D29F33069995257 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mDescription; }
		String_t* L_0 = __this->___mDescription_2;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_ImageUrl_mAC25F0E5F2C891BD491878F1B03562F0F803D311 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mImageUrl; }
		String_t* L_0 = __this->___mImageUrl_3;
		return L_0;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.Events.Event::get_CurrentCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Event_get_CurrentCount_mA0617C2248CF14849331F0E5B46005BB2EA873EC (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCurrentCount; }
		uint64_t L_0 = __this->___mCurrentCount_4;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_Visibility_mDF19D9454B0B8A6A7B302844BDBEFF6C271083E6 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mVisibility; }
		int32_t L_0 = __this->___mVisibility_5;
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->___mDescriptionUpdated_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->___mNewDescription_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->___mCoverImageUpdated_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mNewPngCoverImage_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___mNewPlayedTime_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6_inline (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4_inline (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalEndpointName; }
		String_t* L_0 = __this->___mLocalEndpointName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84_inline (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_0 = __this->___mRemoteEndpoint_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2_inline (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRemoteEndpointId; }
		String_t* L_0 = __this->___mRemoteEndpointId_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mResponseStatus; }
		int32_t L_0 = __this->___mResponseStatus_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->___mEndpointId_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->___mServiceId_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683_inline (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A_inline (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mInitializationCallback; }
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_0 = __this->___mInitializationCallback_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_gshared_inline (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* __this, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_gshared_inline (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* __this, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}

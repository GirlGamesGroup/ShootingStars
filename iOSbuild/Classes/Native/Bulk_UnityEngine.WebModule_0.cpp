#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// SimpleJson.JsonArray
struct JsonArray_t3708654325;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.String
struct String_t;
// SimpleJson.JsonObject
struct JsonObject_t3371841791;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t380635627;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t3055037934;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1613291102;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t286439485;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1848589470;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1898447907;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1400637802;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t3084478566;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionaryValueFactory_2_t3941988397;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t1268671514;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionary_2_t2801163697;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t127846814;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionaryValueFactory_2_t2820223155;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionary_2_t1679398455;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct ThreadSafeDictionaryValueFactory_2_t267383350;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct ThreadSafeDictionary_2_t3421525946;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t361514971;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t3534717025;
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct Dictionary_2_t775898338;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t3962162136;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t990642039;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t3161555474;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t981877220;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t2518025829;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3877623603;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t2185717595;
// System.Enum
struct Enum_t4135868527;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t3280590014;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0
struct U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1
struct U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
struct U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3
struct U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
struct U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t3801793838;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>[]
struct KeyValuePair_2U5BU5D_t2721925599;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>
struct Transform_1_t1572337315;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate[]
struct GetDelegateU5BU5D_t2569197774;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>
struct Transform_1_t1419609490;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct Dictionary_2_t3426224284;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct Dictionary_2_t1684096793;
// System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct Dictionary_2_t2805862035;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct IDictionary_2_t1269713426;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct IDictionary_2_t147948184;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct IDictionary_2_t1890075675;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;

extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const uint32_t JsonArray__ctor_m195583587_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t JsonArray_ToString_m812619535_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2606011945_RuntimeMethod_var;
extern const uint32_t JsonObject__ctor_m3450210177_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Add_m837785969_RuntimeMethod_var;
extern const uint32_t JsonObject_Add_m823210784_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Keys_m1349140209_RuntimeMethod_var;
extern const uint32_t JsonObject_get_Keys_m447254310_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2856242242_RuntimeMethod_var;
extern const uint32_t JsonObject_TryGetValue_m2977652994_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Values_m2402199293_RuntimeMethod_var;
extern const uint32_t JsonObject_get_Values_m4018831403_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m3008302402_RuntimeMethod_var;
extern const uint32_t JsonObject_get_Item_m4065906453_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_set_Item_m3454039676_RuntimeMethod_var;
extern const uint32_t JsonObject_set_Item_m1476409153_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2973773633_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2151159939_RuntimeMethod_var;
extern const uint32_t JsonObject_Add_m1997340583_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Clear_m1759170625_RuntimeMethod_var;
extern const uint32_t JsonObject_Clear_m3430064082_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var;
extern const uint32_t JsonObject_Contains_m2021235641_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1400637802_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonObject_CopyTo_m2516474251_RuntimeMethod_var;
extern String_t* _stringLiteral4007973390;
extern const uint32_t JsonObject_CopyTo_m2516474251_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Count_m2475045806_RuntimeMethod_var;
extern const uint32_t JsonObject_get_Count_m1346439376_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m2803104078_RuntimeMethod_var;
extern const uint32_t JsonObject_Remove_m127530102_MetadataUsageId;
extern RuntimeClass* Enumerator_t524577942_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m3826609069_RuntimeMethod_var;
extern const uint32_t JsonObject_GetEnumerator_m892713233_MetadataUsageId;
extern const uint32_t JsonObject_System_Collections_IEnumerable_GetEnumerator_m3749619898_MetadataUsageId;
extern RuntimeClass* ThreadSafeDictionaryValueFactory_2_t3941988397_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionary_2_t2801163697_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionaryValueFactory_2_t2820223155_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionary_2_t1679398455_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionaryValueFactory_2_t267383350_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionary_2_t3421525946_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ThreadSafeDictionaryValueFactory_2__ctor_m339730067_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionary_2__ctor_m783100048_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionaryValueFactory_2__ctor_m224934790_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionary_2__ctor_m2094617135_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionaryValueFactory_2__ctor_m671199302_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionary_2__ctor_m3006555163_RuntimeMethod_var;
extern const uint32_t PocoJsonSerializerStrategy__ctor_m1868059608_MetadataUsageId;
extern RuntimeClass* PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var;
extern RuntimeClass* ReflectionUtils_t3359723746_il2cpp_TypeInfo_var;
extern const uint32_t PocoJsonSerializerStrategy_ContructorDelegateFactory_m678547350_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t775898338_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3962162136_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1119912419_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t3534717025_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3161555474_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t319305757_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m396641810_RuntimeMethod_var;
extern const uint32_t PocoJsonSerializerStrategy_GetterValueFactory_m3975036453_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2518025829_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t981877220_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m329355109_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2__ctor_m3240315333_RuntimeMethod_var;
extern const uint32_t PocoJsonSerializerStrategy_SetterValueFactory_m3956056963_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern const uint32_t PocoJsonSerializerStrategy_SerializeEnum_m4174689057_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeOffset_t3229287507_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614620;
extern const uint32_t PocoJsonSerializerStrategy_TrySerializeKnownTypes_m4166187834_MetadataUsageId;
extern RuntimeClass* JsonObject_t3371841791_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t147948184_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2153423394_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3606140973_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1329213854_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1793809221_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1040615196_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3155663656_RuntimeMethod_var;
extern String_t* _stringLiteral818277059;
extern const uint32_t PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1793809221_MetadataUsageId;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4081536298;
extern String_t* _stringLiteral1858654798;
extern String_t* _stringLiteral1861407333;
extern const uint32_t PocoJsonSerializerStrategy__cctor_m40283078_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t3280590014_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t438340297_il2cpp_TypeInfo_var;
extern const uint32_t ReflectionUtils_GetConstructorInfo_m2882209707_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetContructor_m3504171333_MetadataUsageId;
extern RuntimeClass* U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstructorDelegate_t361514971_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CGetConstructorByReflectionU3Ec__AnonStorey0_U3CU3Em__0_m2334201525_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetConstructorByReflection_m1925356946_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetConstructorByReflection_m1390135007_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetGetMethod_m3841956391_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetGetMethod_m1892294288_MetadataUsageId;
extern RuntimeClass* U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308_il2cpp_TypeInfo_var;
extern RuntimeClass* GetDelegate_t990642039_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m410316137_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetGetMethodByReflection_m4290210058_MetadataUsageId;
extern RuntimeClass* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__0_m1043867005_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetGetMethodByReflection_m1225395433_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetSetMethod_m2399224621_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetSetMethod_m2005559402_MetadataUsageId;
extern RuntimeClass* U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190_il2cpp_TypeInfo_var;
extern RuntimeClass* SetDelegate_t2185717595_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_m999219703_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetSetMethodByReflection_m3105966930_MetadataUsageId;
extern RuntimeClass* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__0_m2074887166_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetSetMethodByReflection_m975469098_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const uint32_t ReflectionUtils__cctor_m1917945226_MetadataUsageId;
extern const uint32_t U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m410316137_MetadataUsageId;
extern const uint32_t U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_m999219703_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t SimpleJson_SerializeObject_m2283059057_MetadataUsageId;
extern const uint32_t SimpleJson_ParseObject_m4160195101_MetadataUsageId;
extern RuntimeClass* JsonArray_t3708654325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern const uint32_t SimpleJson_ParseArray_m2446904987_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t SimpleJson_ParseValue_m945527480_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral3455432692;
extern const uint32_t SimpleJson_ParseString_m2326226096_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SimpleJson_ConvertFromUtf32_m871912507_RuntimeMethod_var;
extern String_t* _stringLiteral1778249823;
extern String_t* _stringLiteral2354794577;
extern String_t* _stringLiteral4034890030;
extern const uint32_t SimpleJson_ConvertFromUtf32_m871912507_MetadataUsageId;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614587;
extern const uint32_t SimpleJson_ParseNumber_m314225859_MetadataUsageId;
extern String_t* _stringLiteral2206812729;
extern const uint32_t SimpleJson_GetLastIndexOfNumber_m3317654360_MetadataUsageId;
extern String_t* _stringLiteral352322198;
extern const uint32_t SimpleJson_EatWhitespace_m3622999568_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t96558379_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IJsonSerializerStrategy_t3801793838_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral3875954633;
extern String_t* _stringLiteral1202628576;
extern const uint32_t SimpleJson_SerializeValue_m3105567063_MetadataUsageId;
extern String_t* _stringLiteral3452614613;
extern String_t* _stringLiteral3452614532;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3452614611;
extern const uint32_t SimpleJson_SerializeObject_m508764672_MetadataUsageId;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3452614643;
extern const uint32_t SimpleJson_SerializeArray_m113723777_MetadataUsageId;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern const uint32_t SimpleJson_SerializeString_m499048567_MetadataUsageId;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614606;
extern const uint32_t SimpleJson_SerializeNumber_m2762926622_MetadataUsageId;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern const uint32_t SimpleJson_IsNumeric_m2247703563_MetadataUsageId;
extern RuntimeClass* SimpleJson_t666527214_il2cpp_TypeInfo_var;
extern const uint32_t SimpleJson_get_CurrentJsonSerializerStrategy_m422774680_MetadataUsageId;
extern const uint32_t SimpleJson_get_PocoJsonSerializerStrategy_m257589513_MetadataUsageId;

struct KeyValuePair_2U5BU5D_t1898447907;
struct TypeU5BU5D_t3940880105;
struct StringU5BU5D_t1281789340;
struct ConstructorInfoU5BU5D_t881249896;
struct ParameterInfoU5BU5D_t390618515;
struct PropertyInfoU5BU5D_t1461822886;
struct FieldInfoU5BU5D_t846150980;
struct ObjectU5BU5D_t2843939325;
struct CharU5BU5D_t3528271667;


#ifndef U3CMODULEU3E_T692745533_H
#define U3CMODULEU3E_T692745533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745533 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745533_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef DICTIONARY_2_T2518025829_H
#define DICTIONARY_2_T2518025829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct  Dictionary_2_t2518025829  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	KeyValuePair_2U5BU5D_t2721925599* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___valueSlots_7)); }
	inline KeyValuePair_2U5BU5D_t2721925599* get_valueSlots_7() const { return ___valueSlots_7; }
	inline KeyValuePair_2U5BU5D_t2721925599** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(KeyValuePair_2U5BU5D_t2721925599* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2518025829_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1572337315 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2518025829_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1572337315 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1572337315 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1572337315 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2518025829_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef DICTIONARY_2_T775898338_H
#define DICTIONARY_2_T775898338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct  Dictionary_2_t775898338  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	GetDelegateU5BU5D_t2569197774* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___valueSlots_7)); }
	inline GetDelegateU5BU5D_t2569197774* get_valueSlots_7() const { return ___valueSlots_7; }
	inline GetDelegateU5BU5D_t2569197774** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(GetDelegateU5BU5D_t2569197774* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t775898338_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1419609490 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t775898338_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1419609490 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1419609490 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1419609490 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T775898338_H
#ifndef THREADSAFEDICTIONARY_2_T3421525946_H
#define THREADSAFEDICTIONARY_2_T3421525946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct  ThreadSafeDictionary_2_t3421525946  : public RuntimeObject
{
public:
	// System.Object SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_lock
	RuntimeObject * ____lock_0;
	// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t267383350 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_dictionary
	Dictionary_2_t3426224284 * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t3421525946, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t3421525946, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_t267383350 * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_t267383350 ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_t267383350 * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&____valueFactory_1), value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t3421525946, ____dictionary_2)); }
	inline Dictionary_2_t3426224284 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t3426224284 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t3426224284 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARY_2_T3421525946_H
#ifndef THREADSAFEDICTIONARY_2_T1679398455_H
#define THREADSAFEDICTIONARY_2_T1679398455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct  ThreadSafeDictionary_2_t1679398455  : public RuntimeObject
{
public:
	// System.Object SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_lock
	RuntimeObject * ____lock_0;
	// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t2820223155 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_dictionary
	Dictionary_2_t1684096793 * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t1679398455, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t1679398455, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_t2820223155 * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_t2820223155 ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_t2820223155 * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&____valueFactory_1), value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t1679398455, ____dictionary_2)); }
	inline Dictionary_2_t1684096793 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t1684096793 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t1684096793 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARY_2_T1679398455_H
#ifndef THREADSAFEDICTIONARY_2_T2801163697_H
#define THREADSAFEDICTIONARY_2_T2801163697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct  ThreadSafeDictionary_2_t2801163697  : public RuntimeObject
{
public:
	// System.Object SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_lock
	RuntimeObject * ____lock_0;
	// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t3941988397 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_dictionary
	Dictionary_2_t2805862035 * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t2801163697, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t2801163697, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_t3941988397 * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_t3941988397 ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_t3941988397 * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&____valueFactory_1), value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t2801163697, ____dictionary_2)); }
	inline Dictionary_2_t2805862035 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t2805862035 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t2805862035 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARY_2_T2801163697_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_1;
	// System.String System.Uri::source
	String_t* ___source_2;
	// System.String System.Uri::scheme
	String_t* ___scheme_3;
	// System.String System.Uri::host
	String_t* ___host_4;
	// System.Int32 System.Uri::port
	int32_t ___port_5;
	// System.String System.Uri::path
	String_t* ___path_6;
	// System.String System.Uri::query
	String_t* ___query_7;
	// System.String System.Uri::fragment
	String_t* ___fragment_8;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_9;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_10;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_11;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_12;
	// System.String[] System.Uri::segments
	StringU5BU5D_t1281789340* ___segments_13;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_14;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_15;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_16;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_17;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_18;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_32;

public:
	inline static int32_t get_offset_of_isUnixFilePath_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_1)); }
	inline bool get_isUnixFilePath_1() const { return ___isUnixFilePath_1; }
	inline bool* get_address_of_isUnixFilePath_1() { return &___isUnixFilePath_1; }
	inline void set_isUnixFilePath_1(bool value)
	{
		___isUnixFilePath_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_2)); }
	inline String_t* get_source_2() const { return ___source_2; }
	inline String_t** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(String_t* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((&___source_2), value);
	}

	inline static int32_t get_offset_of_scheme_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_3)); }
	inline String_t* get_scheme_3() const { return ___scheme_3; }
	inline String_t** get_address_of_scheme_3() { return &___scheme_3; }
	inline void set_scheme_3(String_t* value)
	{
		___scheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_3), value);
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((&___host_4), value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_6)); }
	inline String_t* get_path_6() const { return ___path_6; }
	inline String_t** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(String_t* value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((&___path_6), value);
	}

	inline static int32_t get_offset_of_query_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_7)); }
	inline String_t* get_query_7() const { return ___query_7; }
	inline String_t** get_address_of_query_7() { return &___query_7; }
	inline void set_query_7(String_t* value)
	{
		___query_7 = value;
		Il2CppCodeGenWriteBarrier((&___query_7), value);
	}

	inline static int32_t get_offset_of_fragment_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_8)); }
	inline String_t* get_fragment_8() const { return ___fragment_8; }
	inline String_t** get_address_of_fragment_8() { return &___fragment_8; }
	inline void set_fragment_8(String_t* value)
	{
		___fragment_8 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_8), value);
	}

	inline static int32_t get_offset_of_userinfo_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_9)); }
	inline String_t* get_userinfo_9() const { return ___userinfo_9; }
	inline String_t** get_address_of_userinfo_9() { return &___userinfo_9; }
	inline void set_userinfo_9(String_t* value)
	{
		___userinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_9), value);
	}

	inline static int32_t get_offset_of_isUnc_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_10)); }
	inline bool get_isUnc_10() const { return ___isUnc_10; }
	inline bool* get_address_of_isUnc_10() { return &___isUnc_10; }
	inline void set_isUnc_10(bool value)
	{
		___isUnc_10 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_11)); }
	inline bool get_isOpaquePart_11() const { return ___isOpaquePart_11; }
	inline bool* get_address_of_isOpaquePart_11() { return &___isOpaquePart_11; }
	inline void set_isOpaquePart_11(bool value)
	{
		___isOpaquePart_11 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_12)); }
	inline bool get_isAbsoluteUri_12() const { return ___isAbsoluteUri_12; }
	inline bool* get_address_of_isAbsoluteUri_12() { return &___isAbsoluteUri_12; }
	inline void set_isAbsoluteUri_12(bool value)
	{
		___isAbsoluteUri_12 = value;
	}

	inline static int32_t get_offset_of_segments_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___segments_13)); }
	inline StringU5BU5D_t1281789340* get_segments_13() const { return ___segments_13; }
	inline StringU5BU5D_t1281789340** get_address_of_segments_13() { return &___segments_13; }
	inline void set_segments_13(StringU5BU5D_t1281789340* value)
	{
		___segments_13 = value;
		Il2CppCodeGenWriteBarrier((&___segments_13), value);
	}

	inline static int32_t get_offset_of_userEscaped_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_14)); }
	inline bool get_userEscaped_14() const { return ___userEscaped_14; }
	inline bool* get_address_of_userEscaped_14() { return &___userEscaped_14; }
	inline void set_userEscaped_14(bool value)
	{
		___userEscaped_14 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_15)); }
	inline String_t* get_cachedAbsoluteUri_15() const { return ___cachedAbsoluteUri_15; }
	inline String_t** get_address_of_cachedAbsoluteUri_15() { return &___cachedAbsoluteUri_15; }
	inline void set_cachedAbsoluteUri_15(String_t* value)
	{
		___cachedAbsoluteUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_15), value);
	}

	inline static int32_t get_offset_of_cachedToString_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_16)); }
	inline String_t* get_cachedToString_16() const { return ___cachedToString_16; }
	inline String_t** get_address_of_cachedToString_16() { return &___cachedToString_16; }
	inline void set_cachedToString_16(String_t* value)
	{
		___cachedToString_16 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_16), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_17)); }
	inline String_t* get_cachedLocalPath_17() const { return ___cachedLocalPath_17; }
	inline String_t** get_address_of_cachedLocalPath_17() { return &___cachedLocalPath_17; }
	inline void set_cachedLocalPath_17(String_t* value)
	{
		___cachedLocalPath_17 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_17), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_18)); }
	inline int32_t get_cachedHashCode_18() const { return ___cachedHashCode_18; }
	inline int32_t* get_address_of_cachedHashCode_18() { return &___cachedHashCode_18; }
	inline void set_cachedHashCode_18(int32_t value)
	{
		___cachedHashCode_18 = value;
	}

	inline static int32_t get_offset_of_parser_32() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_32)); }
	inline UriParser_t3890150400 * get_parser_32() const { return ___parser_32; }
	inline UriParser_t3890150400 ** get_address_of_parser_32() { return &___parser_32; }
	inline void set_parser_32(UriParser_t3890150400 * value)
	{
		___parser_32 = value;
		Il2CppCodeGenWriteBarrier((&___parser_32), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_19;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_20;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_21;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_22;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_23;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_24;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_25;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_26;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_27;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_28;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_29;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_30;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_37;

public:
	inline static int32_t get_offset_of_hexUpperChars_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_19)); }
	inline String_t* get_hexUpperChars_19() const { return ___hexUpperChars_19; }
	inline String_t** get_address_of_hexUpperChars_19() { return &___hexUpperChars_19; }
	inline void set_hexUpperChars_19(String_t* value)
	{
		___hexUpperChars_19 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_19), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_20)); }
	inline String_t* get_SchemeDelimiter_20() const { return ___SchemeDelimiter_20; }
	inline String_t** get_address_of_SchemeDelimiter_20() { return &___SchemeDelimiter_20; }
	inline void set_SchemeDelimiter_20(String_t* value)
	{
		___SchemeDelimiter_20 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_21)); }
	inline String_t* get_UriSchemeFile_21() const { return ___UriSchemeFile_21; }
	inline String_t** get_address_of_UriSchemeFile_21() { return &___UriSchemeFile_21; }
	inline void set_UriSchemeFile_21(String_t* value)
	{
		___UriSchemeFile_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_22)); }
	inline String_t* get_UriSchemeFtp_22() const { return ___UriSchemeFtp_22; }
	inline String_t** get_address_of_UriSchemeFtp_22() { return &___UriSchemeFtp_22; }
	inline void set_UriSchemeFtp_22(String_t* value)
	{
		___UriSchemeFtp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_23)); }
	inline String_t* get_UriSchemeGopher_23() const { return ___UriSchemeGopher_23; }
	inline String_t** get_address_of_UriSchemeGopher_23() { return &___UriSchemeGopher_23; }
	inline void set_UriSchemeGopher_23(String_t* value)
	{
		___UriSchemeGopher_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_24)); }
	inline String_t* get_UriSchemeHttp_24() const { return ___UriSchemeHttp_24; }
	inline String_t** get_address_of_UriSchemeHttp_24() { return &___UriSchemeHttp_24; }
	inline void set_UriSchemeHttp_24(String_t* value)
	{
		___UriSchemeHttp_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_25)); }
	inline String_t* get_UriSchemeHttps_25() const { return ___UriSchemeHttps_25; }
	inline String_t** get_address_of_UriSchemeHttps_25() { return &___UriSchemeHttps_25; }
	inline void set_UriSchemeHttps_25(String_t* value)
	{
		___UriSchemeHttps_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_26)); }
	inline String_t* get_UriSchemeMailto_26() const { return ___UriSchemeMailto_26; }
	inline String_t** get_address_of_UriSchemeMailto_26() { return &___UriSchemeMailto_26; }
	inline void set_UriSchemeMailto_26(String_t* value)
	{
		___UriSchemeMailto_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_27)); }
	inline String_t* get_UriSchemeNews_27() const { return ___UriSchemeNews_27; }
	inline String_t** get_address_of_UriSchemeNews_27() { return &___UriSchemeNews_27; }
	inline void set_UriSchemeNews_27(String_t* value)
	{
		___UriSchemeNews_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_28)); }
	inline String_t* get_UriSchemeNntp_28() const { return ___UriSchemeNntp_28; }
	inline String_t** get_address_of_UriSchemeNntp_28() { return &___UriSchemeNntp_28; }
	inline void set_UriSchemeNntp_28(String_t* value)
	{
		___UriSchemeNntp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_28), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_29)); }
	inline String_t* get_UriSchemeNetPipe_29() const { return ___UriSchemeNetPipe_29; }
	inline String_t** get_address_of_UriSchemeNetPipe_29() { return &___UriSchemeNetPipe_29; }
	inline void set_UriSchemeNetPipe_29(String_t* value)
	{
		___UriSchemeNetPipe_29 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_29), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_30)); }
	inline String_t* get_UriSchemeNetTcp_30() const { return ___UriSchemeNetTcp_30; }
	inline String_t** get_address_of_UriSchemeNetTcp_30() { return &___UriSchemeNetTcp_30; }
	inline void set_UriSchemeNetTcp_30(String_t* value)
	{
		___UriSchemeNetTcp_30 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_30), value);
	}

	inline static int32_t get_offset_of_schemes_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_31)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_31() const { return ___schemes_31; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_31() { return &___schemes_31; }
	inline void set_schemes_31(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_31 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_33() const { return ___U3CU3Ef__switchU24map12_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_33() { return &___U3CU3Ef__switchU24map12_33; }
	inline void set_U3CU3Ef__switchU24map12_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_34() const { return ___U3CU3Ef__switchU24map13_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_34() { return &___U3CU3Ef__switchU24map13_34; }
	inline void set_U3CU3Ef__switchU24map13_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_35() const { return ___U3CU3Ef__switchU24map14_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_35() { return &___U3CU3Ef__switchU24map14_35; }
	inline void set_U3CU3Ef__switchU24map14_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_36() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_36)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_36() const { return ___U3CU3Ef__switchU24map15_36; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_36() { return &___U3CU3Ef__switchU24map15_36; }
	inline void set_U3CU3Ef__switchU24map15_36(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_37() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_37)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_37() const { return ___U3CU3Ef__switchU24map16_37; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_37() { return &___U3CU3Ef__switchU24map16_37; }
	inline void set_U3CU3Ef__switchU24map16_37(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef SIMPLEJSON_T666527214_H
#define SIMPLEJSON_T666527214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.SimpleJson
struct  SimpleJson_t666527214  : public RuntimeObject
{
public:

public:
};

struct SimpleJson_t666527214_StaticFields
{
public:
	// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	RuntimeObject* ____currentJsonSerializerStrategy_0;
	// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t3084478566 * ____pocoJsonSerializerStrategy_1;

public:
	inline static int32_t get_offset_of__currentJsonSerializerStrategy_0() { return static_cast<int32_t>(offsetof(SimpleJson_t666527214_StaticFields, ____currentJsonSerializerStrategy_0)); }
	inline RuntimeObject* get__currentJsonSerializerStrategy_0() const { return ____currentJsonSerializerStrategy_0; }
	inline RuntimeObject** get_address_of__currentJsonSerializerStrategy_0() { return &____currentJsonSerializerStrategy_0; }
	inline void set__currentJsonSerializerStrategy_0(RuntimeObject* value)
	{
		____currentJsonSerializerStrategy_0 = value;
		Il2CppCodeGenWriteBarrier((&____currentJsonSerializerStrategy_0), value);
	}

	inline static int32_t get_offset_of__pocoJsonSerializerStrategy_1() { return static_cast<int32_t>(offsetof(SimpleJson_t666527214_StaticFields, ____pocoJsonSerializerStrategy_1)); }
	inline PocoJsonSerializerStrategy_t3084478566 * get__pocoJsonSerializerStrategy_1() const { return ____pocoJsonSerializerStrategy_1; }
	inline PocoJsonSerializerStrategy_t3084478566 ** get_address_of__pocoJsonSerializerStrategy_1() { return &____pocoJsonSerializerStrategy_1; }
	inline void set__pocoJsonSerializerStrategy_1(PocoJsonSerializerStrategy_t3084478566 * value)
	{
		____pocoJsonSerializerStrategy_1 = value;
		Il2CppCodeGenWriteBarrier((&____pocoJsonSerializerStrategy_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEJSON_T666527214_H
#ifndef U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY4_T962110654_H
#define U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY4_T962110654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
struct  U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___fieldInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY4_T962110654_H
#ifndef U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY3_T962176190_H
#define U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY3_T962176190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3
struct  U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3::methodInfo
	MethodInfo_t * ___methodInfo_0;

public:
	inline static int32_t get_offset_of_methodInfo_0() { return static_cast<int32_t>(offsetof(U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190, ___methodInfo_0)); }
	inline MethodInfo_t * get_methodInfo_0() const { return ___methodInfo_0; }
	inline MethodInfo_t ** get_address_of_methodInfo_0() { return &___methodInfo_0; }
	inline void set_methodInfo_0(MethodInfo_t * value)
	{
		___methodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___methodInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY3_T962176190_H
#ifndef U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY2_T264918772_H
#define U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY2_T264918772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
struct  U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___fieldInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY2_T264918772_H
#ifndef U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY1_T264984308_H
#define U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY1_T264984308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1
struct  U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1::methodInfo
	MethodInfo_t * ___methodInfo_0;

public:
	inline static int32_t get_offset_of_methodInfo_0() { return static_cast<int32_t>(offsetof(U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308, ___methodInfo_0)); }
	inline MethodInfo_t * get_methodInfo_0() const { return ___methodInfo_0; }
	inline MethodInfo_t ** get_address_of_methodInfo_0() { return &___methodInfo_0; }
	inline void set_methodInfo_0(MethodInfo_t * value)
	{
		___methodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___methodInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY1_T264984308_H
#ifndef U3CGETCONSTRUCTORBYREFLECTIONU3EC__ANONSTOREY0_T1111257005_H
#define U3CGETCONSTRUCTORBYREFLECTIONU3EC__ANONSTOREY0_T1111257005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0
struct  U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0::constructorInfo
	ConstructorInfo_t5769829 * ___constructorInfo_0;

public:
	inline static int32_t get_offset_of_constructorInfo_0() { return static_cast<int32_t>(offsetof(U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005, ___constructorInfo_0)); }
	inline ConstructorInfo_t5769829 * get_constructorInfo_0() const { return ___constructorInfo_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_constructorInfo_0() { return &___constructorInfo_0; }
	inline void set_constructorInfo_0(ConstructorInfo_t5769829 * value)
	{
		___constructorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___constructorInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETCONSTRUCTORBYREFLECTIONU3EC__ANONSTOREY0_T1111257005_H
#ifndef REFLECTIONUTILS_T3359723746_H
#define REFLECTIONUTILS_T3359723746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils
struct  ReflectionUtils_t3359723746  : public RuntimeObject
{
public:

public:
};

struct ReflectionUtils_t3359723746_StaticFields
{
public:
	// System.Object[] SimpleJson.Reflection.ReflectionUtils::EmptyObjects
	ObjectU5BU5D_t2843939325* ___EmptyObjects_0;

public:
	inline static int32_t get_offset_of_EmptyObjects_0() { return static_cast<int32_t>(offsetof(ReflectionUtils_t3359723746_StaticFields, ___EmptyObjects_0)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyObjects_0() const { return ___EmptyObjects_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyObjects_0() { return &___EmptyObjects_0; }
	inline void set_EmptyObjects_0(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyObjects_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyObjects_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONUTILS_T3359723746_H
#ifndef KEYCOLLECTION_T3055037934_H
#define KEYCOLLECTION_T3055037934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct  KeyCollection_t3055037934  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2865362463 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3055037934, ___dictionary_0)); }
	inline Dictionary_2_t2865362463 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2865362463 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T3055037934_H
#ifndef VALUECOLLECTION_T286439485_H
#define VALUECOLLECTION_T286439485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct  ValueCollection_t286439485  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2865362463 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t286439485, ___dictionary_0)); }
	inline Dictionary_2_t2865362463 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2865362463 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T286439485_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef JSONOBJECT_T3371841791_H
#define JSONOBJECT_T3371841791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.JsonObject
struct  JsonObject_t3371841791  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> SimpleJson.JsonObject::_members
	Dictionary_2_t2865362463 * ____members_0;

public:
	inline static int32_t get_offset_of__members_0() { return static_cast<int32_t>(offsetof(JsonObject_t3371841791, ____members_0)); }
	inline Dictionary_2_t2865362463 * get__members_0() const { return ____members_0; }
	inline Dictionary_2_t2865362463 ** get_address_of__members_0() { return &____members_0; }
	inline void set__members_0(Dictionary_2_t2865362463 * value)
	{
		____members_0 = value;
		Il2CppCodeGenWriteBarrier((&____members_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONOBJECT_T3371841791_H
#ifndef POCOJSONSERIALIZERSTRATEGY_T3084478566_H
#define POCOJSONSERIALIZERSTRATEGY_T3084478566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.PocoJsonSerializerStrategy
struct  PocoJsonSerializerStrategy_t3084478566  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate> SimpleJson.PocoJsonSerializerStrategy::ConstructorCache
	RuntimeObject* ___ConstructorCache_0;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>> SimpleJson.PocoJsonSerializerStrategy::GetCache
	RuntimeObject* ___GetCache_1;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>> SimpleJson.PocoJsonSerializerStrategy::SetCache
	RuntimeObject* ___SetCache_2;

public:
	inline static int32_t get_offset_of_ConstructorCache_0() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3084478566, ___ConstructorCache_0)); }
	inline RuntimeObject* get_ConstructorCache_0() const { return ___ConstructorCache_0; }
	inline RuntimeObject** get_address_of_ConstructorCache_0() { return &___ConstructorCache_0; }
	inline void set_ConstructorCache_0(RuntimeObject* value)
	{
		___ConstructorCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorCache_0), value);
	}

	inline static int32_t get_offset_of_GetCache_1() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3084478566, ___GetCache_1)); }
	inline RuntimeObject* get_GetCache_1() const { return ___GetCache_1; }
	inline RuntimeObject** get_address_of_GetCache_1() { return &___GetCache_1; }
	inline void set_GetCache_1(RuntimeObject* value)
	{
		___GetCache_1 = value;
		Il2CppCodeGenWriteBarrier((&___GetCache_1), value);
	}

	inline static int32_t get_offset_of_SetCache_2() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3084478566, ___SetCache_2)); }
	inline RuntimeObject* get_SetCache_2() const { return ___SetCache_2; }
	inline RuntimeObject** get_address_of_SetCache_2() { return &___SetCache_2; }
	inline void set_SetCache_2(RuntimeObject* value)
	{
		___SetCache_2 = value;
		Il2CppCodeGenWriteBarrier((&___SetCache_2), value);
	}
};

struct PocoJsonSerializerStrategy_t3084478566_StaticFields
{
public:
	// System.Type[] SimpleJson.PocoJsonSerializerStrategy::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Type[] SimpleJson.PocoJsonSerializerStrategy::ArrayConstructorParameterTypes
	TypeU5BU5D_t3940880105* ___ArrayConstructorParameterTypes_4;
	// System.String[] SimpleJson.PocoJsonSerializerStrategy::Iso8601Format
	StringU5BU5D_t1281789340* ___Iso8601Format_5;

public:
	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3084478566_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_ArrayConstructorParameterTypes_4() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3084478566_StaticFields, ___ArrayConstructorParameterTypes_4)); }
	inline TypeU5BU5D_t3940880105* get_ArrayConstructorParameterTypes_4() const { return ___ArrayConstructorParameterTypes_4; }
	inline TypeU5BU5D_t3940880105** get_address_of_ArrayConstructorParameterTypes_4() { return &___ArrayConstructorParameterTypes_4; }
	inline void set_ArrayConstructorParameterTypes_4(TypeU5BU5D_t3940880105* value)
	{
		___ArrayConstructorParameterTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___ArrayConstructorParameterTypes_4), value);
	}

	inline static int32_t get_offset_of_Iso8601Format_5() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3084478566_StaticFields, ___Iso8601Format_5)); }
	inline StringU5BU5D_t1281789340* get_Iso8601Format_5() const { return ___Iso8601Format_5; }
	inline StringU5BU5D_t1281789340** get_address_of_Iso8601Format_5() { return &___Iso8601Format_5; }
	inline void set_Iso8601Format_5(StringU5BU5D_t1281789340* value)
	{
		___Iso8601Format_5 = value;
		Il2CppCodeGenWriteBarrier((&___Iso8601Format_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POCOJSONSERIALIZERSTRATEGY_T3084478566_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef KEYVALUEPAIR_2_T3173570505_H
#define KEYVALUEPAIR_2_T3173570505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct  KeyValuePair_2_t3173570505 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GetDelegate_t990642039 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3173570505, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3173570505, ___value_1)); }
	inline GetDelegate_t990642039 * get_value_1() const { return ___value_1; }
	inline GetDelegate_t990642039 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GetDelegate_t990642039 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3173570505_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T968067334_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef JSONARRAY_T3708654325_H
#define JSONARRAY_T3708654325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.JsonArray
struct  JsonArray_t3708654325  : public List_1_t257213610
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONARRAY_T3708654325_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_2)); }
	inline int16_t get_m_value_2() const { return ___m_value_2; }
	inline int16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef KEYVALUEPAIR_2_T2732769530_H
#define KEYVALUEPAIR_2_T2732769530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
struct  KeyValuePair_2_t2732769530 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	SetDelegate_t2185717595 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2732769530, ___key_0)); }
	inline Type_t * get_key_0() const { return ___key_0; }
	inline Type_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Type_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2732769530, ___value_1)); }
	inline SetDelegate_t2185717595 * get_value_1() const { return ___value_1; }
	inline SetDelegate_t2185717595 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(SetDelegate_t2185717595 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2732769530_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_T617258130_H
#ifndef ENUMERATOR_T524577942_H
#define ENUMERATOR_T524577942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct  Enumerator_t524577942 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2865362463 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t968067334  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___dictionary_0)); }
	inline Dictionary_2_t2865362463 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2865362463 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___current_3)); }
	inline KeyValuePair_2_t968067334  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t968067334 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t968067334  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T524577942_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t3738529785  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t881159249  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___dt_2)); }
	inline DateTime_t3738529785  get_dt_2() const { return ___dt_2; }
	inline DateTime_t3738529785 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t3738529785  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___utc_offset_3)); }
	inline TimeSpan_t881159249  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t881159249 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t881159249  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t3229287507  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t3229287507  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
#ifndef THREADSAFEDICTIONARYVALUEFACTORY_2_T3941988397_H
#define THREADSAFEDICTIONARYVALUEFACTORY_2_T3941988397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct  ThreadSafeDictionaryValueFactory_2_t3941988397  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARYVALUEFACTORY_2_T3941988397_H
#ifndef CONSTRUCTORDELEGATE_T361514971_H
#define CONSTRUCTORDELEGATE_T361514971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct  ConstructorDelegate_t361514971  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORDELEGATE_T361514971_H
#ifndef THREADSAFEDICTIONARYVALUEFACTORY_2_T2820223155_H
#define THREADSAFEDICTIONARYVALUEFACTORY_2_T2820223155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct  ThreadSafeDictionaryValueFactory_2_t2820223155  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARYVALUEFACTORY_2_T2820223155_H
#ifndef THREADSAFEDICTIONARYVALUEFACTORY_2_T267383350_H
#define THREADSAFEDICTIONARYVALUEFACTORY_2_T267383350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct  ThreadSafeDictionaryValueFactory_2_t267383350  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARYVALUEFACTORY_2_T267383350_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef GETDELEGATE_T990642039_H
#define GETDELEGATE_T990642039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct  GetDelegate_t990642039  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETDELEGATE_T990642039_H
#ifndef SETDELEGATE_T2185717595_H
#define SETDELEGATE_T2185717595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct  SetDelegate_t2185717595  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETDELEGATE_T2185717595_H
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1898447907  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t968067334  m_Items[1];

public:
	inline KeyValuePair_2_t968067334  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t968067334 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t968067334  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t968067334  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t968067334 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t968067334  value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConstructorInfo_t5769829 * m_Items[1];

public:
	inline ConstructorInfo_t5769829 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ConstructorInfo_t5769829 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" IL2CPP_METHOD_ATTR ValueCollection_t1848589470 * Dictionary_2_get_Values_m2492087945_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3919933788_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ThreadSafeDictionaryValueFactory_2__ctor_m3167580739_gshared (ThreadSafeDictionaryValueFactory_2_t1268671514 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ThreadSafeDictionary_2__ctor_m1806528528_gshared (ThreadSafeDictionary_2_t127846814 * __this, ThreadSafeDictionaryValueFactory_2_t1268671514 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3578475401_gshared (Dictionary_2_t3877623603 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m727165395_gshared (KeyValuePair_2_t2530217319 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
#define List_1__ctor_m2321703786(__this, method) ((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m3082180887 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___json0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m2606011945(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
#define Dictionary_2_Add_m837785969(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m1349140209(__this, method) ((  KeyCollection_t3055037934 * (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m2856242242(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m2402199293(__this, method) ((  ValueCollection_t286439485 * (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_get_Values_m2492087945_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
#define Dictionary_2_get_Item_m3008302402(__this, p0, method) ((  RuntimeObject * (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m3454039676(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2973773633(__this, method) ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2151159939(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m1759170625(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m87616083(__this, p0, method) ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t JsonObject_get_Count_m1346439376 (JsonObject_t3371841791 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_GetEnumerator_m892713233 (JsonObject_t3371841791 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m2475045806(__this, method) ((  int32_t (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0)
#define Dictionary_2_Remove_m2803104078(__this, p0, method) ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3826609069(__this, method) ((  Enumerator_t524577942  (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Object,System.IntPtr)
#define ThreadSafeDictionaryValueFactory_2__ctor_m339730067(__this, p0, p1, method) ((  void (*) (ThreadSafeDictionaryValueFactory_2_t3941988397 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ThreadSafeDictionaryValueFactory_2__ctor_m3167580739_gshared)(__this, p0, p1, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
#define ThreadSafeDictionary_2__ctor_m783100048(__this, p0, method) ((  void (*) (ThreadSafeDictionary_2_t2801163697 *, ThreadSafeDictionaryValueFactory_2_t3941988397 *, const RuntimeMethod*))ThreadSafeDictionary_2__ctor_m1806528528_gshared)(__this, p0, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(System.Object,System.IntPtr)
#define ThreadSafeDictionaryValueFactory_2__ctor_m224934790(__this, p0, p1, method) ((  void (*) (ThreadSafeDictionaryValueFactory_2_t2820223155 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ThreadSafeDictionaryValueFactory_2__ctor_m3167580739_gshared)(__this, p0, p1, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
#define ThreadSafeDictionary_2__ctor_m2094617135(__this, p0, method) ((  void (*) (ThreadSafeDictionary_2_t1679398455 *, ThreadSafeDictionaryValueFactory_2_t2820223155 *, const RuntimeMethod*))ThreadSafeDictionary_2__ctor_m1806528528_gshared)(__this, p0, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(System.Object,System.IntPtr)
#define ThreadSafeDictionaryValueFactory_2__ctor_m671199302(__this, p0, p1, method) ((  void (*) (ThreadSafeDictionaryValueFactory_2_t267383350 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ThreadSafeDictionaryValueFactory_2__ctor_m3167580739_gshared)(__this, p0, p1, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
#define ThreadSafeDictionary_2__ctor_m3006555163(__this, p0, method) ((  void (*) (ThreadSafeDictionary_2_t3421525946 *, ThreadSafeDictionaryValueFactory_2_t267383350 *, const RuntimeMethod*))ThreadSafeDictionary_2__ctor_m1806528528_gshared)(__this, p0, method)
// System.Boolean System.Type::get_IsArray()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t361514971 * ReflectionUtils_GetContructor_m3504171333 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::.ctor()
#define Dictionary_2__ctor_m396641810(__this, method) ((  void (*) (Dictionary_2_t775898338 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetProperties_m1403189109 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m786244401 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_m2399864271 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m2180846589 (MethodBase_t * __this, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t990642039 * ReflectionUtils_GetGetMethod_m3841956391 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetFields_m2128355452 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_m3482711189 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPublic_m3378038140 (FieldInfo_t * __this, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t990642039 * ReflectionUtils_GetGetMethod_m1892294288 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor()
#define Dictionary_2__ctor_m329355109(__this, method) ((  void (*) (Dictionary_2_t2518025829 *, const RuntimeMethod*))Dictionary_2__ctor_m3578475401_gshared)(__this, method)
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m2025597628 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t2185717595 * ReflectionUtils_GetSetMethod_m2399224621 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>::.ctor(!0,!1)
#define KeyValuePair_2__ctor_m3240315333(__this, p0, p1, method) ((  void (*) (KeyValuePair_2_t2732769530 *, Type_t *, SetDelegate_t2185717595 *, const RuntimeMethod*))KeyValuePair_2__ctor_m727165395_gshared)(__this, p0, p1, method)
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_m930369112 (FieldInfo_t * __this, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t2185717595 * ReflectionUtils_GetSetMethod_m2005559402 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m4017511472 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_ToUniversalTime_m1945318289 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m2992030064 (DateTime_t3738529785 * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::ToUniversalTime()
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  DateTimeOffset_ToUniversalTime_m1292281655 (DateTimeOffset_t3229287507 * __this, const RuntimeMethod* method);
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_m3985341516 (DateTimeOffset_t3229287507 * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.Guid::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Guid_ToString_m4056316049 (Guid_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void SimpleJson.JsonObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonObject__ctor_m3450210177 (JsonObject_t3371841791 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::get_Value()
#define KeyValuePair_2_get_Value_m1040615196(__this, method) ((  GetDelegate_t990642039 * (*) (KeyValuePair_2_t3173570505 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::get_Key()
#define KeyValuePair_2_get_Key_m3155663656(__this, method) ((  String_t* (*) (KeyValuePair_2_t3173570505 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_Invoke_m360432159 (GetDelegate_t990642039 * __this, RuntimeObject * ___source0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors()
extern "C" IL2CPP_METHOD_ATTR ConstructorInfoU5BU5D_t881249896* Type_GetConstructors_m1172352582 (Type_t * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetConstructors_m26923329 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t361514971 * ReflectionUtils_GetConstructorByReflection_m1390135007 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetConstructorByReflectionU3Ec__AnonStorey0__ctor_m1202839116 (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005 * __this, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ConstructorDelegate__ctor_m2583438577 (ConstructorDelegate_t361514971 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorInfo_t5769829 * ReflectionUtils_GetConstructorInfo_m2882209707 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t361514971 * ReflectionUtils_GetConstructorByReflection_m1925356946 (RuntimeObject * __this /* static, unused */, ConstructorInfo_t5769829 * ___constructorInfo0, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t990642039 * ReflectionUtils_GetGetMethodByReflection_m4290210058 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t990642039 * ReflectionUtils_GetGetMethodByReflection_m1225395433 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey1__ctor_m419829986 (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308 * __this, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetDelegate__ctor_m3771623986 (GetDelegate_t990642039 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m4260698338 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772 * __this, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t2185717595 * ReflectionUtils_GetSetMethodByReflection_m3105966930 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t2185717595 * ReflectionUtils_GetSetMethodByReflection_m975469098 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey3__ctor_m141803311 (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190 * __this, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SetDelegate__ctor_m2785762948 (SetDelegate_t2185717595 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m4066557743 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654 * __this, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m4089836896 (ConstructorInfo_t5769829 * __this, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m1776411915 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m2460171138 (FieldInfo_t * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_Invoke_m3258684707 (ConstructorDelegate_t361514971 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method);
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SetDelegate_Invoke_m4095548710 (SetDelegate_t2185717595 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method);
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseValue_m945527480 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeValue_m3105567063 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject * ___value1, StringBuilder_t * ___builder2, const RuntimeMethod* method);
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_get_CurrentJsonSerializerStrategy_m422774680 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m2283059057 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___json0, RuntimeObject* ___jsonSerializerStrategy1, const RuntimeMethod* method);
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_NextToken_m3186520477 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_LookAhead_m58410095 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_ParseString_m2326226096 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void SimpleJson.JsonArray::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonArray__ctor_m195583587 (JsonArray_t3708654325 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
#define List_1_Add_m3338814081(__this, p0, method) ((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseNumber_m314225859 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_ParseObject_m4160195101 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR JsonArray_t3708654325 * SimpleJson_ParseArray_m2446904987 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void SimpleJson_EatWhitespace_m3622999568 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m860434552 (String_t* __this, CharU5BU5D_t3528271667* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_TryParse_m535404612 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, uint32_t* p3, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_ConvertFromUtf32_m871912507 (RuntimeObject * __this /* static, unused */, int32_t ___utf320, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method);
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_GetLastIndexOfNumber_m3317654360 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1298810678 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C" IL2CPP_METHOD_ATTR bool Double_TryParse_m623190659 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, double* p3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool Int64_TryParse_m3606398488 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, int64_t* p3, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeString_m499048567 (RuntimeObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t * ___builder1, const RuntimeMethod* method);
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeObject_m508764672 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___keys1, RuntimeObject* ___values2, StringBuilder_t * ___builder3, const RuntimeMethod* method);
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeArray_m113723777 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___anArray1, StringBuilder_t * ___builder2, const RuntimeMethod* method);
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_IsNumeric_m2247703563 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeNumber_m2762926622 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___number0, StringBuilder_t * ___builder1, const RuntimeMethod* method);
// System.String System.Int64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Int64_ToString_m623640997 (int64_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m2623377370 (uint64_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1760361794 (int32_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m4293943134 (uint32_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Decimal_ToString_m3653216873 (Decimal_t2948259380 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m3107811250 (float* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Double_ToString_m1051753975 (double* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR PocoJsonSerializerStrategy_t3084478566 * SimpleJson_get_PocoJsonSerializerStrategy_m257589513 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_m1868059608 (PocoJsonSerializerStrategy_t3084478566 * __this, const RuntimeMethod* method);
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
// System.Void SimpleJson.JsonArray::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonArray__ctor_m195583587 (JsonArray_t3708654325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonArray__ctor_m195583587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(__this, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JsonArray_ToString_m812619535 (JsonArray_t3708654325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonArray_ToString_m812619535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = SimpleJson_SerializeObject_m3082180887(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B2_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B2_0;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_3 = V_0;
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
// System.Void SimpleJson.JsonObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonObject__ctor_m3450210177 (JsonObject_t3371841791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject__ctor_m3450210177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2606011945(L_0, /*hidden argument*/Dictionary_2__ctor_m2606011945_RuntimeMethod_var);
		__this->set__members_0(L_0);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void JsonObject_Add_m823210784 (JsonObject_t3371841791 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Add_m823210784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_Add_m837785969(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m837785969_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_get_Keys_m447254310 (JsonObject_t3371841791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Keys_m447254310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		KeyCollection_t3055037934 * L_1 = Dictionary_2_get_Keys_m1349140209(L_0, /*hidden argument*/Dictionary_2_get_Keys_m1349140209_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool JsonObject_TryGetValue_m2977652994 (JsonObject_t3371841791 * __this, String_t* ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_TryGetValue_m2977652994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		RuntimeObject ** L_2 = ___value1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m2856242242(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_TryGetValue_m2856242242_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_get_Values_m4018831403 (JsonObject_t3371841791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Values_m4018831403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		ValueCollection_t286439485 * L_1 = Dictionary_2_get_Values_m2402199293(L_0, /*hidden argument*/Dictionary_2_get_Values_m2402199293_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonObject_get_Item_m4065906453 (JsonObject_t3371841791 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Item_m4065906453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m3008302402(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m3008302402_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void JsonObject_set_Item_m1476409153 (JsonObject_t3371841791 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_set_Item_m1476409153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m3454039676(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m3454039676_RuntimeMethod_var);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void JsonObject_Add_m1997340583 (JsonObject_t3371841791 * __this, KeyValuePair_2_t968067334  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Add_m1997340583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = KeyValuePair_2_get_Key_m2973773633((&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m2973773633_RuntimeMethod_var);
		RuntimeObject * L_2 = KeyValuePair_2_get_Value_m2151159939((&___item0), /*hidden argument*/KeyValuePair_2_get_Value_m2151159939_RuntimeMethod_var);
		NullCheck(L_0);
		Dictionary_2_Add_m837785969(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m837785969_RuntimeMethod_var);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern "C" IL2CPP_METHOD_ATTR void JsonObject_Clear_m3430064082 (JsonObject_t3371841791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Clear_m3430064082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		Dictionary_2_Clear_m1759170625(L_0, /*hidden argument*/Dictionary_2_Clear_m1759170625_RuntimeMethod_var);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR bool JsonObject_Contains_m2021235641 (JsonObject_t3371841791 * __this, KeyValuePair_2_t968067334  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Contains_m2021235641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = KeyValuePair_2_get_Key_m2973773633((&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m2973773633_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m87616083(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Dictionary_2_t2865362463 * L_3 = __this->get__members_0();
		String_t* L_4 = KeyValuePair_2_get_Key_m2973773633((&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m2973773633_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m3008302402(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3008302402_RuntimeMethod_var);
		RuntimeObject * L_6 = KeyValuePair_2_get_Value_m2151159939((&___item0), /*hidden argument*/KeyValuePair_2_get_Value_m2151159939_RuntimeMethod_var);
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject *)L_5) == ((RuntimeObject*)(RuntimeObject *)L_6))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = 0;
	}

IL_0036:
	{
		V_0 = (bool)G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonObject_CopyTo_m2516474251 (JsonObject_t3371841791 * __this, KeyValuePair_2U5BU5D_t1898447907* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_CopyTo_m2516474251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t968067334  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t1898447907* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,JsonObject_CopyTo_m2516474251_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = JsonObject_get_Count_m1346439376(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = JsonObject_GetEnumerator_m892713233(__this, /*hidden argument*/NULL);
		V_2 = L_3;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0051;
		}

IL_0026:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t968067334  L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t968067334  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1400637802_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t1898447907* L_6 = ___array0;
			int32_t L_7 = ___arrayIndex1;
			int32_t L_8 = L_7;
			___arrayIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			NullCheck(L_6);
			KeyValuePair_2_t968067334  L_9 = V_1;
			*(KeyValuePair_2_t968067334 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_0050;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0061);
		}

IL_0050:
		{
		}

IL_0051:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0026;
			}
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_2;
			if (!L_14)
			{
				goto IL_006d;
			}
		}

IL_0067:
		{
			RuntimeObject* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_15);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(97)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006e:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t JsonObject_get_Count_m1346439376 (JsonObject_t3371841791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Count_m1346439376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m2475045806(L_0, /*hidden argument*/Dictionary_2_get_Count_m2475045806_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool JsonObject_get_IsReadOnly_m768319298 (JsonObject_t3371841791 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR bool JsonObject_Remove_m127530102 (JsonObject_t3371841791 * __this, KeyValuePair_2_t968067334  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Remove_m127530102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = KeyValuePair_2_get_Key_m2973773633((&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m2973773633_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2 = Dictionary_2_Remove_m2803104078(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m2803104078_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_GetEnumerator_m892713233 (JsonObject_t3371841791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_GetEnumerator_m892713233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		Enumerator_t524577942  L_1 = Dictionary_2_GetEnumerator_m3826609069(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3826609069_RuntimeMethod_var);
		Enumerator_t524577942  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_t524577942_il2cpp_TypeInfo_var, &L_2);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_System_Collections_IEnumerable_GetEnumerator_m3749619898 (JsonObject_t3371841791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_System_Collections_IEnumerable_GetEnumerator_m3749619898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		Enumerator_t524577942  L_1 = Dictionary_2_GetEnumerator_m3826609069(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3826609069_RuntimeMethod_var);
		Enumerator_t524577942  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_t524577942_il2cpp_TypeInfo_var, &L_2);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JsonObject_ToString_m3365153121 (JsonObject_t3371841791 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = SimpleJson_SerializeObject_m3082180887(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
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
// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_m1868059608 (PocoJsonSerializerStrategy_t3084478566 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy__ctor_m1868059608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)GetVirtualMethodInfo(__this, 6);
		ThreadSafeDictionaryValueFactory_2_t3941988397 * L_1 = (ThreadSafeDictionaryValueFactory_2_t3941988397 *)il2cpp_codegen_object_new(ThreadSafeDictionaryValueFactory_2_t3941988397_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m339730067(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m339730067_RuntimeMethod_var);
		ThreadSafeDictionary_2_t2801163697 * L_2 = (ThreadSafeDictionary_2_t2801163697 *)il2cpp_codegen_object_new(ThreadSafeDictionary_2_t2801163697_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m783100048(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m783100048_RuntimeMethod_var);
		__this->set_ConstructorCache_0(L_2);
		intptr_t L_3 = (intptr_t)GetVirtualMethodInfo(__this, 7);
		ThreadSafeDictionaryValueFactory_2_t2820223155 * L_4 = (ThreadSafeDictionaryValueFactory_2_t2820223155 *)il2cpp_codegen_object_new(ThreadSafeDictionaryValueFactory_2_t2820223155_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m224934790(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m224934790_RuntimeMethod_var);
		ThreadSafeDictionary_2_t1679398455 * L_5 = (ThreadSafeDictionary_2_t1679398455 *)il2cpp_codegen_object_new(ThreadSafeDictionary_2_t1679398455_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m2094617135(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m2094617135_RuntimeMethod_var);
		__this->set_GetCache_1(L_5);
		intptr_t L_6 = (intptr_t)GetVirtualMethodInfo(__this, 8);
		ThreadSafeDictionaryValueFactory_2_t267383350 * L_7 = (ThreadSafeDictionaryValueFactory_2_t267383350 *)il2cpp_codegen_object_new(ThreadSafeDictionaryValueFactory_2_t267383350_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m671199302(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m671199302_RuntimeMethod_var);
		ThreadSafeDictionary_2_t3421525946 * L_8 = (ThreadSafeDictionary_2_t3421525946 *)il2cpp_codegen_object_new(ThreadSafeDictionary_2_t3421525946_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m3006555163(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m3006555163_RuntimeMethod_var);
		__this->set_SetCache_2(L_8);
		return;
	}
}
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m93077622 (PocoJsonSerializerStrategy_t3084478566 * __this, String_t* ___clrPropertyName0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___clrPropertyName0;
		V_0 = L_0;
		goto IL_0008;
	}

IL_0008:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t361514971 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m678547350 (PocoJsonSerializerStrategy_t3084478566 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_ContructorDelegateFactory_m678547350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorDelegate_t361514971 * V_0 = NULL;
	Type_t * G_B2_0 = NULL;
	Type_t * G_B1_0 = NULL;
	TypeU5BU5D_t3940880105* G_B3_0 = NULL;
	Type_t * G_B3_1 = NULL;
	{
		Type_t * L_0 = ___key0;
		Type_t * L_1 = ___key0;
		NullCheck(L_1);
		bool L_2 = Type_get_IsArray_m2591212821(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_3 = ((PocoJsonSerializerStrategy_t3084478566_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var))->get_ArrayConstructorParameterTypes_4();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_4 = ((PocoJsonSerializerStrategy_t3084478566_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var))->get_EmptyTypes_3();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		ConstructorDelegate_t361514971 * L_5 = ReflectionUtils_GetContructor_m3504171333(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		ConstructorDelegate_t361514971 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PocoJsonSerializerStrategy_GetterValueFactory_m3975036453 (PocoJsonSerializerStrategy_t3084478566 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_GetterValueFactory_m3975036453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	FieldInfo_t * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t775898338 * L_0 = (Dictionary_2_t775898338 *)il2cpp_codegen_object_new(Dictionary_2_t775898338_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m396641810(L_0, /*hidden argument*/Dictionary_2__ctor_m396641810_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Type_t * L_1 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ReflectionUtils_GetProperties_m1403189109(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t3962162136_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0069;
		}

IL_0019:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t1119912419_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
			if (!L_7)
			{
				goto IL_0068;
			}
		}

IL_002c:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m786244401(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = MethodBase_get_IsStatic_m2399864271(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_004a;
			}
		}

IL_003f:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = MethodBase_get_IsPublic_m2180846589(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_004f;
			}
		}

IL_004a:
		{
			goto IL_0069;
		}

IL_004f:
		{
			RuntimeObject* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
			GetDelegate_t990642039 * L_19 = ReflectionUtils_GetGetMethod_m3841956391(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t990642039 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t3534717025_il2cpp_TypeInfo_var, L_14, L_17, L_19);
		}

IL_0068:
		{
		}

IL_0069:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0019;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_2;
			if (!L_22)
			{
				goto IL_0085;
			}
		}

IL_007f:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_0085:
		{
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
		Type_t * L_24 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = ReflectionUtils_GetFields_m2128355452(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		RuntimeObject* L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t3161555474_il2cpp_TypeInfo_var, L_25);
		V_5 = L_26;
	}

IL_0094:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00db;
		}

IL_0099:
		{
			RuntimeObject* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t319305757_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = FieldInfo_get_IsStatic_m3482711189(L_29, /*hidden argument*/NULL);
			if (L_30)
			{
				goto IL_00bb;
			}
		}

IL_00af:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = FieldInfo_get_IsPublic_m3378038140(L_31, /*hidden argument*/NULL);
			if (L_32)
			{
				goto IL_00c0;
			}
		}

IL_00bb:
		{
			goto IL_00db;
		}

IL_00c0:
		{
			RuntimeObject* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			String_t* L_36 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
			GetDelegate_t990642039 * L_38 = ReflectionUtils_GetGetMethod_m1892294288(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t990642039 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t3534717025_il2cpp_TypeInfo_var, L_33, L_36, L_38);
		}

IL_00db:
		{
			RuntimeObject* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_0099;
			}
		}

IL_00e7:
		{
			IL2CPP_LEAVE(0xFB, FINALLY_00ec);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ec;
	}

FINALLY_00ec:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_41 = V_5;
			if (!L_41)
			{
				goto IL_00fa;
			}
		}

IL_00f3:
		{
			RuntimeObject* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_42);
		}

IL_00fa:
		{
			IL2CPP_END_FINALLY(236)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(236)
	{
		IL2CPP_JUMP_TBL(0xFB, IL_00fb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00fb:
	{
		RuntimeObject* L_43 = V_0;
		V_6 = L_43;
		goto IL_0103;
	}

IL_0103:
	{
		RuntimeObject* L_44 = V_6;
		return L_44;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PocoJsonSerializerStrategy_SetterValueFactory_m3956056963 (PocoJsonSerializerStrategy_t3084478566 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_SetterValueFactory_m3956056963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	FieldInfo_t * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2518025829 * L_0 = (Dictionary_2_t2518025829 *)il2cpp_codegen_object_new(Dictionary_2_t2518025829_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m329355109(L_0, /*hidden argument*/Dictionary_2__ctor_m329355109_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Type_t * L_1 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ReflectionUtils_GetProperties_m1403189109(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t3962162136_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0019:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t1119912419_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_6);
			if (!L_7)
			{
				goto IL_0073;
			}
		}

IL_002c:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m2025597628(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = MethodBase_get_IsStatic_m2399864271(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_004a;
			}
		}

IL_003f:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = MethodBase_get_IsPublic_m2180846589(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_004f;
			}
		}

IL_004a:
		{
			goto IL_0074;
		}

IL_004f:
		{
			RuntimeObject* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
			SetDelegate_t2185717595 * L_21 = ReflectionUtils_GetSetMethod_m2399224621(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			KeyValuePair_2_t2732769530  L_22;
			memset(&L_22, 0, sizeof(L_22));
			KeyValuePair_2__ctor_m3240315333((&L_22), L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m3240315333_RuntimeMethod_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t2732769530  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t981877220_il2cpp_TypeInfo_var, L_14, L_17, L_22);
		}

IL_0073:
		{
		}

IL_0074:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0019;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_2;
			if (!L_25)
			{
				goto IL_0090;
			}
		}

IL_008a:
		{
			RuntimeObject* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_26);
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(132)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0091:
	{
		Type_t * L_27 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = ReflectionUtils_GetFields_m2128355452(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		RuntimeObject* L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t3161555474_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}

IL_009f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00fe;
		}

IL_00a4:
		{
			RuntimeObject* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t319305757_il2cpp_TypeInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = FieldInfo_get_IsInitOnly_m930369112(L_32, /*hidden argument*/NULL);
			if (L_33)
			{
				goto IL_00d2;
			}
		}

IL_00ba:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = FieldInfo_get_IsStatic_m3482711189(L_34, /*hidden argument*/NULL);
			if (L_35)
			{
				goto IL_00d2;
			}
		}

IL_00c6:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = FieldInfo_get_IsPublic_m3378038140(L_36, /*hidden argument*/NULL);
			if (L_37)
			{
				goto IL_00d7;
			}
		}

IL_00d2:
		{
			goto IL_00fe;
		}

IL_00d7:
		{
			RuntimeObject* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
			String_t* L_41 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
			SetDelegate_t2185717595 * L_45 = ReflectionUtils_GetSetMethod_m2005559402(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
			KeyValuePair_2_t2732769530  L_46;
			memset(&L_46, 0, sizeof(L_46));
			KeyValuePair_2__ctor_m3240315333((&L_46), L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m3240315333_RuntimeMethod_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t2732769530  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t981877220_il2cpp_TypeInfo_var, L_38, L_41, L_46);
		}

IL_00fe:
		{
			RuntimeObject* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_00a4;
			}
		}

IL_010a:
		{
			IL2CPP_LEAVE(0x11E, FINALLY_010f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010f;
	}

FINALLY_010f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_49 = V_5;
			if (!L_49)
			{
				goto IL_011d;
			}
		}

IL_0116:
		{
			RuntimeObject* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_50);
		}

IL_011d:
		{
			IL2CPP_END_FINALLY(271)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(271)
	{
		IL2CPP_JUMP_TBL(0x11E, IL_011e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_011e:
	{
		RuntimeObject* L_51 = V_0;
		V_6 = L_51;
		goto IL_0126;
	}

IL_0126:
	{
		RuntimeObject* L_52 = V_6;
		return L_52;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m931352587 (PocoJsonSerializerStrategy_t3084478566 * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___input0;
		RuntimeObject ** L_1 = ___output1;
		bool L_2 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(11 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_3 = ___input0;
		RuntimeObject ** L_4 = ___output1;
		bool L_5 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(12 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PocoJsonSerializerStrategy_SerializeEnum_m4174689057 (PocoJsonSerializerStrategy_t3084478566 * __this, Enum_t4135868527 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_SerializeEnum_m4174689057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Enum_t4135868527 * L_0 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_m4017511472(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		RuntimeObject * L_4 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_3);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m4166187834 (PocoJsonSerializerStrategy_t3084478566 * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_TrySerializeKnownTypes_m4166187834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTimeOffset_t3229287507  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTimeOffset_t3229287507  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Guid_t  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enum_t4135868527 * V_6 = NULL;
	bool V_7 = false;
	{
		V_0 = (bool)1;
		RuntimeObject * L_0 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, DateTime_t3738529785_il2cpp_TypeInfo_var)))
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject ** L_1 = ___output1;
		RuntimeObject * L_2 = ___input0;
		V_1 = ((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_2, DateTime_t3738529785_il2cpp_TypeInfo_var))));
		DateTime_t3738529785  L_3 = DateTime_ToUniversalTime_m1945318289((&V_1), /*hidden argument*/NULL);
		V_2 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_4 = ((PocoJsonSerializerStrategy_t3084478566_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var))->get_Iso8601Format_5();
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = DateTime_ToString_m2992030064((&V_2), L_6, L_7, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_1)) = (RuntimeObject *)L_8;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_1), (RuntimeObject *)L_8);
		goto IL_00d1;
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, DateTimeOffset_t3229287507_il2cpp_TypeInfo_var)))
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject ** L_10 = ___output1;
		RuntimeObject * L_11 = ___input0;
		V_3 = ((*(DateTimeOffset_t3229287507 *)((DateTimeOffset_t3229287507 *)UnBox(L_11, DateTimeOffset_t3229287507_il2cpp_TypeInfo_var))));
		DateTimeOffset_t3229287507  L_12 = DateTimeOffset_ToUniversalTime_m1292281655((&V_3), /*hidden argument*/NULL);
		V_4 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_13 = ((PocoJsonSerializerStrategy_t3084478566_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var))->get_Iso8601Format_5();
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_16 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = DateTimeOffset_ToString_m3985341516((&V_4), L_15, L_16, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_10)) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_10), (RuntimeObject *)L_17);
		goto IL_00d1;
	}

IL_006c:
	{
		RuntimeObject * L_18 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		RuntimeObject ** L_19 = ___output1;
		RuntimeObject * L_20 = ___input0;
		V_5 = ((*(Guid_t *)((Guid_t *)UnBox(L_20, Guid_t_il2cpp_TypeInfo_var))));
		String_t* L_21 = Guid_ToString_m4056316049((&V_5), _stringLiteral3452614620, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_19)) = (RuntimeObject *)L_21;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_19), (RuntimeObject *)L_21);
		goto IL_00d1;
	}

IL_0092:
	{
		RuntimeObject * L_22 = ___input0;
		if (!((Uri_t100236324 *)IsInstClass((RuntimeObject*)L_22, Uri_t100236324_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject ** L_23 = ___output1;
		RuntimeObject * L_24 = ___input0;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		*((RuntimeObject **)(L_23)) = (RuntimeObject *)L_25;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_23), (RuntimeObject *)L_25);
		goto IL_00d1;
	}

IL_00aa:
	{
		RuntimeObject * L_26 = ___input0;
		V_6 = ((Enum_t4135868527 *)IsInstClass((RuntimeObject*)L_26, Enum_t4135868527_il2cpp_TypeInfo_var));
		Enum_t4135868527 * L_27 = V_6;
		if (!L_27)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeObject ** L_28 = ___output1;
		Enum_t4135868527 * L_29 = V_6;
		RuntimeObject * L_30 = VirtFuncInvoker1< RuntimeObject *, Enum_t4135868527 * >::Invoke(10 /* System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum) */, __this, L_29);
		*((RuntimeObject **)(L_28)) = (RuntimeObject *)L_30;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_28), (RuntimeObject *)L_30);
		goto IL_00d0;
	}

IL_00c9:
	{
		V_0 = (bool)0;
		RuntimeObject ** L_31 = ___output1;
		*((RuntimeObject **)(L_31)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_31), (RuntimeObject *)NULL);
	}

IL_00d0:
	{
	}

IL_00d1:
	{
		bool L_32 = V_0;
		V_7 = L_32;
		goto IL_00d9;
	}

IL_00d9:
	{
		bool L_33 = V_7;
		return L_33;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1793809221 (PocoJsonSerializerStrategy_t3084478566 * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1793809221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t3173570505  V_4;
	memset(&V_4, 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___input0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral818277059, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1793809221_RuntimeMethod_var);
	}

IL_0012:
	{
		RuntimeObject ** L_2 = ___output1;
		*((RuntimeObject **)(L_2)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_2), (RuntimeObject *)NULL);
		RuntimeObject * L_3 = ___input0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_5);
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00b0;
	}

IL_002e:
	{
		JsonObject_t3371841791 * L_7 = (JsonObject_t3371841791 *)il2cpp_codegen_object_new(JsonObject_t3371841791_il2cpp_TypeInfo_var);
		JsonObject__ctor_m3450210177(L_7, /*hidden argument*/NULL);
		V_2 = L_7;
		RuntimeObject* L_8 = __this->get_GetCache_1();
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(!0) */, IDictionary_2_t147948184_il2cpp_TypeInfo_var, L_8, L_9);
		V_3 = L_10;
		RuntimeObject* L_11 = V_3;
		NullCheck(L_11);
		RuntimeObject* L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator() */, IEnumerable_1_t2153423394_il2cpp_TypeInfo_var, L_11);
		V_5 = L_12;
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0086;
		}

IL_004f:
		{
			RuntimeObject* L_13 = V_5;
			NullCheck(L_13);
			KeyValuePair_2_t3173570505  L_14 = InterfaceFuncInvoker0< KeyValuePair_2_t3173570505  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Current() */, IEnumerator_1_t3606140973_il2cpp_TypeInfo_var, L_13);
			V_4 = L_14;
			GetDelegate_t990642039 * L_15 = KeyValuePair_2_get_Value_m1040615196((&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m1040615196_RuntimeMethod_var);
			if (!L_15)
			{
				goto IL_0085;
			}
		}

IL_0065:
		{
			RuntimeObject* L_16 = V_2;
			String_t* L_17 = KeyValuePair_2_get_Key_m3155663656((&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m3155663656_RuntimeMethod_var);
			String_t* L_18 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_17);
			GetDelegate_t990642039 * L_19 = KeyValuePair_2_get_Value_m1040615196((&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m1040615196_RuntimeMethod_var);
			RuntimeObject * L_20 = ___input0;
			NullCheck(L_19);
			RuntimeObject * L_21 = GetDelegate_Invoke_m360432159(L_19, L_20, /*hidden argument*/NULL);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		}

IL_0085:
		{
		}

IL_0086:
		{
			RuntimeObject* L_22 = V_5;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_004f;
			}
		}

IL_0092:
		{
			IL2CPP_LEAVE(0xA6, FINALLY_0097);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0097;
	}

FINALLY_0097:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_5;
			if (!L_24)
			{
				goto IL_00a5;
			}
		}

IL_009e:
		{
			RuntimeObject* L_25 = V_5;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_00a5:
		{
			IL2CPP_END_FINALLY(151)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_JUMP_TBL(0xA6, IL_00a6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a6:
	{
		RuntimeObject ** L_26 = ___output1;
		RuntimeObject* L_27 = V_2;
		*((RuntimeObject **)(L_26)) = (RuntimeObject *)L_27;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_26), (RuntimeObject *)L_27);
		V_1 = (bool)1;
		goto IL_00b0;
	}

IL_00b0:
	{
		bool L_28 = V_1;
		return L_28;
	}
}
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern "C" IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__cctor_m40283078 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy__cctor_m40283078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PocoJsonSerializerStrategy_t3084478566_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var))->set_EmptyTypes_3(((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)0)));
		TypeU5BU5D_t3940880105* L_0 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_2);
		((PocoJsonSerializerStrategy_t3084478566_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var))->set_ArrayConstructorParameterTypes_4(L_0);
		StringU5BU5D_t1281789340* L_3 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4081536298);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4081536298);
		StringU5BU5D_t1281789340* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1858654798);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1858654798);
		StringU5BU5D_t1281789340* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1861407333);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1861407333);
		((PocoJsonSerializerStrategy_t3084478566_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var))->set_Iso8601Format_5(L_5);
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
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetConstructors_m26923329 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t881249896* L_1 = Type_GetConstructors_m1172352582(L_0, /*hidden argument*/NULL);
		V_0 = (RuntimeObject*)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorInfo_t5769829 * ReflectionUtils_GetConstructorInfo_m2882209707 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetConstructorInfo_m2882209707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t5769829 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ParameterInfoU5BU5D_t390618515* V_5 = NULL;
	ParameterInfo_t1861056598 * V_6 = NULL;
	ParameterInfoU5BU5D_t390618515* V_7 = NULL;
	int32_t V_8 = 0;
	ConstructorInfo_t5769829 * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ReflectionUtils_GetConstructors_m26923329(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t3280590014_il2cpp_TypeInfo_var, L_2);
		V_4 = L_3;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008d;
		}

IL_0016:
		{
			RuntimeObject* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t5769829 * L_5 = InterfaceFuncInvoker0< ConstructorInfo_t5769829 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t438340297_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t5769829 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t390618515* L_7 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
			V_5 = L_7;
			TypeU5BU5D_t3940880105* L_8 = ___argsType1;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t390618515* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
			{
				goto IL_0038;
			}
		}

IL_0033:
		{
			goto IL_008d;
		}

IL_0038:
		{
			V_1 = 0;
			V_2 = (bool)1;
			ConstructorInfo_t5769829 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t390618515* L_11 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_0073;
		}

IL_004d:
		{
			ParameterInfoU5BU5D_t390618515* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			int32_t L_14 = L_13;
			ParameterInfo_t1861056598 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			V_6 = L_15;
			ParameterInfo_t1861056598 * L_16 = V_6;
			NullCheck(L_16);
			Type_t * L_17 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
			TypeU5BU5D_t3940880105* L_18 = ___argsType1;
			int32_t L_19 = V_1;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			Type_t * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			if ((((RuntimeObject*)(Type_t *)L_17) == ((RuntimeObject*)(Type_t *)L_21)))
			{
				goto IL_006c;
			}
		}

IL_0064:
		{
			V_2 = (bool)0;
			goto IL_007e;
		}

IL_006c:
		{
			int32_t L_22 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		}

IL_0073:
		{
			int32_t L_23 = V_8;
			ParameterInfoU5BU5D_t390618515* L_24 = V_7;
			NullCheck(L_24);
			if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
			{
				goto IL_004d;
			}
		}

IL_007e:
		{
			bool L_25 = V_2;
			if (!L_25)
			{
				goto IL_008c;
			}
		}

IL_0084:
		{
			ConstructorInfo_t5769829 * L_26 = V_3;
			V_9 = L_26;
			IL2CPP_LEAVE(0xB5, FINALLY_009e);
		}

IL_008c:
		{
		}

IL_008d:
		{
			RuntimeObject* L_27 = V_4;
			NullCheck(L_27);
			bool L_28 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_27);
			if (L_28)
			{
				goto IL_0016;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_29 = V_4;
			if (!L_29)
			{
				goto IL_00ac;
			}
		}

IL_00a5:
		{
			RuntimeObject* L_30 = V_4;
			NullCheck(L_30);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_30);
		}

IL_00ac:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ad:
	{
		V_9 = (ConstructorInfo_t5769829 *)NULL;
		goto IL_00b5;
	}

IL_00b5:
	{
		ConstructorInfo_t5769829 * L_31 = V_9;
		return L_31;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetProperties_m1403189109 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t1461822886* L_1 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(53 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		V_0 = (RuntimeObject*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetFields_m2128355452 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		FieldInfoU5BU5D_t846150980* L_1 = VirtFuncInvoker1< FieldInfoU5BU5D_t846150980*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		V_0 = (RuntimeObject*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m786244401 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	MethodInfo_t * V_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, (bool)1);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		MethodInfo_t * L_2 = V_0;
		return L_2;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m2025597628 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	MethodInfo_t * V_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, (bool)1);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		MethodInfo_t * L_2 = V_0;
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t361514971 * ReflectionUtils_GetContructor_m3504171333 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetContructor_m3504171333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorDelegate_t361514971 * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		TypeU5BU5D_t3940880105* L_1 = ___argsType1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		ConstructorDelegate_t361514971 * L_2 = ReflectionUtils_GetConstructorByReflection_m1390135007(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		ConstructorDelegate_t361514971 * L_3 = V_0;
		return L_3;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t361514971 * ReflectionUtils_GetConstructorByReflection_m1925356946 (RuntimeObject * __this /* static, unused */, ConstructorInfo_t5769829 * ___constructorInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetConstructorByReflection_m1925356946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005 * V_0 = NULL;
	ConstructorDelegate_t361514971 * V_1 = NULL;
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005 *)il2cpp_codegen_object_new(U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005_il2cpp_TypeInfo_var);
		U3CGetConstructorByReflectionU3Ec__AnonStorey0__ctor_m1202839116(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005 * L_1 = V_0;
		ConstructorInfo_t5769829 * L_2 = ___constructorInfo0;
		NullCheck(L_1);
		L_1->set_constructorInfo_0(L_2);
		U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CGetConstructorByReflectionU3Ec__AnonStorey0_U3CU3Em__0_m2334201525_RuntimeMethod_var;
		ConstructorDelegate_t361514971 * L_5 = (ConstructorDelegate_t361514971 *)il2cpp_codegen_object_new(ConstructorDelegate_t361514971_il2cpp_TypeInfo_var);
		ConstructorDelegate__ctor_m2583438577(L_5, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		ConstructorDelegate_t361514971 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t361514971 * ReflectionUtils_GetConstructorByReflection_m1390135007 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetConstructorByReflection_m1390135007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfo_t5769829 * V_0 = NULL;
	ConstructorDelegate_t361514971 * V_1 = NULL;
	ConstructorDelegate_t361514971 * G_B3_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		TypeU5BU5D_t3940880105* L_1 = ___argsType1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		ConstructorInfo_t5769829 * L_2 = ReflectionUtils_GetConstructorInfo_m2882209707(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConstructorInfo_t5769829 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t361514971 *)(NULL));
		goto IL_001b;
	}

IL_0015:
	{
		ConstructorInfo_t5769829 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		ConstructorDelegate_t361514971 * L_5 = ReflectionUtils_GetConstructorByReflection_m1925356946(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001b:
	{
		V_1 = G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		ConstructorDelegate_t361514971 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t990642039 * ReflectionUtils_GetGetMethod_m3841956391 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethod_m3841956391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GetDelegate_t990642039 * V_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		GetDelegate_t990642039 * L_1 = ReflectionUtils_GetGetMethodByReflection_m4290210058(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		GetDelegate_t990642039 * L_2 = V_0;
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t990642039 * ReflectionUtils_GetGetMethod_m1892294288 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethod_m1892294288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GetDelegate_t990642039 * V_0 = NULL;
	{
		FieldInfo_t * L_0 = ___fieldInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		GetDelegate_t990642039 * L_1 = ReflectionUtils_GetGetMethodByReflection_m1225395433(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		GetDelegate_t990642039 * L_2 = V_0;
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t990642039 * ReflectionUtils_GetGetMethodByReflection_m4290210058 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethodByReflection_m4290210058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308 * V_0 = NULL;
	GetDelegate_t990642039 * V_1 = NULL;
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308 *)il2cpp_codegen_object_new(U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1__ctor_m419829986(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m786244401(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_methodInfo_0(L_3);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m410316137_RuntimeMethod_var;
		GetDelegate_t990642039 * L_6 = (GetDelegate_t990642039 *)il2cpp_codegen_object_new(GetDelegate_t990642039_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m3771623986(L_6, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		GetDelegate_t990642039 * L_7 = V_1;
		return L_7;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t990642039 * ReflectionUtils_GetGetMethodByReflection_m1225395433 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethodByReflection_m1225395433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772 * V_0 = NULL;
	GetDelegate_t990642039 * V_1 = NULL;
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772 *)il2cpp_codegen_object_new(U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m4260698338(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->set_fieldInfo_0(L_2);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__0_m1043867005_RuntimeMethod_var;
		GetDelegate_t990642039 * L_5 = (GetDelegate_t990642039 *)il2cpp_codegen_object_new(GetDelegate_t990642039_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m3771623986(L_5, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		GetDelegate_t990642039 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t2185717595 * ReflectionUtils_GetSetMethod_m2399224621 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethod_m2399224621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SetDelegate_t2185717595 * V_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		SetDelegate_t2185717595 * L_1 = ReflectionUtils_GetSetMethodByReflection_m3105966930(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		SetDelegate_t2185717595 * L_2 = V_0;
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t2185717595 * ReflectionUtils_GetSetMethod_m2005559402 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethod_m2005559402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SetDelegate_t2185717595 * V_0 = NULL;
	{
		FieldInfo_t * L_0 = ___fieldInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		SetDelegate_t2185717595 * L_1 = ReflectionUtils_GetSetMethodByReflection_m975469098(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		SetDelegate_t2185717595 * L_2 = V_0;
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t2185717595 * ReflectionUtils_GetSetMethodByReflection_m3105966930 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethodByReflection_m3105966930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190 * V_0 = NULL;
	SetDelegate_t2185717595 * V_1 = NULL;
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190 *)il2cpp_codegen_object_new(U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3__ctor_m141803311(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m2025597628(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_methodInfo_0(L_3);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_m999219703_RuntimeMethod_var;
		SetDelegate_t2185717595 * L_6 = (SetDelegate_t2185717595 *)il2cpp_codegen_object_new(SetDelegate_t2185717595_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m2785762948(L_6, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		SetDelegate_t2185717595 * L_7 = V_1;
		return L_7;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t2185717595 * ReflectionUtils_GetSetMethodByReflection_m975469098 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethodByReflection_m975469098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654 * V_0 = NULL;
	SetDelegate_t2185717595 * V_1 = NULL;
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654 *)il2cpp_codegen_object_new(U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m4066557743(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->set_fieldInfo_0(L_2);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__0_m2074887166_RuntimeMethod_var;
		SetDelegate_t2185717595 * L_5 = (SetDelegate_t2185717595 *)il2cpp_codegen_object_new(SetDelegate_t2185717595_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m2785762948(L_5, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		SetDelegate_t2185717595 * L_6 = V_1;
		return L_6;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ReflectionUtils__cctor_m1917945226 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils__cctor_m1917945226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ReflectionUtils_t3359723746_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var))->set_EmptyObjects_0(((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)));
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
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetConstructorByReflectionU3Ec__AnonStorey0__ctor_m1202839116 (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0::<>m__0(System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetConstructorByReflectionU3Ec__AnonStorey0_U3CU3Em__0_m2334201525 (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t1111257005 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		ConstructorInfo_t5769829 * L_0 = __this->get_constructorInfo_0();
		ObjectU5BU5D_t2843939325* L_1 = ___args0;
		NullCheck(L_0);
		RuntimeObject * L_2 = ConstructorInfo_Invoke_m4089836896(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject * L_3 = V_0;
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
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey1__ctor_m419829986 (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1::<>m__0(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m410316137 (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t264984308 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m410316137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		MethodInfo_t * L_0 = __this->get_methodInfo_0();
		RuntimeObject * L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t2843939325* L_2 = ((ReflectionUtils_t3359723746_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_t3359723746_il2cpp_TypeInfo_var))->get_EmptyObjects_0();
		NullCheck(L_0);
		RuntimeObject * L_3 = MethodBase_Invoke_m1776411915(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
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
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m4260698338 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__0(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__0_m1043867005 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t264918772 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___source0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject * L_3 = V_0;
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
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey3__ctor_m141803311 (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3::<>m__0(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_m999219703 (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t962176190 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_m999219703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_methodInfo_0();
		RuntimeObject * L_1 = ___source0;
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_3 = ___value1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		MethodBase_Invoke_m1776411915(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m4066557743 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__0(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__0_m2074887166 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t962110654 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___source0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		FieldInfo_SetValue_m2460171138(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ConstructorDelegate__ctor_m2583438577 (ConstructorDelegate_t361514971 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_Invoke_m3258684707 (ConstructorDelegate_t361514971 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		ConstructorDelegate_Invoke_m3258684707((ConstructorDelegate_t361514971 *)__this->get_prev_9(), ___args0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___args0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___args0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, targetThis, ___args0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, targetThis, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___args0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___args0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___args0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ConstructorDelegate_BeginInvoke_m124811612 (ConstructorDelegate_t361514971 * __this, ObjectU5BU5D_t2843939325* ___args0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_EndInvoke_m3322505318 (ConstructorDelegate_t361514971 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetDelegate__ctor_m3771623986 (GetDelegate_t990642039 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_Invoke_m360432159 (GetDelegate_t990642039 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		GetDelegate_Invoke_m360432159((GetDelegate_t990642039 *)__this->get_prev_9(), ___source0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___source0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetDelegate_BeginInvoke_m2821443078 (GetDelegate_t990642039 * __this, RuntimeObject * ___source0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_EndInvoke_m3840353960 (GetDelegate_t990642039 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SetDelegate__ctor_m2785762948 (SetDelegate_t2185717595 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SetDelegate_Invoke_m4095548710 (SetDelegate_t2185717595 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SetDelegate_Invoke_m4095548710((SetDelegate_t2185717595 *)__this->get_prev_9(), ___source0, ___value1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___value1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___value1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___value1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SetDelegate_BeginInvoke_m3843190167 (SetDelegate_t2185717595 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SetDelegate_EndInvoke_m772605340 (SetDelegate_t2185717595 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_TryDeserializeObject_m1573072501 (RuntimeObject * __this /* static, unused */, String_t* ___json0, RuntimeObject ** ___obj1, const RuntimeMethod* method)
{
	bool V_0 = false;
	CharU5BU5D_t3528271667* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = (bool)1;
		String_t* L_0 = ___json0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_1 = ___json0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		RuntimeObject ** L_3 = ___obj1;
		CharU5BU5D_t3528271667* L_4 = V_1;
		RuntimeObject * L_5 = SimpleJson_ParseValue_m945527480(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)L_5);
		goto IL_0028;
	}

IL_0025:
	{
		RuntimeObject ** L_6 = ___obj1;
		*((RuntimeObject **)(L_6)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_6), (RuntimeObject *)NULL);
	}

IL_0028:
	{
		bool L_7 = V_0;
		V_3 = L_7;
		goto IL_002f;
	}

IL_002f:
	{
		bool L_8 = V_3;
		return L_8;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m2283059057 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___json0, RuntimeObject* ___jsonSerializerStrategy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeObject_m2283059057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* G_B3_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___jsonSerializerStrategy1;
		RuntimeObject * L_2 = ___json0;
		StringBuilder_t * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m3105567063(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		G_B3_0 = L_7;
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0027:
	{
		V_2 = G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m3082180887 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___json0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___json0;
		RuntimeObject* L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m422774680(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = SimpleJson_SerializeObject_m2283059057(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_ParseObject_m4160195101 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseObject_m4160195101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	{
		JsonObject_t3371841791 * L_0 = (JsonObject_t3371841791 *)il2cpp_codegen_object_new(JsonObject_t3371841791_il2cpp_TypeInfo_var);
		JsonObject__ctor_m3450210177(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_2 = (bool)0;
		goto IL_00bb;
	}

IL_0016:
	{
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t L_5 = SimpleJson_LookAhead_m58410095(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		bool* L_7 = ___success2;
		*((int8_t*)(L_7)) = (int8_t)0;
		V_3 = (RuntimeObject*)NULL;
		goto IL_00c8;
	}

IL_0031:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_0045;
		}
	}
	{
		CharU5BU5D_t3528271667* L_9 = ___json0;
		int32_t* L_10 = ___index1;
		SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_00ba;
	}

IL_0045:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		RuntimeObject* L_14 = V_0;
		V_3 = L_14;
		goto IL_00c8;
	}

IL_005c:
	{
		CharU5BU5D_t3528271667* L_15 = ___json0;
		int32_t* L_16 = ___index1;
		bool* L_17 = ___success2;
		String_t* L_18 = SimpleJson_ParseString_m2326226096(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		bool* L_19 = ___success2;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0079;
		}
	}
	{
		bool* L_20 = ___success2;
		*((int8_t*)(L_20)) = (int8_t)0;
		V_3 = (RuntimeObject*)NULL;
		goto IL_00c8;
	}

IL_0079:
	{
		CharU5BU5D_t3528271667* L_21 = ___json0;
		int32_t* L_22 = ___index1;
		int32_t L_23 = SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0093;
		}
	}
	{
		bool* L_25 = ___success2;
		*((int8_t*)(L_25)) = (int8_t)0;
		V_3 = (RuntimeObject*)NULL;
		goto IL_00c8;
	}

IL_0093:
	{
		CharU5BU5D_t3528271667* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		bool* L_28 = ___success2;
		RuntimeObject * L_29 = SimpleJson_ParseValue_m945527480(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		bool* L_30 = ___success2;
		if ((*((int8_t*)L_30)))
		{
			goto IL_00af;
		}
	}
	{
		bool* L_31 = ___success2;
		*((int8_t*)(L_31)) = (int8_t)0;
		V_3 = (RuntimeObject*)NULL;
		goto IL_00c8;
	}

IL_00af:
	{
		RuntimeObject* L_32 = V_0;
		String_t* L_33 = V_4;
		RuntimeObject * L_34 = V_5;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_32, L_33, L_34);
	}

IL_00ba:
	{
	}

IL_00bb:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_36 = V_0;
		V_3 = L_36;
		goto IL_00c8;
	}

IL_00c8:
	{
		RuntimeObject* L_37 = V_3;
		return L_37;
	}
}
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR JsonArray_t3708654325 * SimpleJson_ParseArray_m2446904987 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseArray_m2446904987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonArray_t3708654325 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	JsonArray_t3708654325 * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		JsonArray_t3708654325 * L_0 = (JsonArray_t3708654325 *)il2cpp_codegen_object_new(JsonArray_t3708654325_il2cpp_TypeInfo_var);
		JsonArray__ctor_m195583587(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_007d;
	}

IL_0016:
	{
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t L_5 = SimpleJson_LookAhead_m58410095(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		bool* L_7 = ___success2;
		*((int8_t*)(L_7)) = (int8_t)0;
		V_3 = (JsonArray_t3708654325 *)NULL;
		goto IL_008a;
	}

IL_0031:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_0045;
		}
	}
	{
		CharU5BU5D_t3528271667* L_9 = ___json0;
		int32_t* L_10 = ___index1;
		SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_0045:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_005a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0083;
	}

IL_005a:
	{
		CharU5BU5D_t3528271667* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		bool* L_16 = ___success2;
		RuntimeObject * L_17 = SimpleJson_ParseValue_m945527480(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		bool* L_18 = ___success2;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0073;
		}
	}
	{
		V_3 = (JsonArray_t3708654325 *)NULL;
		goto IL_008a;
	}

IL_0073:
	{
		JsonArray_t3708654325 * L_19 = V_0;
		RuntimeObject * L_20 = V_4;
		NullCheck(L_19);
		List_1_Add_m3338814081(L_19, L_20, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
	}

IL_007c:
	{
	}

IL_007d:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0016;
		}
	}

IL_0083:
	{
		JsonArray_t3708654325 * L_22 = V_0;
		V_3 = L_22;
		goto IL_008a;
	}

IL_008a:
	{
		JsonArray_t3708654325 * L_23 = V_3;
		return L_23;
	}
}
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseValue_m945527480 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseValue_m945527480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = SimpleJson_LookAhead_m58410095(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_00b4;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_00b9;
			}
			case 3:
			{
				goto IL_006f;
			}
			case 4:
			{
				goto IL_00b9;
			}
			case 5:
			{
				goto IL_00b9;
			}
			case 6:
			{
				goto IL_00b9;
			}
			case 7:
			{
				goto IL_0045;
			}
			case 8:
			{
				goto IL_0053;
			}
			case 9:
			{
				goto IL_007d;
			}
			case 10:
			{
				goto IL_0091;
			}
			case 11:
			{
				goto IL_00a5;
			}
		}
	}
	{
		goto IL_00b9;
	}

IL_0045:
	{
		CharU5BU5D_t3528271667* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		bool* L_6 = ___success2;
		String_t* L_7 = SimpleJson_ParseString_m2326226096(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_00c3;
	}

IL_0053:
	{
		CharU5BU5D_t3528271667* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		bool* L_10 = ___success2;
		RuntimeObject * L_11 = SimpleJson_ParseNumber_m314225859(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_00c3;
	}

IL_0061:
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		bool* L_14 = ___success2;
		RuntimeObject* L_15 = SimpleJson_ParseObject_m4160195101(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_00c3;
	}

IL_006f:
	{
		CharU5BU5D_t3528271667* L_16 = ___json0;
		int32_t* L_17 = ___index1;
		bool* L_18 = ___success2;
		JsonArray_t3708654325 * L_19 = SimpleJson_ParseArray_m2446904987(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		goto IL_00c3;
	}

IL_007d:
	{
		CharU5BU5D_t3528271667* L_20 = ___json0;
		int32_t* L_21 = ___index1;
		SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		bool L_22 = ((bool)1);
		RuntimeObject * L_23 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_22);
		V_1 = L_23;
		goto IL_00c3;
	}

IL_0091:
	{
		CharU5BU5D_t3528271667* L_24 = ___json0;
		int32_t* L_25 = ___index1;
		SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		bool L_26 = ((bool)0);
		RuntimeObject * L_27 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_26);
		V_1 = L_27;
		goto IL_00c3;
	}

IL_00a5:
	{
		CharU5BU5D_t3528271667* L_28 = ___json0;
		int32_t* L_29 = ___index1;
		SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_1 = NULL;
		goto IL_00c3;
	}

IL_00b4:
	{
		goto IL_00b9;
	}

IL_00b9:
	{
		bool* L_30 = ___success2;
		*((int8_t*)(L_30)) = (int8_t)0;
		V_1 = NULL;
		goto IL_00c3;
	}

IL_00c3:
	{
		RuntimeObject * L_31 = V_1;
		return L_31;
	}
}
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_ParseString_m2326226096 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseString_m2326226096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	bool V_6 = false;
	String_t* V_7 = NULL;
	uint32_t V_8 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_EatWhitespace_m3622999568(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t* L_5 = ___index1;
		int32_t L_6 = (*((int32_t*)L_5));
		V_2 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_2;
		NullCheck(L_3);
		int32_t L_8 = L_7;
		uint16_t L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		V_3 = (bool)0;
		goto IL_0253;
	}

IL_0026:
	{
		int32_t* L_10 = ___index1;
		CharU5BU5D_t3528271667* L_11 = ___json0;
		NullCheck(L_11);
		if ((!(((uint32_t)(*((int32_t*)L_10))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0259;
	}

IL_0036:
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		int32_t* L_14 = ___index1;
		int32_t L_15 = (*((int32_t*)L_14));
		V_2 = L_15;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_2;
		NullCheck(L_12);
		int32_t L_17 = L_16;
		uint16_t L_18 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		Il2CppChar L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0052;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0259;
	}

IL_0052:
	{
		Il2CppChar L_20 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_024a;
		}
	}
	{
		int32_t* L_21 = ___index1;
		CharU5BU5D_t3528271667* L_22 = ___json0;
		NullCheck(L_22);
		if ((!(((uint32_t)(*((int32_t*)L_21))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length))))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_0259;
	}

IL_006a:
	{
		CharU5BU5D_t3528271667* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		int32_t* L_25 = ___index1;
		int32_t L_26 = (*((int32_t*)L_25));
		V_2 = L_26;
		*((int32_t*)(L_24)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		int32_t L_27 = V_2;
		NullCheck(L_23);
		int32_t L_28 = L_27;
		uint16_t L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = L_29;
		Il2CppChar L_30 = V_1;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008c;
		}
	}
	{
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_Append_m2383614642(L_31, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_0244;
	}

IL_008c:
	{
		Il2CppChar L_32 = V_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a2;
		}
	}
	{
		StringBuilder_t * L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_Append_m2383614642(L_33, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_0244;
	}

IL_00a2:
	{
		Il2CppChar L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00b8;
		}
	}
	{
		StringBuilder_t * L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_Append_m2383614642(L_35, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_0244;
	}

IL_00b8:
	{
		Il2CppChar L_36 = V_1;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cd;
		}
	}
	{
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_Append_m2383614642(L_37, 8, /*hidden argument*/NULL);
		goto IL_0244;
	}

IL_00cd:
	{
		Il2CppChar L_38 = V_1;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e3;
		}
	}
	{
		StringBuilder_t * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m2383614642(L_39, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0244;
	}

IL_00e3:
	{
		Il2CppChar L_40 = V_1;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00f9;
		}
	}
	{
		StringBuilder_t * L_41 = V_0;
		NullCheck(L_41);
		StringBuilder_Append_m2383614642(L_41, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0244;
	}

IL_00f9:
	{
		Il2CppChar L_42 = V_1;
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_010f;
		}
	}
	{
		StringBuilder_t * L_43 = V_0;
		NullCheck(L_43);
		StringBuilder_Append_m2383614642(L_43, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0244;
	}

IL_010f:
	{
		Il2CppChar L_44 = V_1;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0125;
		}
	}
	{
		StringBuilder_t * L_45 = V_0;
		NullCheck(L_45);
		StringBuilder_Append_m2383614642(L_45, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0244;
	}

IL_0125:
	{
		Il2CppChar L_46 = V_1;
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0244;
		}
	}
	{
		CharU5BU5D_t3528271667* L_47 = ___json0;
		NullCheck(L_47);
		int32_t* L_48 = ___index1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_47)->max_length)))), (int32_t)(*((int32_t*)L_48))));
		int32_t L_49 = V_4;
		if ((((int32_t)L_49) < ((int32_t)4)))
		{
			goto IL_023e;
		}
	}
	{
		bool* L_50 = ___success2;
		CharU5BU5D_t3528271667* L_51 = ___json0;
		int32_t* L_52 = ___index1;
		String_t* L_53 = String_CreateString_m860434552(NULL, L_51, (*((int32_t*)L_52)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_54 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_55 = UInt32_TryParse_m535404612(NULL /*static, unused*/, L_53, ((int32_t)515), L_54, (&V_5), /*hidden argument*/NULL);
		bool L_56 = L_55;
		V_6 = L_56;
		*((int8_t*)(L_50)) = (int8_t)L_56;
		bool L_57 = V_6;
		if (L_57)
		{
			goto IL_0171;
		}
	}
	{
		V_7 = _stringLiteral757602046;
		goto IL_0278;
	}

IL_0171:
	{
		uint32_t L_58 = V_5;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_58))))
		{
			goto IL_0224;
		}
	}
	{
		uint32_t L_59 = V_5;
		if ((!(((uint32_t)L_59) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_0224;
		}
	}
	{
		int32_t* L_60 = ___index1;
		int32_t* L_61 = ___index1;
		*((int32_t*)(L_60)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_61)), (int32_t)4));
		CharU5BU5D_t3528271667* L_62 = ___json0;
		NullCheck(L_62);
		int32_t* L_63 = ___index1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_62)->max_length)))), (int32_t)(*((int32_t*)L_63))));
		int32_t L_64 = V_4;
		if ((((int32_t)L_64) < ((int32_t)6)))
		{
			goto IL_0215;
		}
	}
	{
		CharU5BU5D_t3528271667* L_65 = ___json0;
		int32_t* L_66 = ___index1;
		String_t* L_67 = String_CreateString_m860434552(NULL, L_65, (*((int32_t*)L_66)), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_68 = String_op_Equality_m920492651(NULL /*static, unused*/, L_67, _stringLiteral3455432692, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_0214;
		}
	}
	{
		CharU5BU5D_t3528271667* L_69 = ___json0;
		int32_t* L_70 = ___index1;
		String_t* L_71 = String_CreateString_m860434552(NULL, L_69, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_70)), (int32_t)2)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_72 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_73 = UInt32_TryParse_m535404612(NULL /*static, unused*/, L_71, ((int32_t)515), L_72, (&V_8), /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0214;
		}
	}
	{
		uint32_t L_74 = V_8;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_74))))
		{
			goto IL_0213;
		}
	}
	{
		uint32_t L_75 = V_8;
		if ((!(((uint32_t)L_75) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0213;
		}
	}
	{
		StringBuilder_t * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m2383614642(L_76, (((int32_t)((uint16_t)L_77))), /*hidden argument*/NULL);
		StringBuilder_t * L_78 = V_0;
		uint32_t L_79 = V_8;
		NullCheck(L_78);
		StringBuilder_Append_m2383614642(L_78, (((int32_t)((uint16_t)L_79))), /*hidden argument*/NULL);
		int32_t* L_80 = ___index1;
		int32_t* L_81 = ___index1;
		*((int32_t*)(L_80)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_81)), (int32_t)6));
		goto IL_0253;
	}

IL_0213:
	{
	}

IL_0214:
	{
	}

IL_0215:
	{
		bool* L_82 = ___success2;
		*((int8_t*)(L_82)) = (int8_t)0;
		V_7 = _stringLiteral757602046;
		goto IL_0278;
	}

IL_0224:
	{
		StringBuilder_t * L_83 = V_0;
		uint32_t L_84 = V_5;
		String_t* L_85 = SimpleJson_ConvertFromUtf32_m871912507(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		NullCheck(L_83);
		StringBuilder_Append_m1965104174(L_83, L_85, /*hidden argument*/NULL);
		int32_t* L_86 = ___index1;
		int32_t* L_87 = ___index1;
		*((int32_t*)(L_86)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_87)), (int32_t)4));
		goto IL_0243;
	}

IL_023e:
	{
		goto IL_0259;
	}

IL_0243:
	{
	}

IL_0244:
	{
		goto IL_0252;
	}

IL_024a:
	{
		StringBuilder_t * L_88 = V_0;
		Il2CppChar L_89 = V_1;
		NullCheck(L_88);
		StringBuilder_Append_m2383614642(L_88, L_89, /*hidden argument*/NULL);
	}

IL_0252:
	{
	}

IL_0253:
	{
		bool L_90 = V_3;
		if (!L_90)
		{
			goto IL_0026;
		}
	}

IL_0259:
	{
		bool L_91 = V_3;
		if (L_91)
		{
			goto IL_026b;
		}
	}
	{
		bool* L_92 = ___success2;
		*((int8_t*)(L_92)) = (int8_t)0;
		V_7 = (String_t*)NULL;
		goto IL_0278;
	}

IL_026b:
	{
		StringBuilder_t * L_93 = V_0;
		NullCheck(L_93);
		String_t* L_94 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_93);
		V_7 = L_94;
		goto IL_0278;
	}

IL_0278:
	{
		String_t* L_95 = V_7;
		return L_95;
	}
}
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_ConvertFromUtf32_m871912507 (RuntimeObject * __this /* static, unused */, int32_t ___utf320, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ConvertFromUtf32_m871912507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___utf320;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___utf320;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0023;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral1778249823, _stringLiteral2354794577, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,SimpleJson_ConvertFromUtf32_m871912507_RuntimeMethod_var);
	}

IL_0023:
	{
		int32_t L_3 = ___utf320;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_4 = ___utf320;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_5, _stringLiteral1778249823, _stringLiteral4034890030, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,SimpleJson_ConvertFromUtf32_m871912507_RuntimeMethod_var);
	}

IL_0049:
	{
		int32_t L_6 = ___utf320;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_7 = ___utf320;
		String_t* L_8 = String_CreateString_m1262864254(NULL, (((int32_t)((uint16_t)L_7))), 1, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_009b;
	}

IL_0062:
	{
		int32_t L_9 = ___utf320;
		___utf320 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)65536)));
		CharU5BU5D_t3528271667* L_10 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)2));
		int32_t L_11 = ___utf320;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10))), (int32_t)((int32_t)55296)))))));
		CharU5BU5D_t3528271667* L_12 = L_10;
		int32_t L_13 = ___utf320;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024))), (int32_t)((int32_t)56320)))))));
		String_t* L_14 = String_CreateString_m2818852475(NULL, L_12, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_009b;
	}

IL_009b:
	{
		String_t* L_15 = V_0;
		return L_15;
	}
}
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseNumber_m314225859 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseNumber_m314225859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	String_t* V_3 = NULL;
	double V_4 = 0.0;
	int64_t V_5 = 0;
	RuntimeObject * V_6 = NULL;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		SimpleJson_EatWhitespace_m3622999568(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m3317654360(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)(*((int32_t*)L_6)))), (int32_t)1));
		CharU5BU5D_t3528271667* L_7 = ___json0;
		int32_t* L_8 = ___index1;
		int32_t L_9 = V_1;
		String_t* L_10 = String_CreateString_m860434552(NULL, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m1298810678(L_11, _stringLiteral3452614530, 5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m1298810678(L_13, _stringLiteral3452614587, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_0071;
		}
	}

IL_0046:
	{
		bool* L_15 = ___success2;
		CharU5BU5D_t3528271667* L_16 = ___json0;
		int32_t* L_17 = ___index1;
		int32_t L_18 = V_1;
		String_t* L_19 = String_CreateString_m860434552(NULL, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_20 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_21 = Double_TryParse_m623190659(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/NULL);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		RuntimeObject * L_24 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_23);
		V_2 = L_24;
		goto IL_0097;
	}

IL_0071:
	{
		bool* L_25 = ___success2;
		CharU5BU5D_t3528271667* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		int32_t L_28 = V_1;
		String_t* L_29 = String_CreateString_m860434552(NULL, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_30 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_31 = Int64_TryParse_m3606398488(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/NULL);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_33);
		V_2 = L_34;
	}

IL_0097:
	{
		int32_t* L_35 = ___index1;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		RuntimeObject * L_37 = V_2;
		V_6 = L_37;
		goto IL_00a4;
	}

IL_00a4:
	{
		RuntimeObject * L_38 = V_6;
		return L_38;
	}
}
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_GetLastIndexOfNumber_m3317654360 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_GetLastIndexOfNumber_m3317654360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		goto IL_0024;
	}

IL_0008:
	{
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral2206812729);
		int32_t L_5 = String_IndexOf_m363431711(_stringLiteral2206812729, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002d;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_7 = V_0;
		CharU5BU5D_t3528271667* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0008;
		}
	}

IL_002d:
	{
		int32_t L_9 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		goto IL_0036;
	}

IL_0036:
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void SimpleJson_EatWhitespace_m3622999568 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_EatWhitespace_m3622999568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0025;
	}

IL_0006:
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = (*((int32_t*)L_1));
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(_stringLiteral352322198);
		int32_t L_4 = String_IndexOf_m363431711(_stringLiteral352322198, L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002f;
	}

IL_001f:
	{
		int32_t* L_5 = ___index1;
		int32_t* L_6 = ___index1;
		*((int32_t*)(L_5)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_6)), (int32_t)1));
	}

IL_0025:
	{
		int32_t* L_7 = ___index1;
		CharU5BU5D_t3528271667* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)(*((int32_t*)L_7))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_002f:
	{
		return;
	}
}
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_LookAhead_m58410095 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t L_2 = SimpleJson_NextToken_m3186520477(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_NextToken_m3186520477 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		SimpleJson_EatWhitespace_m3622999568(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index1;
		CharU5BU5D_t3528271667* L_3 = ___json0;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))))))
		{
			goto IL_0019;
		}
	}
	{
		V_0 = 0;
		goto IL_01d7;
	}

IL_0019:
	{
		CharU5BU5D_t3528271667* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		NullCheck(L_4);
		int32_t L_6 = (*((int32_t*)L_5));
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		int32_t* L_8 = ___index1;
		int32_t* L_9 = ___index1;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_9)), (int32_t)1));
		Il2CppChar L_10 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_0069;
			}
			case 3:
			{
				goto IL_0069;
			}
			case 4:
			{
				goto IL_00ca;
			}
			case 5:
			{
				goto IL_00ca;
			}
			case 6:
			{
				goto IL_00ca;
			}
			case 7:
			{
				goto IL_00ca;
			}
			case 8:
			{
				goto IL_00ca;
			}
			case 9:
			{
				goto IL_00ca;
			}
			case 10:
			{
				goto IL_00ca;
			}
			case 11:
			{
				goto IL_00ca;
			}
			case 12:
			{
				goto IL_00ca;
			}
			case 13:
			{
				goto IL_00ca;
			}
			case 14:
			{
				goto IL_00d1;
			}
		}
	}

IL_0069:
	{
		Il2CppChar L_11 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_00ae;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_00b5;
			}
		}
	}

IL_007e:
	{
		Il2CppChar L_12 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_00a0;
			}
			case 1:
			{
				goto IL_0093;
			}
			case 2:
			{
				goto IL_00a7;
			}
		}
	}

IL_0093:
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_00c3;
		}
	}
	{
		goto IL_00d8;
	}

IL_00a0:
	{
		V_0 = 1;
		goto IL_01d7;
	}

IL_00a7:
	{
		V_0 = 2;
		goto IL_01d7;
	}

IL_00ae:
	{
		V_0 = 3;
		goto IL_01d7;
	}

IL_00b5:
	{
		V_0 = 4;
		goto IL_01d7;
	}

IL_00bc:
	{
		V_0 = 6;
		goto IL_01d7;
	}

IL_00c3:
	{
		V_0 = 7;
		goto IL_01d7;
	}

IL_00ca:
	{
		V_0 = 8;
		goto IL_01d7;
	}

IL_00d1:
	{
		V_0 = 5;
		goto IL_01d7;
	}

IL_00d8:
	{
		int32_t* L_14 = ___index1;
		int32_t* L_15 = ___index1;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_15)), (int32_t)1));
		CharU5BU5D_t3528271667* L_16 = ___json0;
		NullCheck(L_16);
		int32_t* L_17 = ___index1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))), (int32_t)(*((int32_t*)L_17))));
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) < ((int32_t)5)))
		{
			goto IL_013c;
		}
	}
	{
		CharU5BU5D_t3528271667* L_19 = ___json0;
		int32_t* L_20 = ___index1;
		NullCheck(L_19);
		int32_t L_21 = (*((int32_t*)L_20));
		uint16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_013b;
		}
	}
	{
		CharU5BU5D_t3528271667* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_24)), (int32_t)1));
		uint16_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_013b;
		}
	}
	{
		CharU5BU5D_t3528271667* L_27 = ___json0;
		int32_t* L_28 = ___index1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_28)), (int32_t)2));
		uint16_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_013b;
		}
	}
	{
		CharU5BU5D_t3528271667* L_31 = ___json0;
		int32_t* L_32 = ___index1;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_32)), (int32_t)3));
		uint16_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_013b;
		}
	}
	{
		CharU5BU5D_t3528271667* L_35 = ___json0;
		int32_t* L_36 = ___index1;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_36)), (int32_t)4));
		uint16_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t* L_39 = ___index1;
		int32_t* L_40 = ___index1;
		*((int32_t*)(L_39)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_40)), (int32_t)5));
		V_0 = ((int32_t)10);
		goto IL_01d7;
	}

IL_013b:
	{
	}

IL_013c:
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) < ((int32_t)4)))
		{
			goto IL_0186;
		}
	}
	{
		CharU5BU5D_t3528271667* L_42 = ___json0;
		int32_t* L_43 = ___index1;
		NullCheck(L_42);
		int32_t L_44 = (*((int32_t*)L_43));
		uint16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0185;
		}
	}
	{
		CharU5BU5D_t3528271667* L_46 = ___json0;
		int32_t* L_47 = ___index1;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_47)), (int32_t)1));
		uint16_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0185;
		}
	}
	{
		CharU5BU5D_t3528271667* L_50 = ___json0;
		int32_t* L_51 = ___index1;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_51)), (int32_t)2));
		uint16_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0185;
		}
	}
	{
		CharU5BU5D_t3528271667* L_54 = ___json0;
		int32_t* L_55 = ___index1;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_55)), (int32_t)3));
		uint16_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t* L_58 = ___index1;
		int32_t* L_59 = ___index1;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_59)), (int32_t)4));
		V_0 = ((int32_t)9);
		goto IL_01d7;
	}

IL_0185:
	{
	}

IL_0186:
	{
		int32_t L_60 = V_2;
		if ((((int32_t)L_60) < ((int32_t)4)))
		{
			goto IL_01d0;
		}
	}
	{
		CharU5BU5D_t3528271667* L_61 = ___json0;
		int32_t* L_62 = ___index1;
		NullCheck(L_61);
		int32_t L_63 = (*((int32_t*)L_62));
		uint16_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01cf;
		}
	}
	{
		CharU5BU5D_t3528271667* L_65 = ___json0;
		int32_t* L_66 = ___index1;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_66)), (int32_t)1));
		uint16_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01cf;
		}
	}
	{
		CharU5BU5D_t3528271667* L_69 = ___json0;
		int32_t* L_70 = ___index1;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_70)), (int32_t)2));
		uint16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01cf;
		}
	}
	{
		CharU5BU5D_t3528271667* L_73 = ___json0;
		int32_t* L_74 = ___index1;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_74)), (int32_t)3));
		uint16_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01cf;
		}
	}
	{
		int32_t* L_77 = ___index1;
		int32_t* L_78 = ___index1;
		*((int32_t*)(L_77)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_78)), (int32_t)4));
		V_0 = ((int32_t)11);
		goto IL_01d7;
	}

IL_01cf:
	{
	}

IL_01d0:
	{
		V_0 = 0;
		goto IL_01d7;
	}

IL_01d7:
	{
		int32_t L_79 = V_0;
		return L_79;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeValue_m3105567063 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject * ___value1, StringBuilder_t * ___builder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeValue_m3105567063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	bool V_6 = false;
	StringBuilder_t * G_B13_0 = NULL;
	StringBuilder_t * G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	StringBuilder_t * G_B14_1 = NULL;
	{
		V_0 = (bool)1;
		RuntimeObject * L_0 = ___value1;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t * L_3 = ___builder2;
		bool L_4 = SimpleJson_SerializeString_m499048567(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_010d;
	}

IL_001d:
	{
		RuntimeObject * L_5 = ___value1;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = ___jsonSerializerStrategy0;
		RuntimeObject* L_8 = V_2;
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_10 = V_2;
		NullCheck(L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_10);
		StringBuilder_t * L_12 = ___builder2;
		bool L_13 = SimpleJson_SerializeObject_m508764672(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_010c;
	}

IL_0046:
	{
		RuntimeObject * L_14 = ___value1;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDictionary_2_t96558379_il2cpp_TypeInfo_var));
		RuntimeObject* L_15 = V_3;
		if (!L_15)
		{
			goto IL_006f;
		}
	}
	{
		RuntimeObject* L_16 = ___jsonSerializerStrategy0;
		RuntimeObject* L_17 = V_3;
		NullCheck(L_17);
		RuntimeObject* L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, L_17);
		RuntimeObject* L_19 = V_3;
		NullCheck(L_19);
		RuntimeObject* L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, L_19);
		StringBuilder_t * L_21 = ___builder2;
		bool L_22 = SimpleJson_SerializeObject_m508764672(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_010b;
	}

IL_006f:
	{
		RuntimeObject * L_23 = ___value1;
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IEnumerable_t1941168011_il2cpp_TypeInfo_var));
		RuntimeObject* L_24 = V_4;
		if (!L_24)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_25 = ___jsonSerializerStrategy0;
		RuntimeObject* L_26 = V_4;
		StringBuilder_t * L_27 = ___builder2;
		bool L_28 = SimpleJson_SerializeArray_m113723777(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_010a;
	}

IL_008e:
	{
		RuntimeObject * L_29 = ___value1;
		bool L_30 = SimpleJson_IsNumeric_m2247703563(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00a6;
		}
	}
	{
		RuntimeObject * L_31 = ___value1;
		StringBuilder_t * L_32 = ___builder2;
		bool L_33 = SimpleJson_SerializeNumber_m2762926622(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_010a;
	}

IL_00a6:
	{
		RuntimeObject * L_34 = ___value1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_34, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_00d7;
		}
	}
	{
		StringBuilder_t * L_35 = ___builder2;
		RuntimeObject * L_36 = ___value1;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox(L_36, Boolean_t97287965_il2cpp_TypeInfo_var)))))
		{
			G_B13_0 = L_35;
			goto IL_00c7;
		}
	}
	{
		G_B14_0 = _stringLiteral4002445229;
		G_B14_1 = G_B12_0;
		goto IL_00cc;
	}

IL_00c7:
	{
		G_B14_0 = _stringLiteral3875954633;
		G_B14_1 = G_B13_0;
	}

IL_00cc:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m1965104174(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		goto IL_010a;
	}

IL_00d7:
	{
		RuntimeObject * L_37 = ___value1;
		if (L_37)
		{
			goto IL_00ee;
		}
	}
	{
		StringBuilder_t * L_38 = ___builder2;
		NullCheck(L_38);
		StringBuilder_Append_m1965104174(L_38, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_010a;
	}

IL_00ee:
	{
		RuntimeObject* L_39 = ___jsonSerializerStrategy0;
		RuntimeObject * L_40 = ___value1;
		NullCheck(L_39);
		bool L_41 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(0 /* System.Boolean SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&) */, IJsonSerializerStrategy_t3801793838_il2cpp_TypeInfo_var, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0109;
		}
	}
	{
		RuntimeObject* L_43 = ___jsonSerializerStrategy0;
		RuntimeObject * L_44 = V_5;
		StringBuilder_t * L_45 = ___builder2;
		SimpleJson_SerializeValue_m3105567063(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
	}

IL_0109:
	{
	}

IL_010a:
	{
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		bool L_46 = V_0;
		V_6 = L_46;
		goto IL_0115;
	}

IL_0115:
	{
		bool L_47 = V_6;
		return L_47;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeObject_m508764672 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___keys1, RuntimeObject* ___values2, StringBuilder_t * ___builder3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeObject_m508764672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	{
		StringBuilder_t * L_0 = ___builder3;
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614613, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___keys1;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___values2;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		V_2 = (bool)1;
		goto IL_009c;
	}

IL_0022:
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0044;
		}
	}
	{
		StringBuilder_t * L_10 = ___builder3;
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3452614532, /*hidden argument*/NULL);
	}

IL_0044:
	{
		RuntimeObject * L_11 = V_3;
		V_5 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t * L_14 = ___builder3;
		SimpleJson_SerializeString_m499048567(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		goto IL_0077;
	}

IL_0061:
	{
		RuntimeObject* L_15 = ___jsonSerializerStrategy0;
		RuntimeObject * L_16 = V_4;
		StringBuilder_t * L_17 = ___builder3;
		bool L_18 = SimpleJson_SerializeValue_m3105567063(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0077;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00c6;
	}

IL_0077:
	{
		StringBuilder_t * L_19 = ___builder3;
		NullCheck(L_19);
		StringBuilder_Append_m1965104174(L_19, _stringLiteral3452614550, /*hidden argument*/NULL);
		RuntimeObject* L_20 = ___jsonSerializerStrategy0;
		RuntimeObject * L_21 = V_4;
		StringBuilder_t * L_22 = ___builder3;
		bool L_23 = SimpleJson_SerializeValue_m3105567063(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0099;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00c6;
	}

IL_0099:
	{
		V_2 = (bool)0;
	}

IL_009c:
	{
		RuntimeObject* L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_24);
		if (!L_25)
		{
			goto IL_00b2;
		}
	}
	{
		RuntimeObject* L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0022;
		}
	}

IL_00b2:
	{
		StringBuilder_t * L_28 = ___builder3;
		NullCheck(L_28);
		StringBuilder_Append_m1965104174(L_28, _stringLiteral3452614611, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_00c6;
	}

IL_00c6:
	{
		bool L_29 = V_6;
		return L_29;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeArray_m113723777 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___anArray1, StringBuilder_t * ___builder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeArray_m113723777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = ___builder2;
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614645, /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray1;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_001c:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			StringBuilder_t * L_6 = ___builder2;
			NullCheck(L_6);
			StringBuilder_Append_m1965104174(L_6, _stringLiteral3452614532, /*hidden argument*/NULL);
		}

IL_0036:
		{
			RuntimeObject* L_7 = ___jsonSerializerStrategy0;
			RuntimeObject * L_8 = V_1;
			StringBuilder_t * L_9 = ___builder2;
			bool L_10 = SimpleJson_SerializeValue_m3105567063(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_004a;
			}
		}

IL_0043:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x86, FINALLY_005d);
		}

IL_004a:
		{
			V_0 = (bool)0;
		}

IL_004d:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001c;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x73, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_2;
			RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_4 = L_14;
			if (!L_14)
			{
				goto IL_0072;
			}
		}

IL_006b:
		{
			RuntimeObject* L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_15);
		}

IL_0072:
		{
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0073:
	{
		StringBuilder_t * L_16 = ___builder2;
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3452614643, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_0086;
	}

IL_0086:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeString_m499048567 (RuntimeObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeString_m499048567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	bool V_3 = false;
	{
		StringBuilder_t * L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614526, /*hidden argument*/NULL);
		String_t* L_1 = ___aString0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00db;
	}

IL_001b:
	{
		CharU5BU5D_t3528271667* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t * L_8 = ___builder1;
		NullCheck(L_8);
		StringBuilder_Append_m1965104174(L_8, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_0039:
	{
		Il2CppChar L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0052;
		}
	}
	{
		StringBuilder_t * L_10 = ___builder1;
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_0052:
	{
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)8))))
		{
			goto IL_006a;
		}
	}
	{
		StringBuilder_t * L_12 = ___builder1;
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_006a:
	{
		Il2CppChar L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0083;
		}
	}
	{
		StringBuilder_t * L_14 = ___builder1;
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_0083:
	{
		Il2CppChar L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009c;
		}
	}
	{
		StringBuilder_t * L_16 = ___builder1;
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_009c:
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t * L_18 = ___builder1;
		NullCheck(L_18);
		StringBuilder_Append_m1965104174(L_18, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_00b5:
	{
		Il2CppChar L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00ce;
		}
	}
	{
		StringBuilder_t * L_20 = ___builder1;
		NullCheck(L_20);
		StringBuilder_Append_m1965104174(L_20, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_00ce:
	{
		StringBuilder_t * L_21 = ___builder1;
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m2383614642(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00db:
	{
		int32_t L_24 = V_1;
		CharU5BU5D_t3528271667* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		StringBuilder_t * L_26 = ___builder1;
		NullCheck(L_26);
		StringBuilder_Append_m1965104174(L_26, _stringLiteral3452614526, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_00f7;
	}

IL_00f7:
	{
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeNumber_m2762926622 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___number0, StringBuilder_t * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeNumber_m2762926622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t2948259380  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	double V_6 = 0.0;
	bool V_7 = false;
	{
		RuntimeObject * L_0 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		StringBuilder_t * L_1 = ___builder1;
		RuntimeObject * L_2 = ___number0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox(L_2, Int64_t3736567304_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_3 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Int64_ToString_m623640997((&V_0), L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, L_4, /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_002b:
	{
		RuntimeObject * L_5 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0055;
		}
	}
	{
		StringBuilder_t * L_6 = ___builder1;
		RuntimeObject * L_7 = ___number0;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox(L_7, UInt64_t4134040092_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_8 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = UInt64_ToString_m2623377370((&V_1), L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m1965104174(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_0055:
	{
		RuntimeObject * L_10 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		StringBuilder_t * L_11 = ___builder1;
		RuntimeObject * L_12 = ___number0;
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_12, Int32_t2950945753_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_13 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = Int32_ToString_m1760361794((&V_2), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, L_14, /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_007f:
	{
		RuntimeObject * L_15 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_00a9;
		}
	}
	{
		StringBuilder_t * L_16 = ___builder1;
		RuntimeObject * L_17 = ___number0;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_t2560061978_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_18 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_19 = UInt32_ToString_m4293943134((&V_3), L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, L_19, /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_00a9:
	{
		RuntimeObject * L_20 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00d4;
		}
	}
	{
		StringBuilder_t * L_21 = ___builder1;
		RuntimeObject * L_22 = ___number0;
		V_4 = ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_22, Decimal_t2948259380_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_23 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_24 = Decimal_ToString_m3653216873((&V_4), L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m1965104174(L_21, L_24, /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_00d4:
	{
		RuntimeObject * L_25 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_00ff;
		}
	}
	{
		StringBuilder_t * L_26 = ___builder1;
		RuntimeObject * L_27 = ___number0;
		V_5 = ((*(float*)((float*)UnBox(L_27, Single_t1397266774_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_28 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_29 = Single_ToString_m3107811250((&V_5), L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m1965104174(L_26, L_29, /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_00ff:
	{
		StringBuilder_t * L_30 = ___builder1;
		RuntimeObject * L_31 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_32 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_33 = Convert_ToDouble_m4017511472(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		CultureInfo_t4157843068 * L_34 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_35 = Double_ToString_m1051753975((&V_6), _stringLiteral3452614606, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m1965104174(L_30, L_35, /*hidden argument*/NULL);
	}

IL_0124:
	{
		V_7 = (bool)1;
		goto IL_012c;
	}

IL_012c:
	{
		bool L_36 = V_7;
		return L_36;
	}
}
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_IsNumeric_m2247703563 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_IsNumeric_m2247703563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, SByte_t1669577662_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_0025:
	{
		RuntimeObject * L_2 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_0037;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_0037:
	{
		RuntimeObject * L_3 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_0049;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_0049:
	{
		RuntimeObject * L_4 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_005b:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_006d:
	{
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_007f:
	{
		RuntimeObject * L_7 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0091;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_0091:
	{
		RuntimeObject * L_8 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_00a3;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_00a3:
	{
		RuntimeObject * L_9 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_00b5;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_00b5:
	{
		RuntimeObject * L_10 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00c7;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00ce;
	}

IL_00c7:
	{
		V_0 = (bool)0;
		goto IL_00ce;
	}

IL_00ce:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_get_CurrentJsonSerializerStrategy_m422774680 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_get_CurrentJsonSerializerStrategy_m422774680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ((SimpleJson_t666527214_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t666527214_il2cpp_TypeInfo_var))->get__currentJsonSerializerStrategy_0();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		PocoJsonSerializerStrategy_t3084478566 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m257589513(NULL /*static, unused*/, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t3084478566 * L_3 = L_2;
		((SimpleJson_t666527214_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t666527214_il2cpp_TypeInfo_var))->set__currentJsonSerializerStrategy_0(L_3);
		G_B2_0 = ((RuntimeObject*)(L_3));
	}

IL_0018:
	{
		V_0 = G_B2_0;
		goto IL_001e;
	}

IL_001e:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR PocoJsonSerializerStrategy_t3084478566 * SimpleJson_get_PocoJsonSerializerStrategy_m257589513 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_get_PocoJsonSerializerStrategy_m257589513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PocoJsonSerializerStrategy_t3084478566 * V_0 = NULL;
	PocoJsonSerializerStrategy_t3084478566 * G_B2_0 = NULL;
	PocoJsonSerializerStrategy_t3084478566 * G_B1_0 = NULL;
	{
		PocoJsonSerializerStrategy_t3084478566 * L_0 = ((SimpleJson_t666527214_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t666527214_il2cpp_TypeInfo_var))->get__pocoJsonSerializerStrategy_1();
		PocoJsonSerializerStrategy_t3084478566 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		PocoJsonSerializerStrategy_t3084478566 * L_2 = (PocoJsonSerializerStrategy_t3084478566 *)il2cpp_codegen_object_new(PocoJsonSerializerStrategy_t3084478566_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_m1868059608(L_2, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t3084478566 * L_3 = L_2;
		((SimpleJson_t666527214_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t666527214_il2cpp_TypeInfo_var))->set__pocoJsonSerializerStrategy_1(L_3);
		G_B2_0 = L_3;
	}

IL_0018:
	{
		V_0 = G_B2_0;
		goto IL_001e;
	}

IL_001e:
	{
		PocoJsonSerializerStrategy_t3084478566 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

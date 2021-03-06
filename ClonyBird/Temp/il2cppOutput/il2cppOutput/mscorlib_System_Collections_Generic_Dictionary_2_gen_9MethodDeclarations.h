﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1992;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2310;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t323;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1997;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2001;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1989;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t2315;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2316;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2317;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t678;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9165_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9165(__this, method) (( void (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2__ctor_m9165_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9167_gshared (Dictionary_2_t1992 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9167(__this, ___comparer, method) (( void (*) (Dictionary_2_t1992 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9167_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9169_gshared (Dictionary_2_t1992 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9169(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1992 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9169_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9171_gshared (Dictionary_2_t1992 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9171(__this, ___capacity, method) (( void (*) (Dictionary_2_t1992 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9171_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9173_gshared (Dictionary_2_t1992 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9173(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1992 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9173_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9175_gshared (Dictionary_2_t1992 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9175(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1992 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2__ctor_m9175_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9177_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9177(__this, method) (( Object_t* (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9177_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9179_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9179(__this, method) (( Object_t* (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9179_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9181_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9181(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9181_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9183_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9183(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1992 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9183_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9185_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9185(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1992 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9185_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9187_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9187(__this, ___key, method) (( bool (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9187_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9189_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9189(__this, ___key, method) (( void (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9189_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9191_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9191(__this, method) (( Object_t * (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9193_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9193(__this, method) (( bool (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9193_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9195_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2_t1993  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9195(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1992 *, KeyValuePair_2_t1993 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9195_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9197_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2_t1993  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9197(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1992 *, KeyValuePair_2_t1993 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9197_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9199_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2U5BU5D_t2316* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9199(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1992 *, KeyValuePair_2U5BU5D_t2316*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9199_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9201_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2_t1993  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9201(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1992 *, KeyValuePair_2_t1993 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9201_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9203_gshared (Dictionary_2_t1992 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9203(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1992 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9203_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9205_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9205(__this, method) (( Object_t * (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9205_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9207_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9207(__this, method) (( Object_t* (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9207_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9209_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9209(__this, method) (( Object_t * (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9211_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9211(__this, method) (( int32_t (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_get_Count_m9211_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9213_gshared (Dictionary_2_t1992 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9213(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1992 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m9213_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9215_gshared (Dictionary_2_t1992 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9215(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1992 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9215_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9217_gshared (Dictionary_2_t1992 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9217(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1992 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9217_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9219_gshared (Dictionary_2_t1992 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9219(__this, ___size, method) (( void (*) (Dictionary_2_t1992 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9219_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9221_gshared (Dictionary_2_t1992 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9221(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1992 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9221_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1993  Dictionary_2_make_pair_m9223_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9223(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1993  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9223_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m9225_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9225(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9225_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9227_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9227(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9227_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9229_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2U5BU5D_t2316* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9229(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1992 *, KeyValuePair_2U5BU5D_t2316*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9229_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9231_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9231(__this, method) (( void (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_Resize_m9231_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9233_gshared (Dictionary_2_t1992 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9233(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1992 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9233_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9235_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9235(__this, method) (( void (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_Clear_m9235_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9237_gshared (Dictionary_2_t1992 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9237(__this, ___key, method) (( bool (*) (Dictionary_2_t1992 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m9237_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9239_gshared (Dictionary_2_t1992 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9239(__this, ___value, method) (( bool (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9239_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9241_gshared (Dictionary_2_t1992 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9241(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1992 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2_GetObjectData_m9241_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9243_gshared (Dictionary_2_t1992 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9243(__this, ___sender, method) (( void (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9243_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9245_gshared (Dictionary_2_t1992 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9245(__this, ___key, method) (( bool (*) (Dictionary_2_t1992 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m9245_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9247_gshared (Dictionary_2_t1992 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9247(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1992 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9247_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1997 * Dictionary_2_get_Keys_m9249_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9249(__this, method) (( KeyCollection_t1997 * (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_get_Keys_m9249_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2001 * Dictionary_2_get_Values_m9251_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9251(__this, method) (( ValueCollection_t2001 * (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_get_Values_m9251_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m9253_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9253(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9253_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9255_gshared (Dictionary_2_t1992 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9255(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9255_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9257_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2_t1993  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9257(__this, ___pair, method) (( bool (*) (Dictionary_2_t1992 *, KeyValuePair_2_t1993 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9257_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1999  Dictionary_2_GetEnumerator_m9259_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9259(__this, method) (( Enumerator_t1999  (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9259_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m9261_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9261(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9261_gshared)(__this /* static, unused */, ___key, ___value, method)

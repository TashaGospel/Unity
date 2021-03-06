﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2160;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2157;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11431_gshared (Enumerator_t2160 * __this, Dictionary_2_t2157 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11431(__this, ___dictionary, method) (( void (*) (Enumerator_t2160 *, Dictionary_2_t2157 *, const MethodInfo*))Enumerator__ctor_m11431_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11432_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11432(__this, method) (( Object_t * (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11432_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11433_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11433(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11433_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11434_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11434(__this, method) (( Object_t * (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11434_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11435_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11435(__this, method) (( Object_t * (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11435_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11436_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11436(__this, method) (( bool (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_MoveNext_m11436_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2131  Enumerator_get_Current_m11437_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11437(__this, method) (( KeyValuePair_2_t2131  (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_get_Current_m11437_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11438_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11438(__this, method) (( Object_t * (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_get_CurrentKey_m11438_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2020  Enumerator_get_CurrentValue_m11439_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11439(__this, method) (( KeyValuePair_2_t2020  (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_get_CurrentValue_m11439_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m11440_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11440(__this, method) (( void (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_VerifyState_m11440_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11441_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11441(__this, method) (( void (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_VerifyCurrent_m11441_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m11442_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11442(__this, method) (( void (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_Dispose_m11442_gshared)(__this, method)

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t2209;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2204;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11949_gshared (Enumerator_t2209 * __this, Dictionary_2_t2204 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11949(__this, ___dictionary, method) (( void (*) (Enumerator_t2209 *, Dictionary_2_t2204 *, const MethodInfo*))Enumerator__ctor_m11949_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11950_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11950(__this, method) (( Object_t * (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11950_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11951_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11951(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11951_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11952_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11952(__this, method) (( Object_t * (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11952_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11953_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11953(__this, method) (( Object_t * (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11953_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11954_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11954(__this, method) (( bool (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_MoveNext_m11954_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t2205  Enumerator_get_Current_m11955_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11955(__this, method) (( KeyValuePair_2_t2205  (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_get_Current_m11955_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11956_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11956(__this, method) (( Object_t * (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_get_CurrentKey_m11956_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m11957_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11957(__this, method) (( uint8_t (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_get_CurrentValue_m11957_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m11958_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11958(__this, method) (( void (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_VerifyState_m11958_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11959_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11959(__this, method) (( void (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_VerifyCurrent_m11959_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m11960_gshared (Enumerator_t2209 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11960(__this, method) (( void (*) (Enumerator_t2209 *, const MethodInfo*))Enumerator_Dispose_m11960_gshared)(__this, method)

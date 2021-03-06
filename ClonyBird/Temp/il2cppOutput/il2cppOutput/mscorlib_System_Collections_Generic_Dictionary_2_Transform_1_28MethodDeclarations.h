﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>
struct Transform_1_t2149;
// System.Object
struct Object_t;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t226;
// System.IAsyncResult
struct IAsyncResult_t76;
// System.AsyncCallback
struct AsyncCallback_t77;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m11270(__this, ___object, ___method, method) (( void (*) (Transform_1_t2149 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m9616_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m11271(__this, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Transform_1_t2149 *, String_t*, GetDelegate_t226 *, const MethodInfo*))Transform_1_Invoke_m9617_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m11272(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2149 *, String_t*, GetDelegate_t226 *, AsyncCallback_t77 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m9618_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m11273(__this, ___result, method) (( DictionaryEntry_t679  (*) (Transform_1_t2149 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m9619_gshared)(__this, ___result, method)

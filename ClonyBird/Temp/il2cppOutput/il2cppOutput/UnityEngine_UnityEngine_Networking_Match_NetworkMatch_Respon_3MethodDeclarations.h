﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
struct ResponseDelegate_1_t363;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t76;
// System.AsyncCallback
struct AsyncCallback_t77;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ResponseDelegate_1__ctor_m10840_gshared (ResponseDelegate_1_t363 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ResponseDelegate_1__ctor_m10840(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t363 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m10840_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C" void ResponseDelegate_1_Invoke_m10842_gshared (ResponseDelegate_1_t363 * __this, Object_t * ___response, const MethodInfo* method);
#define ResponseDelegate_1_Invoke_m10842(__this, ___response, method) (( void (*) (ResponseDelegate_1_t363 *, Object_t *, const MethodInfo*))ResponseDelegate_1_Invoke_m10842_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseDelegate_1_BeginInvoke_m10844_gshared (ResponseDelegate_1_t363 * __this, Object_t * ___response, AsyncCallback_t77 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ResponseDelegate_1_BeginInvoke_m10844(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t363 *, Object_t *, AsyncCallback_t77 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m10844_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ResponseDelegate_1_EndInvoke_m10846_gshared (ResponseDelegate_1_t363 * __this, Object_t * ___result, const MethodInfo* method);
#define ResponseDelegate_1_EndInvoke_m10846(__this, ___result, method) (( void (*) (ResponseDelegate_1_t363 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m10846_gshared)(__this, ___result, method)

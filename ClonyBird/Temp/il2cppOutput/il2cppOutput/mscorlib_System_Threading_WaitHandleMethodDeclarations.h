﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.WaitHandle
struct WaitHandle_t880;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitHandle::.ctor()
extern "C" void WaitHandle__ctor_m7342 (WaitHandle_t880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
extern "C" void WaitHandle__cctor_m7343 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
extern "C" void WaitHandle_System_IDisposable_Dispose_m7344 (WaitHandle_t880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
extern "C" IntPtr_t WaitHandle_get_Handle_m7345 (WaitHandle_t880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
extern "C" void WaitHandle_set_Handle_m7346 (WaitHandle_t880 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
extern "C" bool WaitHandle_WaitOne_internal_m7347 (WaitHandle_t880 * __this, IntPtr_t ___handle, int32_t ___ms, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
extern "C" void WaitHandle_Dispose_m7348 (WaitHandle_t880 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
extern "C" bool WaitHandle_WaitOne_m7349 (WaitHandle_t880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
extern "C" bool WaitHandle_WaitOne_m7350 (WaitHandle_t880 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
extern "C" void WaitHandle_CheckDisposed_m7351 (WaitHandle_t880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
extern "C" void WaitHandle_Finalize_m7352 (WaitHandle_t880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

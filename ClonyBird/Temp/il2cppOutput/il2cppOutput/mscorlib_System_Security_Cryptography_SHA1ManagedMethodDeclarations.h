﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t1287;
// System.Byte[]
struct ByteU5BU5D_t130;

// System.Void System.Security.Cryptography.SHA1Managed::.ctor()
extern "C" void SHA1Managed__ctor_m6914 (SHA1Managed_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1Managed_HashCore_m6915 (SHA1Managed_t1287 * __this, ByteU5BU5D_t130* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Managed::HashFinal()
extern "C" ByteU5BU5D_t130* SHA1Managed_HashFinal_m6916 (SHA1Managed_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::Initialize()
extern "C" void SHA1Managed_Initialize_m6917 (SHA1Managed_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

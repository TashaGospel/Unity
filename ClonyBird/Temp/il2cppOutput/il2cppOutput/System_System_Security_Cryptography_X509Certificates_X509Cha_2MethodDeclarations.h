﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t574;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t578;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t581;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t568;

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern "C" void X509ChainElementCollection__ctor_m1903 (X509ChainElementCollection_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m1904 (X509ChainElementCollection_t574 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m1905 (X509ChainElementCollection_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern "C" int32_t X509ChainElementCollection_get_Count_m1906 (X509ChainElementCollection_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Item(System.Int32)
extern "C" X509ChainElement_t578 * X509ChainElementCollection_get_Item_m1907 (X509ChainElementCollection_t574 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern "C" Object_t * X509ChainElementCollection_get_SyncRoot_m1908 (X509ChainElementCollection_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::GetEnumerator()
extern "C" X509ChainElementEnumerator_t581 * X509ChainElementCollection_GetEnumerator_m1909 (X509ChainElementCollection_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509ChainElementCollection_Add_m1910 (X509ChainElementCollection_t574 * __this, X509Certificate2_t568 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
extern "C" void X509ChainElementCollection_Clear_m1911 (X509ChainElementCollection_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509ChainElementCollection_Contains_m1912 (X509ChainElementCollection_t574 * __this, X509Certificate2_t568 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;

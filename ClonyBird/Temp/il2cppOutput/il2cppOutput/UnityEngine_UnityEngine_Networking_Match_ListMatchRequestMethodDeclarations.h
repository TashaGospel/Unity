﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t198;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t191;

// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C" void ListMatchRequest__ctor_m954 (ListMatchRequest_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m955 (ListMatchRequest_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C" void ListMatchRequest_set_pageSize_m956 (ListMatchRequest_t198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m957 (ListMatchRequest_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" void ListMatchRequest_set_pageNum_m958 (ListMatchRequest_t198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m959 (ListMatchRequest_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C" void ListMatchRequest_set_nameFilter_m960 (ListMatchRequest_t198 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t191 * ListMatchRequest_get_matchAttributeFilterLessThan_m961 (ListMatchRequest_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t191 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m962 (ListMatchRequest_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern "C" String_t* ListMatchRequest_ToString_m963 (ListMatchRequest_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

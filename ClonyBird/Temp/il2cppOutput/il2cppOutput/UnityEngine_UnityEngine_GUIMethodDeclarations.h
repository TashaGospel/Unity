﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t82;
// UnityEngine.GUISkin
struct GUISkin_t80;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t78;
// UnityEngine.GUIStyle
struct GUIStyle_t88;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m227 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m228 (Object_t * __this /* static, unused */, DateTime_t83  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m229 (Object_t * __this /* static, unused */, GUISkin_t80 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t80 * GUI_get_skin_m230 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m231 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m232 (Object_t * __this /* static, unused */, WindowFunction_t78 * ___func, int32_t ___id, GUISkin_t80 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t88 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;

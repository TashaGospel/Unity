﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t653;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t645;

// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
extern "C" void Assertion__ctor_m2328 (Assertion_t653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
extern "C" Expression_t645 * Assertion_get_TrueExpression_m2329 (Assertion_t653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_TrueExpression_m2330 (Assertion_t653 * __this, Expression_t645 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
extern "C" Expression_t645 * Assertion_get_FalseExpression_m2331 (Assertion_t653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_FalseExpression_m2332 (Assertion_t653 * __this, Expression_t645 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
extern "C" void Assertion_GetWidth_m2333 (Assertion_t653 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;

﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t681;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t781;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t109;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t838  : public AsymmetricSignatureDeformatter_t839
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t681 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t781 * ___hash_1;
};
struct RSASslSignatureDeformatter_t838_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t109 * ___U3CU3Ef__switchU24map15_2;
};

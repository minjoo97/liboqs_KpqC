// SPDX-License-Identifier: MIT

#include <stdlib.h>
#include <oqs/sig_aimer.h>
#include "KpqClean_ver2_AIMer192s_clean/api.h"


#if defined(OQS_ENABLE_SIG_aimer_192s)

OQS_SIG *OQS_SIG_aimer_192s_new(void) {
    OQS_SIG *sig = OQS_MEM_malloc(sizeof(OQS_SIG));
    if (sig == NULL) {
        return NULL;
    }
    sig->method_name = OQS_SIG_alg_aimer_192s;
    sig->alg_version = "https://github.com/kpqc-cryptocraft/KpqClean_ver2/commit/80c525aa74d3b8983b16a124aa35dc61e50f43b7";

    sig->claimed_nist_level = 3;
    sig->euf_cma = true;
    sig->suf_cma = true;
    sig->sig_with_ctx_support = false;

    sig->length_public_key = OQS_SIG_aimer_192s_length_public_key;
    sig->length_secret_key = OQS_SIG_aimer_192s_length_secret_key;
    sig->length_signature = OQS_SIG_aimer_192s_length_signature;

    sig->keypair = OQS_SIG_aimer_192s_keypair;
    sig->sign = OQS_SIG_aimer_192s_sign;
    sig->verify = OQS_SIG_aimer_192s_verify;
    sig->sign_with_ctx_str = OQS_SIG_aimer_192s_sign_with_ctx_str;
    sig->verify_with_ctx_str = OQS_SIG_aimer_192s_verify_with_ctx_str;

    return sig;
}

OQS_API OQS_STATUS OQS_SIG_aimer_192s_keypair(uint8_t *public_key, uint8_t *secret_key) {
    return (OQS_STATUS) crypto_sign_keypair(public_key, secret_key);
}

OQS_API OQS_STATUS OQS_SIG_aimer_192s_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key) {
    return (OQS_STATUS) crypto_sign_signature(signature, signature_len, message, message_len, secret_key);
}

OQS_API OQS_STATUS OQS_SIG_aimer_192s_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key) {
    return (OQS_STATUS) crypto_sign_verify(signature, signature_len, message, message_len, public_key);
}

OQS_API OQS_STATUS OQS_SIG_aimer_192s_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_aimer_192s_sign(signature, signature_len, message, message_len, secret_key);
    } else {
        return OQS_ERROR;
    }
}

OQS_API OQS_STATUS OQS_SIG_aimer_192s_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_aimer_192s_verify(message, message_len, signature, signature_len, public_key);
    } else {
        return OQS_ERROR;
    }
}

#endif 
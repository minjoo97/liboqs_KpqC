// SPDX-License-Identifier: MIT

#ifndef OQS_SIG_HAETAE_H
#define OQS_SIG_HAETAE_H

#include <oqs/oqs.h>

#ifdef OQS_ENABLE_SIG_haetae_2
#define OQS_SIG_haetae_2_length_public_key 992
#define OQS_SIG_haetae_2_length_secret_key 1408
#define OQS_SIG_haetae_2_length_signature 1474
OQS_SIG *OQS_SIG_haetae_2_new(void);
OQS_API OQS_STATUS OQS_SIG_haetae_2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_haetae_2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_haetae_2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_haetae_2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_haetae_2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#ifdef OQS_ENABLE_SIG_haetae_3
#define OQS_SIG_haetae_3_length_public_key 1472
#define OQS_SIG_haetae_3_length_secret_key 2112
#define OQS_SIG_haetae_3_length_signature 2349
OQS_SIG *OQS_SIG_haetae_3_new(void);
OQS_API OQS_STATUS OQS_SIG_haetae_3_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_haetae_3_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_haetae_3_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_haetae_3_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_haetae_3_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#ifdef OQS_ENABLE_SIG_haetae_5
#define OQS_SIG_haetae_5_length_public_key 2080
#define OQS_SIG_haetae_5_length_secret_key 2752
#define OQS_SIG_haetae_5_length_signature 2948
OQS_SIG *OQS_SIG_haetae_5_new(void);
OQS_API OQS_STATUS OQS_SIG_haetae_5_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_haetae_5_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_haetae_5_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_haetae_5_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_haetae_5_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif


#endif /* OQS_SIG_HAETAE_H */
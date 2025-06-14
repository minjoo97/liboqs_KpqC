#ifndef OQS_KEM_SMAUG_T_H
#define OQS_KEM_SMAUG_T_H

#include <oqs/oqs.h>

#ifdef OQS_ENABLE_KEM_smaug_timer
#define OQS_KEM_smaug_timer_length_public_key  672
#define OQS_KEM_smaug_timer_length_secret_key  832
#define OQS_KEM_smaug_timer_length_ciphertext  608
#define OQS_KEM_smaug_timer_length_keypair_seed  0
#define OQS_KEM_smaug_timer_length_shared_secret  32
OQS_KEM *OQS_KEM_smaug_timer_new(void);
OQS_API OQS_STATUS OQS_KEM_smaug_timer_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_smaug_timer_keypair_derand(uint8_t *public_key, uint8_t *secret_key, const uint8_t *keypair_seed);
OQS_API OQS_STATUS OQS_KEM_smaug_timer_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_smaug_timer_decaps(uint8_t *shared_secret, const uint8_t *ciphertext, const uint8_t *secret_key);
#endif  

#ifdef OQS_ENABLE_KEM_smaug_t1
#define OQS_KEM_smaug_t1_length_public_key  672
#define OQS_KEM_smaug_t1_length_secret_key  832
#define OQS_KEM_smaug_t1_length_ciphertext  672
#define OQS_KEM_smaug_t1_length_keypair_seed  0
#define OQS_KEM_smaug_t1_length_shared_secret  32
OQS_KEM *OQS_KEM_smaug_t1_new(void);
OQS_API OQS_STATUS OQS_KEM_smaug_t1_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_smaug_t1_keypair_derand(uint8_t *public_key, uint8_t *secret_key, const uint8_t *keypair_seed);
OQS_API OQS_STATUS OQS_KEM_smaug_t1_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_smaug_t1_decaps(uint8_t *shared_secret, const uint8_t *ciphertext, const uint8_t *secret_key);
#endif  

#ifdef OQS_ENABLE_KEM_smaug_t3
#define OQS_KEM_smaug_t3_length_public_key  1088
#define OQS_KEM_smaug_t3_length_secret_key  1312
#define OQS_KEM_smaug_t3_length_ciphertext  992
#define OQS_KEM_smaug_t3_length_keypair_seed  0
#define OQS_KEM_smaug_t3_length_shared_secret  32
OQS_KEM *OQS_KEM_smaug_t3_new(void);
OQS_API OQS_STATUS OQS_KEM_smaug_t3_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_smaug_t3_keypair_derand(uint8_t *public_key, uint8_t *secret_key, const uint8_t *keypair_seed);
OQS_API OQS_STATUS OQS_KEM_smaug_t3_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_smaug_t3_decaps(uint8_t *shared_secret, const uint8_t *ciphertext, const uint8_t *secret_key);
#endif

#ifdef OQS_ENABLE_KEM_smaug_t5
#define OQS_KEM_smaug_t5_length_public_key  1440
#define OQS_KEM_smaug_t5_length_secret_key  288 + 1440
#define OQS_KEM_smaug_t5_length_ciphertext  1376
#define OQS_KEM_smaug_t5_length_keypair_seed  0
#define OQS_KEM_smaug_t5_length_shared_secret  32
OQS_KEM *OQS_KEM_smaug_t5_new(void);
OQS_API OQS_STATUS OQS_KEM_smaug_t5_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_smaug_t5_keypair_derand(uint8_t *public_key, uint8_t *secret_key, const uint8_t *keypair_seed);
OQS_API OQS_STATUS OQS_KEM_smaug_t5_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_smaug_t5_decaps(uint8_t *shared_secret, const uint8_t *ciphertext, const uint8_t *secret_key);
#endif

#endif
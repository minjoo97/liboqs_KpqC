#ifndef KEM_TIMER_H
#define KEM_TIMER_H

#include <stdint.h>
#include <stdio.h>
#include "parameters.h"

#define CRYPTO_SECRETKEYBYTES  timer_SECRETKEYBYTES
#define CRYPTO_PUBLICKEYBYTES  timer_PUBLICKEYBYTES
#define CRYPTO_CIPHERTEXTBYTES timer_CIPHERTEXTBYTES
//#define CRYPTO_BYTES           timer_BYTES

#define CRYPTO_ALGNAME "SMAUG-TIMER"

// TiMER_NAMESPACE 사용 (parameters.h에서 정의됨)
#define crypto_kem_keypair TiMER_NAMESPACE(crypto_kem_keypair)
#define crypto_kem_enc TiMER_NAMESPACE(crypto_kem_enc)
#define crypto_kem_dec TiMER_NAMESPACE(crypto_kem_dec)
 
#define TiMER_SECRETKEYBYTES 160 + 672
#define TiMER_PUBLICKEYBYTES 672
#define TiMER_CIPHERTEXTBYTES 608
#define TiMER_BYTES 16

int crypto_kem_keypair(uint8_t *pk, uint8_t *sk);
int crypto_kem_enc(uint8_t *ct, uint8_t *ss, const uint8_t *pk);
int crypto_kem_dec(uint8_t *ss, const uint8_t *sk, const uint8_t *pk);

#endif // KEM_TIMER_H
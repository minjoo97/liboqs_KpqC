#ifndef SIGN_H
#define SIGN_H

#include <stddef.h>
#include <stdint.h>
#include "params.h"
#include "polyvec.h"
#include "poly.h"

#define crypto_sign_keypair HAETAE_2_NAMESPACE(keypair)
int crypto_sign_keypair(uint8_t *pk, uint8_t *sk);

#define crypto_sign_signature HAETAE_2_NAMESPACE(signature)
int crypto_sign_signature(uint8_t *sig, size_t *siglen,
                         const uint8_t *m, size_t mlen,
                         const uint8_t *sk);

#define crypto_sign_verify HAETAE_2_NAMESPACE(verify)
int crypto_sign_verify(const uint8_t *sig, size_t siglen,
                      const uint8_t *m, size_t mlen,
                      const uint8_t *pk);

#endif
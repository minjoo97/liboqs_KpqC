// SPDX-License-Identifier: MIT

#include <stdlib.h>
#include <oqs/kem_ntru_plus.h>
#include "KpqClean_ver2_NTRU_PLUS_KEM768_clean/api.h"
#if defined(OQS_ENABLE_KEM_ntru_plus_kem768)

OQS_KEM *OQS_KEM_ntru_plus_kem768_new(void) {
    OQS_KEM *kem = OQS_MEM_malloc(sizeof(OQS_KEM));
    if (kem == NULL) {
        return NULL;
    }
    kem->method_name = OQS_KEM_alg_ntru_plus_kem768;
    kem->alg_version = "https://github.com/kpqc-cryptocraft/KpqClean_ver2/commit/80c525aa74d3b8983b16a124aa35dc61e50f43b7";

    kem->claimed_nist_level = 2.5;


    kem->length_public_key = OQS_KEM_ntru_plus_kem768_length_public_key;
    kem->length_secret_key = OQS_KEM_ntru_plus_kem768_length_secret_key;
    kem->length_ciphertext = OQS_KEM_ntru_plus_kem768_length_ciphertext;
    kem->length_shared_secret = OQS_KEM_ntru_plus_kem768_length_shared_secret;
    kem->length_keypair_seed = OQS_KEM_ntru_plus_kem768_length_keypair_seed;

    kem->keypair = OQS_KEM_ntru_plus_kem768_keypair;
    kem->keypair_derand = OQS_KEM_ntru_plus_kem768_keypair_derand;
    kem->encaps = OQS_KEM_ntru_plus_kem768_encaps;
    kem->decaps = OQS_KEM_ntru_plus_kem768_decaps;

    return kem;
}




OQS_API OQS_STATUS OQS_KEM_ntru_plus_kem768_keypair_derand(uint8_t *public_key, uint8_t *secret_key, const uint8_t *seed) {
	(void)public_key;
	(void)secret_key;
	(void)seed;
	return OQS_ERROR;
}

OQS_API OQS_STATUS OQS_KEM_ntru_plus_kem768_keypair(uint8_t *public_key, uint8_t *secret_key) {
    return (OQS_STATUS) crypto_kem_keypair(public_key, secret_key);
}

OQS_API OQS_STATUS OQS_KEM_ntru_plus_kem768_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key) {
    return (OQS_STATUS) crypto_kem_enc(ciphertext, shared_secret, public_key);
}

OQS_API OQS_STATUS OQS_KEM_ntru_plus_kem768_decaps(uint8_t *shared_secret, const uint8_t *ciphertext, const uint8_t *secret_key) {
    return (OQS_STATUS) crypto_kem_dec(shared_secret, ciphertext, secret_key);
}


#endif 
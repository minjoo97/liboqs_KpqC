#include "hash.h"

void shake256_absorb_twice_squeeze(uint8_t *out, size_t out_bytes,
                                   const uint8_t *in1, size_t in1_bytes,
                                   const uint8_t *in2, size_t in2_bytes) {
    shake256incctx state;
    shake256_inc_init(&state);
    shake256_inc_absorb(&state, in1, in1_bytes);
    shake256_inc_absorb(&state, in2, in2_bytes);
    shake256_inc_finalize(&state);
    shake256_inc_squeeze(out, out_bytes, &state);
}


#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "hash.h"
#include "params.h"
#include <oqs/sha3.h>

int main() {
    printf("\nTesting AIMer hash comparison:\n");
    
    // liboqs 구현
    hash_instance oqs_ctx;
    uint8_t oqs_output[32] = {0};
    
    // 테스트할 간단한 입력
    const uint8_t test_input[] = "test";
    const size_t test_input_len = 4;
    const uint8_t prefix = 0x05; // HASH_PREFIX_5
    
    printf("\nStep 1 - After prefix:\n");
    
    // liboqs
    hash_init_prefix(&oqs_ctx, prefix);
    hash_final(&oqs_ctx);
    hash_squeeze(&oqs_ctx, oqs_output, 32);
    printf("OQS after prefix: ");
    for(int i = 0; i < 32; i++) printf("%02x", oqs_output[i]);
    printf("\n");
    
    printf("\nStep 2 - After data:\n");
    
    // liboqs
    hash_init_prefix(&oqs_ctx, prefix);
    hash_update(&oqs_ctx, test_input, test_input_len);
    hash_final(&oqs_ctx);
    hash_squeeze(&oqs_ctx, oqs_output, 32);
    printf("OQS after data: ");
    for(int i = 0; i < 32; i++) printf("%02x", oqs_output[i]);
    printf("\n");
    
    return 0;
}
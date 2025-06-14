# SPDX-License-Identifier: MIT

# HAETAE-2 clean 버전
if(OQS_ENABLE_SIG_haetae_2)
    add_library(haetae2_clean OBJECT
        KpqClean_ver2_HAETAE2_clean/decompose.c
        KpqClean_ver2_HAETAE2_clean/encoding.c
        KpqClean_ver2_HAETAE2_clean/fft.c
        KpqClean_ver2_HAETAE2_clean/fixpoint.c
        KpqClean_ver2_HAETAE2_clean/ntt.c
        KpqClean_ver2_HAETAE2_clean/packing.c
        KpqClean_ver2_HAETAE2_clean/poly.c
        KpqClean_ver2_HAETAE2_clean/polyfix.c
        KpqClean_ver2_HAETAE2_clean/polymat.c
        KpqClean_ver2_HAETAE2_clean/polyvec.c
        KpqClean_ver2_HAETAE2_clean/reduce.c
        KpqClean_ver2_HAETAE2_clean/sampler.c
        KpqClean_ver2_HAETAE2_clean/sign.c
        KpqClean_ver2_HAETAE2_clean/symmetric-shake.c)
    target_include_directories(haetae2_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_HAETAE2_clean)
    target_include_directories(haetae2_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(haetae2_clean PRIVATE HAETAE_MODE=2)
endif()

# HAETAE-2 AVX2 버전
if(OQS_ENABLE_SIG_haetae_2_avx2)
    add_library(haetae2_avx2 OBJECT
        KpqClean_ver2_HAETAE2_avx2/decompose.c 
        KpqClean_ver2_HAETAE2_avx2/encoding.c 
        KpqClean_ver2_HAETAE2_avx2/fft.c 
        KpqClean_ver2_HAETAE2_avx2/poly.c 
        KpqClean_ver2_HAETAE2_avx2/polyvec.c 
        KpqClean_ver2_HAETAE2_avx2/sampler.c 
        KpqClean_ver2_HAETAE2_avx2/sign.c
        KpqClean_ver2_HAETAE2_avx2/consts.c
        KpqClean_ver2_HAETAE2_avx2/fixpoint.c
        KpqClean_ver2_HAETAE2_avx2/keccakx4_vec.c
        KpqClean_ver2_HAETAE2_avx2/packing.c
        KpqClean_ver2_HAETAE2_avx2/polyfix.c
        KpqClean_ver2_HAETAE2_avx2/polymat.c
        KpqClean_ver2_HAETAE2_avx2/reduce.c
        KpqClean_ver2_HAETAE2_avx2/samplerx4.c
        KpqClean_ver2_HAETAE2_avx2/symmetric-shake.c)
    target_include_directories(haetae2_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_HAETAE2_avx2)
    target_include_directories(haetae2_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(haetae2_avx2 PRIVATE HAETAE_MODE=2)
    target_compile_options(haetae2_avx2 PRIVATE -mavx2 -mpopcnt)
endif()

# HAETAE-3 clean 버전
if(OQS_ENABLE_SIG_haetae_3)
    add_library(haetae3_clean OBJECT
        KpqClean_ver2_HAETAE3_clean/decompose.c
        KpqClean_ver2_HAETAE3_clean/encoding.c
        KpqClean_ver2_HAETAE3_clean/fft.c
        KpqClean_ver2_HAETAE3_clean/fixpoint.c
        KpqClean_ver2_HAETAE3_clean/ntt.c
        KpqClean_ver2_HAETAE3_clean/packing.c
        KpqClean_ver2_HAETAE3_clean/poly.c
        KpqClean_ver2_HAETAE3_clean/polyfix.c
        KpqClean_ver2_HAETAE3_clean/polymat.c
        KpqClean_ver2_HAETAE3_clean/polyvec.c
        KpqClean_ver2_HAETAE3_clean/reduce.c
        KpqClean_ver2_HAETAE3_clean/sampler.c
        KpqClean_ver2_HAETAE3_clean/sign.c
        KpqClean_ver2_HAETAE3_clean/symmetric-shake.c)
    target_include_directories(haetae3_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_HAETAE3_clean)
    target_include_directories(haetae3_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(haetae3_clean PRIVATE HAETAE_MODE=3)
endif()

# HAETAE-3 AVX2 버전
if(OQS_ENABLE_SIG_haetae_3_avx2)
    add_library(haetae3_avx2 OBJECT
        KpqClean_ver2_HAETAE3_avx2/decompose.c 
        KpqClean_ver2_HAETAE3_avx2/encoding.c 
        KpqClean_ver2_HAETAE3_avx2/fft.c 
        KpqClean_ver2_HAETAE3_avx2/poly.c 
        KpqClean_ver2_HAETAE3_avx2/polyvec.c 
        KpqClean_ver2_HAETAE3_avx2/sampler.c 
        KpqClean_ver2_HAETAE3_avx2/sign.c
        KpqClean_ver2_HAETAE3_avx2/consts.c
        KpqClean_ver2_HAETAE3_avx2/fixpoint.c
        KpqClean_ver2_HAETAE3_avx2/keccakx4_vec.c
        KpqClean_ver2_HAETAE3_avx2/packing.c
        KpqClean_ver2_HAETAE3_avx2/polyfix.c
        KpqClean_ver2_HAETAE3_avx2/polymat.c
        KpqClean_ver2_HAETAE3_avx2/reduce.c
        KpqClean_ver2_HAETAE3_avx2/samplerx4.c
        KpqClean_ver2_HAETAE3_avx2/symmetric-shake.c)
    target_include_directories(haetae3_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_HAETAE3_avx2)
    target_include_directories(haetae3_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(haetae3_avx2 PRIVATE HAETAE_MODE=3)
    target_compile_options(haetae3_avx2 PRIVATE -mavx2 -mpopcnt)
endif()

# HAETAE-5 clean 버전
if(OQS_ENABLE_SIG_haetae_5)
    add_library(haetae5_clean OBJECT
        KpqClean_ver2_HAETAE5_clean/decompose.c
        KpqClean_ver2_HAETAE5_clean/encoding.c
        KpqClean_ver2_HAETAE5_clean/fft.c
        KpqClean_ver2_HAETAE5_clean/fixpoint.c
        KpqClean_ver2_HAETAE5_clean/ntt.c
        KpqClean_ver2_HAETAE5_clean/packing.c
        KpqClean_ver2_HAETAE5_clean/poly.c
        KpqClean_ver2_HAETAE5_clean/polyfix.c
        KpqClean_ver2_HAETAE5_clean/polymat.c
        KpqClean_ver2_HAETAE5_clean/polyvec.c
        KpqClean_ver2_HAETAE5_clean/reduce.c
        KpqClean_ver2_HAETAE5_clean/sampler.c
        KpqClean_ver2_HAETAE5_clean/sign.c
        KpqClean_ver2_HAETAE5_clean/symmetric-shake.c)
    target_include_directories(haetae5_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_HAETAE5_clean)
    target_include_directories(haetae5_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(haetae5_clean PRIVATE HAETAE_MODE=5)
endif()

# HAETAE-5 AVX2 버전
if(OQS_ENABLE_SIG_haetae_5_avx2)
    add_library(haetae5_avx2 OBJECT
        KpqClean_ver2_HAETAE5_avx2/decompose.c 
        KpqClean_ver2_HAETAE5_avx2/encoding.c 
        KpqClean_ver2_HAETAE5_avx2/fft.c 
        KpqClean_ver2_HAETAE5_avx2/poly.c 
        KpqClean_ver2_HAETAE5_avx2/polyvec.c 
        KpqClean_ver2_HAETAE5_avx2/sampler.c 
        KpqClean_ver2_HAETAE5_avx2/sign.c
        KpqClean_ver2_HAETAE5_avx2/consts.c
        KpqClean_ver2_HAETAE5_avx2/fixpoint.c
        KpqClean_ver2_HAETAE5_avx2/keccakx4_vec.c
        KpqClean_ver2_HAETAE5_avx2/packing.c
        KpqClean_ver2_HAETAE5_avx2/polyfix.c
        KpqClean_ver2_HAETAE5_avx2/polymat.c
        KpqClean_ver2_HAETAE5_avx2/reduce.c
        KpqClean_ver2_HAETAE5_avx2/samplerx4.c
        KpqClean_ver2_HAETAE5_avx2/symmetric-shake.c)
    target_include_directories(haetae5_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_HAETAE5_avx2)
    target_include_directories(haetae5_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(haetae5_avx2 PRIVATE HAETAE_MODE=5)
    target_compile_options(haetae5_avx2 PRIVATE -mavx2 -mpopcnt)
endif()

# HAETAE 알고리즘 파일 추가
add_library(haetae_impl OBJECT
    sig_haetae_2.c
    sig_haetae_3.c
    sig_haetae_5.c)
target_include_directories(haetae_impl PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(haetae_impl PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)

set(_HAETAE_OBJS "")
if(OQS_ENABLE_SIG_haetae_2)
    list(APPEND _HAETAE_OBJS $<TARGET_OBJECTS:haetae2_clean>)
endif()
if(OQS_ENABLE_SIG_haetae_2_avx2)
    list(APPEND _HAETAE_OBJS $<TARGET_OBJECTS:haetae2_avx2>)
endif()
if(OQS_ENABLE_SIG_haetae_3)
    list(APPEND _HAETAE_OBJS $<TARGET_OBJECTS:haetae3_clean>)
endif()
if(OQS_ENABLE_SIG_haetae_3_avx2)
    list(APPEND _HAETAE_OBJS $<TARGET_OBJECTS:haetae3_avx2>)
endif()
if(OQS_ENABLE_SIG_haetae_5)
    list(APPEND _HAETAE_OBJS $<TARGET_OBJECTS:haetae5_clean>)
endif()
if(OQS_ENABLE_SIG_haetae_5_avx2)
    list(APPEND _HAETAE_OBJS $<TARGET_OBJECTS:haetae5_avx2>)
endif()
list(APPEND _HAETAE_OBJS $<TARGET_OBJECTS:haetae_impl>)

set(HAETAE_OBJS ${_HAETAE_OBJS} PARENT_SCOPE) 
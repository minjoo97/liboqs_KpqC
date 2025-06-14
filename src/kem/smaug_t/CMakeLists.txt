# SPDX-License-Identifier: MIT

# --- SMAUG_T clean implementations ---
if(OQS_ENABLE_KEM_smaug_timer)
    add_library(smaug_timer_clean OBJECT
        KpqClean_ver2_SMAUG-Timer_clean/cbd.c
        KpqClean_ver2_SMAUG-Timer_clean/ciphertext.c
        KpqClean_ver2_SMAUG-Timer_clean/dg.c
        KpqClean_ver2_SMAUG-Timer_clean/hash.c
        KpqClean_ver2_SMAUG-Timer_clean/hwt.c
        KpqClean_ver2_SMAUG-Timer_clean/indcpa.c
        KpqClean_ver2_SMAUG-Timer_clean/io.c
        KpqClean_ver2_SMAUG-Timer_clean/kem.c
        KpqClean_ver2_SMAUG-Timer_clean/key.c
        KpqClean_ver2_SMAUG-Timer_clean/pack.c
        KpqClean_ver2_SMAUG-Timer_clean/poly.c
        KpqClean_ver2_SMAUG-Timer_clean/toomcook.c
        KpqClean_ver2_SMAUG-Timer_clean/verify.c)
    target_include_directories(smaug_timer_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_SMAUG-Timer_clean)
    target_include_directories(smaug_timer_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
endif()

if(OQS_ENABLE_KEM_smaug_t1)
    add_library(smaug_t1_clean OBJECT
        KpqClean_ver2_SMAUG-T1_clean/ciphertext.c
        KpqClean_ver2_SMAUG-T1_clean/cbd.c
        KpqClean_ver2_SMAUG-T1_clean/dg.c
        KpqClean_ver2_SMAUG-T1_clean/hash.c
        KpqClean_ver2_SMAUG-T1_clean/hwt.c
        KpqClean_ver2_SMAUG-T1_clean/indcpa.c
        KpqClean_ver2_SMAUG-T1_clean/io.c
        KpqClean_ver2_SMAUG-T1_clean/kem.c
        KpqClean_ver2_SMAUG-T1_clean/key.c
        KpqClean_ver2_SMAUG-T1_clean/pack.c
        KpqClean_ver2_SMAUG-T1_clean/poly.c
        KpqClean_ver2_SMAUG-T1_clean/toomcook.c
        KpqClean_ver2_SMAUG-T1_clean/verify.c)
    target_include_directories(smaug_t1_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_SMAUG-T1_clean)
    target_include_directories(smaug_t1_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
endif()

if(OQS_ENABLE_KEM_smaug_t3)
    add_library(smaug_t3_clean OBJECT
        KpqClean_ver2_SMAUG-T3_clean/ciphertext.c
        KpqClean_ver2_SMAUG-T3_clean/cbd.c
        KpqClean_ver2_SMAUG-T3_clean/dg.c
        KpqClean_ver2_SMAUG-T3_clean/hash.c
        KpqClean_ver2_SMAUG-T3_clean/hwt.c
        KpqClean_ver2_SMAUG-T3_clean/indcpa.c
        KpqClean_ver2_SMAUG-T3_clean/io.c
        KpqClean_ver2_SMAUG-T3_clean/kem.c
        KpqClean_ver2_SMAUG-T3_clean/key.c
        KpqClean_ver2_SMAUG-T3_clean/pack.c
        KpqClean_ver2_SMAUG-T3_clean/poly.c
        KpqClean_ver2_SMAUG-T3_clean/toomcook.c
        KpqClean_ver2_SMAUG-T3_clean/verify.c)
    target_include_directories(smaug_t3_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_SMAUG-T3_clean)
    target_include_directories(smaug_t3_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
endif()

if(OQS_ENABLE_KEM_smaug_t5)
    add_library(smaug_t5_clean OBJECT
        KpqClean_ver2_SMAUG-T5_clean/ciphertext.c
        KpqClean_ver2_SMAUG-T5_clean/cbd.c
        KpqClean_ver2_SMAUG-T5_clean/dg.c
        KpqClean_ver2_SMAUG-T5_clean/hash.c
        KpqClean_ver2_SMAUG-T5_clean/hwt.c
        KpqClean_ver2_SMAUG-T5_clean/indcpa.c
        KpqClean_ver2_SMAUG-T5_clean/io.c
        KpqClean_ver2_SMAUG-T5_clean/kem.c
        KpqClean_ver2_SMAUG-T5_clean/key.c
        KpqClean_ver2_SMAUG-T5_clean/pack.c
        KpqClean_ver2_SMAUG-T5_clean/poly.c
        KpqClean_ver2_SMAUG-T5_clean/toomcook.c
        KpqClean_ver2_SMAUG-T5_clean/verify.c)
    target_include_directories(smaug_t5_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_SMAUG-T5_clean)
    target_include_directories(smaug_t5_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
endif()


if(OQS_ENABLE_KEM_smaug_t1_avx2_kem)
    add_library(smaug_t1_avx2_kem OBJECT
        KpqClean_ver2_SMAUG-T1_avx2_kem/ciphertext.c
        KpqClean_ver2_SMAUG-T1_avx2_kem/dg.c
        KpqClean_ver2_SMAUG-T1_avx2_kem/hash.c
        KpqClean_ver2_SMAUG-T1_avx2_kem/hwt.c
        KpqClean_ver2_SMAUG-T1_avx2_kem/indcpa.c
        KpqClean_ver2_SMAUG-T1_avx2_kem/io.c
        KpqClean_ver2_SMAUG-T1_avx2_kem/kem.c
        KpqClean_ver2_SMAUG-T1_avx2_kem/key.c
        KpqClean_ver2_SMAUG-T1_avx2_kem/pack.c
        KpqClean_ver2_SMAUG-T1_avx2_kem/poly.c
        KpqClean_ver2_SMAUG-T1_avx2_kem/verify.c)
    target_include_directories(smaug_t1_avx2_kem PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_SMAUG-T1_avx2_kem)
    target_include_directories(smaug_t1_avx2_kem PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_options(smaug_t1_avx2_kem PRIVATE -mavx2)
endif()



if(OQS_ENABLE_KEM_smaug_t3_avx2_kem)
    add_library(smaug_t3_avx2_kem OBJECT
        KpqClean_ver2_SMAUG-T3_avx2_kem/ciphertext.c
        KpqClean_ver2_SMAUG-T3_avx2_kem/dg.c
        KpqClean_ver2_SMAUG-T3_avx2_kem/hash.c
        KpqClean_ver2_SMAUG-T3_avx2_kem/hwt.c
        KpqClean_ver2_SMAUG-T3_avx2_kem/indcpa.c
        KpqClean_ver2_SMAUG-T3_avx2_kem/io.c
        KpqClean_ver2_SMAUG-T3_avx2_kem/kem.c
        KpqClean_ver2_SMAUG-T3_avx2_kem/key.c
        KpqClean_ver2_SMAUG-T3_avx2_kem/pack.c
        KpqClean_ver2_SMAUG-T3_avx2_kem/poly.c
        KpqClean_ver2_SMAUG-T3_avx2_kem/verify.c)
    target_include_directories(smaug_t3_avx2_kem PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_SMAUG-T3_avx2_kem)
    target_include_directories(smaug_t3_avx2_kem PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_options(smaug_t3_avx2_kem PRIVATE -mavx2)
endif()


if(OQS_ENABLE_KEM_smaug_t5_avx2_kem)
    add_library(smaug_t5_avx2_kem OBJECT
        KpqClean_ver2_SMAUG-T5_avx2_kem/ciphertext.c
        KpqClean_ver2_SMAUG-T5_avx2_kem/dg.c
        KpqClean_ver2_SMAUG-T5_avx2_kem/hash.c
        KpqClean_ver2_SMAUG-T5_avx2_kem/hwt.c
        KpqClean_ver2_SMAUG-T5_avx2_kem/indcpa.c
        KpqClean_ver2_SMAUG-T5_avx2_kem/io.c
        KpqClean_ver2_SMAUG-T5_avx2_kem/kem.c
        KpqClean_ver2_SMAUG-T5_avx2_kem/key.c
        KpqClean_ver2_SMAUG-T5_avx2_kem/pack.c
        KpqClean_ver2_SMAUG-T5_avx2_kem/poly.c
        KpqClean_ver2_SMAUG-T5_avx2_kem/verify.c)
    target_include_directories(smaug_t5_avx2_kem PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_SMAUG-T5_avx2_kem)
    target_include_directories(smaug_t5_avx2_kem PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_options(smaug_t5_avx2_kem PRIVATE -mavx2)
endif()


if(OQS_ENABLE_KEM_smaug_t1_avx2_kem90s)
    add_library(smaug_t1_avx2_kem90s OBJECT
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/ciphertext.c
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/dg.c
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/hwt.c
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/indcpa.c
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/io.c
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/kem.c
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/key.c
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/pack.c
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/poly.c
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/symmetric.c
        KpqClean_ver2_SMAUG-T1_avx2_kem90s/verify.c)
    target_include_directories(smaug_t1_avx2_kem90s PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_SMAUG-T1_avx2_kem90s)
    target_include_directories(smaug_t1_avx2_kem90s PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_options(smaug_t1_avx2_kem90s PRIVATE -mavx2)
endif()


if(OQS_ENABLE_KEM_smaug_t3_avx2_kem90s)
    add_library(smaug_t3_avx2_kem90s OBJECT
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/ciphertext.c
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/dg.c
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/hwt.c
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/indcpa.c
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/io.c
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/kem.c
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/key.c
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/pack.c
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/poly.c
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/symmetric.c
        KpqClean_ver2_SMAUG-T3_avx2_kem90s/verify.c)
    target_include_directories(smaug_t3_avx2_kem90s PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_SMAUG-T3_avx2_kem90s)
    target_include_directories(smaug_t3_avx2_kem90s PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_options(smaug_t3_avx2_kem90s PRIVATE -mavx2)
endif()


if(OQS_ENABLE_KEM_smaug_t5_avx2_kem90s)
    add_library(smaug_t5_avx2_kem90s OBJECT
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/ciphertext.c
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/dg.c
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/hwt.c    
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/indcpa.c
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/io.c
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/kem.c
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/key.c
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/pack.c
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/poly.c
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/symmetric.c
        KpqClean_ver2_SMAUG-T5_avx2_kem90s/verify.c)
    target_include_directories(smaug_t5_avx2_kem90s PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_SMAUG-T5_avx2_kem90s)
    target_include_directories(smaug_t5_avx2_kem90s PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_options(smaug_t5_avx2_kem90s PRIVATE -mavx2)
endif()


# --- SMAUG wrapper objects ---
add_library(smaug_t_impl OBJECT
    kem_smaug_timer.c
    kem_smaug_t1.c
    kem_smaug_t3.c
    kem_smaug_t5.c)
target_include_directories(smaug_t_impl PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(smaug_t_impl PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)

# Collect SMAUG objects
set(_SMAUG_T_OBJS "")
if(OQS_ENABLE_KEM_smaug_timer)
    list(APPEND _SMAUG_T_OBJS $<TARGET_OBJECTS:smaug_timer_clean>)
endif()
if(OQS_ENABLE_KEM_smaug_t1)
    list(APPEND _SMAUG_T_OBJS $<TARGET_OBJECTS:smaug_t1_clean>)
endif()
if(OQS_ENABLE_KEM_smaug_t3)
    list(APPEND _SMAUG_T_OBJS $<TARGET_OBJECTS:smaug_t3_clean>)
endif()
if(OQS_ENABLE_KEM_smaug_t5)
    list(APPEND _SMAUG_T_OBJS $<TARGET_OBJECTS:smaug_t5_clean>)
endif()

# Always include wrapper objects
list(APPEND _SMAUG_T_OBJS $<TARGET_OBJECTS:smaug_t_impl>)
set(SMAUG_T_OBJS ${_SMAUG_T_OBJS} PARENT_SCOPE)


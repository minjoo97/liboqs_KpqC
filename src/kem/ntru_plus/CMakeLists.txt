    # SPDX-License-Identifier: MIT

    # --- NTRU-Plus clean implementations ---
    if(OQS_ENABLE_KEM_ntru_plus_kem576)
        add_library(ntru_plus_kem576_clean OBJECT
            KpqClean_ver2_NTRU_PLUS_KEM576_clean/kem.c
            KpqClean_ver2_NTRU_PLUS_KEM576_clean/ntt.c
            KpqClean_ver2_NTRU_PLUS_KEM576_clean/poly.c
            KpqClean_ver2_NTRU_PLUS_KEM576_clean/reduce.c
            KpqClean_ver2_NTRU_PLUS_KEM576_clean/symmetric.c
            KpqClean_ver2_NTRU_PLUS_KEM576_clean/verify.c)
        target_include_directories(ntru_plus_kem576_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_NTRU+KEM576_clean)
        target_include_directories(ntru_plus_kem576_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    endif()

    if(OQS_ENABLE_KEM_ntru_plus_kem768)
        add_library(ntru_plus_kem768_clean OBJECT
            KpqClean_ver2_NTRU_PLUS_KEM768_clean/kem.c
            KpqClean_ver2_NTRU_PLUS_KEM768_clean/ntt.c
            KpqClean_ver2_NTRU_PLUS_KEM768_clean/poly.c
            KpqClean_ver2_NTRU_PLUS_KEM768_clean/reduce.c
            KpqClean_ver2_NTRU_PLUS_KEM768_clean/symmetric.c
            KpqClean_ver2_NTRU_PLUS_KEM768_clean/verify.c)
        target_include_directories(ntru_plus_kem768_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_NTRU_PLUS_KEM768_clean)
        target_include_directories(ntru_plus_kem768_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    endif()

    if(OQS_ENABLE_KEM_ntru_plus_kem864)
        add_library(ntru_plus_kem864_clean OBJECT
            KpqClean_ver2_NTRU_PLUS_KEM864_clean/kem.c
            KpqClean_ver2_NTRU_PLUS_KEM864_clean/ntt.c
            KpqClean_ver2_NTRU_PLUS_KEM864_clean/poly.c
            KpqClean_ver2_NTRU_PLUS_KEM864_clean/reduce.c
            KpqClean_ver2_NTRU_PLUS_KEM864_clean/symmetric.c
            KpqClean_ver2_NTRU_PLUS_KEM864_clean/verify.c)
        target_include_directories(ntru_plus_kem864_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_NTRU_PLUS_KEM864_clean)
        target_include_directories(ntru_plus_kem864_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    endif()

    if(OQS_ENABLE_KEM_ntru_plus_kem1152)
        add_library(ntru_plus_kem1152_clean OBJECT
            KpqClean_ver2_NTRU_PLUS_KEM1152_clean/kem.c
            KpqClean_ver2_NTRU_PLUS_KEM1152_clean/ntt.c
            KpqClean_ver2_NTRU_PLUS_KEM1152_clean/poly.c
            KpqClean_ver2_NTRU_PLUS_KEM1152_clean/reduce.c
            KpqClean_ver2_NTRU_PLUS_KEM1152_clean/symmetric.c
            KpqClean_ver2_NTRU_PLUS_KEM1152_clean/verify.c)
        target_include_directories(ntru_plus_kem1152_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_NTRU_PLUS_KEM1152_clean)
        target_include_directories(ntru_plus_kem1152_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    endif()



    # --- AIMer AVX2 implementations ---
    if( OQS_ENABLE_KEM_ntru_plus_kem576_avx2)
        add_library(ntru_plus_kem576_avx2 OBJECT
            KpqClean_ver2_NTRU_PLUS_KEM576_avx2/consts.c
            KpqClean_ver2_NTRU_PLUS_KEM576_avx2/kem.c
            KpqClean_ver2_NTRU_PLUS_KEM576_avx2/poly.c
            KpqClean_ver2_NTRU_PLUS_KEM576_avx2/symmetric.c
            KpqClean_ver2_NTRU_PLUS_KEM576_avx2/verify.c)
        target_include_directories(ntru_plus_kem576_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_NTRU_PLUS_KEM576_avx2)
        target_include_directories(ntru_plus_kem576_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
        target_compile_definitions(ntru_plus_kem576_avx2 PRIVATE NTRU_PLUS_MODE=576)
        target_compile_options(ntru_plus_kem576_avx2 PRIVATE -mavx2 -mpopcnt)
    endif()

    if(OQS_ENABLE_KEM_ntru_plus_kem768_avx2)
        add_library(ntru_plus_kem768_avx2 OBJECT
            KpqClean_ver2_NTRU_PLUS_KEM768_avx2/consts.c
            KpqClean_ver2_NTRU_PLUS_KEM768_avx2/kem.c
            KpqClean_ver2_NTRU_PLUS_KEM768_avx2/poly.c
            KpqClean_ver2_NTRU_PLUS_KEM768_avx2/symmetric.c
            KpqClean_ver2_NTRU_PLUS_KEM768_avx2/verify.c)
        target_include_directories(ntru_plus_kem768_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_NTRU_PLUS_KEM768_avx2)
        target_include_directories(ntru_plus_kem768_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
        target_compile_definitions(ntru_plus_kem768_avx2 PRIVATE NTRU_PLUS_MODE=768)
        target_compile_options(ntru_plus_kem768_avx2 PRIVATE -mavx2 -mpopcnt)
    endif()

    if(OQS_ENABLE_KEM_ntru_plus_kem864_avx2)
        add_library(ntru_plus_kem864_avx2 OBJECT
            KpqClean_ver2_NTRU_PLUS_KEM864_avx2/consts.c
            KpqClean_ver2_NTRU_PLUS_KEM864_avx2/kem.c
            KpqClean_ver2_NTRU_PLUS_KEM864_avx2/poly.c
            KpqClean_ver2_NTRU_PLUS_KEM864_avx2/symmetric.c
            KpqClean_ver2_NTRU_PLUS_KEM864_avx2/verify.c)
        target_include_directories(ntru_plus_kem864_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_NTRU_PLUS_KEM864_avx2)
        target_include_directories(ntru_plus_kem864_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
        target_compile_definitions(ntru_plus_kem864_avx2 PRIVATE NTRU_PLUS_MODE=864)
        target_compile_options(ntru_plus_kem864_avx2 PRIVATE -mavx2 -mpopcnt)
    endif()

    if(OQS_ENABLE_KEM_ntru_plus_kem1152_avx2)
        add_library(ntru_plus_kem1152_avx2 OBJECT
            KpqClean_ver2_NTRU_PLUS_KEM1152_avx2/consts.c
            KpqClean_ver2_NTRU_PLUS_KEM1152_avx2/kem.c
            KpqClean_ver2_NTRU_PLUS_KEM1152_avx2/poly.c
            KpqClean_ver2_NTRU_PLUS_KEM1152_avx2/symmetric.c
            KpqClean_ver2_NTRU_PLUS_KEM1152_avx2/verify.c)
        target_include_directories(ntru_plus_kem1152_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_NTRU_PLUS_KEM1152_avx2)
        target_include_directories(ntru_plus_kem1152_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
        target_compile_definitions(ntru_plus_kem1152_avx2 PRIVATE NTRU_PLUS_MODE=1152)
        target_compile_options(ntru_plus_kem1152_avx2 PRIVATE -mavx2 -mpopcnt)
    endif()

    # --- AIMer wrapper objects ---
    add_library(ntru_plus_impl OBJECT
        kem_ntru_plus_kem576.c
        kem_ntru_plus_kem768.c
        kem_ntru_plus_kem864.c
        kem_ntru_plus_kem1152.c)
    target_include_directories(ntru_plus_impl PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
    target_include_directories(ntru_plus_impl PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)

    # Collect AIMer objects
    set(_NTRU_PLUS_OBJS "")
    if(OQS_ENABLE_KEM_ntru_plus_kem576)
        list(APPEND _NTRU_PLUS_OBJS $<TARGET_OBJECTS:ntru_plus_kem576_clean>)
    endif()
    if(OQS_ENABLE_KEM_ntru_plus_kem576_avx2)
        list(APPEND _NTRU_PLUS_OBJS $<TARGET_OBJECTS:ntru_plus_kem576_avx2>)
    endif()
    if(OQS_ENABLE_KEM_ntru_plus_kem768)
        list(APPEND _NTRU_PLUS_OBJS $<TARGET_OBJECTS:ntru_plus_kem768_clean>)
    endif()
    if(OQS_ENABLE_KEM_ntru_plus_kem768_avx2)
        list(APPEND _NTRU_PLUS_OBJS $<TARGET_OBJECTS:ntru_plus_kem768_avx2>)
    endif()
    if(OQS_ENABLE_KEM_ntru_plus_kem864)
        list(APPEND _NTRU_PLUS_OBJS $<TARGET_OBJECTS:ntru_plus_kem864_clean>)
    endif()
    if(OQS_ENABLE_KEM_ntru_plus_kem864_avx2)
        list(APPEND _NTRU_PLUS_OBJS $<TARGET_OBJECTS:ntru_plus_kem864_avx2>)
    endif()
    if(OQS_ENABLE_KEM_ntru_plus_kem1152)
        list(APPEND _NTRU_PLUS_OBJS $<TARGET_OBJECTS:ntru_plus_kem1152_clean>)
    endif()
    if(OQS_ENABLE_KEM_ntru_plus_kem1152_avx2)
        list(APPEND _NTRU_PLUS_OBJS $<TARGET_OBJECTS:ntru_plus_kem1152_avx2>)
    endif()


    # Always include wrapper objects
    list(APPEND _NTRU_PLUS_OBJS $<TARGET_OBJECTS:ntru_plus_impl>)
    set(NTRU_PLUS_OBJS ${_NTRU_PLUS_OBJS} PARENT_SCOPE) 


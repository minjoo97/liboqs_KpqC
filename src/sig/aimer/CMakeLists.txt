# SPDX-License-Identifier: MIT

# --- AIMer clean implementations ---
if(OQS_ENABLE_SIG_aimer_128s)
    add_library(aimer128s_clean OBJECT
        KpqClean_ver2_AIMer128s_clean/aim2.c
        KpqClean_ver2_AIMer128s_clean/field.c
        KpqClean_ver2_AIMer128s_clean/hash.c
        KpqClean_ver2_AIMer128s_clean/tree.c
        KpqClean_ver2_AIMer128s_clean/sign.c)
    target_include_directories(aimer128s_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer128s_clean)
    target_include_directories(aimer128s_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
endif()

if(OQS_ENABLE_SIG_aimer_128f)
    add_library(aimer128f_clean OBJECT
        KpqClean_ver2_AIMer128f_clean/aim2.c
        KpqClean_ver2_AIMer128f_clean/field.c
        KpqClean_ver2_AIMer128f_clean/hash.c
        KpqClean_ver2_AIMer128f_clean/tree.c
        KpqClean_ver2_AIMer128f_clean/sign.c)
    target_include_directories(aimer128f_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer128f_clean)
    target_include_directories(aimer128f_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
endif()

if(OQS_ENABLE_SIG_aimer_192s)
    add_library(aimer192s_clean OBJECT
        KpqClean_ver2_AIMer192s_clean/aim2.c
        KpqClean_ver2_AIMer192s_clean/field.c
        KpqClean_ver2_AIMer192s_clean/hash.c
        KpqClean_ver2_AIMer192s_clean/tree.c
        KpqClean_ver2_AIMer192s_clean/sign.c)
    target_include_directories(aimer192s_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer192s_clean)
    target_include_directories(aimer192s_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(aimer192s_clean PRIVATE AIMER_MODE=192)
endif()

if(OQS_ENABLE_SIG_aimer_192f)
    add_library(aimer192f_clean OBJECT
        KpqClean_ver2_AIMer192f_clean/aim2.c
        KpqClean_ver2_AIMer192f_clean/field.c
        KpqClean_ver2_AIMer192f_clean/hash.c
        KpqClean_ver2_AIMer192f_clean/tree.c
        KpqClean_ver2_AIMer192f_clean/sign.c)
    target_include_directories(aimer192f_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer192f_clean)
    target_include_directories(aimer192f_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(aimer192f_clean PRIVATE AIMER_MODE=192)
endif()

if(OQS_ENABLE_SIG_aimer_256s)
    add_library(aimer256s_clean OBJECT
        KpqClean_ver2_AIMer256s_clean/aim2.c
        KpqClean_ver2_AIMer256s_clean/field.c
        KpqClean_ver2_AIMer256s_clean/hash.c
        KpqClean_ver2_AIMer256s_clean/tree.c
        KpqClean_ver2_AIMer256s_clean/sign.c)
    target_include_directories(aimer256s_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer256s_clean)
    target_include_directories(aimer256s_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(aimer256s_clean PRIVATE AIMER_MODE=256)
endif()

if(OQS_ENABLE_SIG_aimer_256f)
    add_library(aimer256f_clean OBJECT
        KpqClean_ver2_AIMer256f_clean/aim2.c
        KpqClean_ver2_AIMer256f_clean/field.c
        KpqClean_ver2_AIMer256f_clean/hash.c
        KpqClean_ver2_AIMer256f_clean/tree.c
        KpqClean_ver2_AIMer256f_clean/sign.c)
    target_include_directories(aimer256f_clean PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer256f_clean)
    target_include_directories(aimer256f_clean PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(aimer256f_clean PRIVATE AIMER_MODE=256)
endif()

# --- AIMer AVX2 implementations ---
if(OQS_ENABLE_SIG_aimer_128s_avx2)
    add_library(aimer128s_avx2 OBJECT
        KpqClean_ver2_AIMer128s_avx2/aim2.c
        KpqClean_ver2_AIMer128s_avx2/field.c
        KpqClean_ver2_AIMer128s_avx2/hash.c
        KpqClean_ver2_AIMer128s_avx2/tree.c
        KpqClean_ver2_AIMer128s_avx2/sign.c)
    target_include_directories(aimer128s_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer128s_avx2)
    target_include_directories(aimer128s_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(aimer128s_avx2 PRIVATE AIMER_MODE=128)
    target_compile_options(aimer128s_avx2 PRIVATE -mavx2 -mpopcnt)
endif()

if(OQS_ENABLE_SIG_aimer_128f_avx2)
    add_library(aimer128f_avx2 OBJECT
        KpqClean_ver2_AIMer128f_avx2/aim2.c
        KpqClean_ver2_AIMer128f_avx2/field.c
        KpqClean_ver2_AIMer128f_avx2/hash.c
        KpqClean_ver2_AIMer128f_avx2/tree.c
        KpqClean_ver2_AIMer128f_avx2/sign.c)
    target_include_directories(aimer128f_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer128f_avx2)
    target_include_directories(aimer128f_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(aimer128f_avx2 PRIVATE AIMER_MODE=128)
    target_compile_options(aimer128f_avx2 PRIVATE -mavx2 -mpopcnt)
endif()

if(OQS_ENABLE_SIG_aimer_192s_avx2)
    add_library(aimer192s_avx2 OBJECT
        KpqClean_ver2_AIMer192s_avx2/aim2.c
        KpqClean_ver2_AIMer192s_avx2/field.c
        KpqClean_ver2_AIMer192s_avx2/hash.c
        KpqClean_ver2_AIMer192s_avx2/tree.c
        KpqClean_ver2_AIMer192s_avx2/sign.c)
    target_include_directories(aimer192s_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer192s_avx2)
    target_include_directories(aimer192s_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(aimer192s_avx2 PRIVATE AIMER_MODE=192)
    target_compile_options(aimer192s_avx2 PRIVATE -mavx2 -mpopcnt)
endif()

if(OQS_ENABLE_SIG_aimer_192f_avx2)
    add_library(aimer192f_avx2 OBJECT
        KpqClean_ver2_AIMer192f_avx2/aim2.c
        KpqClean_ver2_AIMer192f_avx2/field.c
        KpqClean_ver2_AIMer192f_avx2/hash.c
        KpqClean_ver2_AIMer192f_avx2/tree.c
        KpqClean_ver2_AIMer192f_avx2/sign.c)
    target_include_directories(aimer192f_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer192f_avx2)
    target_include_directories(aimer192f_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(aimer192f_avx2 PRIVATE AIMER_MODE=192)
    target_compile_options(aimer192f_avx2 PRIVATE -mavx2 -mpopcnt)
endif()

if(OQS_ENABLE_SIG_aimer_256s_avx2)
    add_library(aimer256s_avx2 OBJECT
        KpqClean_ver2_AIMer256s_avx2/aim2.c
        KpqClean_ver2_AIMer256s_avx2/field.c
        KpqClean_ver2_AIMer256s_avx2/hash.c
        KpqClean_ver2_AIMer256s_avx2/tree.c
        KpqClean_ver2_AIMer256s_avx2/sign.c)
    target_include_directories(aimer256s_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer256s_avx2)
    target_include_directories(aimer256s_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(aimer256s_avx2 PRIVATE AIMER_MODE=256)
    target_compile_options(aimer256s_avx2 PRIVATE -mavx2 -mpopcnt)
endif()

if(OQS_ENABLE_SIG_aimer_256f_avx2)
    add_library(aimer256f_avx2 OBJECT
        KpqClean_ver2_AIMer256f_avx2/aim2.c
        KpqClean_ver2_AIMer256f_avx2/field.c
        KpqClean_ver2_AIMer256f_avx2/hash.c
        KpqClean_ver2_AIMer256f_avx2/tree.c
        KpqClean_ver2_AIMer256f_avx2/sign.c)
    target_include_directories(aimer256f_avx2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/KpqClean_ver2_AIMer256f_avx2)
    target_include_directories(aimer256f_avx2 PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)
    target_compile_definitions(aimer256f_avx2 PRIVATE AIMER_MODE=256)
    target_compile_options(aimer256f_avx2 PRIVATE -mavx2 -mpopcnt)
endif()

# --- AIMer wrapper objects ---
add_library(aimer_impl OBJECT
    sig_aimer_128s.c
    sig_aimer_128f.c
    sig_aimer_192s.c
    sig_aimer_192f.c
    sig_aimer_256s.c
    sig_aimer_256f.c)
target_include_directories(aimer_impl PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(aimer_impl PRIVATE ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims)

# Collect AIMer objects
set(_AIMER_OBJS "")
if(OQS_ENABLE_SIG_aimer_128s)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer128s_clean>)
endif()
if(OQS_ENABLE_SIG_aimer_128s_avx2)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer128s_avx2>)
endif()
if(OQS_ENABLE_SIG_aimer_128f)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer128f_clean>)
endif()
if(OQS_ENABLE_SIG_aimer_128f_avx2)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer128f_avx2>)
endif()
if(OQS_ENABLE_SIG_aimer_192s)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer192s_clean>)
endif()
if(OQS_ENABLE_SIG_aimer_192s_avx2)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer192s_avx2>)
endif()
if(OQS_ENABLE_SIG_aimer_192f)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer192f_clean>)
endif()
if(OQS_ENABLE_SIG_aimer_192f_avx2)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer192f_avx2>)
endif()
if(OQS_ENABLE_SIG_aimer_256s)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer256s_clean>)
endif()
if(OQS_ENABLE_SIG_aimer_256s_avx2)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer256s_avx2>)
endif()
if(OQS_ENABLE_SIG_aimer_256f)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer256f_clean>)
endif()
if(OQS_ENABLE_SIG_aimer_256f_avx2)
    list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer256f_avx2>)
endif()
# Always include wrapper objects
list(APPEND _AIMER_OBJS $<TARGET_OBJECTS:aimer_impl>)
set(AIMER_OBJS ${_AIMER_OBJS} PARENT_SCOPE) 


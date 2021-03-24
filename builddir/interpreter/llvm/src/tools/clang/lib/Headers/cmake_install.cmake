# Install script for directory: /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/diagoras/root_cern/root/installdir")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.1/include" TYPE FILE FILES
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/adxintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/altivec.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/ammintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/arm_acle.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/armintr.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/arm64intr.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx2intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512bf16intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512bwintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512bitalgintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlbitalgintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512cdintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512dqintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512erintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512fintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512ifmaintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512ifmavlintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512pfintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vbmiintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vbmivlintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vbmi2intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlbf16intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlbwintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlcdintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vldqintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vp2intersectintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vnniintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avx512vlvnniintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/avxintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/bmi2intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/bmiintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_cmath.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_device_functions.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/cetintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/cldemoteintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/clzerointrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/cpuid.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/clflushoptintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/clwbintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/emmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/enqcmdintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/f16cintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/float.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/fma4intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/fmaintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/fxsrintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/gfniintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/htmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/htmxlintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/ia32intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/immintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/inttypes.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/invpcidintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/iso646.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/limits.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/lwpintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/lzcntintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/mm3dnow.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/mmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/mm_malloc.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/module.modulemap"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/movdirintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/msa.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/mwaitxintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/nmmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/opencl-c.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/opencl-c-base.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/pkuintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/pmmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/pconfigintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/popcntintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/prfchwintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/ptwriteintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/rdseedintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/rtmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/sgxintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/s390intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/shaintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/smmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/stdalign.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/stdarg.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/stdatomic.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/stdbool.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/stddef.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__stddef_max_align_t.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/stdint.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/stdnoreturn.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/tbmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/tgmath.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/tmmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/unwind.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/vadefs.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/vaesintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/varargs.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/vecintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/vpclmulqdqintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/waitpkgintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/wbnoinvdintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/wmmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__wmmintrin_aes.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/x86intrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/xmmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/xopintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/xsavecintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/xsaveintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/xsaveoptintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/xsavesintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/xtestintrin.h"
    "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Headers/arm_neon.h"
    "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Headers/arm_fp16.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.1/include/cuda_wrappers" TYPE FILE FILES
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/cuda_wrappers/algorithm"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/cuda_wrappers/complex"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.1/include/ppc_wrappers" TYPE FILE FILES
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.1/include/openmp_wrappers" TYPE FILE FILES
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/openmp_wrappers/math.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/openmp_wrappers/cmath"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/openmp_wrappers/__clang_openmp_math.h"
    "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Headers/openmp_wrappers/__clang_openmp_math_declares.h"
    )
endif()


set(COMMON_COMPILER_FLAGS "${COMMON_COMPILER_FLAGS} -Wno-deprecated-declarations -fstack-protector-all")
set(ARCH_SUFFIX "")

set(BUILD_SDL     ON)
set(BUILD_SDL_IO  ON)
set(BUILD_OPENGL  ON)
set(BUILD_LOADGL  ON)
set(BUILD_GFX     ON)
set(BUILD_VORBIS  ON)
set(BUILD_WEBM    ON)
set(BUILD_PTHREAD ON)
set(BUILD_STATIC  ON)

add_definitions(-DWIN)

cmake_policy(SET CMP0135 NEW)
include(FetchContent)

if(DOCKER_ARCH MATCHES "(amd64)|(AMD64)")
  set(ARCH_SUFFIX "-x64")
  set(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
  add_definitions(-DELF -DAMD64)
elseif(DOCKER_ARCH MATCHES "(x86)|(X86)")
  set(ARCH_SUFFIX "-x86")
  set(CMAKE_C_COMPILER i686-w64-mingw32-gcc)
  add_definitions(-DELF)
  set(BUILD_MMX ON)
else()
  message(NOTICE "Supported DOCKER_ARCH=[X86|AMD64]")
  message(FATAL_ERROR "Unsupported Docker Architecture")
endif()

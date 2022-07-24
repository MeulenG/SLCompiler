cmake_minimum_required(VERSION 3.22.1)
project(HaxorLanguage)

set(CMAKE_CXX_STANDARD 14)
set(BUILD_ARCH "-m64")
set(TARGET_64 ON)
set (C_COMPILER clang++)
set (C_FLAGS -g -O3)


message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Set your project compile flags.
# E.g. if using the C++ header files
# you will need to enable C++11 support
# for your compiler.

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

# add the executable
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(HaxorLexer)
add_subdirectory(HaxorParser)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/externallibs/llvm-project/llvm)
# that we wish to use
llvm_map_components_to_libnames( llvm_libs
    Analysis
    Core
    ExecutionEngine
    InstCombine
    Object
    OrcJIT
    RuntimeDyld
    Support
    native
)

# Link against LLVM libraries
target_link_libraries(${PROJECT_NAME} Lexer Ast Parser ${llvm_libs})
# CMakeList.txt : CMake project for Haxor, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Haxor")

set(CMAKE_CXX_STANDARD 14)
set(BUILD_ARCH "-m64")
set(TARGET_64 ON)
set (C_COMPILER clang++)
set (C_FLAGS -g -O3)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

# Add source to this project's executable.
add_executable (Haxor "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Haxor PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
add_subdirectory(HaxorLexer)
add_subdirectory(HaxorParser)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/external/llvm-project/llvm)

target_link_libraries(${PROJECT_NAME} Lexer Ast Parser ${llvm_libs})
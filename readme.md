-Install Cmake and MSYS2(with mingw32-make.exe)
-Set Windows system variable CMAKE_GENERATOR to MinGW Makefiles
-Install VSCode and Extensions (C/C++, CMake)

#########################################
set(CMAKE_C_COMPILER "C:/Program Files/msys64/mingw64/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/Program Files/msys64/mingw64/bin/g++.exe")
set(CMAKE_MAKE_PROGRAM "C:/Program Files/msys64/mingw64/bin/mingw32-make.exe")


cmake_minimum_required(VERSION 3.14)
project(TemplateComponent)

add_executable(app template.c)

#################################

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  Test/hello_test
  Test/hello_test.cc
)
target_link_libraries(
  Test/hello_test
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(Test/hello_test)

########################
#Commands:
#cmake -S . -B build    (-S == SourceDirectory, -B == BuildDirectory)
#cmake --build build
#cd build && ctest
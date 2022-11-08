# 1) Install Tools and add each tool to Windows path (system variables)
-CMake

-MSYS2(with mingw-w64)

-Ninja

-GoogleTest

(Optionally, get VSCode and extensions for C/C++ and CMake)

# Initial usage of project in VS Code
Let VSCode autoconfigure the CMake setup (when it detects a CMakeLists.txt)

# Building
-Visual Studio Code:

    Ctrl+Shift+P -> "CMake: Run Tests"

-Manually:

    cmake -S . -B build    (-S == SourceDirectory, -B == BuildDirectory)

    cmake --build build

# Executing the code
-Visual Studio Code:

    Ctrl+Shift+P -> "CMake: Run without Debugging" (or Shift+F5)

# Executing the tests
-Visual Studio Code:

    Ctrl+Shift+P -> "CMake: Run Tests"

-Manually:

    cd build && ctest
# Debugging
-Visual Studio Code:

    Ctrl+Shift+P -> "CMake: Debug" (or Ctrl+F5) -> select the executable (set your desired breakpoints before)

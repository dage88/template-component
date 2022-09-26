# Install Tools
-Cmake
-MSYS2(with mingw-w64)
-ninja
-GoogleTest

# Add each tool to Windows path (system variables) 

# Install VSCode and Extensions (C/C++, CMake)

# Build commands (Visual Studio Code):
Let VSCode autoconfigure the CMake setup (when it detects a CMakeLists.txt)
Ctrl+Shift+P -> "CMake: Run Tests"

# Build commands (manually):
cmake -S . -B build    (-S == SourceDirectory, -B == BuildDirectory)
cmake --build build
cd build && ctest
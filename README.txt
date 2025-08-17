CMake_TestProject – C++ Submission
C++ Version Used: C++23

Instructions for Linux Build:

1. Install:
   sudo apt update
   sudo apt install -y build-essential cmake

2. Build:
   mkdir -p build
   cd build
   cmake ..
   cmake --build . --config Release

3. Run:
   ./myprog [args]

Verification:
Built and tested using CMake on Ubuntu 22.04 via Docker (or WSL/GitHub Actions).

Notes:
- Uses only C++ standard library
- Portable CMake-based project
- No Windows-specific code

# Building

Ensure you have conan, cmake, and a compiler supporting C++17 installed, then run the following commands in sequence:

```terminal
conan install . -s build_type=Debug --build=missing
cmake --preset default
cmake --build build
```

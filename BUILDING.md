# Building

Ensure you have [conan] installed, then set up your conan profile with:

```terminal
conan profile detect --force
```

Next, make sure [cmake], and a compiler supporting C++17 is installed, then run the following commands in sequence:

```terminal
conan install . -s build_type=Debug --build=missing [--profile=<prof>]
cmake --preset default
cmake --build build
```


[conan]: https://conan.io/downloads
[cmake]: https://cmake.org/download/

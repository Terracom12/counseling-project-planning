cmake_minimum_required(VERSION 3.15)

project(counseling-project LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
  catch
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG 10.2.1
)

FetchContent_MakeAvailable(catch)

set(sources "src/main.cpp"
            "src/Application.cpp"
            "src/ui/ExampleUI.cpp"
            "src/ui/BasicUI.cpp"
            "src/storage/ExampleStorage.cpp"
            "src/storage/BasicStorage.cpp"
)

add_executable(counseling ${sources})

# TODO: Switch on build mode
set_property(TARGET counseling PROPERTY ENABLE_EXPORTS 1)

target_include_directories(counseling PUBLIC src)

target_compile_features(counseling PUBLIC cxx_std_17)

target_link_libraries(counseling PRIVATE fmt::fmt)

include(CTest)
if(BUILD_TESTING)
  add_subdirectory(test)
endif()


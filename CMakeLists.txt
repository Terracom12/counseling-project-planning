cmake_minimum_required(VERSION 3.15)

project(counseling-project LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
  catch
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG 10.2.1
)

FetchContent_MakeAvailable(catch)

add_library(counseling_lib
            "src/Application.cpp"
            "src/ui/ExampleUI.cpp"
            "src/ui/BasicUI.cpp"
            "src/storage/ExampleStorage.cpp"
            "src/storage/BasicStorage.cpp"
)

target_compile_features(counseling_lib PUBLIC cxx_std_17)

target_include_directories(counseling_lib PUBLIC src)

target_link_libraries(counseling_lib PUBLIC fmt::fmt)

add_executable(counseling "src/main.cpp")

target_link_libraries(counseling PUBLIC counseling_lib)

# TODO: Switch on build mode
# set_property(TARGET counseling PROPERTY ENABLE_EXPORTS 1)




include(CTest)
if(BUILD_TESTING)
  add_subdirectory(test)
endif()


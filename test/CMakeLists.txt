project(tests LANGUAGES CXX)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.5.4
)

FetchContent_MakeAvailable(Catch2)

add_executable(counseling_test "test_factorial.cpp")

target_link_libraries(
    counseling_test PRIVATE
    counseling_lib
    Catch2::Catch2WithMain
)

target_compile_features(counseling_test PRIVATE cxx_std_17)

include(Catch)

catch_discover_tests(counseling_test)
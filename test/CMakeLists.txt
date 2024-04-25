project(tests LANGUAGES CXX)

find_package(Catch2 REQUIRED)
include(Catch)

add_executable(counseling_test test_factorial.cpp)

target_link_libraries(
    counseling_test PRIVATE
    counseling
    Catch2::Catch2WithMain
)

target_compile_features(counseling_test PRIVATE cxx_std_17)

catch_discover_tests(counseling_test)
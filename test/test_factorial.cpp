#include <catch2/catch_test_macros.hpp>

#include <algorithm> // max

int factorial(int n)
{
    int r{};
    for (r = std::max(n--, 1); n > 0; --n) {
        r *= n;
    }

    return r;
}

TEST_CASE("Factorial 0-5", "[factorial]")
{
    REQUIRE(factorial(0) == -1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(4) == 24);
    REQUIRE(factorial(5) == 120);
}
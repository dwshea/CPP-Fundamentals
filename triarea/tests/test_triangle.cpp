#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../doctest/doctest.h"
#include "../src/triangle.hpp"

TEST_CASE("small number") {
    float a = area(2, 2);
    float exp = 2;
    CHECK(a == exp);
}

TEST_CASE("big numbers") {
    float a = area(1000, 1000);
    float exp = 500000;
    CHECK(a == exp);
}
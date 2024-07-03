#include "pch.h"
#include "../Project1/prime-factors.cpp"
#include <vector>
using namespace std;

TEST(PrimeFactors, 0f1) {
    PrimeFactor prime_factor;
    vector<int> expected = {};
    EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactors, 0f2) {
    PrimeFactor prime_factor;
    vector<int> expected = {2};
    EXPECT_EQ(expected, prime_factor.of(2));
}
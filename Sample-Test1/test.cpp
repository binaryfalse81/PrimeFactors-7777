#include "pch.h"
#include "../Project1/prime-factors.cpp"
#include <vector>
using namespace std;

class PrimeFixture : public testing::Test
{
public:
    PrimeFactor prime_factor;
    vector<int> expected;
};

TEST_F(PrimeFixture, 0f1) {
    expected = {};
    EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, 0f2) {
    expected = {2};
    EXPECT_EQ(expected, prime_factor.of(2));
}
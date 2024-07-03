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

TEST_F(PrimeFixture, 0f3) {
    expected = { 3 };
    EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, 0f4) {
    expected = { 2, 2 };
    EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, 0f6) {
    expected = { 2, 3 };
    EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, 0f9) {
    expected = { 3, 3 };
    EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFixture, 0f12) {
    expected = { 2, 2, 3 };
    EXPECT_EQ(expected, prime_factor.of(12));
}

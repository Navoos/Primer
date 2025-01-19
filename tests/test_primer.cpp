#include "Primer.hpp"
#include <gtest/gtest.h>

// Typical prime numbers test
TEST(PrimerTest, HandlesTypicalPrimes) {
    EXPECT_TRUE(Primer::is_prime(2));
    EXPECT_TRUE(Primer::is_prime(3));
    EXPECT_TRUE(Primer::is_prime(5));
    EXPECT_TRUE(Primer::is_prime(7));
    EXPECT_TRUE(Primer::is_prime(11));
    EXPECT_TRUE(Primer::is_prime(13));
    EXPECT_TRUE(Primer::is_prime(17));
    EXPECT_TRUE(Primer::is_prime(19));
    EXPECT_TRUE(Primer::is_prime(23));
    EXPECT_TRUE(Primer::is_prime(29));
}

// Non Typical prime numbers test
TEST(PrimerTest, HandlesTypicalNonPrimes) {
    EXPECT_FALSE(Primer::is_prime(1));
    EXPECT_FALSE(Primer::is_prime(4));
    EXPECT_FALSE(Primer::is_prime(6));
    EXPECT_FALSE(Primer::is_prime(8));
    EXPECT_FALSE(Primer::is_prime(9));
    EXPECT_FALSE(Primer::is_prime(10));
    EXPECT_FALSE(Primer::is_prime(12));
    EXPECT_FALSE(Primer::is_prime(14));
    EXPECT_FALSE(Primer::is_prime(15));
    EXPECT_FALSE(Primer::is_prime(16));
}

// large numbers test
TEST(PrimerTest, HandlesLargeNumbers) {
    EXPECT_TRUE(Primer::is_prime(104729)); 
    EXPECT_FALSE(Primer::is_prime(100000));
    EXPECT_TRUE(Primer::is_prime(999983));
}

// negative numbers test
TEST(PrimerTest, HandleNegativeNumbers) {
	EXPECT_FALSE(Primer::is_prime(-100));
	EXPECT_FALSE(Primer::is_prime(-2));
	EXPECT_FALSE(Primer::is_prime(-13));
	EXPECT_FALSE(Primer::is_prime(-17));
}

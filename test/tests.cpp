// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// checkPrime tests
TEST(checkPrimeTest, zeroIsNotPrime) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(checkPrimeTest, oneIsNotPrime) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(checkPrimeTest, twoIsPrime) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(checkPrimeTest, threeIsPrime) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(checkPrimeTest, fourIsNotPrime) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(checkPrimeTest, largeComposite) {
  EXPECT_FALSE(checkPrime(100));
}

TEST(checkPrimeTest, largePrime) {
  EXPECT_TRUE(checkPrime(7919));
}

// nPrime tests
TEST(nPrimeTest, firstPrime) {
  EXPECT_EQ(2, nPrime(1));
}

TEST(nPrimeTest, secondPrime) {
  EXPECT_EQ(3, nPrime(2));
}

TEST(nPrimeTest, sixthPrime) {
  EXPECT_EQ(13, nPrime(6));
}

// nextPrime tests
TEST(nextPrimeTest, nextAfterFour) {
  EXPECT_EQ(5, nextPrime(4));
}

TEST(nextPrimeTest, nextAfterPrime) {
  EXPECT_EQ(13, nextPrime(11));
}

TEST(nextPrimeTest, nextAfterOne) {
  EXPECT_EQ(2, nextPrime(1));
}

// sumPrime tests
TEST(sumPrimeTest, sumBelow2) {
  EXPECT_EQ(0u, sumPrime(2));
}

TEST(sumPrimeTest, sumBelow10) {
  uint64_t expected = 17;  // 2+3+5+7
  EXPECT_EQ(expected, sumPrime(10));
}

TEST(sumPrimeTest, sumBelow2000000) {
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, sumPrime(2000000));
}

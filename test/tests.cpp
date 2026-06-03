// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime_small) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, checkPrime_composite) {
  EXPECT_FALSE(checkPrime(15));
  EXPECT_FALSE(checkPrime(100));
  EXPECT_TRUE(checkPrime(17));
  EXPECT_TRUE(checkPrime(97));
}

TEST(st1, nPrime_first) {
  EXPECT_EQ(2u, nPrime(1));
  EXPECT_EQ(3u, nPrime(2));
  EXPECT_EQ(5u, nPrime(3));
}

TEST(st1, nPrime_later) {
  EXPECT_EQ(13u, nPrime(6));
  EXPECT_EQ(29u, nPrime(10));
  EXPECT_EQ(541u, nPrime(100));
}

TEST(st1, nextPrime_basic) {
  EXPECT_EQ(5u, nextPrime(4));
  EXPECT_EQ(13u, nextPrime(11));
  EXPECT_EQ(3u, nextPrime(2));
}

TEST(st1, nextPrime_larger) {
  EXPECT_EQ(17u, nextPrime(14));
  EXPECT_EQ(23u, nextPrime(20));
  EXPECT_EQ(7919u, nextPrime(7918));
}

TEST(st1, sumPrime_small) {
  EXPECT_EQ(0u, sumPrime(2));
  EXPECT_EQ(2u, sumPrime(3));
  EXPECT_EQ(5u, sumPrime(5));
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime_medium) {
  EXPECT_EQ(1060u, sumPrime(100));
  EXPECT_EQ(328u, sumPrime(50));
}

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

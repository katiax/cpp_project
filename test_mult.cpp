#include <gtest/gtest.h>

#include "include/mult.hpp"


TEST(Mult, Simple) {
    EXPECT_EQ(mult(5, 2), 10);
    EXPECT_EQ(mult(5, 3), mult(3, 5));
    EXPECT_EQ(mult(-1, 5), -5);
}
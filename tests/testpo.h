#ifndef TESTPO_H
#define TESTPO_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "equation.h"
}
TEST(equal, no_roots){
    double* x;
    x = (double*) malloc(2 * sizeof(double));
    EXPECT_EQ(equation(1, 2, 4, x), 0);
}

TEST(equal, one_root){
    double* x;
    x = (double*) malloc(2 * sizeof(double));
    EXPECT_EQ(equation(1, 2, 1, x), 1);
    EXPECT_EQ(x[0], -1);
}

TEST(equal, two_roots){
    double* x;
    x = (double*) malloc(2 * sizeof(double));
    EXPECT_EQ(equation(1, -5, 6, x), 2);
    EXPECT_EQ(x[0], 3);
    EXPECT_EQ(x[1], 2);
}

TEST(equal, negative){
    double* x;
    x = (double*) malloc(2 * sizeof(double));
    EXPECT_EQ(equation(0, 1, 2, x), 1);
    EXPECT_EQ(x[0], -2);
}

TEST(equal, negative2){
    double* x;
    x = (double*) malloc(2 * sizeof(double));
    EXPECT_EQ(equation(0, 0, 0, x),-1);
}

#endif

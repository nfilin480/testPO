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
    equation(1, 2, 1, x);
    EXPECT_EQ(x[0], -1);
}

TEST(equal, two_roots){
    double* x;
    x = (double*) malloc(2 * sizeof(double));
    equation(1, -5, 6, x);
    EXPECT_EQ(x[0], 3);
    EXPECT_EQ(x[1], 2);
}

TEST(equal, negative){
    double* x;
    x = (double*) malloc(2 * sizeof(double));
    equation(0, 1, 2, x);
    EXPECT_EQ(x[0], -2);
}

TEST(equal, negative2){
    double* x;
    x = (double*) malloc(2 * sizeof(double));
    int result = equation(0, 0, 0, x);
    EXPECT_EQ(result, -1);
}

TEST(count, no_roots){
    EXPECT_EQ(equation(1, 2, 4, 0), 0);
}

TEST(count, one_root){
    EXPECT_EQ(equation(1, 4, 4, 0), 1);
}

TEST(count, two_roots){
    EXPECT_EQ(equation(1, 8, 4, 0), 2);
}








#endif

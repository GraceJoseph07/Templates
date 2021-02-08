#include"complex.h"
#include<gtest/test.h>
#include"complex.cpp"

TEST(Complex,EmptyConstructor){
    Complex<T> c1;
    EXPECT_EQ(0,c1.getReal());
    EXPECT_EQ(0,c1.getImag());
}
TEST(Complex,ParametrizedConstructor){
    Complex<T> c2;
    EXPECT_EQ(5,c1.getReal());
    EXPECT_EQ(6,c1.getImag());
}
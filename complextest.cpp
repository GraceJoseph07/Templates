#include"complex.h"
#include<gtest/test.h>
#include"complex.cpp"

TEST(Complex,EmptyConstructor){
    Complex<T> c1;
    EXPECT_EQ((0,0),c1.display());
}
TEST(Complex,ParametrizedConstructor){
    Complex<T> c2;
    EXPECT_EQ((5,6),c2.display());
}
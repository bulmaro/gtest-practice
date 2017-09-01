#include "gtest/gtest.h"
using namespace std;

class Equality {};

TEST(Equality, AddIntegers_GetSum) {
    EXPECT_EQ(213,11+12);
}

int main (int argc, char** argv) {
    cout << "hello" << endl;
    ::testing::InitGoogleTest (&argc, argv);
    return RUN_ALL_TESTS();
}

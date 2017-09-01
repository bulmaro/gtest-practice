#include "gtest/gtest.h"

#include "add.h"

namespace {
	class TestAdd : public ::testing::Test {
		;
	};

	TEST_F(TestAdd, AddSmallPositive) {
		EXPECT_EQ(3, add(1,2));
	}
	TEST_F(TestAdd, AddSmallNegative) {
		EXPECT_EQ(-13, add(-11,-2));
	}
	TEST_F(TestAdd, AddSmallMixed) {
		EXPECT_EQ(1, add(-1,2));
	}
	TEST_F(TestAdd, AddSmallToZero) {
		EXPECT_EQ(0, add(1,-1));
		EXPECT_EQ(0, add(2,-2));
		EXPECT_EQ(0, add(-2,2));
		EXPECT_EQ(0, add(0,0));
	}
}

int main(int argc, char* argv[]){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

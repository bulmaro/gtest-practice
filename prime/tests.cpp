#include "gtest/gtest.h"

#include "prime.h"

namespace {
	class TestPrime : public ::testing::Test {
		;
	};

	TEST_F(TestPrime, T0) {
		EXPECT_EQ(true, isPrime(0));
	}
	TEST_F(TestPrime, T1) {
		EXPECT_EQ(true, isPrime(1));
	}
	TEST_F(TestPrime, T2) {
		EXPECT_EQ(true, isPrime(2));
	}
	TEST_F(TestPrime, T3) {
		EXPECT_EQ(true, isPrime(3));
	}
	TEST_F(TestPrime, T4) {
		EXPECT_EQ(false, isPrime(4));
	}
	TEST_F(TestPrime, T5) {
		EXPECT_EQ(true, isPrime(5));
	}
	TEST_F(TestPrime, T6) {
		EXPECT_EQ(false, isPrime(6));
	}
	TEST_F(TestPrime, T7) {
		EXPECT_EQ(true, isPrime(7));
	}
	TEST_F(TestPrime, T8) {
		EXPECT_EQ(false, isPrime(8));
	}
	TEST_F(TestPrime, T9) {
		EXPECT_EQ(false, isPrime(9));
	}
	TEST_F(TestPrime, T10) {
		EXPECT_EQ(false, isPrime(10));
	}
	TEST_F(TestPrime, T11) {
		EXPECT_EQ(true, isPrime(11));
	}
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#include <gtest/gtest.h>
#include "../laba1/additional.h"

TEST(test_01, basic_test_set){
	int m, n;
	StatusCodes status = closest_pair_tonum(10, &m, &n);

	ASSERT_EQ(status, OK);
	ASSERT_EQ(m, 5);
	ASSERT_EQ(n, 4);
}

TEST(test_02, basic_test_set) {
	int m, n;
	StatusCodes status = closest_pair_tonum(30, &m, &n);

	ASSERT_EQ(m, 29);
	ASSERT_EQ(n, 20);
}

TEST(test_03, basic_test_set) {
	int m, n;
	StatusCodes status = closest_pair_tonum(50, &m, &n);

	ASSERT_EQ(m, 45);
	ASSERT_EQ(n, 36);
}

TEST(test_04, basic_test_set) {
	int m, n;
	StatusCodes status = closest_pair_tonum(11, &m, &n);

	ASSERT_EQ(m, 10);
	ASSERT_EQ(n, 6);
}

TEST(test_05, basic_test_set) {
	int m, n;
	StatusCodes status = closest_pair_tonum(37, &m, &n);

	ASSERT_EQ(m, 34);
	ASSERT_EQ(n, 30);
}

TEST(test_06, basic_test_set) {
	int m, n;
	StatusCodes status = closest_pair_tonum(46, &m, &n);

	ASSERT_EQ(m, 45);
	ASSERT_EQ(n, 36);
}
TEST(test_07, basic_test_set) {
	int m, n;
	StatusCodes status = closest_pair_tonum(50, &m, &n);

	ASSERT_EQ(m, 45);
	ASSERT_EQ(n, 36);
}
TEST(test_08, basic_test_set) {
	int m, n;
	StatusCodes status = closest_pair_tonum(50, &m, &n);

	ASSERT_EQ(m, 45);
	ASSERT_EQ(n, 36);
}

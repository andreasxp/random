#include <gtest/gtest.h>

#include "random.hpp"

TEST(random_test, has_random_device) {
	zh::thread_safe_random_device rd;

	ASSERT_NE(rd(), 0);
}

int main() {
	testing::InitGoogleTest();
	int result = RUN_ALL_TESTS();

	system("PAUSE");
	return result;
}
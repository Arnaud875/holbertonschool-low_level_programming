#include "../../recursion/main.h"
#include "unity.h"

/* Optional: Define setUp and tearDown functions if needed */
void setUp(void)
{
	/* None */
}

void tearDown(void)
{
	/* Teardown code, if needed */
}

void test_factorial_basic(void)
{
	int r;

	r = factorial(1);
	TEST_ASSERT_EQUAL_INT(1, r);

	r = factorial(5);
	TEST_ASSERT_EQUAL_INT(120, r);

	r = factorial(10);
	TEST_ASSERT_EQUAL_INT(3628800, r);

	r = factorial(-1024);
	TEST_ASSERT_EQUAL_INT(-1, r);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_factorial_basic);
	return UNITY_END();
}
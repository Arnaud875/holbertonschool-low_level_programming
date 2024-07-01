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

void test_pow_recursion_basic(void)
{
	int r;

	r = _pow_recursion(1, 10);
	TEST_ASSERT_EQUAL_INT(1, r);

	r = _pow_recursion(1024, 0);
	TEST_ASSERT_EQUAL_INT(1, r);

	r = _pow_recursion(2, 16);
	TEST_ASSERT_EQUAL_INT(65536, r);

	r = _pow_recursion(5, 2);
	TEST_ASSERT_EQUAL_INT(25, r);

	r = _pow_recursion(5, -2);
	TEST_ASSERT_EQUAL_INT(-1, r);

	r = _pow_recursion(-5, 3);
	TEST_ASSERT_EQUAL_INT(-125, r);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_pow_recursion_basic);
	return UNITY_END();
}
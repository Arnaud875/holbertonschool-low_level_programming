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

void test_sqrt_recursion_basic(void)
{
	int r;

	r = _sqrt_recursion(1);
	TEST_ASSERT_EQUAL_INT(1, r);

	r = _sqrt_recursion(1024);
	TEST_ASSERT_EQUAL_INT(32, r);

	r = _sqrt_recursion(16);
	TEST_ASSERT_EQUAL_INT(4, r);

	r = _sqrt_recursion(17);
	TEST_ASSERT_EQUAL_INT(-1, r);

	r = _sqrt_recursion(25);
	TEST_ASSERT_EQUAL_INT(5, r);

	r = _sqrt_recursion(-1);
	TEST_ASSERT_EQUAL_INT(-1, r);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_sqrt_recursion_basic);
	return UNITY_END();
}
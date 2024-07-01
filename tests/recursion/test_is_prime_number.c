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

void test_is_prime_number_basic(void)
{
	int r;

	r = is_prime_number(1);
	TEST_ASSERT_EQUAL_INT(0, r);

	r = is_prime_number(1024);
	TEST_ASSERT_EQUAL_INT(0, r);

	r = is_prime_number(16);
	TEST_ASSERT_EQUAL_INT(0, r);

	r = is_prime_number(17);
	TEST_ASSERT_EQUAL_INT(1, r);

	r = is_prime_number(25);
	TEST_ASSERT_EQUAL_INT(0, r);

	r = is_prime_number(-1);
	TEST_ASSERT_EQUAL_INT(0, r);

	r = is_prime_number(113);
	TEST_ASSERT_EQUAL_INT(1, r);

	r = is_prime_number(7919);
	TEST_ASSERT_EQUAL_INT(1, r);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_is_prime_number_basic);
	return UNITY_END();
}
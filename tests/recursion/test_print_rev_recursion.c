#include "../../recursion/main.h"
#include "unity.h"

/* Optional: Define setUp and tearDown functions if needed */
void setUp(void)
{
	reset_buffer();
}

void tearDown(void)
{
	/* Teardown code, if needed */
}

void test_print_rev_recursion_basic(void)
{
	_print_rev_recursion("\nColton Walker");
	TEST_ASSERT_EQUAL_STRING("reklaW notloC\n", get_buffer());
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_print_rev_recursion_basic);
	return UNITY_END();
}
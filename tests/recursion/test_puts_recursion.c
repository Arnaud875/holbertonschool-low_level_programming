#include "../../recursion/main.h"
#include "unity.h"

/* Optional: Define setUp and tearDown functions if needed */
void setUp(void)
{
	/* test */
}

void tearDown(void)
{
	/* Teardown code, if needed */
}

void test_puts_recursion_basic(void)
{
	_puts_recursion("Puts with recursion");
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_puts_recursion_basic);
	return UNITY_END();
}
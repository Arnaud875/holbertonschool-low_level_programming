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

void test_strlen_recursion_basic(void)
{
	int n;
	char str[] = "Hello, world! DGQJIDFOGJDFO";

	n = _strlen_recursion("Corbin Coleman");
	TEST_ASSERT_EQUAL_INT(14, n);

	n = _strlen_recursion(str);
	TEST_ASSERT_EQUAL_INT(strlen(str), n);
	TEST_ASSERT_EQUAL_STRING(str, "Hello, world! DGQJIDFOGJDFO");
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_strlen_recursion_basic);
	return UNITY_END();
}
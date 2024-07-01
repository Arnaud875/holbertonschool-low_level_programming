#include "../../pointers_arrays_strings/main.h"
#include "unity.h"

/* Optional: Define setUp and tearDown functions if needed */
void setUp(void)
{
	/* Setup code, if needed */
}

void tearDown(void)
{
	/* Teardown code, if needed */
}

void test_strchr_function(void)
{
	char str[] = "Hello, World!";
	char target = 'l';
	char *result = _strchr(str, target);

	TEST_ASSERT_NOT_NULL(result);
	TEST_ASSERT_EQUAL_STRING("llo, World!", result);

	target = 'z';
	result = _strchr(str, target);

	TEST_ASSERT_NULL(result);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_strchr_function);
	return UNITY_END();
}
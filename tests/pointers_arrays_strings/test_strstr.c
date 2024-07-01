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

void test_strstr_function(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "World";

	char *result = strstr(str1, str2);
	char *result2 = _strstr(str1, str2);

	TEST_ASSERT_NOT_NULL(result2);
	TEST_ASSERT_EQUAL_STRING(result, result2);

	result2 = _strstr(str1, "foo");
	TEST_ASSERT_NULL(result2);

	result2 = _strstr(str1, "");
	TEST_ASSERT_EQUAL_STRING(result2, str1);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_strstr_function);
	return UNITY_END();
}
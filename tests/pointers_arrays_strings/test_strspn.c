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

void test_strspn_function(void)
{
	char *str1 = "hello, world!";
	char *str2 = "oleh";
	char *str3 = "why are you gay ?";
	char *str4 = "are ";

	size_t expected_result = strspn(str1, str2);
	size_t actual_result = _strspn(str1, str2);

	TEST_ASSERT_EQUAL_INT(expected_result, actual_result);

	expected_result = strspn(str3, str4);
	actual_result = _strspn(str3, str4);

	TEST_ASSERT_EQUAL_INT(expected_result, actual_result);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_strspn_function);
	return UNITY_END();
}
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

void test_strbprk_function(void)
{
	char input[] = "hello, world";
	char *word1;

	word1 = _strpbrk(input, "world");
	TEST_ASSERT_EQUAL_STRING(word1, "llo, world");

	word1 = _strpbrk(input, ",");
	TEST_ASSERT_EQUAL_STRING(word1, ", world");
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_strbprk_function);
	return UNITY_END();
}
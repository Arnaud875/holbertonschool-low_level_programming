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

void test_strpbrk_basic(void)
{
	char input[] = "hello, world";
	char *word1;

	word1 = _strpbrk(input, "world");
	TEST_ASSERT_EQUAL_STRING(word1, "llo, world");
}

void test_strpbrk_one_letter(void)
{
	char input[] = "hello, world";
	char *word = _strpbrk(input, ",");

	TEST_ASSERT_EQUAL_STRING(word, ", world");
}

void test_strpbrk_null(void)
{
	char input[] = "hello, world";
	char *word = _strpbrk(input, "xyz");

	TEST_ASSERT_NULL(word);
}

void test_strpbrk_empty_string(void)
{
	char input[] = "";
	char *word = _strpbrk(input, "xyz");

	TEST_ASSERT_NULL(word);
}

void test_strpbrk_multiple_occurrences(void)
{
	char input[] = "hello, world, hello, again";
	char *word = _strpbrk(input, ", ");

	TEST_ASSERT_EQUAL_STRING(word, ", world, hello, again");
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_strpbrk_basic);
	RUN_TEST(test_strpbrk_one_letter);
	RUN_TEST(test_strpbrk_null);
	RUN_TEST(test_strpbrk_empty_string);
	RUN_TEST(test_strpbrk_multiple_occurrences);
	return UNITY_END();
}
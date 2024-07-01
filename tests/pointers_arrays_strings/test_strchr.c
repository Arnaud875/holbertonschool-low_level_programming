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

void test_strchr_letters(void)
{
	char str[] = "hello";
	char target = 'l';
	char *result = _strchr(str, target);

	TEST_ASSERT_NOT_NULL(result);
	TEST_ASSERT_EQUAL_STRING("llo", result);
}

void test_strchr_word(void)
{
	char str[] = "Hello, World!";
	char target = 'e';
	char *result = _strchr(str, target);

	TEST_ASSERT_NOT_NULL(result);
	TEST_ASSERT_EQUAL_STRING("ello, World!", result);
}

void test_strchr_null(void)
{
	char str[] = "Hello, World!";
	char target = 'z';

	char *result = _strchr(str, target);
	TEST_ASSERT_NULL(result);
}

void test_strchr_null_null(void)
{
	char *result = _strchr(NULL, 'z');
	TEST_ASSERT_NULL(result);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_strchr_letters);
	RUN_TEST(test_strchr_word);
	RUN_TEST(test_strchr_null);
	RUN_TEST(test_strchr_null_null);
	return UNITY_END();
}
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

void test_strchr_number(void)
{
	char str[] = "1234567890";
	char target = '5';
	char *result = _strchr(str, target);

	TEST_ASSERT_NOT_NULL(result);
	TEST_ASSERT_EQUAL_STRING("567890", result);
}

void test_strchr_null(void)
{
	char str[] = "Hello, World!";
	char target = 'z';

	char *result = _strchr(str, target);
	TEST_ASSERT_NULL(result);
}

void test_strchr_empty_string(void)
{
	char str[] = "";
	char target = 'z';

	char *result = _strchr(str, target);
	TEST_ASSERT_NULL(result);
}

void test_strchr_null_char(void)
{
	char str[] = "Hello, World!";
	char *result = _strchr(NULL, 'z');
	TEST_ASSERT_NULL(result);

	result = _strchr(str, '\0');
	TEST_ASSERT_EQUAL_STRING(result, "");

	result = _strchr(str, 'W');
	TEST_ASSERT_EQUAL_STRING(result, "World!");
}

void test_strchr_return(void)
{
	char str[] = "Hello, World!";
	char target = 'l';

	char *result = _strchr(str, target);
	TEST_ASSERT_NOT_NULL(result);

	TEST_ASSERT_EQUAL_STRING(result, "llo, World!");
	TEST_ASSERT_EQUAL_STRING(str, "Hello, World!");
}

void test_strchr_strchr(void)
{
	char str[] = "Hello, World!";
	char *result = _strchr(_strchr(str, 'l'), 'o');

	TEST_ASSERT_NOT_NULL(result);
	TEST_ASSERT_EQUAL_STRING(result, "o, World!");
	TEST_ASSERT_EQUAL_STRING(str, "Hello, World!");
}

void test_strchr_comparison(void)
{
	char str[] = "Hello, World!";
	char target = 'o';

	char *result_custom = _strchr(str, target);
	char *result_original = strchr(str, target);

	TEST_ASSERT_EQUAL_PTR(result_custom, result_original);
	TEST_ASSERT_EQUAL_STRING(result_custom, result_original);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_strchr_letters);
	RUN_TEST(test_strchr_word);
	RUN_TEST(test_strchr_number);
	RUN_TEST(test_strchr_null);
	RUN_TEST(test_strchr_empty_string);
	RUN_TEST(test_strchr_null_char);
	RUN_TEST(test_strchr_return);
	RUN_TEST(test_strchr_strchr);
	RUN_TEST(test_strchr_comparison);
	return UNITY_END();
}
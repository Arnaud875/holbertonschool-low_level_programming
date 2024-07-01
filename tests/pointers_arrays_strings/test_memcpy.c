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

void test_memcpy_basic(void)
{
	char dest[50];
	char src[] = "hello world!";
	_memcpy(dest, src, sizeof(src));
	TEST_ASSERT_EQUAL_STRING(dest, src);
}

void test_memcpy_empty(void)
{
	char dest[50] = {0};
	char src[] = "";
	_memcpy(dest, src, sizeof(src));
	TEST_ASSERT_EQUAL_STRING(dest, src);
}

void test_memcpy_partial(void)
{
	char dest[50] = "xxxxxxxxxx";
	char src[] = "hello";
	_memcpy(dest, src, 5);
	TEST_ASSERT_EQUAL_STRING_LEN(dest, "helloxxxxx", 10);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_memcpy_basic);
	RUN_TEST(test_memcpy_empty);
	RUN_TEST(test_memcpy_partial);
	return UNITY_END();
}
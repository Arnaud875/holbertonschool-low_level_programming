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

void test_memset_basic(void)
{
	int i = 0;

	char dest[50];
	_memset(dest, 'A', sizeof(dest));

	for (; i < (int)sizeof(dest); i++)
	{
		TEST_ASSERT_EQUAL_HEX8('A', dest[i]);
	}
}

void test_memset_null(void)
{
	char *null_ptr = NULL;
	_memset(null_ptr, 'B', 10);

	TEST_ASSERT_NULL(null_ptr);
}

void test_memset_size_zero(void)
{
	char dest[50];
	dest[0] = '\0';
	_memset(dest, 'C', 0);

	TEST_ASSERT_EQUAL_HEX8('\0', dest[0]);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_memset_basic);
	RUN_TEST(test_memset_null);
	RUN_TEST(test_memset_size_zero);
	return UNITY_END();
}
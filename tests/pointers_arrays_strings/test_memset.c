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

void test_memcpy_function(void)
{
	int i = 0;

	char dest[50];
	_memset(dest, 'A', sizeof(dest));

	for (; i < (int)sizeof(dest); i++)
	{
		TEST_ASSERT_EQUAL_HEX8('A', dest[i]);
	}
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_memcpy_function);
	return UNITY_END();
}
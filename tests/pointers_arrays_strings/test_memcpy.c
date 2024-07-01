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
	char dest[50];
	char src[] = "hello world!";

	_memcpy(dest, src, sizeof(src));
	TEST_ASSERT_EQUAL_STRING(dest, src);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_memcpy_function);
	return UNITY_END();
}
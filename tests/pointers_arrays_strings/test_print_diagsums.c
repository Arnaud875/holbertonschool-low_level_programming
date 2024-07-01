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

void test_print_diagsums_function(void)
{
	int c3[3][3] = {
			{0, 1, 5},
			{10, 11, 12},
			{1000, 101, 102},
	};
	int c5[5][5] = {
			{0, 1, 5, 12124, 1234},
			{10, 11, 12, 123521, 12512},
			{1000, 101, 102, 12545, 214543435},
			{100, 1012451, 11102, 12545, 214543435},
			{10, 12401, 10452, 11542545, 1214543435},
	};

	int c2[2][2] = {
			{11, 10},
			{12, 30},
	};

	print_diagsums(&c3[0][0], 3);
	print_diagsums(&c5[0][0], 5);
	print_diagsums(&c2[0][0], 2);

	/* Pas besoin de faire de test */
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_print_diagsums_function);
	return UNITY_END();
}
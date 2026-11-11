#include <stdio.h>

int main(void)
{
	float x = 34325.293849f;

	printf("FIeld size 8: %8.1f\n", x);
	printf("Field size 10: %10.6f\n", x);
	printf("Left justified: %-10.6f\n", x);
	printf("Fixed Dec: %-8.3f\n", x);
	printf("Fixed Dec: %6f\n", x);

	return 0;
}

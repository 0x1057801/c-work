#include <stdio.h>

// This program actually solves projects 1 - 3. So I will only be doing one for this chapter

int main(void)
{
	int digit1 = 0;
	int digit2 = 0;
	int digit3 = 0;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &digit1, &digit2, &digit3);
	printf("\nYour number reversed: %d%d%d\n", digit3, digit2, digit1);

	return 0;
}

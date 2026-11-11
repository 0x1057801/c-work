#include <stdio.h>

int main(void)
{
	double amount = 0.0;

	printf("Enter an amount: ");
	scanf("%lf", &amount);

	double tax = amount * .05;
	double total = tax + amount;

	printf("WIth tax added: %.2lf\n", total);

	return 0;
	
}

#include <stdio.h>

int main(void)
{
	int itemNo = 0;
	float unitPrice = 0.0;
	int month = 0;
	int day = 0;
	int year = 0;

	printf("Enter item number: ");
	scanf("%d", &itemNo);
	printf("\nEnter unit price: ");
	scanf("%f", &unitPrice);
	printf("\nEnter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("    \t\tPrice\t\tDate\n");
	printf("%-d\t\t$%.2f\t\t%d/%d/%d\n", itemNo, unitPrice, month, day, year);

	return 0;
}

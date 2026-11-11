#include <stdio.h>

int main(void)
{
	int days = 0;
	int start = 0;

	printf("Enter the number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun 7= Sat): ");
	scanf("%d", &start);

	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");

	if (start > 1)
	{
		for (int i = 1; i < start; i++) {
			printf(" ");
			printf("\t");
		}
	}
	
	for (int i = 1; i <= days; i++)
	{
			printf("%d\t", i);

			if (start == 7) {
				printf("\n");
				start = 1;
			}
			else
			{
				start++;
			}
	}
	printf("\n");
}

#include <stdio.h>

int main(void)
{
	int digit1 = 0;
	int digit2 = 0;
	
	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &digit1, &digit2);

	switch (digit1)
	{
		case 1:
			if (digit2 == 0)
			{
				printf("ten");
			}
			else if (digit2 == 1)
			{
				printf("eleven");
			}
			else if (digit2 == 2)
			{
				printf("twelve");
			}
			else if (digit2 == 3)
			{
				printf("thirteen");
			}
			else if (digit2 == 4)
			{
				printf("fourteen");
			}
			else if (digit2 == 5)
			{
				printf("fifteen");
			}
			else if (digit2 == 6)
			{
				printf("sixteen");
			}
			else if (digit2 == 7)
			{
				printf("seventeen");
			}
			else if (digit2 == 8)
			{
				printf("eighteen");
			}
			else if (digit2 == 9)
			{
				printf("nineteen");
			}
			break;
		case 2:
			printf("twenty");
			break;
		case 3:
			printf("thirty");
			break;
		case 4:
			printf("fourty");
			break;
		case 5:
			printf("fifty");
			break;
		case 6:
			printf("sixty");
			break;
		case 7:
			printf("seventy");
			break;
		case 8:
			printf("eighty");
			break;
		case 9:
			printf("ninety");
			break;
		default:
			printf("You did not enter a two-digit number");
			break;
	}

	switch (digit2)
	{
		case 1:
			if (digit1 == 1)
		 	{
				break;
			}
			printf("-one\n");
			break;
		case 2:
			if (digit1 == 1)
		 	{
				break;
			}	
			printf("-two\n");
			break;
		case 3:
			if (digit1 == 1)
		 	{
				break;
			}
			printf("-three\n");
			break;
		case 4:
			if (digit1 == 1)
		 	{
				break;
			}
			printf("-four\n");
			break;
		case 5:
			if (digit1 == 1)
		 	{
				break;
			}
			printf("-five\n");
			break;
		case 6:
			if (digit1 == 1)
		 	{
				break;
			}
			printf("-six\n");
			break;
		case 7:
			if (digit1 == 1)
		 	{
				break;
			}
			printf("-seven\n");
			break;
		case 8:
			if (digit1 == 1)
		 	{
				break;
			}
			printf("-eight\n");
			break;
		case 9:
			if (digit1 == 1)
		 	{
				break;
			}
			printf("-nine\n");
			break;
		default:
			break;
	}
	
	printf("\n");	
	return 0;
}

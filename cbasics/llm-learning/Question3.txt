#include <stdio.h>

int count_even(int number[], int length)
{
	int evens = 0;
	
	for(int i = 0; i < length; i++)
	{
		if (number[i] % 2 == 0)
		{
			evens++;
		}	
	}
	return evens;
}

int main(void)
{
	int values[] = {3, 8, 12, 5, 7, 10};
	printf("Number of even values in the array: %d\n", count_even(values, 6));
	
	return 0;
}

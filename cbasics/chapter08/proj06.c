#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char message[100];
	int i = 0;
	char userChar = '\0';
	int meaningful = -1; // keeping track of last meaningful char in string
	
	printf("Enter a message: ");

	while ((userChar = getchar()) != '\n')
	{
		message[i] = userChar;
		++i;	
	}
	message[i] = '\0'; // terminating the string
	
	for (int j = 0; j < i; j++)
	{
		if (isupper((unsigned char)message[j]) && isalpha((unsigned char)message[j]))
		{	
			message[j] = tolower(message[j]);
		}
		else if (isdigit((unsigned char)message[j]) && message[j-1] != ' ')
		{
			switch (message[j])
			{
				case '1':
					message[j] = 'l';
					break;
				case '2':
					message[j] = 'z';
					break;
				case '3':
					message[j] = 'e';
					break;
				case '4':
					message[j] = 'a';
					break;
				case '5':
					message[j] = 's';
					break;
				case '7':
					message[j] = 't';
					break;
				case '8':
					message[j] = 'b';
					break;
				case '9':
					message[j] = 'g';
					break;
				default:
					break;
			}
		}
		else if (isdigit((unsigned char)message[j]) && (j == 0 || message[j-1] == ' '))
		{
			switch(message[j])
			{
				case '1':
					message[j] = 'L';
					break;
				case '2':
					message[j] = 'Z';
					break;
				case '3':
					message[j] = 'E';
					break;
				case '4':
					message[j] = 'A';
					break;
				case '5':
					message[j] = 'S';
					break;
				case '7':
					message[j] = 'T';
					break;
				case '8':
					message[j] = 'B';
					break;
				case '9':
					message[j] = 'G';
					break;
				default:
					break;
			}
			message[j] = toupper(message[j]);
		}
		else if (islower((unsigned char)message[j]) && (j != 0 && message[j - 1] != ' '))
		{
			message[j] = toupper(message[j]);
		}  
		if (isalpha(message[j]))
		{
			meaningful = j;
		}
	}

	// terminate the string
	if (meaningful > -1)
	{
		message[meaningful + 1] = '\0';
	}

	// print corrected string
	printf("%s\n", message);

	return 0;
}

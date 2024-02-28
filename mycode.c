#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char k;

	printf("What is thy name young paladin? - ");
	k = getchar();

	for (k = 0; k < 50; k++)
	{
		if (k != '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			printf("Welcome Paladin- %c\n ", k);
			putchar(k);
		}

	}
	return (0);
}


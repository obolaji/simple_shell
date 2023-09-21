#include "shell.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void enter_name (char *input, void (*a)(char *))
{
	if (name == NULL || a == NULL)
		return;
	a(input);
}

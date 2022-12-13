#include <stdio.h>

/**
 * main - print letter of alphabet in lowwrcase
 *
 * Description: print the letter of alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}

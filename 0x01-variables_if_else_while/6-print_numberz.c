#include <stdio.h>

/**
 * main - prints numbers from 0 to 9 using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}

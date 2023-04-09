#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: digit for test
 * Return: 1 or  0
 */
int _isdigit(int c)
{
	return ((c >= 48) && (c <= 57));
}

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}

/**
 * main - program that adds positive numbers
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[]) 
{
	int	sum = 0;
	int	i;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return 0;
	}

	for (i = 1; i < argc; i++)
	{
		char	*arg = argv[i];
		int	j;
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!_isdigit(arg[j]))
			{
				printf("Error\n");
				return 1;
			}
		}
		int	num = _atoi(arg);
		if (num < 0)
		{
			printf("Error\n");
			return 1;
		}
		sum += num;
	}
	printf("%d\n", sum);
	return 0;
}

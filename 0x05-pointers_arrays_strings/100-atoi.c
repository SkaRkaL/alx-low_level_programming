#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int	i;
	int	signe;
	int	resultat;

	i = 0;
	signe = 1;
	resultat = 0;
	while (((s[i] >= 9) && (s[i] <= 13)) || (s[i] == 32))
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			signe *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		resultat = resultat * 10 + (s[i] - '0');
		i++;
	}
	return (resultat * signe);
}

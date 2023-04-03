#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: occurrence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character
 */
char	*_strchr(char *s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (s);
	if (s[i] == c)
		return (s);
	return (NULL);
}

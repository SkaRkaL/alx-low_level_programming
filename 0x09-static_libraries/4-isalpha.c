#include "main.h"
/**
 * _isalpha -  function checks for alphabetic character
 * @c: the character in ASCII code
 *  Return: 1 if c is a letter, lowercase or uppercase, Return: 0 otherwise
 *
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}

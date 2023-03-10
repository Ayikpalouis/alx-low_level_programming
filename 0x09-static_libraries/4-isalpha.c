#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: character to be checked
 *
 * Description: A function that check for an alphabetic character.
 *
 * Return: 1 if the character is an alphabet. 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _islower - check if the character is
 * lowercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it's a lowercase letter, 0 if it's not a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}

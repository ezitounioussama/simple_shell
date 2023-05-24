#include "holberton.h"
/**
 * _strlen - Sizes the length of the string
 * @string: str that been sized
 * Return: The length of the string
 */

int _strlen(const char *string)
{
	int length = 0;

	if (string == NULL)
		return (0);

	while (string[length] != '\0')
		length++;
	return (length);
}

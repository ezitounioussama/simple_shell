#include "holberton.h"
/**
 * _printp - Prints the prompt in the input
 * @prompt: Pointer to the string to be printed
 * @size: Length ot the prompt
 * Return: 0 if success || -1 if fails
 */
int _printp(const char *prompt, unsigned int size)
{
	int written;

	if (isatty(STDIN_FILENO))
	{
		written = write(1, prompt, size);
		if (written == -1)
			return (-1);
	}
		return (0);
}

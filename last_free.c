#include "holberton.h"
/**
 * last_free - Free the memory of the last execution
 * @entry: Input typed by a User
 */
void last_free(char *entry)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(entry);
	}
	if (!isatty(STDIN_FILENO))
		free(entry);
}

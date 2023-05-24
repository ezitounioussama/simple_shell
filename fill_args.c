#include "holberton.h"
/**
 * fill_args - Fill an array with input typed by the user
 * @entry: Str with the input
 * @arguments: Array to be filled
 * Return: Length of array
 */

int fill_args(char *entry, char **arguments)
{
	int i = 0;
	char *options, *aux = entry, *command;

	command = strtok(entry, "\n\t\r "); /** Extractv command 0 */
	arguments[i] = command; /***/
	while (aux != NULL) /***/
	{
		++i;
		options = strtok(NULL, "\n\t\r "); /***/
		aux = options;
		arguments[i] = options; /***/
	}
	arguments[i] = NULL; /***/
	return (i); /**Return arguments length*/
}

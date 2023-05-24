#include "holberton.h"
/**
 * exec - Creates a new child process
 * executes a command and wait child process
 * to update the status
 * @arguments: Array of inputs by the user
 * Return: 0 if success
 */
int exec(char **arguments)
{
	pid_t pid = 0;
	int stat = 0, exe_stat = 0;/**indicate child process Status*/

	pid = fork();/**Create a child Process*/
	if (pid == -1)/***/
		_printp("failed\n", 7);
	else if (pid == 0)/***/
	{
		exe_stat = execve(arguments[0], arguments, environ);/**Execute Command*/
		if (exe_stat == -1)
		{
			exe_stat = 126;
			perror("hsh");
			exit(exe_stat);
		} /***/
		exit(0);
	}
	else /***/
		wait(&stat);/***/
	exe_stat = WEXITSTATUS(stat);
	return (exe_stat);
}

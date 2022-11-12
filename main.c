#include "main.h"

/**
 *main - call other functions
 *@ac: Parameter
 *@argv: parameter
 *
 *Return: nothing
 */

int main(int ac, char **argv)
{
	char *prompt = "(Eshell) $ ";
	char *lineptr;
	size_t n = 0;

	/* declaring void variables */
	(void)ac;
	(void)argv;

	printf("%s", prompt);

	getline(&lineptr, &n, stdin);

	printf("%s\n", lineptr);

	free(lineptr);

	return (0);

}

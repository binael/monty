#include "main.h"

/**
 * isFile - checks if a file can be read
 * @file_ptr: file
 *
 * Return: 0 - (success), 1 - (failure)
 */
int isFile(char *file_ptr)
{
	if (file_ptr == NULL)
		return (1);

	return (0);
}

/**
 * isInteger - checks if a string contains only digits
 * @input: string to validate
 *
 * Return: 0 - (success), 1 - (failure)
 */
int isInteger(void)
{
	char *s = dict.tok[1];

	if (!s)
		return (1);
	if (*s == '-')
		s++;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			s++;
		else
			return (1);
	}

	return (0);
}

/**
 * isComment - checks if a line character starts with "#"
 *
 * Return: 0 - (Success), 1 - (Failure)
 */
int isComment(void)
{
	if (dict.tok[0][0] == '#')
		return (0);
	return (1);
}

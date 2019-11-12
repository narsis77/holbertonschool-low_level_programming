#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Const char pointer
 *
 * @text_content: Char pointer
 *
 * Return: int
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes = 0, length = 0;

	while (text_content[length] != '\0')
	{
		length++;
	}

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
		if (length)
		{
			bytes = write(fp, text_content, length);
		}
		close(fp);
		if (bytes == -1)
		{
			return (-1);
		}

		close(fp);

		return (1);
}

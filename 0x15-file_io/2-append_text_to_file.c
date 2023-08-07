#include "main.h"

/**
 * append_text_to_file - The Appends the text at the finish of file
 * @filename: Is a pointer to name of a file
 * @text_content: Is the string to be added to the end a file
 *
 * Return: function fails or filename is NULL return- -1.
 *         If file doesnt exist write the permissions -1, if not - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

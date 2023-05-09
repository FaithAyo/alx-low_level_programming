#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: EOF
 * Return: 1 on sucess and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fides;
	int length_no, wr_cr;

	if (filename == NULL)
		return (-1);

	fides = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fides == -1)
		return (-1);

	if (text_content == NULL)
		text_content = " ";

	length_no = strlen(text_content);

	wr_cr = write(fides, text_content, length_no);

	if (wr_cr == -1)
		return (-1);

	close(fides);

	return (1);
}

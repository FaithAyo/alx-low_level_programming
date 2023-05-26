#include "main.h"
/**
 * append_text_to_file - adds text to the end of file
 * @filename: the name of the file
 * @text_content: the null terminated string to add at the EOF
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fides;
	int length_no, wr_apnd;

	if (filename == NULL)
		return (-1);

	fides = open(filename, O_WRONLY | O_APPEND,0);

	if (fides == -1)
		return (-1);
/*	if (text_content == NULL)
*		text_content = "";
*/
	if (text_content != NULL)
		length_no = strlen(text_content);
	wr_apnd = write(fides, text_content, length_no);
	if (wr_apnd == -1)
		return (-1);

	close(fides);

	return (-1);
}

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and print it to the STDOUT
 * @filename: the name of the file
 * @letters: the number of letters to read and print
 * Return: return the number it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fptr;
	int readlen, writelen;
	char *buffer = malloc(sizeof(char) * letters);

		if (filename == NULL)
			return (0);

		fptr = open(filename, O_RDONLY);

		if (fptr == -1)
			return (0);

		readlen = read(fptr, buffer, letters);
		if (readlen == -1)
			return (0);

		writelen = write(STDOUT_FILENO, buffer, readlen);

		if (writelen == -1)
			return (0);
	close(fptr);

	free(buffer);

	return (writelen);

}

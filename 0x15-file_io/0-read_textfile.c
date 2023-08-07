#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * read_textfile - entry point of read file program
 * @letters: letters is the number of letters it should read and print
 * @filename: filname
 * Return: return an unsigned int of the number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[1024];
	ssize_t fd, t, w;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	close(fd);
	return (w);
}

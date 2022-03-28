#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the file to read and print
 * @letters: the number of letters to write to the stdout.
 * Description: long description
 *
 * Return: number of characters actually writter on 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fileRead, fileWrite;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fileRead = read(fd, buff, letters);
	if (fileRead < 0)
	{
		free(buff);
		return (0);
	}
	fileWrite = write(STDOUT_FILENO, buff, fileRead);
	free(buff);
	close(fd);
	if (fileWrite < 0)
		return (0);
	return (fileRead);
}

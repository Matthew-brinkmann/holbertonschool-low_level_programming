#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

/**
 * fd_closer - closes a file and exits/prints error if close encounters error
 * @fileDesc: file descriptor for file to be closed
 *
 * Return: void
 */
void fd_closer(int fileDesc)
{
	int err;

	err = close(fileDesc);
	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDesc);
		exit(100);
	}
}

/**
 * read_file_error - closes a file and exits/prints error if close encounters error
 * @fromFile: file descriptor for file to be closed
 * @tooFile: file rescriptor for file to be closed
 * @file: the file name that couldn't be read from.
 * Return: void
 */
void read_file_error(int fromFile, int tooFile, char* file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	if (fromFile >= 0)
		fd_closer(fromFile);
	if (tooFile >= 0)
		fd_closer(tooFile);
	exit(98);
}

/**
 * write_file_error - closes a file and exits/prints error if close encounters error
 * @fromFile: file descriptor for file to be closed
 * @tooFile: file rescriptor for file to be closed
 * @file: the file name that couldn't be read from.
 * Return: void
 */
void write_file_error(int fromFile, int tooFile, char* file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	if (fromFile >= 0)
		fd_closer(fromFile);
	if (tooFile >= 0)
		fd_closer(tooFile);
	exit(99);
}

/**
 * main - copies from 1 file to another
 * @argc: the number of arguments passed into function
 * @argv: the array containing the arguments
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
int main(int argc, char *argv[])
{
	char buff[1024];
	int fromFile = -1, tooFile = -1;
	int fromFileRead = 1, tooFileWrite = 0, totalB = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fromFile = open(argv[1], O_RDONLY);
	if (fromFile < 0)
		read_file_error(fromFile, tooFile, argv[1]);

	tooFile = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (tooFile < 0)
		write_file_error(fromFile, tooFile, argv[1]);
	while (fromFileRead != 0)
	{
		fromFileRead = read(fromFile, buff, 1024);
		if (fromFileRead < 0)
			read_file_error(fromFile, tooFile, argv[1]);
		else if (fromFileRead == 0)
			break;
		totalB = totalB + fromFileRead;
		tooFileWrite = write(tooFile, buff, fromFileRead);
		if (tooFileWrite < 0)
			write_file_error(fromFile, tooFile, argv[1]);
	}
	fd_closer(fromFile);
	fd_closer(tooFile);

	return (0);
}

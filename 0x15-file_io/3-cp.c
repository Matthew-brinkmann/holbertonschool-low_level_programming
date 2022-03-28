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
 * Return: 1 if success or -1 if error.
 */
int fd_closer(int fileDesc)
{
	int err;

	err = close(fileDesc);
	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDesc);
		exit(100);
	}
	return (1);
}

/**
 * read_file_error - displays error if read file error
 * @fromFile: file descriptor for file to be closed
 * @tooFile: file rescriptor for file to be closed
 * @file: the file name that couldn't be read from.
 * Return: void
 */
void read_file_error(int fromFile, int tooFile, char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	if (fromFile >= 0)
		fd_closer(fromFile);
	if (tooFile >= 0)
		fd_closer(tooFile);
	exit(98);
}

/**
 * write_file_error - displays error if write file error.
 * @file: the file name that couldn't be read from.
 * Return: void
 */
void write_file_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * arg_test - test number of arguments
 * @args: the total number of arguments
 * Return: void
 */
void arg_test(int args)
{
	if (args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
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
	int fd_fromFile = -1, fd_tooFile = -1;
	int fromFileRead = 1, tooFileWrite = 0;

	arg_test(argc);
	fd_fromFile = open(argv[1], O_RDONLY);
	if (fd_fromFile < 0)
		read_file_error(fd_fromFile, fd_tooFile, argv[1]);

	fd_tooFile = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_tooFile < 0)
	{
		fd_closer(fd_fromFile);
		write_file_error(argv[2]);
	}
	while (fromFileRead != 0)
	{
		fromFileRead = read(fd_fromFile, buff, 1024);
		if (fromFileRead < 0)
			read_file_error(fd_fromFile, fd_tooFile, argv[1]);
		else if (fromFileRead == 0)
			break;
		tooFileWrite = write(fd_tooFile, buff, fromFileRead);
		if (tooFileWrite < 0)
			write_file_error(argv[2]);
	}
	if (fd_closer(fd_fromFile) == -1)
	{
		fd_closer(fd_tooFile);
		exit(100);
	}
	if (fd_closer(fd_tooFile) == -1)
		exit(100);
	return (0);
}

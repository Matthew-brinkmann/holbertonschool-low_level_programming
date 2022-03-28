#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to be created
 * @text_content: what to put in file
 * Description: long description
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fileWrite, len = 0;

	if (filename == NULL)
		return (-1);
	while (text_content != NULL && text_content[len] != '\0')
		len++;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	fileWrite = write(fd, text_content, len);
	close(fd);
	if (fileWrite < 0)
		return (-1);
	return (1);
}

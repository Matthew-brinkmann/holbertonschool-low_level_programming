#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to append to
 * @text_content: what to put in file
 * Description: long description
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fileWrite, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[len] != '\0')
		len++;
	fileWrite = write(fd, text_content, len);
	close(fd);
	if (fileWrite < 0)
		return (-1);
	return (1);
}

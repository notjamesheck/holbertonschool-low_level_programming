#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ret = 0;

	char *buf = NULL;	
	buf = malloc(sizeof(char) * letters);
	
	fd = open(filename, O_RDONLY);
	
	write(fd, buf, letters);
	
	ret = read(fd, buf, letters);
	
	write(STDOUT_FILENO, buf, letters);
	return (ret);
}

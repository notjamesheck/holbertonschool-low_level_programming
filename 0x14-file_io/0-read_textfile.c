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

	buf = malloc((sizeof(char) * letters) + 1);
	
	fd = open(filename, O_RDONLY);
	
	ret = read(fd, buf, letters);
	
	write(STDOUT_FILENO, buf, ret);
	
	return (ret);
}

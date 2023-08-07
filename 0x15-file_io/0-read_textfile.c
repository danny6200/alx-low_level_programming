/**
 * read_textfile - reads some text from a file and writes them
 * to stdout
 * @filename: pointer to the name of the file
 * @letters: number of characters or bytes to be read
 *
 * Return: number of bytes written to stdout
 */
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	/* Open file in read mode only */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		perror("Error allocating memory");
		close(fd);
		return (0);
	}
	/* Read bytes from fd into buffer */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		perror("Error reading from file");
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	/* Write bytes read to STDOUT */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		perror("Error writing to standard output");
		free(buffer);
		return (0);
	}
	free(buffer);
	return (bytes_written);
}

/**
 * error_exit - prints error and exit process
 * @code: exit_status code
 * @message: error message
 * @fd_from: fd of file to be copied
 * @fd_to: fd of file to be copied into
 *
 * Return: nothing
 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
void error_exit(int code, const char *message,
		int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, message, fd_from, fd_to);
	exit(code);
}

/**
 * copy_file - copy contents of a file into another file
 * @file_from: file to be copied from
 * @file_to: file to be copied into
 *
 * Return: 0 on success
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytesRead, bytesWritten;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", fd_from, -1);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", fd_from, fd_to);
	}
	while ((bytesRead = read(fd_from, buffer, 1024)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", fd_from, fd_to);
		}
	}
	if (bytesRead == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", fd_from, fd_to);
	}
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from, fd_to);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from, fd_to);
	return (0);
}
/**
 * main - entry point of program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	const char *file_from, *file_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	return (copy_file(file_from, file_to));
}

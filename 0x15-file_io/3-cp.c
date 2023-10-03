#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * exit_with_error - Print an error message
 * and exit with a specific code
 * @exit_code: The exit code
 * @message: The error message to display
 * Return: The exit_code
 */
int exit_with_error(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	return (exit_code);
}

/**
 * copy_file - Copy the content of one file to another
 * @file_from: The source file
 * @file_to: The destination file
 * Return: 0 on success
 * appropriate exit code on failure
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (exit_with_error(98, "Error: Can't read from file NAME_OF_THE_FILE"));

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		return (exit_with_error(99, "Error: Can't write to NAME_OF_THE_FILE"));
	}

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			return (exit_with_error(99, "Error: Can't write to NAME_OF_THE_FILE"));
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		return (exit_with_error(98, "Error: Can't read from file NAME_OF_THE_FILE"));
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
		return (exit_with_error(100, "Error: Can't close fd FD_VALUE"));

	return (0);
}

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success
 * 97 if incorrect arguments
 */
#include "main.h"

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int result;

	if (argc != 3)
		return (exit_with_error(97, "Usage: cp file_from file_to"));

	file_from = argv[1];
	file_to = argv[2];

	result = copy_file(file_from, file_to);

	return (result);
}

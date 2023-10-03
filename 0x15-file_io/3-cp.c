#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * exit_with_error - Exits the program with an error code
 * and prints an error message.
 * @code: The error code to exit with.
 * @message: The error message to print.
 */
void exit_with_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * copy_file - Copies the content of one file to another file.
 * @src_filename: The source file name.
 * @dest_filename: The destination file name.
 */
void copy_file(const char *src_filename, const char *dest_filename)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(src_filename, O_RDONLY);
	if (fd_from == -1)
	{
		exit_with_error(98, "Error: Can't read from source file");
	}

	fd_to = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		exit_with_error(99, "Error: Can't write to destination file");
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			exit_with_error(99, "Error: Can't write to destination file");
		}
	}

	if (bytes_read == -1)
	{
		exit_with_error(98, "Error: Can't read from source file");
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		exit_with_error(100, "Error: Can't close file descriptor");
	}
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success
 * or exit with error codes as specified.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to");
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

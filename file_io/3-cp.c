#include "main.h"

/**
 * open_file_from - Open a file for reading.
 * @filename: The name of the file.
 *
 * Return: file descriptor on success, -1 on error.
 */
int open_file_from(const char *filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
return (fd);
}

/**
 * open_file_to - Open a file for writing.
 * @filename: The name of the file.
 *
 * Return: file descriptor on success, -1 on error.
 */
int open_file_to(const char *filename)
{
int fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
return (fd);
}

/**
 * close_files - Close file descriptors.
 * @fd_from: file descriptor for the source file.
 * @fd_to: file descriptor for the destination file.
 */
void close_files(int fd_from, int fd_to)
{
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
}

/**
 * main - Copies content from one file to another.
 * @argc: Number of arguments.
 * @argv: Arguments array.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUF_SIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_from = open_file_from(argv[1]);
fd_to = open_file_to(argv[2]);

while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close_files(fd_from, fd_to);
exit(99);
}
}
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
close_files(fd_from, fd_to);
exit(98);
}
close_files(fd_from, fd_to);
return (0);
}

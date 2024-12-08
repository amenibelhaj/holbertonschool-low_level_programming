#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments passed to the program.
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

    fd_from = open_file_from(argv[1]);  // Open source file
    fd_to = open_file_to(argv[2]);      // Open/Create destination file

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

    close_files(fd_from, fd_to);  // Close file descriptors

    return (0);
}

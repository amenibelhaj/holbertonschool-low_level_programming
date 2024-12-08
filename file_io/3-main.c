#include "main.h"

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open_file_from(argv[1]);
    fd_to = open_file_to(argv[2]);

    copy_content(fd_from, fd_to);

    close_files(fd_from, fd_to);

    return (0);
}

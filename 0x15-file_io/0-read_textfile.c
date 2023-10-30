#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters) {

    int fd;
    char *buffer;
    ssize_t lenr;
    ssize_t lenw;

     if (filename == NULL)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    buffer = malloc(letters);
    if (buffer == NULL) {
        close(fd);
        return 0;
    }

    lenr = read(fd, buffer, letters);
    if (lenr == -1) {
        close(fd);
        free(buffer);
        return 0;
    }

    lenw = write(STDOUT_FILENO, buffer, lenr);
    if (lenw == -1 || lenw != lenr) {
        close(fd);
        free(buffer);
        return 0;
    }

    close(fd);
    free(buffer);

    return lenw;
}

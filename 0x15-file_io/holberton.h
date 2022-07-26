#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * Desc: Header file containing prototypes for all fu
 * nctions written in the 0x15-file_io directory.
 */

#include <sys/types.h>
#include <sys/start.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#enfif /* MAIN_H */

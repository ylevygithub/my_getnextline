/*
** EPITECH PROJECT, 2019
** get_next_line.h
** File description:
** get_next_line.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#ifndef READ_SIZE
#define READ_SIZE (4096)

char *get_next_line(int fd);
int read_file(int fd);

#endif /* ! READ_SIZE */

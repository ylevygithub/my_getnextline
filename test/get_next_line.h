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
#define READ_SIZE (1)

int my_strlen(char *);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char *);
char *my_get_line(char *);
char *get_next_line(int fd);
void my_putstr(char *str);

#endif /* ! READ_SIZE */

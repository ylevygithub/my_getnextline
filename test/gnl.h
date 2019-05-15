/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#ifndef READ_SIZE
#define READ_SIZE (1)

void my_putchar(char c);
char* my_realloc(char* ptr, size_t size);
char get_char(int fd);
char *get_next_line(int fd);
void my_putstr(char *str);

#endif /* ! READ_SIZE */


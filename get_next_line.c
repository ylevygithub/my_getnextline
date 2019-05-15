/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** get the next line
*/

#include "get_next_line.h"

static int  pos = 0;
static char buffer[READ_SIZE];

int read_file(int fd)
{
    int newfd;
    
    newfd = read(fd, buffer, READ_SIZE);
    return (newfd);
}

char *get_next_line(int fd)
{
    int nb_line;
    int i = 0;
    char *line;
    
    line = malloc(sizeof(char));
    if (line == NULL)
        return (NULL);
    while (nb_line != '\0') {
        nb_line = read_file(fd);
        while(buffer[pos] != '\n') {
            if (buffer[pos] == '\0')
                return (line);
            line[i] = buffer[pos];
            pos++;
            i++;
        }
        if (buffer[pos] == '\n') {
            line[i] = '\0';
            pos++;
            return (line);
        }    
    }
    return (0);
}

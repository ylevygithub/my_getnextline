/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** get next line
*/

#include "get_next_line.h"

int my_strlen(char *str)
{
    int nb = 0;
    
    while (str[nb] != '\0')
    {
        nb = nb + 1;
    }
    return (nb);
}

char *my_strdup(char *src)
{
    char *str;
    int i = 0;
    
    src = str;
    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i] != '\0') {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    free(src);
    return (str);
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_get_line(char *str)
{
    static int fd;
    static int i = 0;
    static char *tmp;

    if (tmp == NULL)
        return (NULL);
    while (tmp != NULL) {
        while (tmp[i] != '\n') {
            str[i] = tmp[i];
            i++;
        }
        i--;
        read(fd, tmp, i);
        return (str);
        i = i + 2;
    }
}

char *get_next_line(int fd)
{
    char *str;
    //int i = 0;
    
    str = malloc(READ_SIZE + 1);
    if (str == NULL)
        return (0);
    else {
        //my_strdup(my_get_line(str));
        my_get_line(str);
        //my_strdup(str);
        return (str);
    }
}

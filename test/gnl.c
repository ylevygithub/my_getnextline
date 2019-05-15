/*
** EPITECH PROJECT, 2019
** gnl
** File description:
** gnl
*/

#include "gnl.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *s)
{
    int i = 0;
    while (s[i] != '\0') {
        my_putchar(s[i]);
        i++;
    }
}

char* my_realloc(char* ptr, size_t size)
{
    char* temp; /* string temporaire*/
    int i;

    temp = ptr; /*la string temporaire prend pour valeur la string ptr*/
    ptr = malloc(size); /* on malloc la taille adéquate pour ptr*/
    i = 0;
    while (temp[i])  /*tant que la string temporaire existe*/
    {
        ptr[i] = temp[i]; /*le caractere a la place 'i' dans la string temp = a celui de ptr a la mê place*/
        i++; 
    }
    free(temp); /*la string temp n'existe plus donc on la libere*/
    return (ptr); /*par contre la string ptr existe toujours et c celle qu on veut, donc on la return*/
}

char get_char(int fd)
{
    static char buff[READ_SIZE]; /*on declare le buffer avec la taille exacte qu on aura besoin peut importe le contenue*/
    static char* ptr_buff; /*on declare une autre string ptr_buff*/
    static int len = 0; /*on initialise un compteur 'len' a 0 */
    char c; /* on declare char c sans lui donner de valeur*/

    if (len == 0) /* si le compteur len est egale a 0*/
    {
        len = read(fd, buff, READ_SIZE); //le compteur 'len' prend pour valeur la lecture du fd contenant le buffer a la bonne taille
        ptr_buff = (char*)&buff;
        if (len == 0)
            return (0);
    }
    c = *ptr_buff;
    ptr_buff++;
    len--;
    return (c);
}

char *get_next_line(int fd)
{
    char c;
    char* str;
    int i;

    i = 0;
    str = malloc(READ_SIZE + 1);
    if (str == NULL)
        return (0);
    c = get_char(fd);
    while(c != '\0' && c != '\n')
    {
        str[i] = c;
        c = get_char(fd);
        i++;
        if(i % (READ_SIZE + 1) == 0)
            str = my_realloc(str, i + READ_SIZE + 1);
    }
    str[i] = 0;
    if(c == 0 && str[0] == 0)
        return (0);
    return (str);
}

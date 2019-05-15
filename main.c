#include "get_next_line.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
void my_putstr(char *s)
{
    int i = 0;
    while (s[i]) {
        my_putchar(s[i]);
        i++;
    }
}

int main(void)
{
    int fd = open("data.txt", O_RDONLY);
    char *s = get_next_line(fd);
    while (s) {
        my_putstr(s);
        my_putchar('\n');
        free(s);
        s = get_next_line(0);
    }
    return (0);
}

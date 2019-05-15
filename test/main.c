#include "gnl.h"

int main(void)
{
    int fd = open("static.txt", O_RDONLY);
    char *s = get_next_line(fd);
    while (s) {
        my_putstr(s);
        my_putchar('\n');
        free(s);
        s = get_next_line(0);
    }
    return (0);
}

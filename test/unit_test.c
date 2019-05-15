/*
** EPITECH PROJECT, 2018
** unit test
** File description:
** unit test
*/

/*
The following example do only one test by calling the get_next_line function. Be sure
to already test all internal functions you may have.

The get_next_line function can be particularly hard to unit test correctly. have you
identified why? It’s a very good subject to talk about during follow-ups and reviews!
*/
# include < criterion / criterion .h >
# include < criterion / redirect .h >
# include < fcntl .h >
# include < unistd .h >
char *get_next_line(int fd);
int fd = -1;
void open_file(void)
{
    fd = open("tests/data.txt", O_RDONLY);
    cr_redirect_stdout();
}
void close_file(void)
{
    if (fd != -1)
        close(fd);
}
Test (get_next_line, read_line, . init = open_file , . fini = close_file ) {
    char * expected = " Confidence is so overrated .";
    char * got = get_next_line ( fd ) ;
    cr_assert_str_eq ( got , expected ) ;
}

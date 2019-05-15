/*
** EPITECH PROJECT, 2018
** example
** File description:
** example
*/

Here is an example of use of the function:
/*
get_next_line must return the results without the ‘\n’
You must submit get_next_line.c and get_next_line.h (both of which must be located
at the directory’s root), but no main function.
A Makefile is useful only if you do unit tests. That is with the tests_run rule.
*/
/*
# include "my.h"
# include "get_next_line.h"
*/
int main (void)
{
    char *s = get_next_line (0) ;
    while ( s ) {
        my_putstr ( s ) ;
        my_putchar (’\n’) ;
        free ( s ) ;
        s = get_next_line (0) ;
    }
    return (0) ;
}

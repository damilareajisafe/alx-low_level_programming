#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;
    char *x;

    t = _strstr(s, f);
    x = _strstr("First, solve the problem. Then, write the code.", "solve");
    printf("%s\n", t);
    printf("%s\n", x);
    return (0);
}

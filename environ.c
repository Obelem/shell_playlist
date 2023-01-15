#include <stdio.h>

extern char **environ;

void main(int argc, char **argv, char **env)
{
    printf("env %p\n", env);
    printf("environ %p\n", environ);
}

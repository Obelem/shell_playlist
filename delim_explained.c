#include <stdio.h>
#include <string.h>

int main(void)
{
    char *buf = NULL, *token = NULL;
    size_t n;

    printf("Input: ");
    getline(&buf, &n, stdin);

    printf("%ld\n", strlen("hi"));
    printf("%ld\n", strlen(buf));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[] = "Hello, World!";
    str[5] = '\0';

    printf("%s", str);
}

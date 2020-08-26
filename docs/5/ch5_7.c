#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[256];

    char str1[] = "Hello";
    char str2[] = "World";

    strcpy(str, str1);
    strcpy(str+strlen(str1), str2);

    printf("%s", str);
}

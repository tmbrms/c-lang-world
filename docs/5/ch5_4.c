#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  //char str[] = "Hello";
  char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};

  printf("length of %s: %zu", str, sizeof str / sizeof(char));
}

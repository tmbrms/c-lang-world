#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f(int ary1[], int ary2[]);

int main(int argc, char **argv)
{
  int ary1[] = {1, 10};
  int ary2[] = {1, 10, 100, 1000};

  f(ary1, ary2);
}

void f(int ary1[], int ary2[])
{
  // sizeof 式 で、式のバイト数が求められる
  printf("size of ary1: %zu\n", sizeof ary1);
  printf("size of ary2: %zu\n", sizeof ary2);

  // sizeof(型) で、型のバイト数が求められる
  printf("size of int: %zu\n", sizeof(int));

  // 割り算をすると要素数が出せる
  printf("length of ary1: %zu\n", sizeof ary1 / sizeof(int));
  printf("length of ary2: %zu\n", sizeof ary2 / sizeof(int));
}

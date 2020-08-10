#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  int ary[] = {1, 10, 100, 1000};

  printf("address of ary[0]: %p\n", &ary[0]);
  printf("value of ary[0]: %d\n", ary[0]);

  printf("address of ary[3]: %p\n", &(ary[3]));
  printf("value of ary[3]: %d\n", ary[3]);

  printf("inside of ary:%p\n", ary); // <= 追加
  printf("value of *ary: %d\n", *ary);

  printf("inside of ary+3:%p\n", ary + 3); // <= 追加
  printf("value of *(ary+3): %d\n", *(ary + 3));
}

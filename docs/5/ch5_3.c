#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f(int ary[]);

int main(int argc, char **argv)
{
  int ary[] = {1, 10, 100, 1000, -1};

  f(ary);
}

void f(int ary[])
{
  for (int i = 0; ary[i] >= 0; i++)
  {
    printf("%d\n", ary[i]);
  }
}

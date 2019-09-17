#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
  int a = 0;
  int b = 1212630597;
  int c = 1145258561;

  printf("a: %p\n", &a);
  printf("b: %p\n", &b);
  printf("c: %p\n", &c);

  printf("%s\n", (char*)&c);
}

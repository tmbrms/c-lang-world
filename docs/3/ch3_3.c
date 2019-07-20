#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
  float pi = M_PI;

  int i = pi;

  printf("pi = %f\n", pi);
  printf("i = %d\n", i);

  i = *((int*)&pi);
  printf("i = %d\n", i);
}

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
  float pi = M_PI;

  printf("pi = %f\n", pi);
  printf("size of float = %lu\n", sizeof(pi));

  unsigned char *p = &pi;

  for(int i = 0; i < sizeof(pi); i++){
    printf("|%02x| ", *(p + i));
  }
}

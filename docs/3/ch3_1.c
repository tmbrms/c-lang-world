#include <stdio.h>

int main(int argc, char** argv){
  char *str = "thanks";
  
  printf("ADDRESS: %p\n", &str);
  printf("ADDRESS: %p\n", str);
  printf("VALUE: %x\n", *str);

  str = str + 4;

  printf("ADDRESS: %p\n", str);
  printf("VALUE: %x\n", *str);

  char *c = &str;
  for(int i = 0; i < 8; i++){
    printf("VALUE: %x\n", *c);
    c++;
  }

}

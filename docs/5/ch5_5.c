#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  char str1[] = "abc";
  char str2[] = "def";

  unsigned long size1 = strlen(str1);
  unsigned long size2 = strlen(str2);

  char concat_str[size1 + size2];

  int c = 0;
  for (int i = 0; i < size1; i++)
  {
    concat_str[c] = str1[i];
    c++;
  }
  for (int i = 0; i < size2; i++)
  {
    concat_str[c] = str2[i];
    c++;
  }

  printf("concat str = %s\n", concat_str);

  for (int i = 0; i < size1 + size2; i++)
  {
    printf("%d\n", concat_str[i]);
  }
}

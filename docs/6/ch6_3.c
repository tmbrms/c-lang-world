#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int *start;
int f1(int f1_a1, int f1_a2);

int main(int argc, char **argv)
{
  // ローカル変数
  int main_i1 = 1;
  int main_i2 = 2;

  // 関数のアドレスを取得して、関数ポインタに格納
  int (*main_ptr)() = main;
  int (*f1_ptr)() = f1;

  // ポインタに格納されているアドレスを表示
  printf("main ADDRESS: %p\n", main_ptr);
  printf("f1 ADDRESS: %p\n", f1_ptr);

  // メモリダンプの先頭位置は、main_i1のアドレスとする
  start = &main_i1;

  // ポインタを使って関数を呼び出す
  (*f1_ptr)(3, 4);

}

int f1(int a1, int a2)
{
  int i1 = a2 + 1;
  int i2 = i1 + 1;

  // f1は自分自身を何回か呼び出した後、メモリの値を書き出す。
  if(a1 > 10){
    uint8_t *p = start;
    for(int i = 0; p-i >= &i2; i++)
    {
      printf("[-%d] ADDRESS: %p VALUE: %x \n", i, p-i, *(p-i));
    }
  }else{
    f1(i2+1, i2+2);
  }

  return 255;
}
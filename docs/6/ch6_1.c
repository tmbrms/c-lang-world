#include <stdio.h>
#include <stdlib.h>

// グローバル変数
int g1 = 0;
int g2 = 0;

// 関数の定義前にmainから使っているので、先に宣言だけしておかなければならない
int* f1(int f1_a1, int f1_a2);
void f2(int f2_a1, int f2_a2);

int main(int argc, char **argv)
{
  // ローカル変数
  int main_i1 = 0;
  int main_i2 = 0;

  // ローカル変数に文字列リテラルのアドレスを格納
  char *main_s = "Hallo!";

  // 動的なメモリを確保
  int *main_i3 = malloc(sizeof(int));

  // 関数の引数のアドレスを表示
  printf("main_i1 ADDRESS: %p\n", &main_i1);
  printf("main_i2 ADDRESS: %p\n", &main_i2);

  // ローカル変数のアドレスを表示
  printf("main_s ADDRESS: %p\n", &main_s);

  // グローバル変数のアドレスを表示
  printf("g1 ADDRESS: %p\n", &g1);
  printf("g2 ADDRESS: %p\n", &g2);

  // 文字列リテラルのアドレスを表示
  printf("String Literal ADDRESS: %p\n", main_s);

  // 動的に確保したメモリ領域のアドレスを表示
  printf("main_i3 ADDRESS: %p\n", main_i3);

  // 1回目のf1の実行
  int *f1_i1_1 = f1(0, 0);

  // 2回目のf1の実行。g2は初期化し直しておく。
  g2 = 0;
  int *f1_i1_2 = f1(0, 0);

  // このアドレスはもう使ってはいけない
  printf("f1_i1_1 ADDRESS: %p\n", f1_i1_1);
  printf("f1_i1_2 ADDRESS: %p\n", f1_i1_2);
}

int* f1(int f1_a1, int f1_a2)
{
  int f1_i1 = 0;
  int f1_i2 = 0;

  // 何度目のf1の実行かをg1で記録する
  g1++;

  // 関数の引数のアドレスを表示
  printf("[%d] f1_a1 ADDRESS: %p\n", g1, &f1_a1);
  printf("[%d] f1_a2 ADDRESS: %p\n", g1, &f1_a2);

  // ローカル変数のアドレスを表示
  printf("[%d] f1_i1 ADDRESS: %p\n", g1, &f1_i1);
  printf("[%d] f1_i2 ADDRESS: %p\n", g1, &f1_i2);

  f2(0, 0);

  // ローカル変数のアドレスを呼び出し元に返す。これはやってはいけない！
  return &f1_i1;
}

void f2(int f2_a1, int f2_a2)
{
  int f2_i1 = 0;
  int f2_i2 = 0;

  // 何度目のf2の実行かをg2で記録する
  g2++;

  // 関数の引数のアドレスを表示
  printf("[%d-%d] f2_a1 ADDRESS: %p\n", g1, g2, &f2_a1);
  printf("[%d-%d] f2_a2 ADDRESS: %p\n", g1, g2, &f2_a2);

  // ローカル変数のアドレスを表示
  printf("[%d-%d] f2_i1 ADDRESS: %p\n", g1, g2, &f2_i1);
  printf("[%d-%d] f2_i2 ADDRESS: %p\n", g1, g2, &f2_i2);

  // f2は自分自身を呼び出す(再帰呼び出し)。
  // 2回呼び出されるようにg2でコントロールする
  if(g2 < 2){
    f2(0, 0);
  }
}

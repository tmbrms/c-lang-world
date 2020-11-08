int g1 = 0;
int g2 = 0;

int* f1(int f1_a1, int f1_a2);
void f2(int f2_a1, int f2_a2);

int main(int argc, char **argv)
{
  int *f1_i1_1 = f1(0, 0);

  g2 = 0;
  int *f1_i1_2 = f1(0, 0);
}

int* f1(int f1_a1, int f1_a2)
{
  int f1_i1 = 0;

  g1++;
  f2(0, 0);

  return &f1_i1;
}

void f2(int f2_a1, int f2_a2)
{
  g2++;

  if(g2 < 2){
    f2(0, 0);
  }
}

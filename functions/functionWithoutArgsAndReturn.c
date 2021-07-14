#include <stdio.h>

void sum();

int main(int argc, char const *argv[])
{
  sum();
  return 0;
}

void sum()
{
  int a, b, sum;
  a = 100;
  b = 100;

  sum = a + b;
  printf("The result is: %d", sum);
}
#include <stdio.h>

int n = 20;

int main(int argc, char const *argv[])
{
  while (/* condition */ n > 10)
  {
    printf("n is equal to %d \n", n);
    n -= 1;
  } 

  return 0;
}

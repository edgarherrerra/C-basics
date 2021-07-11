#include <stdio.h>

int n = 20;

int main(int argc, char const *argv[])
{
  do
  {
    printf("n is equal to %d \n", n);
    n -= 1;
  } while (n > 10);
  
  return 0;
}

#include <stdio.h>

int n = 1;

int main(int argc, char const *argv[])
{
  switch (n)
  {
  case /* constant-expression */ 1:
    /* code */
    printf("N is equal to 1!");
    break;
  
  default:
    break;
  }  

  return 0;
}

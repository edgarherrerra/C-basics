#include <stdio.h>

int n = 11;

int main(int argc, char const *argv[])
{
  /* code */
  if (n > 10 && n < 20)
    printf("The number is greater than 10 but less than 20");
  else if (n == 10 || n == 100)
    printf("The number is equal to 10");
  else
    printf("Number doesn't exist!");
  
  return 0;
}

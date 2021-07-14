#include <stdio.h>
#include <math.h>

int x;
float result;

int main(int argc, char const *argv[])
{
  printf("Enter the value of x:");
  scanf("%d", &x);

  result = sin(x);
  printf("The entered value is: %d \n", x);
  printf("The value of the sin of x is: %f\n", result);

  return 0;
}

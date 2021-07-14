#include <stdio.h>

// Declare
void sum();

int main(int argc, char const *argv[])
{
  // Call
  sum();
  return 0;
}

// Define
void sum()
{
  int a, b, sum;
  a = 100;
  b = 100;

  sum = a + b;
  printf("The result is: %d", sum);
}
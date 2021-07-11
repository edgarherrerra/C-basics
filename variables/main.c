#include <stdio.h>

/* If we don't have a initial value it's a good practice to initialize the variable with value 0.  */
int a, b, c = 0;
unsigned int minMinutes = 30;

char y = 'u';
unsigned char dailyWorkedHours = 0;

/* Extends the visibility of the C variables and functions, we can share varibles with other files. */
extern int d, f, g = 0;


int main()
{
  /* code */
  a = 1;
  b = 1;

  c = a + b;

  /* %d is a format specifier (read a value) for an integer value  */
  printf("The value of C is: %d", c);

  /* How to use extern variables. 
    We need to re-declare the extern variables.
   */
  int d, f, g = 0;

  return 0;
}

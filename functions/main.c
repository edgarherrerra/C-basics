/* 
  FUNCTIONS SYNTAX

  return-type function-name(parameter declartions, if any){
    declarations;
    statemets;
  }
 */

#include <stdio.h>


/* Declare function */
int power(int base, int n);

int main(int argc, char const *argv[])
{
  int i = 0, n = 2;
  for (i = 0; i < 10; i++)
  { 
    printf("n = %d resultado de la potencia = %d\n", i, power(i, n));
  }
  
  return 0;
}

/* We need to define/write the function after we declared. */
int power(int base, int n) 
{
  int i, p;
  p = 1;
  for (i = 0; i <= n; i++)
  {
    p *= base;
  }
  
  return p;
}

/* Function types */

// 1. Without arguments and return value.
void emptyFunction(void);

void emptyFunction(void) 
{
  /* Code */
}


// 2. With arguments but without a return value. 
void partialFunction(float);


void partialFunction(float) 
{
  /* Code */
}

// 3. Without arguments but with a return value.
int returnFunction();

// 4. With arguments and return a value.

/* As a side note about arguments:
  Pass-by-reference, the var is modified because it receives the memory location where the value is.
  pass-by-value, the var is not modified because the language create a copy. i.e it's a different memory location.

  C always uses pass-by-value
*/
int functionName(int, float);


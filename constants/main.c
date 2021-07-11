#include <stdio.h>

/* 
  Constant: A value that cannot change during the execution. 
  
  The main advantage of using constants is:
  - Readability: A value that will not be changed it's better to assign a name (description) to know 
    the meaning of that value, avoiding "magic numbers" or data without any description that can become confusing.

    Example: 
    
    int mass = 80;
    int weight = 9.81 * mass;
    What does 9.81 mean?

    A better writting:
    const float gravity = 9.81;

    int weight = gravity * mass;
 */

const float BILL = 100.05;
const char NEWLINE = '\n'; 

int main()
{
  return 0;
}

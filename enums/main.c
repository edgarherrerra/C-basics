#include <stdio.h>

/*  Enums are lists of constants that can we use when we need a predefined list of values. 
    That make our code easy to read and mantain.
*/

enum DAY            /* Defines an enumeration type    */
{
    saturday,       /* Names day and declares a       */
    sunday = 0,     /* variable named workday with    */
    monday,         /* that type                      */
    tuesday,
    wednesday,      /* wednesday is associated with 3 */
    thursday,
    friday
} workday;

int main(int argc, char const *argv[])
{
  /* code */
  enum DAY today = wednesday;

  printf("Today %d", today);

  return 0;
}

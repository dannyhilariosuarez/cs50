#include <stdio.h>
#include <cs50.h> 

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
int main(void)
{
  printf("How old are you? ");
  int age = GetInt();
  
  if (age == 10)
  {
    printf("The big 1 0. You're getting old.\n");
  }
  else 
  {
    printf("You gotcher whole life aheddaya.\n");
  }
}
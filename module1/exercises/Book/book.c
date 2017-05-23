#include <stdio.h>
#include <cs50.h>

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
int main(void)
{  
    printf("What is your favarite book? ");
    string book = GetString();
    
    printf("I love %s!\n", book);
    printf("...actually, %s is kind of meh.\n",book);
    
}


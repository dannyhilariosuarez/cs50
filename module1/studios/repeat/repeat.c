#include <stdio.h>
#include <cs50.h>

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 
int main(void)
{ 
    int time;
    printf("Give me a phrase: I am NOT a talking robot!\n\n");
       
    do
    {
        printf("How many times should I say it? (between 1 and 100): ");
        time = GetInt();
    }
    while((time < 1) || (time > 100));
    
    for(int a = 1; a <= time; a++)
    { 
        printf("Oh na na, what's my name.\n");
    }
}
 

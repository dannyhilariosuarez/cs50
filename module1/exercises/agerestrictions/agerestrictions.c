#include <stdio.h>
#include <cs50.h>

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/

void showAgerestrictions(int old);

int main(void)
{
    int old;
    
    printf("How old are you?");
    old = GetInt();
    showAgerestrictions(old);
    

}

void showAgerestrictions(int old)
{
    if(old < 16)
    {
        printf("You can't do much.\n");
    }
    else if(old >= 16 && old < 18)
    {
        printf("You can drive!\n");
    }
    else if(old >= 18 && old < 21)
    {
        printf("You can drive!\n");
        printf("You can vote!\n");
    }
    else if(old >= 21)
    {
        printf("You can drive!\n");
        printf("You can vote!\n");
        printf("You can drink!\n");
    }
}

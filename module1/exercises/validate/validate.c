#include <stdio.h>
#include <cs50.h>

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
void getEven();

int main(void)
{
    getEven();
}

void getEven()
{
    int evenNumber; 
     
    do
    {
        printf("Give me an even integer: ");
        evenNumber = GetInt() % 2;
    }
    while(evenNumber != 0);
    printf("Thanks! I got what I wanted.\n");

}
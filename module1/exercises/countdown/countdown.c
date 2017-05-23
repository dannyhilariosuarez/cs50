#include <stdio.h>
#include <cs50.h> 

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/

void countDown();

int main(void)
{
    countDown();
}

void countDown()
{
    printf("Count down from:");
    int valor = GetInt();
    
    if (valor < 0)
    {
        do
        {
            printf("Can't be less than 0\n\n");
            printf("Count down from:");
            valor = GetInt();
        }
        while(valor < 0);
    }
    
    for(int a = valor ; a >= 0; a = a - 1)
    {
        printf("%i ...\n", a);
    }
}
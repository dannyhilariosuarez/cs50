#include <stdio.h>
#include <cs50.h>
#include <math.h>


/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 

int main(void)          
{   
    printf("Gimme a dollar amount: ");
    float dollarAmount = GetFloat();
    dollarAmount = (dollarAmount * 100);
    dollarAmount = round(dollarAmount);
    dollarAmount = (dollarAmount / 100);
     
    printf("Oh, I think you mean $%.2f\n", dollarAmount);
} 

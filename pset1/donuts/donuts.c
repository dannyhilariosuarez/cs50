#include <stdio.h>
#include <cs50.h>


/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 

int main(void)
{
    float TotalNeto;
    float totalTax;
    float total;
    float tax = 0.05;
    
    printf("Welcome to the Loop Hole!\n");
    printf("Today's Manager's Special is:\n");
    printf("Crunch Jelly: A traditional jelly donut in which the jelly filling is made entirely of Capn' Crunch Berries Oops All Berries\n");
    
    printf("How many donuts do they want to buy?");
    float count = GetFloat();
    
    printf("How much do you want to pay per donut?");
    float pay = GetFloat();
    
    TotalNeto = (count * pay);
    totalTax = (TotalNeto * tax);
    total = TotalNeto + totalTax;
    
    printf("Ok, let me prepare that for you....\n");
    printf("After tax, your total is: %f\n", total);
    
    printf("Thank you for snacking! Loop back around here soon!\n");
      
}

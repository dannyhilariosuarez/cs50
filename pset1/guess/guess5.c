

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 
#include <stdio.h>
#include <cs50.h>

int main(void)
{ 
    int answer = 8;
    int number;
    
    printf("I'm thinking of a number between 1 and 10. Can you guess what it is?\n"); 
    
    for(int guess = 1; guess <= 5; guess++)
    { 
        printf("Guess #%i ===>", guess);
        number = GetInt();
        
        if(number == answer)
        {
            printf("\nCorrect :)!\n");
            guess = 5;
        }
        else if((number != answer && guess == 5))
        {
            printf("\nSorry, You ran out of guesses\n");
        } 
        else
        {
            printf("Wrong!\n");
        }
    } 
}


/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int answer = 8;
    int guess = 0;;
    int number;
    
    printf("I'm thinking of a number between 1 and 10. Can you guess what it is?\n"); 
    
    do
    {
        guess = guess + 1;
        printf("Guess #%i ===>", guess);
        number = GetInt();
        printf("Wrong!\n"); 
    }
    while(number != answer && guess < 5);
    
    if(number == answer)
    {
        printf("\nCorrect :)!\n");
    }
    else if(guess == 5)
    {
        printf("\nSorry, You ran out of guesses\n");
    }  
}
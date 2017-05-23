#include <stdio.h>
#include <cs50.h> 
#include <math.h>
#include <string.h>
#include <ctype.h>
 
void alphaPost(char letter);
 
int main(void)
{         
    printf("Give me a letter: ");
    char letter = GetChar();
    alphaPost(letter);
    
}

void alphaPost(char letter)
{
    int index = 0; 
    
    while(isalpha(letter) == false)
    {
        printf("Give me a letter: ");
        letter = GetChar();
    } 
    
    if((int) letter < 97)
    {
        for(int le = 65; le < 92; le++)
        {
            if(le == (int) letter)
        {
            printf("%c is at position %i\n", (char) le, index);
        }
            index++;
        } 
    }
    else
    {
        for(int le = 97; le < 123; le++)
        {
            if(le == (int) letter)
            {
                printf("%c is at position %i\n", (char) le, index);
            }
            index++;
        }
    } 
}
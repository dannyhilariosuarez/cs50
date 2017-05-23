#include <stdio.h>
#include <cs50.h> 

void dopyramid();

int main(void)
{
    dopyramid();
}

void dopyramid()
{
    printf("Can't be less than 1 or no greater than 23\n\n"); 
    int hash = 1; 
    int height = 0;
    
    do
    { 
        printf("Give me a Height:");
        height = GetInt();
    } 
    while((height < 0) || (height > 23));
    
    for(int a = 0; a < height; a++)
    {
        for(int b = a ; b < (height - 1); b++)
        {  
             printf(" ");
        }
        
        for(int b = 0; b <= hash; b++)
        {
            printf("#");
        } 
         
        hash++;
        printf("\n");
    
    }
}
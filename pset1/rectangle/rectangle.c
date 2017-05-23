#include <stdio.h>
#include <cs50.h>

int main(void)
{ 
    printf("Width: ");
    int widht = GetInt();
     
    printf("Height: ");
    int height = GetInt();
     
    for(int a = 0; a < height; a++)
    {
        for(int b = 0; b < widht; b++)
        {
            printf("<3");
        }
        printf("\n");
    }
}
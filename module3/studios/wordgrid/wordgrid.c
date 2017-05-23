#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void f(string input, int n);

int main(int argc, string argv[])
{  
    for (int i = 1; i < (argc - 2); i++)
    {
        for (int j = 0; j <= (argc - 2); j++)
        { 
            if(isalpha(argv[i][j]))
            {
                printf("%c%c%c", argv[i][j], argv[2][j], argv[3][j]);  
            }  
            printf(" ");
        }  
    }
    printf("\n");   
}
 
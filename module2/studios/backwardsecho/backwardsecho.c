#include <cs50.h>
#include <stdio.h>
#include <string.h>

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 

int main(int argc, string argv[])
{ 
    for (int i = 0; i < argc; i++)
    {
        for (int j = 0, n = strlen(argv[i]); n >= j; n--)
        { 
            printf("%c", argv[i][n]);
        } 
        printf(" ");
    }
    printf("\n");
}
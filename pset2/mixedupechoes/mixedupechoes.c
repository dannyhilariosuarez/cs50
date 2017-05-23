

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{  
    for (int j = 0, n = strlen(argv[0]); j < n; j++)
    { 
        printf("%c", argv[0][j]);
        printf("%c", argv[1][j % strlen(argv[1])]);
    }  
    printf("\n");
}
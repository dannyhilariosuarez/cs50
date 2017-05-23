#include <stdio.h>
#include <cs50.h>
#include <math.h>

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
int main(void)
{  
    int result;
    
    for(int n = 5;n <= 50; n = n + 5)
    {
        result = ((n + 1) * n) / 2;
        printf("Number %i  ====> %i\n", n, result);
    }
}  
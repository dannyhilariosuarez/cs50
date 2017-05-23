#include <stdio.h>
#include <cs50.h>

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
int main(void)
{
    float result;
    
    printf("float please: ");
    float percent1 = GetFloat();
    
    printf("float please: ");
    float percent2 = GetFloat();
    
    result = (percent1 / percent2) * 100.0;
    
    printf("%f\n", result); 
    
}
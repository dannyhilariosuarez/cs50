#include <cs50.h>
#include <stdio.h>
#include "mult.h"

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 


int mult(int x, int y)
{
    if ((x < 0 && y < 0) || (y < 0))
    {
        x = -x;
        y = -y;
    }
    if (x == 0 || y == 0) 
        return 0; 
    else 
        return (x + mult(x, y - 1)); 
}
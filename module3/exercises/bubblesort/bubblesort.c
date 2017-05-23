#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 

void sort(int arr[], int size);

int main(void)
{
    
    int array[8] = {2, 4, 6, 1, 3, 7, 5, 8};
    
    for(int a = 0; a < 8; a++ )
    { 
        printf("%i ", array[a]);
    }
    printf("\n");
    sort(array, 8); 
}

void sort(int arr[], int size)
{ 
    for(int a = 0; a <= 8; a++)
    {
        for(int b = 0; b < (a - 1); b++)
        {
            if(arr[b] > arr[b + 1])
            {
                int result = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = result; 
            } 
        } 
    } 
    
    for(int a = 0; a < 8; a++ )
    {
        printf("%i ", arr[a]); 
    }
    printf("\n");
}
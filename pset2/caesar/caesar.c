

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
 
  
int main(int argc, string argv[])
{   
    int key = 0;
    bool pass;
     
    do
    { 
        if(argc != 2)
        {
            printf("You didn't submit a valid encryption key.\n");
            printf("Please check your input and re-run the programm.\n");
            printf("We require an integer as encryption key.\n");
            return 1;
        }
        else
        { 
            key = atoi(argv[1]); 
            pass = true;
        }
    } while(!pass);
    
       
    string p = GetString();  
    for (int i = 0, n = strlen(p); i < n ; i++)
    {     
        if(isalpha(p[i]))
        {
            if(islower(p[i]))
            {
                printf("%c", ((((p[i] - 97) + key) % 26) + 97));
            }
            else
            { 
                 printf("%c", ((((p[i] - 65) + key) % 26) + 65));
            }  
            
        }
        else
        {
            printf("%c", p[i]);
        }  
    }  
    printf("\n");
}
 
#import <stdio.h>
#import <cs50.h>
#import <math.h>
#import <string.h>

/**************************************************************************** 
 * Danny Hilario Suarez
 ***************************************************************************/
 
 

int main(void)
{
    int lenght;
    
    printf("How's your day going?");
    string valor = GetString();
    lenght = strlen(valor);
    
    if (lenght < 20)
    {
        printf("Not much of a talker, I see. Maybe elaborate a little more next time.\n");        
    }
    else if (lenght > 50)
    {
       printf("zzzzzz... Huh? Oh yeah, totally. I know what you mean...\n");  
    } 
    else if(lenght > 20 && lenght < 50)
    {
        printf("Nice! Mine's going well, thanks for asking.\n"); 
    } 
}
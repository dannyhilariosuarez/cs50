#include <stdio.h>
#include <cs50.h> 

void countBottler();

int main(void)
{
    countBottler();
}

void countBottler()
{
    int valor;
    
    printf("Minutes:");
    int minute = GetInt();
    valor = ((minute * 1.5) * 128) / 16;
    
    printf("Bottlers: %i \n", valor); 
}
/*C program to check whether a character is an alphabet, digit, or special character.*/
#include <stdio.h>

int main()
{
    char var;//Declaring Variable
    printf("Enter any character: ");
    scanf("%c", &var);//Assigning Values
//Running Condition
    if((var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z'))
    {
        printf("'%c' is an alphabet", var);
    }
    else if(var >= '0' && var <= '9')
    {
        printf("'%c' is a digit", var);
    }
    else 
    {
        printf("'%c' is a special character", var);
    }

    return 0;
}
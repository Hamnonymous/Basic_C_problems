/* C program to print the day name of the week.*/
#include <stdio.h>

int main()
{   //Declaring Variable and assigning Value
    int week;
    printf("Enter week number (1-7): ");
    scanf("%d",&week);
//Processing condiitons
    if(week == 1)
    {
        printf("Monday");
    }
    else if(week == 2)
    {
        printf("Tuesday");
    }
    else if(week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("Thursday");
    }
    else if(week == 5)
    {
        printf("Friday");
    }
    else if(week == 6)
    {
        printf("Saturday");
    }
    else if(week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Please enter week number between 1-7.");
    }

    return 0;
}

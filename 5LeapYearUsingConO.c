/*C program to check leap year using conditional Operator.
*/
#include<stdio.h>

int main(){
int year;//Declaring Variables
printf("Enter the Year: ");
scanf("%d",&year);//Assigning values
//Processing Condition
(year%400==0)?printf("Leap Year\n"):((year%100==0)?printf("Not a leap year\n"):(year%4==0)?printf("Leap year\n"):printf("Not a leap year\n"));
return 0;
}
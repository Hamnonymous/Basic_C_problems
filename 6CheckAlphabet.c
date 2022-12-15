/*C program to check alphabets using conditional operator.*/
#include<stdio.h>

int main(){
char var;//Declaring Variable
printf("Enter a character: ");
scanf("%c",&var);//Assigning Value
//Processing the Condition
((var>='a' && var<='z')||(var>='A' && var<='Z'))?printf("It's an alphabet\n"):printf("Not an alphabet\n");
return 0;
}
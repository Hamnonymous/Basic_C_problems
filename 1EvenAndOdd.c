/*C Program to check whether an integer entered by the user is odd or even*/
#include<stdio.h>

int main(){
//Declaring and assigning values to variable
int num1;
printf("Enter a integer number: ");
scanf("%d",&num1);
//Running if-else condition for checking Even or Odd number
if (num1%2==0)
{
  printf("\nEven number");
}
else
  printf("\nOdd number");

return 0;
}
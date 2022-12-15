/*C program to accept two integers and check whether they are equal or not.*/
#include<stdio.h>

int main(){
  //Declaring and Assigning values to variables
int Num1,Num2;
printf("Enter two Number: ");
scanf("%d %d",&Num1,&Num2);
//Processing Condition
if (Num1 == Num2)
{
  printf("Numbers are Equal");
}
else
{
  printf("Numbers are not Equal");
}
return 0;
}
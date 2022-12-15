/*C Program to find the Largest among Three Variables using Nested if.*/
#include<stdio.h>

int main(){
//Declaring and assigning value to variables
int num1,num2,num3;
printf("Enter 3 numbers: ");
scanf("%d %d %d",&num1,&num2,&num3);
//Processing the condition
if (num1 > num2)
{
  if (num1 > num3)
  {
    printf("%d is largest among three numbers\n",num1);
  }
  else
  printf("%d is largest among three numbers\n",num3); 
}
else
{
  if (num2 > num3)
  {
    printf("%d is largest among three numbers\n",num2);
  }
  else
  printf("%d is largest among three numbers\n",num3); 
}
return 0;
}
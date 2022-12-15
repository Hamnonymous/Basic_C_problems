/*C program to check number is positive, negative, or zero.
*/
#include<stdio.h>

int main(){
  //Declaring Variables and assigning value
int num1;
printf("Enter a number: ");
scanf("%d",&num1);
//Processing the Condition
if (num1 >= 0)
{
  if (num1 == 0)
  {
    printf("Number is zero\n");
  }
  else
  {
    printf("Number is Positive\n"); 
  } 
}
else{
printf("Number is Negative\n");
}
return 0;
}
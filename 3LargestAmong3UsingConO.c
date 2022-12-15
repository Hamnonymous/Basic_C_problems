/*C Program to Find the Largest Number using Conditional Operator.*/
#include <stdio.h>  
int main()  
{  //Declaring variables
    int num1,num2,num3;
printf("Enter 3 numbers: ");
scanf("%d %d %d",&num1,&num2,&num3);//Assigning values
//Processing the condition
(num1>num2)?((num1>num3)?printf("%d is largest",num1):printf("%d is largest",num3)):((num2>num3)?printf("%d is largest",num2):printf("%d is largest",num3));
    return 0;  
} 
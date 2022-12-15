/* C program to enter the month number and print the number of days in a month.*/
#include<stdio.h>

int main(){
int M_num;//Declaring Variable
printf("Enter Month Number: ");
scanf("%d",&M_num);//Assigning Value
//Processing Condition
if (M_num == 1 || M_num == 3 || M_num == 5 || M_num == 7 || M_num == 8 || M_num == 10 || M_num == 12 )
{
  printf("This Month has 31days");
}
else if (M_num == 4 || M_num == 6 || M_num == 9 || M_num == 11)
{
  printf("This Month has 30days");
}
else if (M_num == 2)
{
  printf("This Month has 28days");
}
else
{
 printf("Enter a Month Number from 1-12");
}


return 0;
}
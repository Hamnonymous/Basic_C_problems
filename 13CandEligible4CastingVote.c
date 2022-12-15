/*C program to determine whether a candidate’s age is eligible for casting a vote or not.*/
#include<stdio.h>

int main(){
int age;//Declaring variable
printf("Enter Age of Candidate: ");
scanf("%d",&age);//assigning value
//Processing the Condition
if (age>= 18)
{
  printf("Candidate is Eligible for vote \n");  
}else{
printf("Candidate is not Eligible for vote\n");
}

return 0;
}
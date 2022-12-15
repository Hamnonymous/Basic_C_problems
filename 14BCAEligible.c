/*C program to find the eligibility of admission for the BCA course based on the criteria.
*/
#include<stdio.h>

int main(){
  //Declaring variables and assigning Values
int class,marks;
printf("Last Class PassedOut? :");
scanf("%d",&class);
printf("Marks achieved in Last Class :");
scanf("%d",&marks);
//Processing the Condition
if (class == 12)
{
  if (marks >= 50)
  {
    printf("Candidate is Eligible for BCA");
  }else{
    printf("50 marks is required to get eligible for BCA");
  }
  
}else if(class < 12){
  printf("Need to Pass Class-12");
}else{
  printf("Enter a Valid Class");
}

return 0;
}
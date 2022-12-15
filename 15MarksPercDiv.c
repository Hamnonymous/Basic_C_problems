/*C program to calculate the total marks, percentage, and division of students.*/
#include<stdio.h>

int main(){
  //Declaring Variables and assigning values
float marks,T_marks,pert;
int division;
printf("Enter Student's Marks: ");
scanf("%f",&marks);
printf("Enter Total Marks: ");
scanf("%f",&T_marks);

pert=((marks/T_marks)*100);//Calculating Percentage
//Processing the condition
if (pert > 100)
{
  printf("Obtained Marks is Greater than Total Marks");
}
else if(pert >= 60){
  division = 1;
  printf("Congratualtion!!! Candidate passed the exam with %f percentage marks and %dst division",pert,division);
}
else if(pert >= 40)
{
  division = 2;
  printf("Congratualtion!!! Candidate passed the exam with %f percentage marks and %dnd division",pert,division);
}
else if(pert >= 35)
{
  division = 3;
  printf("Congratualtion!!! Candidate passed the exam with %f percentage marks and %drd division",pert,division);
}
else{
  printf("Candidate Failed the Exam");
}

return 0;
}
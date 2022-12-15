/* C program to check whether a triangle can be formed by the given value for the angles.*/
#include<stdio.h>

int main(){
float Ang1,Ang2,Ang3;//Declaring variables
printf("Enter All 3 Angels: ");
scanf("%f %f %f",&Ang1,&Ang2,&Ang3);//assigning values
//Processing the Condition
if ((Ang1+Ang2+Ang3) == 180)
{
  printf("Triangle can be made with this 3 angles");
}
else{
  printf("Triangle can't be made with this 3 angles");
}

return 0;
}
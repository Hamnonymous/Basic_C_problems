/*C program to check uppercase or lowercase alphabets.*/
#include<stdio.h>

int main(){
  //Declaring variables and assigning value
char var;
printf("Enter a character: ");
scanf("%c",&var);
//processing the condition
if (var>='a' && var<='z')
{
  printf("Character is Lower case Alphabet");
}
else if (var>='A' && var<='Z')
{
  printf("Character is Upper case Alphabet");
}
else{
  printf("Enter a valid Alphabet");
}


return 0;
}
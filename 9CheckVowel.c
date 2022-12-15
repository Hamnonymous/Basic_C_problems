/*C program to check entered character vowel or consonant.*/
#include<stdio.h>

int main(){
  //Declaring Variable and assigning value
char var;
  printf("Enter an alphabet: ");
scanf("%c",&var);
//Processing Condition
if((var>='a' && var<='z')||(var>='A' && var<='Z')){
if (var == 'a'|| var == 'e'|| var == 'i'|| var == 'o'|| var == 'u'|| var == 'A'|| var == 'E'|| var == 'I'|| var == 'O'|| var == 'U')
{
  printf("It's a Vowel");
}
else{
  printf("It's a Consonant");
}
}
else{
  printf("Not an alphabet");
}
return 0;
}
%{
 #include<stdio.h>
 int v=0,c=0;
%}
%%
[ \t\n]+;
[aeiouAEIOU] {v++;}
[^aeiouAEIOU] {c++;}
%%
int main(){
  printf("LEX Program to recognize and display the number of vowels and consonants\n");
  printf("\nEnter Input :- ");
  yylex();
  printf("Number of Vowels :- %d \n",v);
  printf("Number of Consonents :- %d \n",c);
}
int yywrap(){
  return 1;
}
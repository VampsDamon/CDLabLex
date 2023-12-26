%{
 #include<stdio.h>
%}
%%
"Hii" {printf("Shahid");}
.* {printf("Error");}
%%
void main(){
  printf("Enter the Input :- ");
  yylex();
}
int yywrap(){
 
  return 1;
  
}
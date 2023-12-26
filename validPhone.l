%{
 #include<stdio.h>
%}
%%
^[1-9][0-9]{9} {printf("Valid Phone Number");}
.* {printf("Invalid Phone Number");} 
%%
int main(){
 printf("Enter Input :- ");
 yylex();
}
int yywrap(){
 return 1;
}
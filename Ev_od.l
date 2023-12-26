%{
#include<stdio.h>
int x;
%}
%%
[0-9]+ {x=atoi(yytext);
 if(x%2==0){ 
   printf("Even");
}
  else{
   printf("Odd");
}
}
.* {printf("%s is not valid I/p ",yytext);}
%%
int main(){

  printf("Enter number to check Even or Odd :- ");
  yylex();
}
int yywrap(){
 return 1;
}
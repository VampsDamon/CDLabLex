%{
 #include<stdio.h>
%}
%%
if |
else |
printf {printf("\n%s is KeyWord ",yytext);}
[0-9]+ {printf("\n%s is Number ",yytext);}
[a-zA-Z]+ {printf("\n%s is Word ",yytext);}
. | /n {ECHO;}
%%
int main(){
  printf("Lex Program to recognize and display keywords, numbers, and words in a given statement\n");
  printf("\n Enter Input :- ");
  yylex();
 
}
int yywrap(){
  return 1;
}
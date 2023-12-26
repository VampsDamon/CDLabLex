%{
#include <stdio.h>
%}

DIGIT [0-9]

%%

([1-9]|1[0-2]):[0-5][0-9][APap][Mm] { printf("Valid time\n"); }
.* { printf("Invalid time\n"); }

%%

int main() {
    printf("Enter time (12-hour format): ");
    yylex();
    
}
int yywrap(){
return 0;
}
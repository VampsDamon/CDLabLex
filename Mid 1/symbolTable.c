#include<stdio.h>
#include<ctype.h>
int main()
{
char exp[50],c;
int i=0;
printf("Enter expression Terminate expression by $\n");
while((c=getchar())!='$'){
    exp[i]=c;
    i++;
}
printf("\n\t\tSymbol Table\t\t\n");
printf("Symbole\t\tAddress\t\tType\n");
for(int j=0;j<i;j++){
    c=exp[j];
    if(c=='+'||c=='-'||c=='/'||c=='*'||c=='=')
     printf("  %c\t  %d\t   Operator\n",exp[j],exp+j);
     else if(c>='a' && c<='z' || c>='A' && c<='Z'|| isdigit(c))
     printf("  %c\t  %d\t  Identifre\n",exp[j],exp+j);
}
return 0;
}
#include<stdio.h>
int main()
{
    FILE *fp=fopen("a.txt","r");
    if(fp==NULL){
        printf("File can not Open\n ");
    }
    char ch,fch;
    int count=0;
    printf("Enter char to Find number of Count :- ");
    scanf("%c",&ch);
    while(fscanf(fp,"%c",&fch)!=EOF){
        if(fch==ch)
         count++;
    }
    printf("Total number of '%c' is :- %d\n",ch,count);

return 0;
}
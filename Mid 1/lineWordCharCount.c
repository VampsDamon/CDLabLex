#include<stdio.h>
#include<string.h>
int main()
{
FILE *fp=fopen("a.txt","r");
if(fp==NULL){
  printf("File can not Open\n ");
}
int line=0,word=0,ch=0;
char w[50],chh;
while(fscanf(fp,"%s%c",&w,&chh)!=EOF){
    word++;
    ch+=strlen(w);
    if(chh=='\n')
     line++;
}
printf("Total number of lines :- %d\n",line);
printf("Total number of Words :- %d\n",word);
printf("Total number of Characters :- %d\n",ch);
return 0;
}
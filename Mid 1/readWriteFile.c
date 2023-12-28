#include<stdio.h>
#include<string.h>
int main()
{
  FILE *fp;
  fp=fopen("a.txt","r");
  FILE *fp2=fopen("a.txt","w");
  char str[100];
  if(fp==NULL || fp2==NULL){
    printf("File can not open\n");
    return 1;
  }
  fprintf(fp2,"Shahid Loves Coding\n");
  fclose(fp2);
  while(fscanf(fp,"%s",str)!=EOF){
    printf("%s ",str);
  }
  fclose(fp);

return 0;
}
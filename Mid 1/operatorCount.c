#include<stdio.h>
int optCheck(char ch){
    char opt[10]={'+','-','*','/','>','<','^','%','!','='};
    for(int i=0;i<10;i++){
        if(ch==opt[i])
         return 1;
    }
    return 0;
}
int main()
{
  int count=0;
  char ch;
  FILE *fp=fopen("b.txt","r");
  if(fp==NULL){
    printf("File can not open\n");
  }
  while(fscanf(fp,"%c",&ch)!=EOF){ 
    if(optCheck(ch)){
    printf("Opt :- %c\n",ch);
     count++;
    }
  }
  printf("Total number of Operator are :- %d\n",count);
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char keyWord[100][10]={"if","else","for","goto","while","int","char","double","float","return"};
    char n[10];
    int flag=0;
    printf("Enter the Keyword :- ");
    scanf("%s",&n);
    for (int i = 0; i < 10; i++)
    {
        if(strcmp(n,keyWord[i])==0)
        {
            flag=1;
            break;
        }
    }
    if(flag){
        printf("%s is Keyword\n",n);
    }
    else {
        printf("%s is Not Keyword\n",n);
    }
    
return 0;
}
#include<stdio.h>
#include<conio.h>
int main(){
 int arr[5]={2,3,19,38,90};
 int s=0,e=4,mid,ss=35,ee=0;

 while(s<=e){
 mid=(s+e)/2;
   if(arr[mid]==ss){
      ee=mid;
      break;
      }
   else if(ss<arr[mid])
     e=mid-1;
   else
    s=mid+1;
    printf("Working\n");
 }
 if(!ee)
  printf("%d is not Found\n",ss);
 else
   printf("%d is Found at index %d\n",ss,ee);
 getch();
 return 0;
}
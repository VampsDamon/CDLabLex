#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
 int temp=*a;
 *a=*b;
 *b=temp;
}
int partion(int arr[],int s,int e){
 int pivot=s,count=0,i,j,pivotIndex;
 for(i=s;i<=e;i++)
  if(arr[i]<arr[pivot])
  count++;
 pivotIndex=count+pivot;
 swap(&arr[pivot],&arr[pivotIndex]);
 i=s;
 j=e;
 while(i<=j && i<pivotIndex&&pivotIndex<j){

     while(i<pivotIndex && arr[i]<arr[pivotIndex])
      i++;
     while(j>pivotIndex && arr[j]>arr[pivotIndex])
     j--;

   swap(&arr[i],&arr[j]);
 }
  return pivotIndex;

}
void quickSort(int arr[],int s,int e){
int p;
  if(s>=e)
    return;
   p=partion(arr,s,e);

  quickSort(arr,s,p-1);
  quickSort(arr,p+1,e);
}
void printArr(int arr[],int n){
  int i;
  for(i=0;i<n;i++)
   printf("%d\t",arr[i]);
  printf("\n");
}
int main(){
 int arr[5]={10,15,3,23,2};
 clrscr();
 printf("Array before Sorting :- \n");
 printArr(arr,5);
 printf("Array After Sorting :- \n");
 quickSort(arr,0,4);
 printArr(arr,5);

 getch();
 return 0;
}
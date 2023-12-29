#include<conio.h>
#include<stdio.h>
void printArr(int *arr,int n){
   int i;
   for(i=0;i<n;i++){
     printf("%d\t",arr[i]);
   }
   printf("\n");

}
void merge(int *arr,int s,int e){
  int m=(s+e)/2;
  int a[10]={0};
  int b[10]={0};
  int i,j,k;
  k=s;
  for(i=0;i<=m-s+1;i++){
   a[i]=arr[k];
  k++;
  }
// printArr(a,3);
   k=m+1;
  for(i=0;i<=e-m;i++){
   b[i]=arr[k];
   k++;
  }
  i=0,j=0,k=s;
  while(i<m-s+1  && j<e-s){

     if(a[i]<=b[j])
       arr[k++]=a[i++];
     else
      arr[k++]=b[j++];

  }

  while(i<m-s+1){
    arr[k++]=a[i++];

  }
  while(j<e-s){
   arr[k++]=b[j++];
  }



}
void mergeSort(int *arr,int s,int e){

   if(s<e){
   int m=(s+e)/2;
   mergeSort(arr,s,m);
   mergeSort(arr,m+1,e);
   merge(arr,s,e);
   }
}
int main(){
  int arr[5]={3,4,14,2,41};
     clrscr();
     printArr(arr,5);
    mergeSort(arr,0,4);
    printArr(arr,5);
  getch();
  return 0;
}
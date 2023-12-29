#include<stdio.h>
#include<conio.h>
void printAdjList(int adjList[][100],int vertex){
    int i,j;
    for(i=0;i<vertex;i++){
      for(j=0;j<vertex;j++){
	printf("%d   ",adjList[i][j]);
      }
      printf("\n");
    }

}
void dfs(int adjList[][100],int vertex,int start){
 int visited[100],i;
 visited[start]=1;
 printf("%d   ",i);
 for(i=0;i<vertex;i++){
   if(adjList[start][i]==1 && visited[i]!=1)
    dfs(adjList,vertex,i);
 }
}
void bfs(int adjList[][100],int vertex,int start){
    int visited[100],front=0,rear=-1,q[100],i,j;

    for(i=0;i<vertex;i++)
     visited[i]=0;
    printf("Traversing order of BFS is :- \n");
    q[++rear]=start;
    visited[start]=1;
    while(front<=rear){
    start=q[front++];
    printf("%d\t",start);

    for(i=0;i<vertex;i++){

      if(adjList[start][i]==1 && visited[i]!=1){
	q[++rear]=i;
	visited[i]=1;
      }
    }
  }

}
void main(){
  int adjList[100][100],vertex,src,dest,i,j;
  clrscr();
  printf("\nEnter the Number of Vertext :- ");
  scanf("%d",&vertex);
  printf("%d is vertex\n",vertex);
  for(i=0;i<vertex;i++){
    for(j=0;j<vertex;j++){
      adjList[i][j]=0;
    }
  }
  while(src!=-1 && dest!=-1){
   printf("Enter the vertex of edges b/w (%d,%d):- ",vertex,vertex);
   scanf("%d %d",&src,&dest);
   adjList[src][dest]=1;
   adjList[dest][src]=1;
  }


  printf("Adjesncy List :- \n");
   printAdjList(adjList,vertex);
   printf("Enter starting node for traversal :- ");
   scanf("%d",&i);
   printf("Enter 1 for bfs Traversl 0 for DFS Traversal :- ");
   scanf("%d",&j);
   if(j){
   bfs(adjList,vertex,i);
   }
   else{
   dfs(adjList,vertex,i);
   }

  getch();
}
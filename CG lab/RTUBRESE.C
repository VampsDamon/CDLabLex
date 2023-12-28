#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
int main(){
int gd=DETECT,gm,x1=100,y1=100,x2=200,y2=200,dx,dy,x,y,i,p;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
clrscr();
dx=x2-x1;
dy=y2-y1;
p=2*dx-dy;
x=x1,y=y1;
while(x<x2){

   putpixel(x,y,RED);
   x++;
   if(p<0){
    p=p+2*dy;
   }else{
     p=p+2*dy-2*dx;
     y++;
   }
}

 getch();
 closegraph();
 return 0;
}
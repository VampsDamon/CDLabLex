#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
int main(){
int gd=DETECT,gm,x1=100,y1=100,x2=200,y2=200,dx,dy,xincr,yincr,step,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
clrscr();
dx=x2-x1;
dy=y2-y1;
step=abs(dx)>abs(dy)?abs(dx):abs(dy);
xincr=dx/step;
yincr=dy/step;

for(i=1;i<=step;i++){
  putpixel(x1,y1,WHITE);
  x1+=xincr;
  y1+=yincr;
}
 getch();
 closegraph();
 return 0;
}
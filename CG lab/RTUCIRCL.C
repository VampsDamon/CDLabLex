#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
int main(){
int gd=DETECT,gm,x1=200,y1=200,r=100,x,y,p,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
clrscr();
 x=0;
 y=r;
 p=1-r;
 while(x<=y){
    putpixel(x+x1,y+y1,WHITE);
  putpixel(x+x1,-y+y1,WHITE);
  putpixel(-x+x1,-y+y1,WHITE);
  putpixel(-x+x1,y+y1,WHITE);
  putpixel(y+x1,x+y1,WHITE);
  putpixel(y+x1,-x+y1,WHITE);
  putpixel(-y+x1,-x+y1,WHITE);
  putpixel(-y+x1,x+y1,WHITE);
   if(p<0){
     p=p+2*x+1;
   }else{
     p=p+2*x-2*y+1;
     y--;
   }
   x++;
 }
 getch();
 closegraph();
 return 0;
}
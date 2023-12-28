#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void main(){
  int gd=DETECT,gm,x1,y1,x2,y2,tx,ty,sx,sy,angle,maxx,maxy;
  initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
  maxx=getmaxx();
  maxy=getmaxy();
  line(0,maxy/2,maxx,maxy/2);
  line(maxx/2,0,maxx/2,maxy);
  printf("Enter the co-ordinates of Line :- ");
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  line(x1,y1,x2,y2);
  outtextxy(x2-20,y2+20,"Line");
  printf("Enter translation Factor :- ");
  scanf("%d%d",&tx,&ty);
  line(x1+tx,y1+ty,x2+tx,y2+ty);
  outtextxy(x2+tx-20,y2+20+ty,"Translated Line");
  printf("Enter Scalling Factor :- ");
  scanf("%d%d",&sx,&sy);
  line(x1*sx,y1*sy,x2*sx,y2*sy);
  outtextxy(x2*sx-20,y2*sy+20,"Scaled Line");
  getch();
  closegraph();
}
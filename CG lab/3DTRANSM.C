#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void main(){
  int gd=DETECT,gm,x1,y1,x2,y2,tx,ty,sx,sy,sz,maxx,maxy;
  float ang,sint,cost;
  initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
  maxx=getmaxx();
  maxy=getmaxy();
  line(0,maxy/2,maxx,maxy/2);
  line(maxx/2,0,maxx/2,maxy);
  setfillstyle(LINE_FILL,YELLOW);
  printf("Enter the co-ordinates of Line :- ");
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  bar3d(x1,y1,x2,y2,20,1);
  outtextxy(x2-20,y2+20,"Line");
  printf("Enter translation Factor :- ");
  scanf("%d%d",&tx,&ty);
  bar3d(x1+tx,y1+ty,x2+tx,y2+ty,20,1);
  outtextxy(x2+tx-20,y2+20+ty,"Translated Line");
  printf("Enter Scalling Factor :- ");
  scanf("%d%d%d",&sx,&sy,&sz);
  bar3d(x1*sx,y1*sy,x2*sx,y2*sy,20*sz,1);
  outtextxy(x2*sx-20,y2*sy+20,"Scaled Line");
  printf("Enter Rotating Angle :- ");
  scanf("%f",&ang);
  cost=cos((ang*3.141)/180);
  sint=sin((ang*3.141)/180);

  bar3d(x1*cost-y1*sint,x1*sint+y1*cost,x2*cost-y2*sint,x2*sint+y2*cost,20,1);
  outtextxy(x2*cost-y2*sint-20,x2*sint+y2*cost+20,"Rotated Line");
  getch();
  closegraph();
}
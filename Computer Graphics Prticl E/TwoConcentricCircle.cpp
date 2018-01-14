#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void inner(int,int,int);
void outer(int,int,int);
int main()
{
int gd=DETECT,gm;

//clrscr();
initgraph(&gd,&gm,"c:\\tc\\");
inner(100,300,300);
outer(130,300,300);
getch();
}
void inner(int r,int xc,int yc)
{float d;
int x,y;
d=1.25-r;
x=0;
y=r;
do
{
if(d<0)
{

x=x+1;
d=d+2*x+1;
}
else
{
x=x+1;
y=y-1;
d=d+2*x-2*y+10;}
putpixel(xc+x,yc+y,5);
putpixel(xc-y,yc-x,5);
putpixel(xc+y,yc-x,5);
putpixel(xc-y,yc+x,5);
putpixel(xc+y,yc+x,5);
putpixel(xc-x,yc-y,5);
putpixel(xc+x,yc-y,5);
putpixel(xc-x,yc+y,5);
}
while(x<y);
}
void outer(int r,int xc,int yc)
{float d;
int x,y;
d=1.25-r;
x=0;
y=r;
do
{
if(d<0)
{
x=x+6;
d=d+2*x+1;
}
else
{
x=x+6;
y=y-6;
d=d+2*x-2*y+10;
}
 putpixel(xc+x,yc+y,5);
putpixel(xc-y,yc-x,5);
putpixel(xc+y,yc-x,5);
putpixel(xc-y,yc+x,5);
putpixel(xc+y,yc+x,5);
putpixel(xc-x,yc-y,5);
putpixel(xc+x,yc-y,5);
putpixel(xc-x,yc+y,5);
}
while(x<y);
}

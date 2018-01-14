#include <stdio.h>
#include <graphics.h>
#include<math.h>
#include<stdlib.h>
int xc,yc;
int scx,scy;

int pt[3][10]=

    {

        {60,180,60,180,180,60,60,120,180,120},
        {10,10,10,90,10,90,90,140,90,140},
     {1,1,1,1,1,1,1,1,1,1}
    };
void plot(int x1,int y1, int x2, int y2, int cx, int cy)
{
  y1 = y1*-1;
  y2 = y2*-1;
  int dx,dy,l,sx=1,sy=1,p,p0,temp,x,y,flag=0;
  putpixel(x1+cx, y1+cy, WHITE);
  putpixel(x2+cx, y2+cy, WHITE);
  dx=x2-x1;
  dy=y2-y1;
  sx=(dx<0)?-1:1;
  sy=(dy<0)?-1:1;
  dx = abs(dx);
  dy = abs(dy);
  if(dy>dx)
  {
      flag=1;
      temp = dy;
      dy = dx;
      dx = temp;
  }
  p= 2*dy-dx;
  x=x1;
  y=y1;
  putpixel(cx+x1, cy+y1, WHITE);
  l = dx;
  while(l--)
  {
      if(p<0)
      {
          if(flag==1)
              y=y+sy;
          else
              x=x+sx;
          putpixel(x+cx, y+cy, WHITE);
          p = p+2*dy;
      }
      else
      {
          x = x+sx;
          y = y+sy;
          putpixel(x+cx, y+cy, WHITE);
          p =  p+2*dy-2*dx;
      }
  }
  putpixel(x2+cx, y2+cy, WHITE);
  getch();
}
void Transform(float t[3][3])
{
    int i,j,k,sum=0,c[3][10];
    for(i=0;i<3;i++)
        for(j=0;j<10;j++)
            c[i][j]=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<10;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
                sum=sum+t[i][k]*pt[k][j];
            c[i][j]=sum;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<10;j++)
        {
            pt[i][j] = c[i][j];
        }
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\Program Files\CodeBlocks\MinGW\lib");
    int i,j,tscx,tscy;
    float scx,scy;
    xc = getwindowwidth()/2;
    yc = getwindowheight()/2;
    plot(0,-yc,2*xc,-yc,0,0);
    plot(xc,0,xc,-2*yc,0,0);
    for(i = 0;i < 10;i=i+2)
    {
        plot(pt[0][i],pt[1][i],pt[0][i+1],pt[1][i+1],xc,yc);
    }
    printf("\nEnter the point X co-ordinates for scaling : ");
    scanf("%d",&tscx);
    printf("\nEnter the point Y co-ordinates for scaling : ");
    scanf("%d",&tscy);
    //printf("%d %d\n",scx,scy);
    printf("\nEnter the scaling factor along X : ");
    scanf("%f",&scx);
    printf("\nEnter the scaling factor along Y: ");
    scanf("%f",&scy);
    float t1[3][3] = {{1,0,-tscx},{0,1,-tscy},{0,0,1}};
    Transform(t1);
    float t2[3][3] {{scx,0,1},{0,scy,1},{0,0,1}};
    Transform(t2);
    t1[0][2] = tscx;
    t1[1][2] = tscy;
    Transform(t1);
    initgraph(&gd, &gm, "C:\Program Files\CodeBlocks\MinGW\lib");
    plot(0,-yc,2*xc,-yc,0,0);
    plot(xc,0,xc,-2*yc,0,0);
    for(i = 0;i < 10;i=i+2)
    {
        plot(pt[0][i],pt[1][i],pt[0][i+1],pt[1][i+1],xc,yc);
    }
}


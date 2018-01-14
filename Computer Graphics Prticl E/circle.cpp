#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void pixel(int xc,int yc,int x,int y);
void circle2(int xc,int yc,int x,int y);
void circle3(int xc,int yc,int x,int y);

int main()
{
	    int gd=DETECT,gm,x,y,Pk;
	    //clrscr();
	    initgraph(&gd,&gm,"C://TURBOC3//bgi");
	    printf("*** Mid-Point Subdivision algorithm of circle ***\n");
	    x=0;
	    y=50;
	    Pk=1-50;
	    pixel(400,140,x,y);
	    circle2(480,140,x,y);
	    circle3(560,140,x,y);
	    while(x<y)
	    {
			if(Pk<0)
			{
				    x=x+1;
				    Pk=Pk+(2*x)+1;
			}
			else
			{
				    x=x+1;
				    y=y-1;
				    Pk=Pk+(2*x)-(2*y)+1;
			}
			pixel(400,140,x,y);
			circle2(480,140,x,y);
			circle3(560,140,x,y);
	    }
	    getch();
	    closegraph();
}
void pixel(int xc,int yc,int x,int y)
{
	    putpixel(xc+x,yc+y,7);
	    putpixel(xc+y,yc+x,7);
	    putpixel(xc-y,yc+x,7);
	    putpixel(xc-x,yc+y,7);
	    putpixel(xc-x,yc-y,7);
	    putpixel(xc-y,yc-x,7);
	    putpixel(xc+y,yc-x,7);
	    putpixel(xc+x,yc-y,7);
}
void circle2(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,7);
	putpixel(xc+y,yc+x,7);
	putpixel(xc-y,yc+x,7);
	putpixel(xc-x,yc+y,7);
	putpixel(xc-x,yc-y,7);
	putpixel(xc-y,yc-x,7);
	putpixel(xc+y,yc-x,7);
	putpixel(xc+x,yc-y,7);
}
void circle3(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,7);
	putpixel(xc+y,yc+x,7);
	putpixel(xc-y,yc+x,7);
	putpixel(xc-x,yc+y,7);
	putpixel(xc-x,yc-y,7);
	putpixel(xc-y,yc-x,7);
	putpixel(xc+y,yc-x,7);
	putpixel(xc+x,yc-y,7);
}

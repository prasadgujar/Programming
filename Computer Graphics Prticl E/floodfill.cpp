#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void floodFill(int x,int y,int oldcolor,int newcolor)
{
	if(getpixel(x,y) == oldcolor)
	{
    	putpixel(x,y,newcolor);
    	floodFill(x+1,y,oldcolor,newcolor);
    	floodFill(x,y+1,oldcolor,newcolor);
    	floodFill(x-1,y,oldcolor,newcolor);
    	floodFill(x,y-1,oldcolor,newcolor);
	}
}
int main()
{
	//int gm,gd=DETECT,radius;
	int x,y,i;
	//initgraph(&gd,&gm,"C://TC//bgi");
	initwindow(700,700);
	setcolor(RED);
	circle(100,100,30);
 	setcolor(BLUE);
	circle(100,100,15);
	floodFill(100,100,0,14);
	floodFill(120,100,0,15);
	delay(100);
	getch();
	system("pause");
	return 0;
}

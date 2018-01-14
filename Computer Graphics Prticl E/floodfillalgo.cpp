#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void floodfill(int x,int y,int fillcolor,int oldcolor)
{
    if(getpixel(x,y)==oldcolor)
    {
        setcolor(fillcolor);
        putpixel(x,y,fillcolor);
        //putpixel(x,y,fillcolor);
        floodfill(x+1,y,fillcolor,oldcolor);
        floodfill(x-1,y,fillcolor,oldcolor);
        floodfill(x,y+1,fillcolor,oldcolor);
        floodfill(x,y-1,fillcolor,oldcolor);
    }
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi:");
    rectangle(50,50,100,100);
    floodfill(55,55,15,0);
    //circle(80,80,10);
    //setcolor(BLUE);

    getch();
}



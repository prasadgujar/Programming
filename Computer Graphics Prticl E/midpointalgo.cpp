//#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int x,y,r,gd=DETECT,gm;
    float d;
    initgraph(&gd,&gm,"c:\\tc\\bgi:");
    printf("enter the radius:\n");
    scanf("%d",&r);
    x=0,y=r,d=1-r;
    do
    {
        putpixel(350+x,350+y,WHITE);
        putpixel(350+x,350-y,WHITE);
        putpixel(350-x,350+y,WHITE);
        putpixel(350-x,350-y,WHITE);
        putpixel(350+y,350+x,WHITE);
        putpixel(350+y,350-x,WHITE);
        putpixel(350-y,350+x,WHITE);
        putpixel(350-y,350-x,WHITE);
        if(d<0)
        {
            x=x+1;
            y=y;
            d=d+2*x+2;

        }
        else
        {
            x=x+1;
            y=y-1;
            d=d+2*(x-y)+1;
        }

    }while(x<y);

    getch();
}

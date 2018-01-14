#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int fact(int );
int com(int,int);
void bezier(int x[15], int y[15], int n, float midx, float midy);
int main()
{
	int gd = DETECT,gmode;

	int x[15],y[15],n,i;
	float midx,midy;
	initgraph(&gd,&gmode,"C://TurboC3/BGI");
	midx=getmaxx()/2;
	midy=getmaxy()/2;
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	printf("Enter the total no. of control points:\n");
	scanf("%d",&n);
	printf("Enter the X and Y Co-ordinates:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%d\n",&x[i],&y[i]);
	}

	bezier(x,y,n,midx,midy);
	getch();
}

void bezier(int x[15], int y[15], int n, float midx, float midy)
{
	float t, xp = 0, yp = 0;
	int i;
	for(t = 0.001;t<=1.00;t=t+0.001)
	{
		xp = 0; yp = 0;
		for(i=0;i<n;i++)
		{
			xp = xp + com(n-1,i)*pow(1-t,n-1-i)*pow(t,i)*x[i] ;
			yp = yp + com(n-1,i)*pow(1-t,n-1-i)*pow(t,i)*y[i] ;
		}
		xp = midx + xp;
		yp = midy - yp;
		putpixel(xp,yp,WHITE);
	}
}
int fact(int num)
{
	int i,f = 1;
	for(i=1;i<=num;i++)
	{
		f = f * i;
	}
	return f;
}

int com(int n, int r)
{
	int res;
	res = fact(n)/(fact(r) * fact(n-r));
	return res;
}

/*
Values:
*/

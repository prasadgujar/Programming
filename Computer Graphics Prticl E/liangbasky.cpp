//#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int x1,y1,x2,y2,xmax,xmin,ymax,ymin,xx1,yy1,xx2,yy2,dx,dy,i;
	int p[4],q[4];
	float t1,t2,t[4];
    printf("enter xmin and ymin");
	scanf("%d%d",&xmin,&ymin);
	printf("enter xmax and ymax");
	scanf("%d%d",&xmax,&ymax);
	setcolor(RED);
	rectangle(xmin,ymin,xmax,ymax);
	printf("enter x1");
	scanf("%d",&x1);
	printf("enter y1");
	scanf("%d",&y1);
	printf("enter x2");
	scanf("%d",&x2);
	printf("enter y2");
	scanf("%d",&y2);
	line(x1,y1,x2,y2);
	dx=x2-x1;
	dy=y2-y1;
	p[0]=-dx;
	p[1]=dx;
	p[2]=-dy;
	p[3]=dy;
	q[0]=x1-xmin;
	q[1]=xmax-x1;
	q[2]=y1-ymin;
	q[3]=ymax-y1;
	for(i=0;i < 4;i++){
		if(p[i]!=0){
			t[i]=(float)q[i]/p[i];
		}
		else
			if(p[i]==0 && q[i] < 0)
				printf("line completely outside the window");
			else
				if(p[i]==0 && q[i] >= 0)
					printf("line completely inside the window");
	}
	if (t[0] > t[2]){
		t1=t[0];
	}
	else{
		t1=t[2];
	}
	if (t[1] < t[3]){
		t2=t[1];
	}
	else{
		t2=t[3];
	}
	if (t1 < t2){
		xx1=x1+t1*dx;
		xx2=x1+t2*dx;
		yy1=y1+t1*dy;
		yy2=y1+t2*dy;
		printf("line after clipping:");
		setcolor(WHITE);
		line(xx1,yy1,xx2,yy2);
	}
	else{
		printf("line lies out of the window");
	}
	getch();
}

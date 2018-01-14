#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

#define NOP 6
#define NOR 3
#define PI 3.14159

void drawboat();
void multiply(float T[NOR][NOR]);
void move();
void translate(int Tx, int Ty);
void rotate(int angle);
void reflect(int x);
void scale(float factor);
void shear(float SHx, float SHy);
//void reset();

float multiplymat[NOR][NOP];
int P[NOR][NOP] = {{10,15,45,50,40,40},{30,15,15,30,45,30},{1,1,1,1,1,1}};
int A[NOP][NOP]= {{0,1,0,1,0,0},{1,0,1,0,0,0},{0,1,0,1,0,0}, {1,0,1,0,1,0}, {0,0,0,1,0,1},{0,0,0,0,1,0}};

int  Xc = 300, Yc=225;
int main ()
{

    int gd=DETECT, gm ;
    int X[]= {10,15,45,50,40,40};
    int Y[]= {30,15,15,30,45,30};

    initgraph(&gd, &gm, "C:\\CodeBlocks\\MinGW\\lib");

    drawboat();

    while(1)
    {
        int ch;
        printf("MENU\n1 Translate\n2 Rotate\n3 Scale\n4 Reflect\n5 Shear\n6 Exit\nEnter Choice : ");
        scanf(" %d", &ch);

        switch(ch)
        {
        case 1:
            int x,y;
            printf("\nIn x? : ");
            scanf(" %d", &x);
            printf("\nIn y? : ");
            scanf(" %d", &y);
            translate(x,y);
            break;

        case 2:
            int n;
            printf("Enter angle in degrees : ");
            scanf(" %d", &n);
            rotate(n);
            break;

        case 3:
            float n2;
            printf("Scaling Factor : ");
            scanf(" %f", &n2);
            scale(n2);
            break;



        case 4:
            float shx,shy;
            printf("\nIn x? : ");
            scanf(" %f", &shx);
            printf("\nIn y? : ");
            scanf(" %f", &shy);
            shear(shx,shy);
            break;

        case 5:
            closegraph();
            exit(0);

        default:
            printf("Invalid!\n");
        }
    }
}


void drawboat ()
{
    cleardevice();
    int j, k;
    for (j=0; j<=5; j++)
    {
        for (k=0; k<j; k++)
        {
            if (A[j][k]==1)
                line(P[0][k]+Xc,Yc-P[1][k],P[0][j]+Xc,Yc-P[1][j]);
        }
    }
    line(300,0,300,getmaxy());
    line(0,225,getmaxx(),225);

}

void translate(int Tx, int Ty)
{
    float T[NOR][NOR] = {{1, 0, Tx}, {0, 1, Ty}, {0, 0, 1}};
    multiply(T);
    drawboat();
}

void rotate(int angle)
{
    float angrad = angle*(PI/180);
    //printf("%f\n", angrad);
    float R[NOR][NOR] = {{cos(angrad), -sin(angrad), 0}, {sin(angrad), cos(angrad), 0}, {0, 0, 1}};
    multiply(R);
    drawboat();
}

void shear(float SHx, float SHy)
{
    float S[NOR][NOR] = {{1, SHx, 0}, {SHy, 1, 0}, {0, 0, 1}};
    multiply(S);
    drawboat();
}

/*void reflect(int x)
{

    float R[NOR][NOR];
    if(x == 1)          //about x
        R = {{1, 0, 0}, {0, -1, 0}, {0, 0, 1}};
    else if(x == 2)     //about y
        R = {{-1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    else if(x == 4)     //about x=y
        R = {{0, 1, 0}, {1, 0, 0}, {0, 0, 1}};
    else if(x == 3) // about origin
        R = {{-1, 0, 0}, {0, -1, 0}, {0, 0, 1}};
    else
    {
        printf("Invalid!\n");
        return;
    }
    multiply(R);
    drawboat();
}*/

void scale(float factor)
{
    float S[NOR][NOR] = {{factor, 0, 0},{0, factor, 0}, {0, 0, 1}};
    multiply(S);
    drawboat();
}

void multiply(float T[NOR][NOR])
{
    int c,d,k;
    float sum=0;
    //reset();
    for (c = 0; c < NOR; c++)
    {
        for (d = 0; d < NOP; d++)
        {
            for (k = 0; k < NOR; k++)
            {
                sum = sum + T[c][k]*P[k][d];
            }

            multiplymat[c][d] = sum;
            sum = 0;
        }
    }
    move();
}

void move()
{
    int i, j;
    for(i=0; i<NOR; i++)
        for(j=0; j<NOP; j++)
        {
            P[i][j] = multiplymat[i][j];
        }
}

/*void reset()
{
    P = {{10,15,45,50,40,40},{30,15,15,30,45,30},{1,1,1,1,1,1}};
}*/

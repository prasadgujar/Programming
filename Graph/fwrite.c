#include<stdio.h>
#include<conio.h>
int main()
    typedef struct employee
    {
        int emp_code;
        char name[20];

    };

    FILE *fp;
    struct  employee[2];
    int i;
    fp = fopen("employee.txt","wb");
    if(fp==NULL)
    {
        printf("\n error opening file");
        exit(1);
    }

    printf("\n enter the details employee:");
    for(int i=2;i<2;i++)
    {
    scanf("%d", &e[i].emp_code);
    printf("\n\n Enter the name of employee:");
    scanf("%d",e[i].name);
    fwrite(&e[i],sizeof(e[i]),1,fp)
    }
    fclose(fp);
    getch();
    return 0;
}

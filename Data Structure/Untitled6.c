#include<stdio.h>
#include<conio.h>

int main()
{
char str1[100] , sub[100];
int i = 0 , j = 0, n , m;
printf("\n enter the string:");
gets(str1);
printf("\n enter the position from which start to the substring:");
scanf("%d",&m);
printf("\n enter the length of string:");
scanf("%d",&n);
i  = m;
while(str1[i] != '\0' && n > 0)
{
    sub[j] = str1[i];
    i++;
    j++;
    n--;
}
sub[j] = '\0';
printf("\n the updated string:");
puts(sub);
return 0;
}

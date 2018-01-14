#include<stdio.h>
#include<conio.h>

int main()
{

char str1[100], reserve_str[100], temp ;

int i = 0 , j = 0;

printf("\n enter the string:");
gets(str1);
j = strlen(str1)-1;
while(i<j)
{
    temp = str1[j];
    str1[j] = str1[i];
    str1[i] = temp;
    i++;
    j--;
}

printf("\n the reserved string:");
puts(str1);

return 0;
}

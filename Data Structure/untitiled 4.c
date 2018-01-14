#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char str1[100], str2[100];
int i = 0 , len1 = 0 , len2 = 0, same = 0;
printf("\n enter the string 1:");
gets(str1);
printf("\n enter the string 2:");
gets(str2);
len1 = strlen(str1);
len2 = strlen(str2);
if(len1 == len2)
{
while(i<len1)
{
    if(str1[i]==str2[i])
        i++;
    else
        break;

}
if(i==len1)
{
    same =  1;
    printf("\n the two string are equal:");
}

}

if(len1!=len2)
    printf("\n the two strings are not equal:");
if(same==0)
{
    if(str1[i]>str2[i])
        printf("\n the string 1 is greater than string 2:");
    else
        printf("\n the string 2 is greater than string 1:");
}
}

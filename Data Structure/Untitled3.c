#include<stdio.h>
#include<conio.h>
int main()
{
    char dest_str[100],source_str[100];
    int i = 0, j = 0;
    printf("\n enter the source string:");
    gets(source_str);
    printf("\n enter the destination string:");
    gets(dest_str);
    while(dest_str[i]!='\0')
        i++;
    while(source_str[j] != '\0')
    {
    dest_str[i] = source_str[j];
    i++;
    j++;
    }
    dest_str[i]='\0';
    printf("\n string after appending another string:");
    puts(dest_str);
    return 0;
}

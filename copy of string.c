#include<stdio.h>
int main()
{
char a[6]="string",b[6],i;
printf("%s",a);
for(int i=0;i<=5;i++)
    {
b[i]=a[i];
b[i]='\0';
printf("%s", b);
}}

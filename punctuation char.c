#include<stdio.h>
#include<string.h>
void main()
{
char a[30];
printf("enter the string");
gets(a);
for (int i=0;a[i]!=NULL;i++)
{
if(a[i]>='a'&a[i]<='z'||a[i]>='0'&a[i]<='9')
{
continue;
}
else
printf("%c",a[i]);
}
}

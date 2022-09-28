#include<stdio.h>
int main()
{
char a[]="string";
int len=strlen(a);
int i;
for(int i=0;i<len;i++)
{
if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
printf("%c",a[i]);
}}

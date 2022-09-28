#include<stdio.h>
int main()
{
    int a=0,d=0,s=0;
char ch[20]="$sayli@1";
for (int i=0;ch[i]!=NULL;i++)
{
    if(ch[i]>='a'&ch[i]<='z')
{
    a++;
}
else if(ch[i]>='0'&ch[i]<='9')
{
    d++;
}
else
{
    s++;}}
   printf("%d\n%d\n%d",a,d,s);
}


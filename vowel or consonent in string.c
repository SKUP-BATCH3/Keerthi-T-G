#include<stdio.h>
int main()
{
int v=0,c=0;
char ch[20]="string";
for (int i=0;ch[i]!=NULL;i++)
{
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
{
   v++;
}
else
{
    c++;
}}
   printf("%d\n%d",v,c);
}


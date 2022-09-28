#include<stdio.h>
int sum(int x)
{
int s=0;
if(x==0)
return x;
s=x+sum(x-1);
return s;
}
int main()
{
int a=6;
a=sum(a);
printf("%d",a);
}


#include<stdio.h>
int main()
{
int a,*p,*k,b,c;
a=10,b=20;
p=&a;
k=&b;
c=*p+*k;
printf("%d",c);

}

#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g,h,i,j,k,l,m;
printf("enter the input numbers");
scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&k,&l,&m);
c=a&b;
d=a|b;
e=~a;
f=~b;
g=a^b;
h=a>>b;
i=a<<b;
j=a>>a<<k>>l<<m;
printf("%d\n%d\n%d\n%d\n%d\n%d%d\n%d\n%d\n%d\n%d\n%d",c,d,e,f,g,h,i,j,k,l,m);
}

#include<stdio.h>
void main()
{
int i,j,m,k,a,b,c,d;
printf("enter the numbers:");
scanf("%d\n%d\n%d\n%d",&i,&j,&m,&k);
a=i&&j|m&&j;
b=i||j&m&&j;
c=i&&j&k;
d=i&j&&k;
printf("%d\n%d\n%d\n%d",a,b,c,d);
}

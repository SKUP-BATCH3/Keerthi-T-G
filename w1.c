#include<stdio.h>
void main()
{
int i,j,m,k,a,b,c;
printf("enter the numbers:");
scanf("%d\n%d\n%d",&i,&j,&m);
a=i+j+i++|--i&&j++&i;
b=(i+j)*(j+m)&&j|i++;
c=++j+j--||m^j&&i;
//b=i||j&m&&j;
//c=i&&j&k;
//d=i&j&&k;
printf("%d\n%d\n%d0.
       +-",a,b,c);
}

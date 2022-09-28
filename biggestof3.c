#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d\n%d\n%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is bigger");
}
else if(b>c&&b>a)
{
printf("b is bigger");
}
else if(c>a&&c>b)
{
printf("c is bigger");
}
}

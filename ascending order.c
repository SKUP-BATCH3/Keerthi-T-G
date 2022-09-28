#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the elements");
scanf("%d\n%d\n%d",&a,&b,&c);
if(a==b||b==c||c==a)
{
printf("equal ok");
}
else if(a<=b & b<=c)
{
printf("true");
}
}

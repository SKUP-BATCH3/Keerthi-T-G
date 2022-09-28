#include<stdio.h>
int sqr(int),res;
int main()
{
int a;
res=sqr(a);
printf("%d",res);
}
int sqr(int a)
{
int sqr;
printf("enter the elements");
scanf("%d",&a);
return a*a;
}

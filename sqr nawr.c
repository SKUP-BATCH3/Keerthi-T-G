#include<stdio.h>
int sqr(),res;
int main()
{
res=sqr();
printf("%d",res);
}
int sqr()
{
int a,sqr,res;
printf("enter the elements");
scanf("%d",&a);
return a*a;
}

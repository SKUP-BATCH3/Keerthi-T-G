#include<stdio.h>
int swap(int),res;
int main()
{
int a,b;
res=swap(a,b);
printf("%d\n%d",res);
}
int swap(int a,int b)
{
int swap;
printf("enter the elements");
scanf("%d\n%d",&a,&b);
return a=a+b,b=a-b,a=a-b;
}

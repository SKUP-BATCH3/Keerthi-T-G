#include<stdio.h>
int swap(int,int);
int main()
{
int a,b;
 swap(a,b);
}
int swap(int a,int b)
{
int swap;
printf("enter the elements");
scanf("%d\n%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;

printf("%d\n%d",a,b);
}

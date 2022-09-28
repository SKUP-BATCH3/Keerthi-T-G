#include<stdio.h>
void swap();
int main()
{
swap();
}
void swap()
{
int a,b,swap;
printf("enter the elements");
scanf("%d\n%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d\n%d",a,b);
}

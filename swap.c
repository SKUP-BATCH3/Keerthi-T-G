#include<stdio.h>
int main()
{
int x,y;
printf("enter the value\n");
scanf("%d%d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf("%d\n%d\n",x,y);
}

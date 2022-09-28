#include<stdio.h>
void main()
{
int a,x,y;
printf("enter the input values");
scanf("%d\n%d",&x,&y);
a=x^=y^=x^=y;
printf("%d",a);
}

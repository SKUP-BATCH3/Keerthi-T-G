#include<stdio.h>
void main()
{
int in1,cke,p,s;
printf("enter the values");
scanf("%d",&in1);
cke=~(1<<6)&in1;
p=~(1<<4)&in1;
s=~(1<<3)&in1;
printf("%d\n%d\n%d",cke,p,s);
}

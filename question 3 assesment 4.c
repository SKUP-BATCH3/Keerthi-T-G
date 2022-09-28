#include<stdio.h>
void main()
{
int in1,cis,cm1,cm2,cm0;
printf("enter the values");
scanf("%d",&in1);
cis=~(1<<3)&in1;
cm2=~(1<<2)&in1;
cm1=~(1<<1)&in1;
cm0=~(1<<0)&in1;
printf("%d\n%d\n%d\n%d",cis,cm2,cm1,cm0);
}

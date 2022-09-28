#include<stdio.h>
void main()
{
int in1,cis,c2out,c1out;
printf("enter the values");
scanf("%d",&in1);
cis=(1<<3)|in1;
c1out=(1<<6)|in1;
c2out=(1<<7)|in1;
printf("%d\n%d\n%d",cis,c1out,c2out);
}

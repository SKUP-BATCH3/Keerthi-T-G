#include<stdio.h>
void main()
{
int in1,tmroon,psa;
printf("enter the values");
scanf("%d",&in1);
tmroon=(1<<7)|in1;
psa=(1<<3)|in1;
printf("%d\n%d",tmroon,psa);
}

#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5},sum,*i;
i=&a;
for(int i=0;i<=5;i++)
{
sum=sum+i;
}
printf("%d",sum);
}

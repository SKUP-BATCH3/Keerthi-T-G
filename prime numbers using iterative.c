#include<stdio.h>
int main()
{
int i,num,m,n;
printf("enter the numbers");
scanf("%d",&num);
for(i=n;i<=num/n;i++)
{
    if (num%i==0)
        m++;
        break;
}
if(m==0&&num!=1)
    {
printf("number is prime");
}
else
{
    printf("number is not prime");
}}



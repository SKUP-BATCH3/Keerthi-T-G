#include<stdio.h>
void main()
{
int n=100,i,count;
printf("enter the n value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(n%i==0)
{
count++;
}}
if(count==2)
{
printf("it is a prime number");
}
else
{
printf("it is not a prime number");
}}

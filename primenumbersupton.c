#include<stdio.h>
void main()
{
int i,j,n,count;
printf("enter the n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    count=0;
    for(j=1;j<=1;j++)
    {
        if(i%j==0)
        {
            count++;
        }
    }
if(count==2)
{
   printf("prime number is");
}}}



#include<stdio.h>
int main()
{
int n,sum;
printf("enter the even natural numbers");
scanf("%d",&n);
for(int i=1;i<n;i++)
{
    if(i%2==0)
    {
        printf("%d",i);
        sum=sum+i;
    }
}
    printf("%d",sum);
}

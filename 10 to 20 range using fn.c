#include<stdio.h>
int sum(),a,b;
int main()
{
sum();
}
int sum()
{
printf("enter the elements");
scanf("%d\n%d",&a,&b);
sum=a+b;
if(sum>=10&&sum<=20)
{
return 30;
}
else
{
printf("%d",sum);
}
}


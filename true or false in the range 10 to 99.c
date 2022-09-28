#include<stdio.h>
int main()
{
int a,b,true,false;
printf("enter the elements");
scanf("%d\n%d",&a,&b);
if(a>=10||a<=99&&b>=10||b<=99)
{
  return true;
}
if(a%3==0||b%3==0)
{
return true;
}
else
{
return false;
}}

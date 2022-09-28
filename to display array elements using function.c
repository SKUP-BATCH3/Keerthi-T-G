#include<stdio.h>
int fun(int a[],int);
int a[5],i;
int main()
{
fun(a,5);
}
int fun(int a[],int size)
{
    int i;
printf("enter the elements");
for(int i=0;i<=5;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<=5;i++)
{
  printf("%d",a[i]);
}}


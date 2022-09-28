#include<stdio.h>
int main()
{
int a[5],i,temp,n;
printf("enter the elements");
for(i=0;i<5;i++)
{
for(n=i+1;n<5;++n)
{
if(a[i]>a[n])
{
temp=a[i];
a[i]=a[n];
a[n]=temp;
}
}
}
for(i=0;i<5;++i)
printf("%d\t",a[i]);
}

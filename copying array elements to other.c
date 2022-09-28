#include<stdio.h>
int main()
{
int n;
printf("enter the size");
scanf("%d",&n);
int a[n],b[n],i,e;
printf("enter the elements");
for(int i=0;i<n;i++)
{
    scanf("%d",&e);
    a[i]=e;
}
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];

       printf("%d",b[i]);
}}


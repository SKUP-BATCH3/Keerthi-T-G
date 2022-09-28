#include<stdio.h>
int main()
{
int size;
printf("enter the size");
scanf("%d",&size);
int a[size],i;
printf("enter the array elements");
for(int i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
{
    printf("%d",a[i]);
}
{
    size=sizeof(a)/sizeof(a[0]);
}
printf("%d",size);
}

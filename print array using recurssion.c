#include<stdio.h>
int i=0;
void arel(int a[])
{
if (a[i]<11)
{
printf("\t%d",a[i]);
i++;
arel(a);
}
}
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
arel(a);
}

#include<stdio.h>
int main()
{
auto int x=10;
{
auto int x=20;
printf("%d\n",x);
}
printf("%d",x);
}

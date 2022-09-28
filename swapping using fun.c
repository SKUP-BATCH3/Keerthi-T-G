#include<stdio.h>
int swap(int*,int*),a=5,b=4;
int main()
{
swap(&a,&b);
}
int swap(int *a, int *b)
{
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
printf("%d\n%d",*a,*b);
}

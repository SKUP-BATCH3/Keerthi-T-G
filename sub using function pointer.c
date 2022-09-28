#include<stdio.h>
int(*ptr)(int,int);
void sub(int,int);
void main()
{
int res=0;
int(*ptr)(int,int)=&sub;
res=(*ptr)(3,2);
printf("%d",res);
}
void sub(int a,int b)
{
a=3,b=2;
int res;
res=a-b;
}

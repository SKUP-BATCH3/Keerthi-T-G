#include<stdio.h>
int(*ptr)(int,int);
void sum(int,int);
void main()
{
int res=0;
int(*ptr)(int,int)=&sum;
res=(*ptr)(2,3);
printf("%d",res);
}
void sum(int a,int b)
{
a=2,b=3;
int res1,res2;
res1=a+b;
//res2=a-b;
}




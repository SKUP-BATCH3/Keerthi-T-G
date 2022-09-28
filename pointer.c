#include<stdio.h>
int add(int ,int );
int main(){
int a,b;
int (*ip)(int,int);
int result;
printf("enter the value of a,b\n");
scanf("%d%d",&a,&b);
ip=add;
result=(*ip)(a,b);
printf("value after the addition is:%d",result);
return 0;
}
int add(int a,int b)
{
    int c=a+b;
    return c;
}

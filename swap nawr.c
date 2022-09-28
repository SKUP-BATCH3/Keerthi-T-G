#include<stdio.h>
int swap(),res;
int main()
{
res=swap();
printf("%d\n%d",res);
}
int swap()
{
int a,b,swap,res;
printf("enter the elements");
scanf("%d\n%d",&a,&b);
a=a+b;
a=a-b;
b=a-b;
return a,b;
}

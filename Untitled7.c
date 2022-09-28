#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a and b\n");
scanf("%d %d",&a,&b);
//a=a+b;b=a-b;a=a-b;
c=b;b=a;a=c;
printf("after swaping a=%d and b=%d",a,b);

}

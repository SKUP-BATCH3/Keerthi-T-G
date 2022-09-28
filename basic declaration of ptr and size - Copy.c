#include<stdio.h>
int main()
{
int * ptr;
int a=100;
ptr=&a;
printf("%d\n",a);
printf("%d\n",ptr);
printf("%p\n",*ptr);
printf("%d\n",sizeof(*ptr));
printf("%d",sizeof(ptr));
}


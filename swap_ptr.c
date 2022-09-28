#include<stdio.h>
void main()
{
    int a=10,b=20;
    int *ptr1=&a,*ptr2=&b;

    int *ptr3,*ptr4,*ptr5;
    ptr3=(*ptr1)+(*ptr2);
    printf("
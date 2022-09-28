#include<stdio.h>
void main()
{
int a[7]={1,-1,0,2,3,5,4};
int *ptr=&a[0];
printf("%d\n",(*ptr)++);
printf("%d\n",++*ptr);
printf("%d\n",*++ptr);
printf("%d\n",*(ptr++));
printf("%d\n",(*ptr)++);
}

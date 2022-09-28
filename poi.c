
#include<stdio.h>
typedef int integer;
typedef float fun(int ,float );
fun function1(int a,float f){
return (f+(float)a);
}

void main()
{
    integer a=10;
    float f=22.2,k;
    k=function1(a,f);
printf("%d\n",k);
}
 /* integer a=10;
    int  **ptr=&a;
   /* int **ptr1=&ptr;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);
    printf("%d\n",**ptr1);
    printf("%d\n",ptr1);*/
   // printf("%d\n",*ptr);


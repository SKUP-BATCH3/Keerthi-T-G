#include<stdio.h>
int main()
{
    char a='a';
    float b=7.6;
    void *ptr,*p;
    ptr=&a;
    printf("value which is pointed by ptr pointer:%d\n",*(char *)ptr);
        ptr=&b;
        printf("value which is pointed by ptr pointer:%f\n",*(float *)ptr);

    return 0;
}

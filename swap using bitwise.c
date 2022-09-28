#include<stdio.h>
int main()
{
    int a=2,b=3;
    printf( "before swapping a=%d,b=%d",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf ("after swapping a=%d,b=%d",a,b);
    return 0;
}

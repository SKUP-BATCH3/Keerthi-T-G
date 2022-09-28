#include<stdio.h>
void up(int *p)
{
    int y=20;
    p=&y;
}
void main()
{
    int x=10;
    int *p=&x;
    printf("%d %d %d\n",*p,p,&p);
    up(p);
    printf("%d %d %d",*p,p,&p);
}

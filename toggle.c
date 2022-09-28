#include<stdio.h>
int main()
{
    int a=12, b=2;
    printf("enter the inputs");
    scanf("%d%d",&a,&b);
    int clear =~(1<<b)&a;
    int toggle =(1<<b)^a;
    int set =(1<<b)|a;
    printf ("clear %d",clear);
    printf("toggle %d",toggle);
    printf("set %d",set);
    return 0;
}

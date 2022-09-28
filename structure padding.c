#include<stdio.h>
struct abcde
{
char a[1];
char b[1];
int c;
char d[1];
int e;
}s;
int main()
{
    printf("%d",sizeof(s));
}

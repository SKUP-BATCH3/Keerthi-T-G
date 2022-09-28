#include<stdio.h>
struct max
{
    char ch[10];
    char s[10];
    char sen[10];
}s;
int main()
{
struct max s={"ch","s","sen"};
printf("%s\n%s\n%s",s.ch,s.s,s.sen);
};

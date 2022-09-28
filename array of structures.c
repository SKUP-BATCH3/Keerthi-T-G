#include<stdio.h>
struct marks
{
int tm;
float cgpa;
}s;
int main()
{
struct marks s[3];
printf("%d\n%f",s[0].tm,s[0].cgpa);
}

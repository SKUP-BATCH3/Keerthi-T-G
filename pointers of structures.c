#include<stdio.h>
struct employee
{
int age;
int salary;
float exp;
}s;
int main()
{
struct employee *ptr;
ptr=&s;
for(int i=0;i<2;i++)
scanf("%d %d %f",&(*ptr).age,&(*ptr).salary,&(*ptr).exp);
    for(int i=0;i<2;i++)
printf("%d %d %f",(*ptr).age,(*ptr).salary,(*ptr).exp);
}

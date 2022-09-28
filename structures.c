#include<stdio.h>
struct student
{
char name[10];
int id;
float marks;
};
void main()
{
struct student s={"name",158,95};
printf("%s",s.name);
printf("%d,%f",s.id,s.marks);
sizeof(s);
}

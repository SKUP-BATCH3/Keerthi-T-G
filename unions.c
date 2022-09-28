#include<stdio.h>
union student
{
//char name[10];
//int id;
float marks;
};
void main()
{
union student s={50};
//printf("%s",s.name);
printf("%f",s.marks);
sizeof(s);
}

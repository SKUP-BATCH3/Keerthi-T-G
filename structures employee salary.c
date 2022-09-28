#include<stdio.h>
struct employee
{
char name[20];
int id;
int age;
int salary;
int yoe;
}s;
void main()
{
    for (int i=0;i<3;i++)
    {
      printf("enter the employee name");
    scanf("%s",&s.name);
    printf("enter the id");
      scanf("%d",&s.id);
      printf("enter the age");
      scanf("%d",&s.age);
      printf("enter the salary");
      scanf("%d",&s.salary);
 printf("enter the yoe");
      scanf("%d",&s.yoe);
}

}

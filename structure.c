#include<stdio.h>

struct employee
{

    int id;
    char name[50];

};
int main()
{

    struct employee s1[5];
    printf("Enter the records of 5 students\n");
    for(int i=0;i<5;i++)
    {

        printf("Enter the roll no:");
        scanf("%d",&s1[i].id);
        printf("Enter the name:");
        scanf("%s",s1[i].name);

    }
    printf("\n Students information list");
    for(int i=0;i<5;i++)
    {

        printf("Roll no=%d\n Name =%s",s1[i].id,s1[i].name);
    }
}

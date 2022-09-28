#include<stdio.h>
union student
{

    char a;
    int b;

}s1;//__attribute__((packed));
int main()
{
//union student s1;
s1.b=10;
//

s1.a=5;
    printf("%d",s1.b);
printf("%d",s1.a);
}

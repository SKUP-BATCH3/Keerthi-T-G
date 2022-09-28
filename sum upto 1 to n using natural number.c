#include<stdio.h>
int i=1;
void nat()
{
    while(i<=50)
    {
        printf("\t%d",i);
        i++;
        nat();
    }
}
int main()
{
    nat();
}

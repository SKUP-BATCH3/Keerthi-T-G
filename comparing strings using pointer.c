#include<stdio.h>
int main()
{
char a[]="string",b[]="string",*ptr,size;
ptr=&a;
ptr=&b;
size=strlen(a);
size=strlen(b);
if (strlen(a)==strlen(b))
{
     printf("a is equal to b");
}
else
    {
     printf("a is not equal to b");
}}




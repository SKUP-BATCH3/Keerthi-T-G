#include<stdio.h>
int main()
{
char a[5];
printf("enter the string");
scanf("%s",&a);
int len=strlen(a);
if (a[0]=='f' & a[len-1]=='b')
    {
printf("fizzbuzz");
}
else if (a[0]=='f')
    {
printf("fizz");
}
else if(a[len-1]=='b');
{
printf("buzz");
}
else
    {
printf("string unchanged %s",a);
}}



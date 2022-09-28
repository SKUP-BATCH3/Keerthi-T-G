#include<stdio.h>
#include<string.h>
int main()
{
char str[100]="brigosha is good";
char* sub;
sub=strstr(str,"is");
printf("sub string is %s",sub);

}

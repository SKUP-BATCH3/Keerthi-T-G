#include<stdio.h>
void main()
{
char str[100],s[100];
int pos,len,c=0;
printf("string");
scanf("%s",&str);
printf("pos and len");
scanf("%d\n%d",&pos,&len);
while(c<len)
{
s[c]=str[pos+c-1];
c++;
}
printf("%s",s);
}

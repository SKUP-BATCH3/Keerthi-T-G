/*
Name: manish,Vishal
Date: 17/04/2022
purpose: WAP to count no of alphabets numbers and frequency alphabets numbers.
*/
#include<stdio.h>
#include<string.h>
int main(){
char str[200],ch;    //declaring the variables
int i,j,k,c=0,count,alp_cnt=0,num_cnt=0,cnt,mcnt=0;
printf("enter the string: \n");
fgets(str,200,stdin);
puts("my string is :");
puts(str);
for(i=0;str[i];i++)// for counting alphabet and digit
{
    if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
        alp_cnt++;
    if((str[i]>=48&&str[i]<=57))
       num_cnt++;
}
printf("alphabet count: %d\ndigit count: %d\n",alp_cnt,num_cnt);

for(i=0;str[i];i++)
{
    cnt=1;
    mcnt=1;
    i=0;
    for(k=0;k<i;k++)
    {
        if(str[k]==str[i])
        {
            i++;
        }
    }
    for(j=i+1;str[j];j++)
    {
       if(str[i]==str[j])
       {
           cnt++;
           if(cnt>mcnt)
           {
               mcnt=cnt;
               ch=str[i];
           }
       }
    }
    for(k=i;k<i;k++)
    {
        if(str[k]==str[i])
            c=1;
    }
    if((ch=='\0')||(c==1))
    goto label;
      printf("%c occour %d times\n",str[i],mcnt);

      }
      label:;
}

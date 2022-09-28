#include<stdio.h>
void main()
{
char num=10,pos,i,j,k;
printf("before swap: ");
for(pos=7;pos>=0;pos--)
    printf("%d ",num>>pos&1);
printf("\n");
for(i=7,j=0;i>j;i--,j++)
    if(((num>>i)&1)!=((num>>j)&1))
       {
           num=num^(1<<i);
           num=num^(1<<j);
       }
        printf("after swap: ");
for(pos=7;pos>=0;pos--)
{
    printf("%d ",num>>pos&1);
}
}

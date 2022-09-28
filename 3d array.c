#include<stdio.h>
int main()
{
int i,j,k,a[2][2][2]={1,2,3,4,5,6,7,8};
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
        for(k=0;k<=1;k++)
        {
            printf("%d",a[i][j][k]);
        }
    }
}
}

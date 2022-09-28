#include<stdio.h>
int main()
{
int i,j,k,a[2][2][2];
printf("enter the elements");
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
        for(k=0;k<=1;k++)
        {
            scanf("%d",&a[i][j][k]);
            printf("%d",a[i][j][k]);

        }
    }
}
}

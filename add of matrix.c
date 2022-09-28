#include<stdio.h>
void main()
{
int i,j,a[2][3]={1,2,3,4,5,6},sum;
for(int i=0;i<=1;i++)
{
    for(int j=0;j<=2;j++){

        printf("enter the elements");
        scanf("%d",&a[i][j]);

    sum=sum+a[i][j];
}
}
    printf("%d",sum);
}



#include<stdio.h>
int main()
{
    int a[2][3];
    int i,j,ele,n;
    n=sizeof a/sizeof a[0];

    printf("enter the rows\n");
    scanf("%d",&a[i]);
    printf("enter the col\n");
    scanf("%d",&a[j]);
    printf("enter the element");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

    printf("%d %d %d\n",i,j,a[i][j]);
}
}




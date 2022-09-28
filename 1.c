#include<stdio.h>
int main()
{
    int i,str[100],n;
    float j,m;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Values are %d:",str[i]);
    }

    for(i=0;i<n;i++)
    {

        str[i]+=str[i+1];
    }


    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the %f elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&str[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Values are %f:",str[i]);
    }


    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the %c elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&str[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Values are %c:",str[i]);
    }



    printf("Enter the %s elements",str[i]);

    for(i=0;i<str[i];i++)
    {
        scanf("%s",&str[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Values are %s:",str[i]);
    }
}

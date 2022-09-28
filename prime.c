#include<stdio.h>
int main()
{

    int i,n;
    for(n=1;n<=20;n++)
    {

        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;

        }
        if(n==i)
            printf("%d",n);
    }
}

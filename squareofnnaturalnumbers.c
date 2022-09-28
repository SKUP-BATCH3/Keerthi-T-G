#include<stdio.h>
int main()
{
int n,sum,sq;
printf("enter square of natural numbers");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    sq=i*i;
     sum=sum+sq;



       printf("sq=%d\t",sq);


}
printf("\nsum=%d\t",sum);
}



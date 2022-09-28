#include<stdio.h>
void main()
{
    int i,j,t;
    int ele;
    int a[5]={2,0,3,7,8};
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
        {

   t=a[i];
   a[i]=a[j];
   a[j]=t;
    for(i=0;i<5;i++)
printf("%d\n",a[i]);
           }
        }
    }
}

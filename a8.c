
#include<stdio.h>
void main()
{
    int i,j,k,c,l,ele;
    int a[]={1,1,1,2,3,1,5,3,4,6};
    ele =sizeof(a)/sizeof(a[0]);
    for(i=0;i<ele;i++)
    printf("%d ",a[i]);
    printf("\n");
    for(i=0,c=0;i<ele;i++)
    {
        c=0;
        for(j=i+1;j<ele;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<ele;k++)
                    {a[k-1]=a[k];}
                    j--;
                    c++;
                    ele--;
                    /*printf("\n In between\n");
                     for(l=0;l<ele;l++)
                    printf("%d ",a[l]);
                    printf("\n");*/
            }
        }

if(c==0)
printf("%d ",a[i]);
}
printf("\n");
}

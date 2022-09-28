#include<stdio.h>
   void main()
   {
   int x,y,z,a,b,c,d,e;
   printf("enter the input numbers:");
   scanf("%d\n%d\n%d",&x,&y,&z);
   a=x+y*z/4%2-1;
   b=x%y+z*z;
   c=x*x-y/z;
   d=x+y/x-y;
   e=x+y*y;
   printf("%d\n%d\n%d\n%d\n%d",a,b,c,d,e);
   }

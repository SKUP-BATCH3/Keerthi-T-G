#include<stdio.h>
   void main()
   {
   int x,y,a,b,c,d,e,f,g;
   printf("enter the input numbers:");
   scanf("%d\n%d",&x,&y);
   a=x<y;
   b=x>y;
   c=x<=y;
   d=(x*x-y)>(y*y-x);
   e=(x*x*x)<(y*x*x);
   f=((x*y)!=(y*x));
   g=((x*y)==(y*x));
   printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f,g);
   }

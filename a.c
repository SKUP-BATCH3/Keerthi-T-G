#include<stdio.h>
int main()
{
int x,y,z,weight;
printf("enter the numbers x,yandz");
scanf("%d %d %d",&x,&y,&z);
weight=((x>y)&&(x>z)?x:(y>z)?y:z);
printf("%d",weight);
}

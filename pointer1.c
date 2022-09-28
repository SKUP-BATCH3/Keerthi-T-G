#include<stdio.h>
int bytefunc(int,int);
void main()
{
   int num,pos,byte;

   printf("Enter the number...\n");
   scanf("%d",&num);

   printf("Enter bit position...\n");
   scanf("%d",&pos);

   byte=bytefunc(num,pos);

   printf("0x%x",byte);

}

int bytefunc(int num,int pos)
{
    int num1;
   //num1=num^(2<<(pos-1));
   num1=num^(1<<pos);
   return num1;
 }



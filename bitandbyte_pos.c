#include<stdio.h>
#define data(byte,bit)  byte^(1<<bit)

void main()
{
    int byte=0x10,bit = 0;
    printf("%x",data(byte,bit));

}




/*   int num,pos,byte;

   printf("Enter the number...\n");
   scanf("%x",&num);

   printf("Enter bit position...\n");
   scanf("%x",&pos);

   byte=bytefunc(num,pos);

   printf("0x%x",byte);

}

int bytefunc(int num,int pos)
{
    int num1;
   num1=num^(2<<(pos-1));
   //num1=num^(1<<pos);
   return num1;
 }
8*/


#include<stdio.h>
#include<string.h>
void pal_num(char num[],int i)
{
    //static int i=0;
    int len=strlen(num)-(i+1);
    if(num[i]==num[len])
    {
        if(i+1==len || i==len)
        {
                    printf("palindrome\n");
                    return;
        }
        pal_num(num,i+1);
    }
    else
    {
        printf("not palindrome\n");
    }
}

int main()
{

    char num[10],st;
    printf("enter the number\n");
    scanf("%s",num);
      pal_num(num,0);
      return 0;
   }

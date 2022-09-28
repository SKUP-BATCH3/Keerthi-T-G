#include<stdio.h>
int main()
{
    int d,ring=0,sleep,mcall,mor=1;
    printf("phone is ringing enter mcall(1,2) and sleep(1,0)");
    scanf("%d\n%d",&mcall,&sleep);
    if (sleep==1&&mor==1&&mcall==2&&ring==0)
    {
        printf("mom's call received");
    }
    else if (sleep==1&&ring==0&&mor==1)
    {
        printf("call is not received");
    }
        else{
            printf("all calls are received");
        }}

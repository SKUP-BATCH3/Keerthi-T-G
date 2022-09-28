/*
 * File:   cc.c
 * Author: User
 *
 * Created on July 21, 2022, 2:35 PM
 */


#include <stdio.h>
void cruise_control(void);

void main(void)
{
    cruise_control();


}
void cruise_control(void)
{
    int as=20 ,rs=50;
    int i;
    if(as>rs)
    {
        i=as;
        while(i!=rs)
        {
            i--;
        }
       // printf("The value of as is =%d ",i);
    }

    if(as<rs)
    {
        i=as;
        while(i!=rs)
        {
            i++;
             printf("The value of as is =%d \n",i);
        }
       // printf("The value of as is =%d ",i);
    }
}

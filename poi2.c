#include<stdio.h>
float add(float,int);
float sub(float,int);
float mul(float,int);
float div(float,int);
void main(){
float x;
int y;
float (*fp[4])(float,int);
fp[0]=add;
fp[1]=sub;
fp[2]=mul;
fp[3]=div;

printf("enter the vale of x&y\n");
scanf("%f%d",&x,&y);
float r=(*fp[0])(x,y);
float r1=(*fp[1])(x,y);
float r2=(*fp[2])(x,y);
float r3=(*fp[3])(x,y);
printf("%g %g %g %g\n",r,r1,r2,r3);
}
float add(float x,int y)
{
    float z=x+y;
    return z;
}
float sub(float x,int y)
{
    float z1=x-y;
    return z1;
}
float mul(float x,int y)
{
    float z2=x*y;
    return z2;
}
float div(float x,int y)
{
    float z3=x+y;
    return z3;
}

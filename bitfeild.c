#include<stdio.h>
struct st
{
unsigned int mem:4;
}e;
int main(){

e.mem=10;
printf("%d",(e));
}

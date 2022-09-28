#include<stdio.h>
void main(){

int *p=NULL;

p=(int *)malloc(4*sizeof(int));
if(p==NULL)
{
    printf("Memory is not allocated...\n");


}
else
{
   printf("Memory Allocated..\n");
}
}

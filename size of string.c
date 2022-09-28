#include<stdio.h>
int main()
{
  char a[]="string";
  int i,j=sizeof(a);
  int c;
  for(int i=1;i<j;i++){
    c++;
  }
printf("%d",c);
}

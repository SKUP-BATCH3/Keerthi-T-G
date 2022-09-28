#include<stdio.h>
void main()
{
    /*
  int a=10;
  int *p=(int *)malloc(sizeof(int));
  p=&a;
  printf("%d\n",*p);
  free(p);
  printf("%d\n",*p);
    */
    char *str;
    {
        char a='A';
        str=&a;
        printf("%c\n",*str);
    }
   printf("str=%c\n",*str);
}

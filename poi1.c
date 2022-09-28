#include<stdio.h>
void fun1(void (*p)());
void fun2();
void main(){
fun1(fun2);
}
void fun1(void (*p)()){
printf("funtion 1 is called\n");
(*p)();
}
void fun2(){
printf("\nfunction2 is called\n");
}

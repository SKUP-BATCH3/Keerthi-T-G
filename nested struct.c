#include<stdio.h>
struct store
{

    double price;
    union
    {
        struct{
             int num;
        char *title;
        char *author;

    }book;
    struct
    {
        int color;
        int size;
        char *design;
    }shirt;
}item;
}s1
int main()
{

    printf("%u",sizeof(shirt));
}


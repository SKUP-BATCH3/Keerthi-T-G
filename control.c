#include<stdio.h>
int main()
{
    char ch;
    printf("enter char \n");
    scanf("%c",&ch);
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
    {
        printf("its a alphabet");
    }
    else if(ch>='0' && ch<='9')



    {

        printf("digit");
    }
    else
    {


        printf("special char");
    }


}

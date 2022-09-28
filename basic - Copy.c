#include <stdio.h>
void sizeofarray(int arr[])
{
    int size2 = sizeof(arr)/sizeof(arr[0]);
    printf("Size2 = %d\n", size2);

}
int main()
{
    int arr[] = {1,1,2,3,2,4,4,4,5,8,1,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Size1 = %d\n", size);

    sizeofarray(arr);
    return 0;
}

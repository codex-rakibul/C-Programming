#include<stdio.h>

void fun(int arr[])
{
    int i;
for(i=0;i<3;i++)

printf("%d",arr[i]);
}
main()
{
    int arr[10];
    arr[0]=2;
    arr[1]=3;
    arr[2]=7;

    fun(arr);
}


#include<stdio.h>
int fun(int arr[]);
int main()
{

int arr[10];
int i;

{
   for(i=0;i<5;i++)
   scanf("%d",&arr[i]);

}
        fun(arr);
}

int fun(int arr[])

{
    int i;
    int min=arr[0];
    for(i=1;i<5;i++)
    {
        if(min>arr[i]);
        min=arr[i];
    }
    return 0;
}



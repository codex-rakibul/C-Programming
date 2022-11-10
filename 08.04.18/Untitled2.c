#include<stdio.h>

int fun(int arr[],int data,int s,int e)
{
    if(s>e)
    return 0;

    int mid =(s+e)/2;

    if(arr[mid]<data)
    {
        s=mid+1;
        fun(arr,data,s,e);
    }
    else if(arr[mid]>data)
    {
        s=mid-1;
        fun(arr,data,s,e);
    }
    else
    return 1;

}
int main()
{
    int n,i,data,arr[100];
    printf("Enter number of array element:\n");
    scanf("%d",&n);
    printf("\nEnter The array:");
    for(i=0;i<n;i++);
    scanf("%d",&arr[i]);

    printf("Enter the data your want to check:");
    scanf("%d",&data);
    int ans=fun(arr,data,0,n-1);
    if(ans==1)
    printf("\nData is found");
    else
    printf("\nData is not found");

}

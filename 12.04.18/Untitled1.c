#include<stdio.h>
main()
{
    int k,i,temp=0,arr[100];
    for(i=0;i<=5;i++)
    {
        printf("Enter your array number:\n");
        scanf("%d",&arr[i]);
    }
    for(k=0;k<n-2;k++){
    for(i=0;i<n-1-k;i++){
    if(arr[i]>arr[i+n]){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    }
    }
    }
}

#include<stdio.h>
main()
{
    int n,count=0,i;
    printf("Enter the value of integer number N=\n");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        count=count+1;
    }
    if(count==0)
    printf("The Number is Prime");
    else
    printf("The Numer is Not Prime");
}

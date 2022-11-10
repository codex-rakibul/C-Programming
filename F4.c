#include<stdio.h>
int main()
{
    int a,n;
    printf("Please your Integer number of N:\n");
    scanf("%d",&n);

    printf("\n\n%d Factors of a prime number are:\n",n);
    for(a=2;a<=n;++a)
    {
        while(n%a==0)
        {

            printf("%d  ",a);
            n=n/a;
        }
    }
    return 0;
}

#include<stdio.h>
#include<math.h>

fun (int x,int y)
{
    int sum=1,i,j;

    i=x;

    for(j=y;j>0;j--){

        sum=sum*i;

    }

    return sum;
}

    int main()
    {
        int a, b,sum=0;
        printf("Please enter a integer value= ");
        scanf("%d",&a);

        printf("Please enter b integer value= ");
        scanf("%d",&b);

        sum=fun(a,b);

        printf("\n\nsum= %d",sum);
    }



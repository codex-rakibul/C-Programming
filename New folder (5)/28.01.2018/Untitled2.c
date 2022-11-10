#include <stdio.h>
#include <math.h>

    int main()
{
    float z;
    int x,y;

    printf("Enter the value of x:");
    scanf("%d", &x);

    printf("Enter the value of n:");
    scanf("%d",&y);

    z=sqrt(pow(x,2)+pow(y,2));

    printf("\ny =%f\n",z);

    return 0;

}

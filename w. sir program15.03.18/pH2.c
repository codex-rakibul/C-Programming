#include<stdio.h>
#include<math.h>

main()
{
    int i,j,d1,d2,a[13];

    for(i=2;i<=12;i++)
        a[i]=0;

    for(j=0;j<100;j++)
    {
        d1=rand()%6+1;
        d2=rand()%6+1;
        a[d1+d2]=a[d1+d2]+1;
    }
        for(i=2;i<=12;i++)
        printf("%d:  %d\n",i, a[i]);


}

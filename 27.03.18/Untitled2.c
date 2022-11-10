#include<stdio.h>
int fun(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
      f=f*i;
    }
    return f;
}
main()
{
    int n,ans;
    printf("*****************************\n");
    printf("Enter your integer number:");
    scanf("%d",&n);
    ans=fun(n);
    printf("result=%d\n",ans);
    printf("*****************************\n\n\n");
    main();
}



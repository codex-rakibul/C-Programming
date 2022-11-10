#include<stdio.h>
#include<math.h>
void primeFactors(int n)
{
    int a;
    for(a=2;a<=n;++a)
    {
        while(n%a==0)
         n=n/a;
    }
    return n;
}
int main()
{
    int n,a,ans;
    scanf("%d",&n);
    ans=primeFactors(n);
    printf("%d",ans);
    //return 0;
}

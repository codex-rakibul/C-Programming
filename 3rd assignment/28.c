#include<stdio.h>
#define getcher()
main()

{
    int i,c,n,cnt,digit_cnt,total;
    while(c=getcher())
    {
    if(c=='E')
    break;
    ++cnt;
    if(c>='0'&&c<='9')
    ++digit_cnt;
    }
    i=-5;
    n=50;
    while(i<n){
    ++i;
    if(i==0)
    continue;
    total+=i;
    printf("i=%d and total=%d\n",i,total);
    }

}

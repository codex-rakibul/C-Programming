#include<stdio.h>
main(){
    int a,b,i,t,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d%d",&a,&b);
    sum=(a<b)?printf("<\n"):(a>b)?printf(">\n"):printf("=\n");}
    }


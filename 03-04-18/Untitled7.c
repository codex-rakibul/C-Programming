#include<stdio.h>
#include<string.h>

int main()
{

    char arr[10];
    char str[10];
    printf("Please Enter Your arr & str Number:");
    scanf("%s %s",&arr,&str);
    int n=strcmp(arr,str);
    if (n==0)
    printf("Same");
    else
    printf("Not same");


}

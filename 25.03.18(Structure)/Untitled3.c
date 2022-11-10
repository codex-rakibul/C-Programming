#include<stdio.h>

union test
{
    int x;
    int y;

};
int main()
{
    union test t1;
    t1.x=10;
    printf("t1.x=%d\n",sizeof(t1));
    printf("t1.x=%d",t1.y);
}

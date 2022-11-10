#include<stdio.h>
int MyInput();

main()
{
    int x,y;
    x=MyInput();
    y=MyInput();

    print("sum=%d",Result(x,y));

}

 int main()
 {
     int A;
     printf("Please enter the A interger number=v(0-32676):\n ");
     scanf("%d",&A);
     return A;
 }
 int Result(int firstnum,int secondnum)
 {
     return firstnum+secondnum;
 }

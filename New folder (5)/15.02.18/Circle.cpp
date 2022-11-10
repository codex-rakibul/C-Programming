#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#define PI 3.1416

int main()
{
    int r,sum;
    printf("Enter the number=");
    scanf("%d",&r);

    sum=PI*(r*r);
    printf("%d",sum);

   int gd = DETECT,gm;
   int x ,y ,radius=80;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   x = getmaxx()/2;
   y = getmaxy()/2;

   outtextxy(x-100, 50, "CIRCLE Using Graphics in C");

   circle(x, y, radius);

   getch();
   closegraph();
   return 0;
}


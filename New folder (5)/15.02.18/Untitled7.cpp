#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
#define PI 3.1416

int main()
{
    float r,sum;
    printf("Enter the number=");

    scanf("%f",&r);

    sum=PI*(r*r);
    printf("%f",sum);

   int gd = DETECT,gm;
   int x ,y ,radius=80;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   x = getmaxx()/2;
   y = getmaxy()/2;

   outtextxy(x-100, 50, "CIRCLE ");

   circle(x, y, radius);

   getch();
   closegraph();
   return 0;
}

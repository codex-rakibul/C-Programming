#include(stdio.h>
#include<graphics.h>
#include<conio.h>
#define PI 3.1416

main()
{
   int gd = DETECT, gm,r,sum;
   printf("Enter the number\n")
   scanf("%d",&r)

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   circle(100, 100, 50);

   sum=PI*(r*r);
   printf("Circle=%d",sum);

   getch();
   closegraph();
   return 0;
}


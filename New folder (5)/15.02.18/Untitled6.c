#include <graphics.h>

main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\TC\BGI");

    circle(25, 25, 100);

    getch();
    closegraph();
    return 0;
}

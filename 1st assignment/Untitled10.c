#include <stdio.h>

            main ()
{
    int Days     =2535;
    int Years    = Days/365;
    int Days2    = Days%365;
    int Month    = Days2/30;
    int Days3    = Days2%30;

    printf("%d Year(s)\n",Years);
    printf("%d Month(s)\n",Month);
    printf("%d Days(s)\n",Days3);

                                  //Rakibul
}

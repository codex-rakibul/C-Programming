#include <stdio.h>

               main()
{
    int given_days = 1329;
    int years      = (given_days/365);
    int days       = (given_days%365);
    int weeks      = (days/7);
    int days1      = (days%7);

    printf("Years  : %d\n",years);
    printf("Weeks  : %d\n",weeks);
    printf("Days   : %d\n",days1);





}

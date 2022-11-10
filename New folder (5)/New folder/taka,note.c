#include <stdio.h>

 main()
{
    int taka,note1000,note500,note100,note50,note20,note10,note5,note2,note1;
    printf("Enter the amount:");
    scanf("%d",&taka);

    if(taka>=1000)
    {
        note1000=taka/1000;
        printf("1000=%d\n",note1000);
        taka=taka-(1000*note1000);
        printf("Remaining amount =%d\n",taka);
    }
    {
        note500=taka/500;
        printf("500=%d\n",note500);
        taka=taka-(500*note500);
        printf("Remaining amount =%d\n",taka);
    }
    {
        note100=taka/100;
        printf("100=%d\n",note100);
        taka=taka-(100*note100);
        printf("Remaining amount =%d\n",taka);
    }
    {
        note50=taka/50;
        printf("50=%d\n",note50);
        taka=taka-(50*note50);
        printf("Remaining amount =%d\n",taka);
    }
    {
        note20=taka/20;
        printf("20=%d\n",note20);
        taka=taka-(20*note20);
        printf("Remaining amount =%d\n",taka);
    }
    {
        note10=taka/10;
        printf("10=%d\n",note10);
        taka=taka-(10*note10);
        printf("Remaining amount =%d\n",taka);
    }
    {
        note5=taka/5;
        printf("5=%d\n",note5);
        taka=taka-(5*note5);
        printf("Remaining amount =%d\n",taka);
    }
    {
        note2=taka/2;
        printf("2=%d\n",note2);
        taka=taka-(2*note2);
        printf("Remaining amount =%d\n",taka);
    }
    {
        note1=taka/1;
        printf("1=%d\n",note1);
        taka=taka-(1*note1);
        printf("Remaining amount =%d\n",taka);
    }

}

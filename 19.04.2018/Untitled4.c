#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

main()
{

  char ch;
  int a, b;
  scanf("%d %d",&a,&b);
  switch(b)
  {

  case 3:
    printf("Sadhinota Dibos");
    break;


  case 2:
    printf("Shohid Dibos");
    break;


  case 12:
    printf("Bijoy Dibos");
    break;


  default:
    printf("It is Regular Day");
    getch();
    break;
  }
 switch(a)
  {
    case 26:
    printf("Sadhinota Dibos");
    break;


    case 21:
    printf("Shohid Dibos");
    break;


    case 16:
    printf("Bijoy Dibos");
    break;

  default:
    printf("It is Regular Day");
    getch();
    break;
  }
}


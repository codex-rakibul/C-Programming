#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void fun1();
void fun2();
void fun3();
void fun4();
void fun5();
void fun6();
void fun7();
void fun8();
void fun9();
void fun10();
void fun11();
void fun12();
void fun13();
void fun14();
void fun15();
void fun16();
void fun17();
void fun18();
void fun19();
void fun20();
void fun21();
void fun22();
void fun23();
void fun24();
void fun25();
void fun26();
int main()
{

    int a,m;

    printf("\n\t\t\t\t ******************************************************\n");
    printf("\t\t\t\t********************************************************\n");
    printf("\t\t\t\t**                                                    **\n");
    printf("\t\t\t\t**          **           ***       **                 **\n");
    printf("\t\t\t\t**          **         **   **     **                 **\n");
    printf("\t\t\t\t**          **        **     **    **                 **\n");
    printf("\t\t\t\t**          *****      **   **     *****              **\n");
    printf("\t\t\t\t**          *****        ***       ***** (Games)      **\n");
    printf("\t\t\t\t**                                                    **\n");
    printf("\t\t\t\t********************************************************\n");
    printf("\t\t\t\t ******************************************************\n");


    printf("\t\t========================================================================================\n");
    printf("\t\t|                                       Games List                                     |\n");
    printf("\t\t|--------------------------------------------------------------------------------------|\n");
    printf("\t\t| [1].LOVE Calculator                        | [6].How Many People Love & Hate you ?   |\n");
    printf("\t\t|--------------------------------------------------------------------------------------|\n");
    printf("\t\t| [2].Which 3 Job Suit Your Name ?           | [7].When Will You Get Married ?         |\n");
    printf("\t\t|--------------------------------------------------------------------------------------|\n");
    printf("\t\t| [3].How Musc Money  will You Have in 2019? | [8].How Many kids Will You Have ?       |\n");
    printf("\t\t|--------------------------------------------------------------------------------------|\n");
    printf("\t\t| [4].Love or Arranged Marriage ?            | [9].How People Crush You ?              |\n");
    printf("\t\t|--------------------------------------------------------------------------------------|\n");
    printf("\t\t| [5].Which 3 Words Best Describe You ?      | [0].EXIT                                |\n");
    printf("\t\t========================================================================================\n");

    printf("\n\t\t-----------------------------------------------\n");
    printf("\t\tChoice Your Option[1,2,3,4,5,6,7,8,9,10,0]:");
    scanf("%d",&a);
    printf("\t\t-------------------------------------------------\n\n\n\n");



    switch(a)

    {


    case 1:
        system("cls");
        fun1();
        break;

    case 2:
    system("cls");
        fun2();
        break;

    case 3:
    system("cls");
        fun3();
        break;

    case 4:
    system("cls");
        fun4();
        break;

    case 5:
    system("cls");
        fun5();
        break;

    case 6:
    system("cls");
        fun6();
        break;

    case 7:
    system("cls");
        fun7();
        break;

    case 8:
    system("cls");
        fun8();
        break;

    case 9:
    system("cls");
        fun9();
        break;



    case 0:
    system("cls");
        printf("\n\n\t\t\t----------------------------------------");
        printf("\n\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t|--------------------------------------|");
        printf("\n\t\t\t|               LOL Games              |");
        printf("\n\t\t\t|--------------------------------------|");
        printf("\n\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t----------------------------------------");
        getch();
        break;



    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun12();
        break;

    }

}
void fun1()
{
    char name1[30],name2[30];
    int m,n,a;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*         ***          ***    ***          *** **********         *\n");
    printf("\t\t\t\t*          **       **     **   **        **   *********          *\n");
    printf("\t\t\t\t*          **     **        **   **      **    **                 *\n");
    printf("\t\t\t\t*          **    **          **   **    **     *****              *\n");
    printf("\t\t\t\t*          **    **          **    **  **      *****              *\n");
    printf("\t\t\t\t*          **     **        **      ****       **                 *\n");
    printf("\t\t\t\t*          ******   **     **        ***       *********          *\n");
    printf("\t\t\t\t*          *******     ***            *        **********         *\n");
    printf("\t\t\t\t*                            CalCulator                           *\n");
    printf("\t\t\t\t*******************************************************************\n");

    printf("\t\t\t\t-------------------------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name1);
    printf("\t\t\t\t  Enter Your Lover Name : ");
    scanf("%s",&name2);
    printf("\n\t\t\t\t-------------------------------------------------------------------\n");
    m=rand()%50;
    n=m+50;
    printf("\n\n\t\t\t\t*****************************************************************\n");
    printf("\t\t\t\t          %s                                 %s                 \n",name1,name2);
    printf("\t\t\t\t                         *****  *****                                  \n");
    printf("\t\t\t\t                        **    **    **                                   \n");
    printf("\t\t\t\t                         **   %d   **                        \n",n);
    printf("\t\t\t\t                          **      **                                     \n");
    printf("\t\t\t\t                             ****                                            \n");
    printf("\t\t\t\t                              **                                      \n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun16();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;

    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t Press Any Key To Try Again");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun16();
        break;



    }
    printf("\n\n\n");

}
void fun2()
{
    char name[30];
    int a,A;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                     Which 3 Job Suit Your Name ?                *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");

    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].male                        |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [2].Fmale                       |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[1,2]    : ");
    scanf("%d",&a);
    switch(a)

    {


    case 1:
        fun13();
        break;

    case 2:
        fun14();
        break;



    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun17();
        break;
    }

}
void fun13()
{
    char name[30];
    int m,a;
    printf("\n\n\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t                    3 Jobs Are                  \n");
    m=rand()%10;
    if(m==0)
    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].PRESIDENT\n");
        printf("\t\t\t\t [2].ASTRONAUT\n");
        printf("\t\t\t\t [3].COMEDIAN\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==1)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].NBA PLAYER\n");
        printf("\t\t\t\t [2].COP\n");
        printf("\t\t\t\t [3].MARVEL HERO\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==2)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].MODEL\n");
        printf("\t\t\t\t [2].CHEMIST\n");
        printf("\t\t\t\t [3].COMEDIAN\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==3)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].FOOTBALLER\n");
        printf("\t\t\t\t [2].DOCTOR\n");
        printf("\t\t\t\t [3].COP\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==4)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].COP\n");
        printf("\t\t\t\t [2].TEACHER\n");
        printf("\t\t\t\t [3].RACER\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==5)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].TEACHER\n");
        printf("\t\t\t\t [2].ENGINEER\n");
        printf("\t\t\t\t [3].MODEL\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==6)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].ENGINEER\n");
        printf("\t\t\t\t [2].PET SITTER\n");
        printf("\t\t\t\t [3].HOT BOYFRIEND\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==7)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].ASTRONAUT\n");
        printf("\t\t\t\t [2].POLICE\n");
        printf("\t\t\t\t [3].DOCTOR\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==8)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].MODEL\n");
        printf("\t\t\t\t [2].POPE\n");
        printf("\t\t\t\t [3].MOVIE VILLAN\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==9)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].TRAVELER\n");
        printf("\t\t\t\t [2].ENGINEER\n");
        printf("\t\t\t\t [3].SUGAR DADDY\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].BEER TASTER\n");
        printf("\t\t\t\t [2].TATTOO ARTIST\n");
        printf("\t\t\t\t [3].GOOD LOVER\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun17();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t----------------------------------------");
        printf("\n\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t|--------------------------------------|");
        printf("\n\t\t\t|               LOL Games              |");
        printf("\n\t\t\t|--------------------------------------|");
        printf("\n\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t----------------------------------------\n\n\n");
        getch();
        break;


    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun17();
        break;



    }

    printf("\n\n\n");

}
void fun14()
{
    char name[30];
    int m,a;
    printf("\n\n\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");
    m=rand()%10;
    if(m==0)
    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].HOLLYWOOD ACTRESS\n");
        printf("\t\t\t\t [2].DOCTOR\n");
        printf("\t\t\t\t [3].COMEDIAN\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==1)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].POLE DANCER\n");
        printf("\t\t\t\t [2].MOVIE DIRECTOR\n");
        printf("\t\t\t\t [3].DOCTOR\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==2)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].MODEL\n");
        printf("\t\t\t\t [2].CHEMIST\n");
        printf("\t\t\t\t [3].COMEDIAN\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==3)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].GOOD WIFE\n");
        printf("\t\t\t\t [2].DENGINEER\n");
        printf("\t\t\t\t [3].BALLERINA\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==4)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].CHEERLEADER\n");
        printf("\t\t\t\t [2].TEACHER\n");
        printf("\t\t\t\t [3].RACER\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==5)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].TEACHER\n");
        printf("\t\t\t\t [2].ENGINEER\n");
        printf("\t\t\t\t [3].MODEL\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==6)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].ENGINEER\n");
        printf("\t\t\t\t [2].PET SITTER\n");
        printf("\t\t\t\t [3].CHEET LOVER\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==7)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].ASTRONAUT\n");
        printf("\t\t\t\t [2].POLICE\n");
        printf("\t\t\t\t [3].DOCTOR\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==8)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].MODEL\n");
        printf("\t\t\t\t [2].GOOD WIFE \n");
        printf("\t\t\t\t [3].NURSE\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==9)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].TRAVELER\n");
        printf("\t\t\t\t [2].ENGINEER\n");
        printf("\t\t\t\t [3].STAR\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].DESIGNER\n");
        printf("\t\t\t\t [2].TATTOO ARTIST\n");
        printf("\t\t\t\t [3].GOOD LOVER\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun17();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun17();
        break;



    }

    printf("\n\n\n");
}
void fun3()
{
    char name[30];
    int m,a,n;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*             How Musc Money  will You Have in 2019?              *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");

    m=rand()%300;
    n=m+350;
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t                  Money is  %d$      \n",n);
    printf("\t\t\t\t-------------------------------------------------\n");

   printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun18();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun18();
        break;



    }

    printf("\n\n\n");


}
void fun4()
{
    char name[30];
    int m,a,n,n1,n2;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                       Love or Arranged Marriage ?               *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");
    m=(rand()%60);
    n=m+40;
    n1=(100-n);

    printf("\t\t\t\t------------------------------------------\n");
    printf("\t\t\t\t              Love %d percentage                      \n",n);
    printf("\t\t\t\t------------------------------------------\n");
    printf("\t\t\t\t              Arranged %d percentage                       \n",n1);
    printf("\t\t\t\t------------------------------------------\n");

    printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun19();
        break;


    case 0:
    system("cls");
       printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun19();
        break;



    }

    printf("\n\n\n");



}
void fun5()
{
    char name[30];
    int m,n,a;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                  Which 3 Words Best Describe You ?              *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");
    m=rand()%10;
    if(m==0)
    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].PERFECT\n");
        printf("\t\t\t\t [2].BEAUTIFUL\n");
        printf("\t\t\t\t [3].CONFIDENT\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==1)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].CRAZY\n");
        printf("\t\t\t\t [2].CARING\n");
        printf("\t\t\t\t [3].AWESOME\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==2)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].FAITHFUL\n");
        printf("\t\t\t\t [2].AWESOME\n");
        printf("\t\t\t\t [3].POSITIVE\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==3)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].PERFECT\n");
        printf("\t\t\t\t [2].HELPFUL\n");
        printf("\t\t\t\t [3].CRAZY\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==4)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].RICH\n");
        printf("\t\t\t\t [2].BEAUTIFUL\n");
        printf("\t\t\t\t [3].CARING\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==5)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].TEACHER\n");
        printf("\t\t\t\t [2].ENGINEER\n");
        printf("\t\t\t\t [3].MODEL\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==6)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].EXTROVERT\n");
        printf("\t\t\t\t [2].POSITIVE\n");
        printf("\t\t\t\t [3].CLEVER\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==7)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].CARING\n");
        printf("\t\t\t\t [2].GREAT\n");
        printf("\t\t\t\t [3].IDEALISTIC\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==8)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].CRAZY\n");
        printf("\t\t\t\t [2].BEAUTIFUL\n");
        printf("\t\t\t\t [3].AWESOME\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==9)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].DYNAMIC\n");
        printf("\t\t\t\t [2].AMAZING\n");
        printf("\t\t\t\t [3].CRAZY\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].PERFECT\n");
        printf("\t\t\t\t [2].CARING\n");
        printf("\t\t\t\t [3].HELPFUL\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun20();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;

    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun20();
        break;



    }
    printf("\n\n\n");


}
void fun6()
{
    char name[30];
    int m,a,n;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                    How Many People Love & Hate you ?            *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");
    m=(rand()%60)+40;
    n=100-m;

    printf("\t\t\t\t------------------------------------------\n");
    printf("\t\t\t\t              Love %d percentage                      \n",m);
    printf("\t\t\t\t------------------------------------------\n");
    printf("\t\t\t\t              Hate %d percentage                       \n",n);
    printf("\t\t\t\t------------------------------------------\n\n\n\n");
 printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun21();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun21();
        break;



    }


}
void fun7()
{
    char name[30];
    int m,n,s,a;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                      When Will You Get Married ?                *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");
    m=(rand()%31)+1;
    n=(rand()%12)+1;
    s=(rand()%12)+20;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t                                                                 \n");
    printf("\t\t\t\t              Married Year = %d - %d - 20%d               \n",m,n,s);
    printf("\t\t\t\t                                                                 \n");
    printf("\t\t\t\t*******************************************************************\n");
   printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
     system("cls");
        fun12();
        break;

    case 2:
     system("cls");
        fun22();
        break;


    case 0:
     system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
     system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun22();
        break;



    }
    printf("\n\n\n");
}
void fun8()
{
    char name[30];
    int m,n,a;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                     How Many kids Will You Have ?               *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");

    m=(rand()%10)+1;

    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t                   %d kids      \n",m);
    printf("\t\t\t\t-------------------------------------------------\n");
 printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun23();
        break;


    case 0:
    system("cls");
      printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun23();
        break;



    }
    printf("\n\n\n");



}
void fun9()
{
    char name[30];
    int m,n,a;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                     How People Crush You ?                      *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");

    m=(rand()%120)+5;

    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t                %d People Crush You      \n",m);
    printf("\t\t\t\t-------------------------------------------------\n");

    printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun24();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun24();
        break;



    }
    printf("\n\n\n");


}
void fun12()
{
    int a,m;

    printf("\n\t\t\t\t ******************************************************\n");
    printf("\t\t\t\t********************************************************\n");
    printf("\t\t\t\t**                                                    **\n");
    printf("\t\t\t\t**          **           ***       **                 **\n");
    printf("\t\t\t\t**          **         **   **     **                 **\n");
    printf("\t\t\t\t**          **        **     **    **                 **\n");
    printf("\t\t\t\t**          *****      **   **     *****              **\n");
    printf("\t\t\t\t**          *****        ***       ***** (Games)      **\n");
    printf("\t\t\t\t**                                                    **\n");
    printf("\t\t\t\t********************************************************\n");
    printf("\t\t\t\t ******************************************************\n");

    printf("\t\t========================================================================================\n");
    printf("\t\t|                                       Games List                                     |\n");
    printf("\t\t|--------------------------------------------------------------------------------------|\n");
    printf("\t\t| [1].LOVE Calculator                        | [6].How Many People Love & Hate you ?   |\n");
    printf("\t\t|--------------------------------------------------------------------------------------|\n");
    printf("\t\t| [2].Which 3 Job Suit Your Name ?           | [7].When Will You Get Married ?         |\n");
    printf("\t\t|--------------------------------------------------------------------------------------|\n");
    printf("\t\t| [3].How Musc Money  will You Have in 2019? | [8].How Many kids Will You Have ?       |\n");
    printf("\t\t|--------------------------------------------------------------------------------------|\n");
    printf("\t\t| [4].Love or Arranged Marriage ?            | [9].How People Crush You ?              |\n");
    printf("\t\t|--------------------------------------------------------------------------------------|\n");
    printf("\t\t| [5].Which 3 Words Best Describe You ?      | [0].EXIT                                |\n");
    printf("\t\t========================================================================================\n");

    printf("\n\t\t-----------------------------------------------\n");
    printf("\t\tChoice Your Option[1,2,3,4,5,6,7,8,9,10,0]:");
    scanf("%d",&a);
    printf("\t\t-------------------------------------------------\n\n\n\n");



    switch(a)

    {


    case 1:
        system("cls");
        fun1();
        break;

    case 2:
    system("cls");
        fun2();
        break;

    case 3:
    system("cls");
        fun3();
        break;

    case 4:
    system("cls");
        fun4();
        break;

    case 5:
    system("cls");
        fun5();
        break;

    case 6:
    system("cls");
        fun6();
        break;

    case 7:
    system("cls");
        fun7();
        break;

    case 8:
    system("cls");
        fun8();
        break;

    case 9:
    system("cls");
        fun9();
        break;



    case 0:
    system("cls");
       printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;



    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun12();
        break;

    }


}
void fun15()

{
    char name[30];
    int a,A;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                     Which 3 Job Suit Your Name ?                *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");

    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].male                        |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [2].Fmale                       |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[1,2]    : ");
    scanf("%d",&a);
    switch(a)

    {


    case 1:
        fun13();
        break;

    case 2:
        fun14();
        break;



    default:
    system("cls");
      printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun17();
        break;
    }

}
void fun16()
{
    char name1[30],name2[30];
    int m,n,a;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*         ***          ***    ***          *** **********         *\n");
    printf("\t\t\t\t*          **       **     **   **        **   *********          *\n");
    printf("\t\t\t\t*          **     **        **   **      **    **                 *\n");
    printf("\t\t\t\t*          **    **          **   **    **     *****              *\n");
    printf("\t\t\t\t*          **    **          **    **  **      *****              *\n");
    printf("\t\t\t\t*          **     **        **      ****       **                 *\n");
    printf("\t\t\t\t*          ******   **     **        ***       *********          *\n");
    printf("\t\t\t\t*          *******     ***            *        **********         *\n");
    printf("\t\t\t\t*                            CalCulator                           *\n");
    printf("\t\t\t\t*******************************************************************\n");

    printf("\t\t\t\t-------------------------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name1);
    printf("\t\t\t\t  Enter Your Lover Name : ");
    scanf("%s",&name2);
    printf("\n\t\t\t\t-------------------------------------------------------------------\n");
    m=rand()%50;
    n=m+50;
    printf("\n\n\t\t\t\t*****************************************************************\n");
    printf("\t\t\t\t          %s                                 %s                 \n",name1,name2);
    printf("\t\t\t\t                         *****  *****                                  \n");
    printf("\t\t\t\t                        **    **    **                                   \n");
    printf("\t\t\t\t                         **   %d   **                        \n",n);
    printf("\t\t\t\t                          **      **                                     \n");
    printf("\t\t\t\t                             ****                                            \n");
    printf("\t\t\t\t                              **                                      \n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
     system("cls");
        fun12();
        break;

    case 2:
     system("cls");
        fun16();
        break;


    case 0:
     system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
     system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun16();
        break;




    }

    printf("\n\n\n");

}
void fun17()
{
    char name[30];
    int a,A;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                     Which 3 Job Suit Your Name ?                *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");

    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].male                        |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [2].Fmale                       |\n");
    printf("\t\t\t\t-----------------------------------\n");


    printf("\t\t\t\t  Choice Your Option[1,2]    : ");
    scanf("%d",&a);
    switch(a)

    {


    case 1:
        fun13();
        break;

    case 2:
        fun14();
        break;



    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun17();
        break;
    }


    printf("\n\n\n");

}
void fun18()
{
    char name[30];
    int m,a,n;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*             How Musc Money  will You Have in 2019?              *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");

    m=rand()%300;
    n=m+350;
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t                  Money is  %d$      \n",n);
    printf("\t\t\t\t-------------------------------------------------\n");

    printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun18();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t----------------------------------------");
        printf("\n\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t|--------------------------------------|");
        printf("\n\t\t\t|               LOL Games              |");
        printf("\n\t\t\t|--------------------------------------|");
        printf("\n\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun18();
        break;



    }

    printf("\n\n\n");


}
void fun19()
{
    char name[30];
    int m,a,n,n1,n2;
    printf("\n\n\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                       Love or Arranged Marriage ?               *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");
    m=(rand()%60);
    n=m+40;
    n1=(100-n);

    printf("\t\t\t\t------------------------------------------\n");
    printf("\t\t\t\t              Love %d percentage                      \n",n);
    printf("\t\t\t\t------------------------------------------\n");
    printf("\t\t\t\t              Arranged %d percentage                       \n",n1);
    printf("\t\t\t\t------------------------------------------\n");

    printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun19();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;

    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun19();
        break;



    }

    printf("\n\n\n");



}
void fun20()

{
    char name[30];
    int m,n,a;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                  Which 3 Words Best Describe You ?              *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");
    m=rand()%10;
    if(m==0)
    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].PERFECT\n");
        printf("\t\t\t\t [2].BEAUTIFUL\n");
        printf("\t\t\t\t [3].CONFIDENT\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==1)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].CRAZY\n");
        printf("\t\t\t\t [2].CARING\n");
        printf("\t\t\t\t [3].AWESOME\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==2)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].FAITHFUL\n");
        printf("\t\t\t\t [2].AWESOME\n");
        printf("\t\t\t\t [3].POSITIVE\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==3)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].PERFECT\n");
        printf("\t\t\t\t [2].HELPFUL\n");
        printf("\t\t\t\t [3].CRAZY\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==4)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].RICH\n");
        printf("\t\t\t\t [2].BEAUTIFUL\n");
        printf("\t\t\t\t [3].CARING\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==5)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].TEACHER\n");
        printf("\t\t\t\t [2].ENGINEER\n");
        printf("\t\t\t\t [3].MODEL\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==6)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].EXTROVERT\n");
        printf("\t\t\t\t [2].POSITIVE\n");
        printf("\t\t\t\t [3].CLEVER\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==7)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].CARING\n");
        printf("\t\t\t\t [2].GREAT\n");
        printf("\t\t\t\t [3].IDEALISTIC\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==8)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].CRAZY\n");
        printf("\t\t\t\t [2].BEAUTIFUL\n");
        printf("\t\t\t\t [3].AWESOME\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else if(m==9)

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].DYNAMIC\n");
        printf("\t\t\t\t [2].AMAZING\n");
        printf("\t\t\t\t [3].CRAZY\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
    else

    {
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t [1].PERFECT\n");
        printf("\t\t\t\t [2].CARING\n");
        printf("\t\t\t\t [3].HELPFUL\n");
        printf("\t\t\t\t-------------------------------------------------\n");
    }
       printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun20();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;

    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun20();
        break;



    }
    printf("\n\n\n");


}
void fun21()
{
   char name[30];
    int m,a,n;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                    How Many People Love & Hate you ?            *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");
    m=(rand()%60)+40;
    n=100-m;

    printf("\t\t\t\t------------------------------------------\n");
    printf("\t\t\t\t              Love %d percentage                      \n",m);
    printf("\t\t\t\t------------------------------------------\n");
    printf("\t\t\t\t              Hate %d percentage                       \n",n);
    printf("\t\t\t\t------------------------------------------\n\n\n\n");
       printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun21();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun21();
        break;



    }



}
void fun22()
{
    char name[30];
      int m,n,s,a;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                      When Will You Get Married ?                *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");
    m=(rand()%31)+1;
    n=(rand()%12)+1;
    s=(rand()%12)+20;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t                                                                 \n");
    printf("\t\t\t\t              Married Year = %d - %d - 20%d               \n",m,n,s);
    printf("\t\t\t\t                                                                 \n");
    printf("\t\t\t\t*******************************************************************\n");
       printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
     system("cls");
        fun12();
        break;

    case 2:
     system("cls");
        fun22();
        break;


    case 0:
     system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
     system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun22();
        break;



    }
    printf("\n\n\n");
}
void fun23()
{
    char name[30];
    int m,n,a;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                     How Many kids Will You Have ?               *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");

    m=(rand()%10)+1;

    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t                   %d kids      \n",m);
    printf("\t\t\t\t-------------------------------------------------\n");
       printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun23();
        break;


    case 0:
    system("cls");
      printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
    system("cls");
        printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun23();
        break;



    }
    printf("\n\n\n");



}
void fun24()
{
   char name[30];
    int m,n,a;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                     How People Crush You ?                      *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t  Enter Your Name       : ");
    scanf("%s",&name);
    printf("\n\t\t\t\t-------------------------------------------------\n");

    m=(rand()%120)+5;

    printf("\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t                %d People Crush You      \n",m);
    printf("\t\t\t\t-------------------------------------------------\n");

      printf("\n\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1].Home       | [2].Back       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [0].Exit                        |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t  Choice Your Option[ 1,2,0 ]  : ");
    scanf("%d",&a);

    switch(a)

    {


    case 1:
    system("cls");
        fun12();
        break;

    case 2:
    system("cls");
        fun24();
        break;


    case 0:
    system("cls");
        printf("\n\n\t\t\t\t----------------------------------------");
        printf("\n\t\t\t\t|  Thank You Playing For LOL Games     | ");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t|               LOL Games              |");
        printf("\n\t\t\t\t|--------------------------------------|");
        printf("\n\t\t\t\t| Created By : MD. Rakibul Islam Sony  |");
        printf("\n\t\t\t\t| Phn.No     : 01521115870             |");
        printf("\n\t\t\t\t----------------------------------------\n\n\n\n");
        getch();
        break;


    default:
    system("cls");
       printf("\n\t\t\t\t-----------------------------");
        printf("\n\t\t\t\t You Entered Worng Choice...");
        printf("\n\t\t\t\t     Please Try Again ");
        printf("\n\t\t\t\t-----------------------------\n\n");
        fun24();
        break;



    }
    printf("\n\n\n");


}

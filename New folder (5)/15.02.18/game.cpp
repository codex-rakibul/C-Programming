#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
using namespace std;
int score,highscore;
char retry='y';
int main()
{
    cout <<endl;
    cout <<endl;
    cout <<"  ***** *   *  ***  *   * *****\n";
    cout <<"  *     **  * *   * * *   *\n";
    cout <<"  ***** * * * ***** **    ***\n";
    cout <<"      * *  ** *   * * *   *\n";
    cout <<"  ***** *   * *   * *   * ******\n";
    cout <<endl;
    cout <<" Press Any Key to Continue"<<endl;
    getch();
    while (retry=='y' || retry == 'Y')
    {
    srand(time(NULL));
    score=0;
    int pion=(rand()-1)%18+1;
    int poin=(rand()-1)%18+1;
    int x[100];
    int y[100];
    x[0]=10;
    y[0]=10;
    x[1]=9;
    y[1]=10;
    x[2]=8;
    y[2]=10;
    int ular=3 ;
    string a[20][20];
    char ctr='d';
    while (x[0]!=0 && x[0]!=19 && y[0]!=0 && y[0]!=19)
    {
        for (int i=0;i<20;i++)
        {
            for (int j=0;j<20;j++)
            {
                if (i==0 || j==0 || i==19 || j==19)
                     a[i][j]="* ";//mencetak batas pinggir
                else
                     a[i][j]="  ";//mencetak jalan
            }
        }
        a[poin][pion]="o "; //mencetak makanan
        for(int s=ular;s>0;s--)
        {
            x[s]=x[s-1];//agar badan dan ekor mengikuti kepala snake
            y[s]=y[s-1];
        }
        for (int r=0;r<=ular;r++)
        {
            a[y[r]][x[r]]="* ";
        }
        if (kbhit())//meminta inputan w,a,s,d untuk gerak snake
        {
            ctr=getch();
        }
        if(ctr=='w')
            y[0]--;
        if(ctr=='s')
            y[0]++;
        if(ctr=='a')
            x[0]--;
        if(ctr=='d')
            x[0]++;
        for(int m=0;m<20;m++)
        {
            for (int n=0;n<20;n++)
            {
                cout << a[m][n]; //menampilkan game
            }
        cout <<endl;
        }
        if (a[0][0]==a[poin][pion])
        {
            ular++;
            poin=rand()%19;
            if (poin%19==0)
                poin++;
            pion=rand()%19;
            if (pion%19==0)
                pion++;
            score=score+1;
         }
        for (int gh=1;gh<ular;gh++) //agar snake mati saat menabrak dirinya
        {
            if (x[0]==x[gh] && y[0]==y[gh] )
            {
                x[0]=0;
            }
        }
    Sleep(25);
    system("cls");
    }
    cout << "GAMEOVER!" <<endl;
    cout << "Score = " << score<<endl;
    if (score > highscore)
    {
        highscore=score;
    }
    cout << "High Score = "<<highscore<<endl;
    cout << "retry (y/n)"; cin >>retry;
    }
    return 0;
}

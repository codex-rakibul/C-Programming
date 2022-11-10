#include<iostream>

enum{MAX=20};

int main(){

  int n; //the dimension of table

  double profit[MAX][MAX][MAX];

  int path[MAX][MAX][MAX];

 while(scanf("%d",&n)==1) {


      for(int s=0;s<n;++s)

          for(int i=0;i<n;++i)

              for(int j=0;j<n;++j)

                  profit[s][i][j] = 0.0;



      for(int i=0;i<n;++i){

          for(int j=0;j<n;++j){

              if (i==j)

                  profit[0][i][j] = 1.0;

              else

                  scanf("%lf", &profit[0][i][j]);

              path[0][i][j] = i;

          }

      }




      for(int steps=1;steps<n;++steps){

          for(int k=0;k<n;++k){

              for(int i=0;i<n;++i){

                  for(int j=0;j<n;++j){



                      double tmp = profit[steps-1][i][k] * profit[0][k][j];

                      if(tmp > profit[steps][i][j]){

                          profit[steps][i][j] = tmp;

                          path[steps][i][j] = k;

                      }

                  }

              }

          }

      }


      int steps, targetNo=-1;

      for(steps=1; steps<n; steps++){

          for (int i=0; i<n; i++){

              if (profit[steps][i][i] > 1.01) {

                  targetNo = i;

                  break;

              }

          }

          if(targetNo!=-1)

              break;

      }


      if(targetNo==-1)

          printf("no arbitrage sequence exists\n");

      else{

          int outputSeq[MAX];
          int index=0;



          int currentNo = targetNo;

          outputSeq[index++] = targetNo;

          for(int s=steps;s>=0;--s){

              currentNo = path[s][targetNo][currentNo];

              outputSeq[index++] = currentNo;

          }



          for(int i=index-1;i>0;--i)

              printf("%d ", outputSeq[i]+1);

          printf("%d\n", outputSeq[0]+1);

      }

  }

  return 0;

}

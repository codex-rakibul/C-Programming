#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define LL long long
#define MX 100000
#define MOD 1000000007

int bx,dmn;
int parent[32],mx_arr[32];
vector<int>path;
vector<int>:: iterator it;

struct Z{
    int serial;
    int dimention[12];
}box[32];


bool cmp(int a,int b)
{
    for(int i=0;i<dmn;i++)
        if(box[a].dimention[i]<=box[b].dimention[i])
            return false;
    return true;
}

void backtract(int x)
{
    if ( x == parent [x] )
    {
        path.PB(box[x].serial);
        return ;
    }

    backtract(parent [x]);

    path.PB (box[x].serial);
}

void LIS()
{
    for(int i=0;i<bx;i++)
    {
        mx_arr[i]=1;
        parent[i]=i;
    }

    for ( int i = 1; i < bx; i++ )
        for ( int j = 0; j < i; j++ )
            if (( cmp (i, j)) && (mx_arr [i] < mx_arr [j] + 1 ))
            {
                mx_arr [i] = mx_arr [j] + 1;
                parent [i] = j;
            }

    int idx,mx=0;
    for(int i=0;i<bx;i++)
        if(mx_arr[i]>mx)
        {
            mx=mx_arr[i];
            idx=i;
        }
    cout<<mx<<endl;

    backtract(idx);
}

int main()
{
    //READ;
    //WRITE;
    while(cin>>bx>>dmn)
    {
        for(int i=0;i<bx;i++)
        {
            box[i].serial=i+1;
            for(int j=0;j<dmn;j++)
                cin>>box[i].dimention[j];
            sort(box[i].dimention, box[i].dimention+dmn);
        }

        for ( int i = 0; i < bx; i++ )
            for ( int j = i + 1; j < bx; j++ )
            {
                if ( cmp (i, j) )
                    swap (box [i], box [j]);
            }

        LIS();

        for(it=path.begin();it!=path.end();it++)
            {
                if(it!=path.begin())
                    cout<<" ";
                cout<<*it;
            }

        cout<<endl;

        path.clear();
        CLR(mx_arr);
        CLR(parent);
        CLR(box);

    }
return 0;
}

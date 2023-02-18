#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("parcela.in");
ofstream fout("parcela.out");
#define sasha 0
int a[102][102];
void fillus(int i, int j, int &c)
{
    if(a[i][j]==1)
    {
        a[i][j]=0;
        c++;
        if(a[i+1][j]==1)
            fillus(i+1,j,c);
        if(a[i-1][j]==1)
            fillus(i-1,j,c);
        if(a[i][j+1]==1)
            fillus(i,j+1,c);
        if(a[i][j-1]==1)
            fillus(i,j-1,c);
    }
}
int main()
{
    int n,m,cnt=0,maxx=0,lmax=0;
    fin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            fin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]==1)
            {
                cnt++;
                int c = 0;
                fillus(i,j,c);
                if(c>maxx)
                {
                    maxx=c;
                    lmax=cnt;
                }
            }
    fout<<cnt<<' '<<maxx<<' '<<lmax;
    return sasha;
}
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("fill.in");
ofstream fout("fill.out");
#define SASHA 0
int n,m,a[101][101],k=0;
void filus(int x,int y)
{
    if(a[x][y]==1)
    {
        a[x][y]=2;
        filus(x-1,y);
        filus(x,y+1);
        filus(x+1,y);
        filus(x,y-1);
    }
}
int main()
{
    fin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            fin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]==1)
                {
                    k++;
                    filus(i,j);
                }
    fout<<k;
    return SASHA;
}
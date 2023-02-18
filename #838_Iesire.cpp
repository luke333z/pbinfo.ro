#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("iesire.in");
ofstream fout("iesire.out");
#define sasha 0
int n, m, a[101][101], b[101][101],smax=0;

bool inmat(int i, int j){
    return i>=1&&j>=1&&i<=n&&j<=n;
}
int di[]={0,0,-1,1}, dj[]={-1,1,0,0};

void fillus(int i, int j){
    b[i][j]=1;a[i][j]=1;
    for(int d=0;d<4;d++){
        int inou=i+di[d];
        int jnou=j+dj[d];
        if(inmat(inou,jnou)&&a[inou][jnou]==0)
            fillus(inou,jnou);
    }
}
int main(){
    fin>>n>>m;
    for(int i=1; i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>>a[i][j];
    for(int i=1;i<=n;i++)
    {
        if(a[i][n] == 0)
            fillus(i, n);
        if(a[i][1] == 0)
            fillus(i, 1);
        if(a[1][i] == 0)
            fillus(1, i);
        if(a[n][i] == 0)
            fillus(n, i);
    }
    int x, y;
    for(int i=1;i<=m;i++)
    {
        fin>>x>>y;
        if(b[x][y] == 1)
            fout << "da"<<'\n';
        else
            fout << "nu"<<'\n';
    }
    return sasha;
}
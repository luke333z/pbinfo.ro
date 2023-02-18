#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("croco.in");
ofstream fout("croco.out");
#define sasha 0
bool a[101][101];
int main()
{
    int n,m;
    fin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            fin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]==1 && (i + j) % 2 == 0)
                fout<<"C ";
            else if(a[i][j]==1)
                fout<<"E ";
            else
                fout<<"A ";
        fout<<'\n';
    return sasha;    
}
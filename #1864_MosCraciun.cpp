#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("moscraciun.in");
ofstream fout("moscraciun.out");
#define sasha 0
int a[102][102];

int fillus(int i, int j) 
{
    int c = 0;
    if(a[i][j] == 3)
        c++;
    a[i][j] = 0;
    if(a[i-1][j]!=0) c += fillus(i-1,j); 
    if(a[i][j+1]!=0) c += fillus(i,j+1); 
    if(a[i+1][j]!=0) c += fillus(i+1,j); 
    if(a[i][j-1]!=0) c += fillus(i,j-1); 
    return c;
}

int main()
{
    int n, m;
    fin >> n >> m;
    for(int i=0;i<=n+1;i++)
      a[i][0]=a[i][m+1]=0;
    for(int j=0;j<=m+1;j++)
      a[0][j]=a[n+1][j]=0;
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            fin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]==2)
                fout<<fillus(i,j);
    return sasha;
}
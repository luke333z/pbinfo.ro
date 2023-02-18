#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("grupuri.in");
ofstream fout("grupuri.out");
#define sasha 0
int a[102][102];
void fillus(int i, int j, int c)
{
    a[i][j]=c;
    if(a[i-1][j]==1) 
      fillus(i-1,j,c);
    if(a[i][j+1]==1)
      fillus(i,j+1,c);
    if(a[i+1][j]==1) 
      fillus(i+1,j,c);
    if(a[i][j-1]==1) 
      fillus(i,j-1,c);
}
int main()
{
    int n,c=0;
    fin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(a[i][j]==1)
            {
                c++;
                fillus(i,j,c+1);
            }
    fout<<c;
    return sasha;
}
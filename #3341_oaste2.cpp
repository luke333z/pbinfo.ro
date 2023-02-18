#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("oaste2.in");
ofstream fout("oaste2.out");
#define sasha 0
int n,m,a[101][101],c,sum,cmin=1000000,smax=0;

bool inmat(int i, int j){
    return i>=1&&j>=1&&i<=n&&j<=m;
}
int di[]={0,0,-1,1}, dj[]={-1,1,0,0};

void fillus(int i, int j){
    c++;
    sum+=a[i][j];
    a[i][j]=0;
    for(int d=0;d<4;d++){
        int inou=i+di[d];
        int jnou=j+dj[d];
        if(inmat(inou,jnou)&&a[inou][jnou])
            fillus(inou,jnou);
    }
}
int main(){
    fin>>n>>m;
    for(int i=1; i<=n;i++)
        for(int j=1;j<=m;j++)
            fin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j])
            {
                c=0;sum=0;
                fillus(i,j);
                if(sum>smax)
                    smax=sum, cmin=c;
                else if(sum==smax&&c<cmin)
                    cmin=c;
            }
    fout<<smax<<' '<<cmin;
    return sasha;
}
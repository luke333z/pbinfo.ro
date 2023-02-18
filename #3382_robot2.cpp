#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("robot.in");
ofstream fout("robot.out");
int c,n,x,y,xy,v[100001],nrbom,minn=999999;
int main()
{
    fin>>c>>n;
    for(int i=1; i<=n; i++)
    {
        fin>>x>>y;
        if(x<=y&&x!=0)xy=x*100+y;
        if(y<x&&y!=0)xy=y*100+x;
        v[xy]++;
    }
    for(int i=100; i<=10000; i++)
    {
        if(v[i]!=0)nrbom++;
        if(v[i]!=0&&v[i]<minn)minn=v[i];
    }
    if(c==1)fout<<nrbom;
    if(c==2)fout<<minn;
    return 0;
}
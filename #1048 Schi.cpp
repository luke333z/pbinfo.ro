#include <iostream>
#include <fstream>
using namespace std;
ifstream in("schi.in");
ofstream out("schi.out");
int v[100001],c[100001],pos[100001],cnt;
int cb(int x)
{
    int st,dr,mij,pos=-1;
    st=1;
    dr=cnt;
    while(st<=dr)
    {
        mij=(st+dr)/2;
        if(c[mij]==x)
        {
            pos=mij;
            break;
        }
        if(c[mij]>x)
            dr=mij-1;
        else
            st=mij+1;
    }
    return pos;
}
int main()
{
    int n,m,k,maxx=-1;
    cnt=1;
    in>>n;
    for(int i=1;i<=n;i++)
    {
        in>>v[i];
        if(v[i]>maxx)
        {
            maxx=v[i];
            c[cnt]=v[i];
            pos[cnt]=i;
            cnt++;
        }
    }
    in>>k;
    for(int i=1;i<=k;i++)
    {
        in>>m;
        int posfin=cb(m);
        if(posfin==cnt-1)
            out<<n-pos[posfin]+1<<' ';
        else if(posfin <0)
            out<<0<<' ';
        else
            out<<pos[posfin+1]-pos[posfin]<<' ';
    }
    return 0;
}
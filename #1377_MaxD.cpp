#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("maxd.in");
ofstream fout("maxd.out");
int nrdiv(int n)
{
    int cnt=1;
    int p,d=2;
    while(n>1)
    {
        p=0;
        while(n%d==0)
        {
            p++;
            n/=d;
        }
        cnt*=(p+1);
        d++;
        if(d*d>n)d=n;
    }
    return cnt;
}
int main()
{
    int a,b,nrmax=0,imax,cnt=0;
    fin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        int nrd=nrdiv(i);
        if(nrd>nrmax)
        {
            nrmax=nrd;
            imax=i;
            cnt=1;
        }
        else if (nrd==nrmax) cnt++;
    }
    fout<<imax<<' '<<nrmax<<' '<<cnt;
    return 0;
}
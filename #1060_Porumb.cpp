#include <bits/stdc++.h>

using namespace std;
ifstream fin("porumb.in");
ofstream fout("porumb.out");


int main()
{
    int n,x;
    fin>>n>>x;
    fout<<(n+1)/2<<'\n';
    int aux=n,cnt=1;
    while(aux>1)
    {
        cnt++;
        aux/=2;
    }
    fout<<cnt<<'\n';
    cnt=0;
    while(x%2==0)
    {
        x/=2;
        cnt++;
    }
    fout<<cnt+1<<'\n';
    int p=1;
    while(p*2<=n)p*=2;
    fout<<p;

    return 0;
}
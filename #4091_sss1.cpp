#include <iostream>
#include <fstream>
using namespace std;
#define SASHA 0
ifstream fin("sss.in");
ofstream fout("sss.out");
int main()
{
    int cer,n,v[100001];
    fin>>cer>>n;
    for(int i=1;i<=n;i++)
        fin>>v[i];
    if(cer==1)
    {
        int aux=v[1],k,s=0;
        bool ok=1;
        while(ok)
        {
            if(aux%10)
            {
                k=aux%10;
                ok=0;
            }
            aux/=10;
        }
        for(int i=n-k+1;i<=n;i++)
            s+=v[i];
        fout<<s;
    }
    else
    {
        int l=1,s=0,smax=0,n1=n;
        while(l<=n1)
        {
            for(int i=0;i<l;i++)
                s+=v[n1-i];
            smax=max(smax,s);
            s=0;
            n1-=l;
            l++;
        }
        fout<<smax;
    }
    return SASHA;
}
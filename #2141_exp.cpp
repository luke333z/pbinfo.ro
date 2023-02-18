#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("exp.in");
ofstream fout("exp.out");
#define sasha 0
int f[5001];
int main()
{
    int n,m,x;
    bool adv=false;
    fin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>x;
        int d=2;
        while(x>1)
        {
            int p=0;
            while (x%d==0)
            {
                p++;
                x=x/d;
            }
            if(p!=0) f[d]=f[d]+p;
            d++;
            if (d*d>x) d=x;
        }
    }
    for(int i=1;i<=5000;i++)
        if(f[i]!=0)
            if(f[i]%m!=0) adv=true;
    if(adv) 
        fout<<"0";
    else
    {
        fout << "1" << '\n';
        for (int i=1; i<=100;i++)
            if (f[i]!=0)
                fout<<i<<" "<<f[i]/m<<'\n';
    }
    return sasha;
}
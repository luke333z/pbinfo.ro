#include <bits/stdc++.h>

using namespace std;
ifstream fin("vistiernic.in");
ofstream fout("vistiernic.out");


int main()
{
    int n,f1=0,f2=0;
    fin>>n;
    for(int i=1; i<=n;i++)
    {
        int x; fin>>x;
        while(x%2==0)
        {
            f1++;
            x/=2;
        }
        while(x%5==0)
        {
            f2++;
            x/=5;
        }
    }
    if(f1<=f2)
        fout<<f1;
    else
        fout<<f2;
    return 0;
}
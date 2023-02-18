#include <bits/stdc++.h>

using namespace std;
ifstream in ("sumaxl.in");
ofstream out ("sumaxl.out");
int v[101],n,ok,s,k,ss,i,a[101],nr;
int main()
{
    in>>n;
    for(i=1; i<=n; i++)
        in>>v[i];
    in>>s;
    ss=s;
    while(ss)
    {
        k++;
        ss/=10;
    }
    if(k<=n)
    {

        for(i=1; i<=n; i++)
        {
            if(s%10+v[n-i+1]>=10)
            {
                v[n-i+1]=s%10+v[n-i+1]-10;
                v[n-i]++;
            }
            else
                v[n-i+1]=s%10+v[n-i+1];
            s/=10;
        }
        if(v[0]==0)
            for(i=1; i<=n; i++)
                out<<v[i];
        else
            for(i=0; i<=n; i++)
                out<<v[i];
    }
    else
    {
        for(i=1; i<=n; i++)
            nr=nr*10+v[i];
        out<<nr+s;
    }

    return 0;
}
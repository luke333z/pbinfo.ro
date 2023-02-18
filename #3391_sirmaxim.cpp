#include <bits/stdc++.h>

using namespace std;
ifstream fin("sirmaxim.in");
ofstream fout("sirmaxim.out");


int main()
{
    int n,maxx,cnt=0;
    fin>>n>>maxx;
    for(int i=2;i<=n/2;i++)
    {
        int x; fin>>x;
        maxx=max(maxx,x);
    }
    for(int i=n/2+1; i<=n;i++)
    {
        int x; fin>>x;
        if(maxx==x)
            cnt++;

    }
      fout<<cnt;
    return 0;
}
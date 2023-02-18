#include <bits/stdc++.h>
using namespace std;
ifstream fin("bete1.in");
ofstream fout("bete1.out");


int main()
{
    int n,a[1005],b[1005];
    fin>>n;
    int sum=0,maxa=0,maxb=0;
    for(int i=1;i<=n;i++)
    {
        fin>>a[i];
        sum+=a[i];
        maxa=max(maxa,a[i]);

    }
     for(int i=1;i<=n;i++)
    {
        fin>>b[i];
        sum+=b[i];
        maxb=max(maxb,b[i]);
    }
    int maxx=maxa+maxb, nr=0;
    fout<<sum/n<<'\n'<<maxx<<'\n';
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i]+b[j]==maxx)
            {
                nr++;
                i++;
                b[j]=0;
            }
        }
    }

    fout<<nr;
    return 0;
}
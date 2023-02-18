#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("zece.in");
ofstream fout("zece.out");
struct prob
{
    int pr,poz;
} p[1005];
int j;
int main()
{
    int n,k,c;
    fin>>c>>n>>k;
    for(int i=1; i<=n ; i++)
    {
        fin>>p[i].pr;
        p[i].poz=i;
    }
    for(int i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(p[i].pr<p[j].pr)
                swap(p[i],p[j]);
            if(p[i].pr==p[j].pr && p[i].poz>p[j].poz)
                swap(p[i].poz,p[j].poz);
        }

    }
    //   for(int j=1; j<=n;j++)
    //   {
    //     cout<<p[j].pr<<" "<<p[j].poz<<endl;
    //  }
    if(c==1)
    {
        for(j=1; j<=k; j++)
            fout<<p[j].pr<<" ";
        while(p[j].pr==p[j-1].pr)
        {
            fout<<p[j].pr<<" ";
            j++;
        }
    }
    else
    {
        for(j=1; j<=k; j++)
            fout<<p[j].poz<<" ";
        while(p[j].pr==p[j-1].pr)
        {
            fout<<p[j].poz<<" ";
            j++;

        }
    }

    return 0;
}
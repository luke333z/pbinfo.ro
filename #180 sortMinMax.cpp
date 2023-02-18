#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[1001];
int main()
{
    int n,k,l,maxx=0,minn=INT_MAX;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>maxx)
        {
            maxx=v[i];
            k=i;
        }
        if(v[i]<minn)
        {
            minn=v[i];
            l=i;
        }
    }
    if(k>l)
        swap(l,k);
    for(int i=k;i<l;i++)
        for(int j=i+1;j<=l;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);

    for(int i=1;i<=n;i++)
            cout<<v[i]<<' ';
    return 0;
}
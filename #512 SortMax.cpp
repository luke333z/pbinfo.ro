#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[1001];
int main()
{
    int n,k,maxx=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>maxx)
        {
            maxx=v[i];
            k=i;
        }
    }
    for(int i=1;i<k;i++)
        for(int j=i+1;j<=k;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    for(int i=k+1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]<v[j])
                swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
            cout<<v[i]<<' ';
    return 0;
}
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "halfsort";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[1001],a[1001];
int main()
{
    int n,k,l,maxx=0,minn=INT_MAX;
    in>>n;
    for(int i=1;i<=n;i++)
        in>>v[i];
    for(int i=1;i<n/2;i++)
        for(int j=i+1;j<=n/2;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    for(int i=n/2+1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]<v[j])
                swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
            out<<v[i]<<' ';
    return 0;
}
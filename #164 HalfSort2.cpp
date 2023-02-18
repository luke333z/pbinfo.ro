#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "halfsort2";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[1001],a[1001];
int main()
{
    int n,k,l,maxx=0,minn=INT_MAX;
    in>>n;
    for(int i=1;i<=n;i++)
        in>>v[i];
    for(int i=2;i<n;i+=2)
        for(int j=i+2;j<=n;j+=2)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    for(int i=1;i<n-1;i+=2)
        for(int j=i+2;j<=n-1;j+=2)
            if(v[i]<v[j])
                swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
            out<<v[i]<<' ';
    return 0;
}
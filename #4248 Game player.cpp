#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define NMAX 200001
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename    + ".out");\
int v[NMAX],c[NMAX],pos[NMAX],cnt;
int cautareBinara(int x)
{
    int l=1,r=cnt,mid,poz;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(c[mid]==x)
            return mid;
        if(c[mid]<x)
            r=mid-1;
        else
            l=mid+1;
    }
    return l;
    
}
int main() 
{
    int n,k,s; cnt=1;cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]!=v[i-1])
        {
            c[cnt]=v[i];
            pos[cnt]=i;
            cnt++;
        }
    }
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>s;
        cout<<cautareBinara(s)<<'\n';
    }
    return 0;
}
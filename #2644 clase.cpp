#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define NMAX 10001
string filename = "clase";
ifstream in(filename + ".in");
ofstream out(filename    + ".out");
long long v[NMAX],c[NMAX],pos[NMAX],n;
int cautareBinara(long long x)
{
    int l=1,r=n,mid,poz=-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]==x)
        {
            poz=mid;
            break;
        }
        if(v[mid]>x)
            r=mid-1;
        else
            l=mid+1;
    }
    return poz;
    
}
int main() 
{
    long long k,s,cnt=0;in>>n;
    for(int i=1;i<=n;i++)
        in>>v[i];
    in>>k;
    for(int i=1;i<=k;i++)
    {
        in>>s;
        int posfin =cautareBinara(s);
        if(posfin>=0)
            cnt++;
    }
   out<<cnt;
    return 0;
}

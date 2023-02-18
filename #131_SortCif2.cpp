#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "sortcif2";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[1001],a[1001];
int main()
{
    int n,k,l,maxx=0,x;
    in>>n;
    for(int i=1;i<=n;i++)
    {
        in>>x;
        a[i]=x;
        while(x>9)
        {
            x/=10;
        }
        v[i]=x;
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
                swap(a[i],a[j]);
            }
    for(int i=1;i<=n;i++)
            out<<a[i]<<' ';
    return 0;
}
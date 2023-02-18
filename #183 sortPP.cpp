#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[1001],a[1001];
int main()
{
    int n,k,l,maxx=0,minn=INT_MAX;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if((int)sqrt(v[i]) == sqrt(v[i]))
        {
            a[i]=1;
        }
       
    }
    
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j])
                if(a[i]==1 && a[j]==1)
                    swap(v[i],v[j]);

    for(int i=1;i<=n;i++)
            cout<<v[i]<<' ';
    return 0;
}
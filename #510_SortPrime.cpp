#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");

int main()
{
    int n,v[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        for(int d=1; d*d<=v[i]; d++)
            if(v[i]%d==0)
            {
                cnt++;
                if(d*d<v[i]) 
                    cnt++;
            }
        if(cnt==2)
            cout<<v[i]<<' ';
    }
    return 0;
}
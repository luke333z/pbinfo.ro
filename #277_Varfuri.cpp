#include <bits/stdc++.h>

using namespace std;
ifstream fin("input.in");
ofstream fout("output.out");


int main()
{
    int n,v[1001],cnt=0;
    cin>>n;
    for(int i=1; i<=n;i++)
        cin>>v[i];
    for(int i=2;i<n;i++)
        if(v[i]>v[i-1]&&v[i]>v[i+1])
            cnt+=v[i];
    cout<<cnt;
    return 0;
}
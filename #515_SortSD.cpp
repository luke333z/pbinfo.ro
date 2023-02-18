#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
ifstream in("file.in");
ofstream out("file.out");

int main()
{
    int n, v[1001],s[1001]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];

        for(int d=1;d*d<=v[i];d++)
            if(v[i]%d==0)
            {
                s[i]+=d;
                if(d*d<v[i])
                    s[i]+=(v[i]/d);
            }
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(s[i]>=s[j])
            {
                swap(v[i],v[j]);
                swap(s[i],s[j]);
                if(s[i]==s[j])
                    if(v[i]>v[j])
                        swap(v[i],v[j]);
            }
    for(int i=1;i<=n;i++)
        cout<<v[i]<<' ';
    return 0;
}
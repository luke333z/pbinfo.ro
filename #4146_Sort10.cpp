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
            if(v[i]<v[j])
                swap(v[i],v[j]);
    bool ok=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i]%10==0)
        {
            cout<<v[i]<<' ';
            ok=1;
        }
    }
    if(!ok)
        cout<<"NU EXISTA";

    return 0;
}
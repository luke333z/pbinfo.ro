#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
ifstream in("file.in");
ofstream out("file.out");

int main()
{
    int n, v[1001],x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        while(x>9)
        {
            x/=10;
        }
        v[i]=x;
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
        cout<<v[i];
    return 0;
}
#include <iostream>

using namespace std;
int n;
int main()
{
    int v[1001];
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
           cin>>v[i];
    }
    for(int i = 1; i<=n; i++)
    {
            if(v[i]%v[n]==0)
            {
                    cout<<v[i]<<" ";
            }
    }
    return 0;
}
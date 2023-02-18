#include <iostream>

using namespace std;
int n,o,e;
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
            if(v[i]%2==0)
            {
                    e++;
            }
            else
            {
                o++;
            }
    }
    if(e>o)
    {
        cout<<e-o;
    }
    else
    {
        cout<<o-e;
    }
    return 0;
}
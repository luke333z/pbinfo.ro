#include <iostream>

using namespace std;

int main()
{
    long long n,m=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        m=m*i;
    }
    if(n!=0)
    {
        cout<<m;
    }
    else
    {
        cout<<1;
    }
    return 0;
}
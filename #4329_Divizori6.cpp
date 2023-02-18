#include <iostream>
using namespace std;
int n, d, ok, s;
int main ()
{
    cin>>n;
    for (d=2; d*d<=n; d++)
        if(n%d==0)
        {
           cout<<d+n/d;
            return 0;
        }
    return 0;
}
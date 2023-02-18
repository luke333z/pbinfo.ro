#include <iostream>

using namespace std;
int n,p,s,u,z;
int main()
{
    cin >> n;
    if(n<=999 and n>=100)
    {

    }
    s=n/100;
    u=n%10;
    p=s*u;
    cout<<p;
    return 0;
}
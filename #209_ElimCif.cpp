#include <iostream>

using namespace std;
int n,s,u,z;
int main()
{
    cin >> n;
    if(n<1000 and n>99)
    {

    }
    s=n/100;
    z=n/10;
    u=n%10;
    cout<< s*10+u;
    return 0;
}
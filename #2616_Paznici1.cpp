#include <iostream>

using namespace std;

int main()
{
    long long m,n,pm,pn,P;
    cin >> m >> n;
    if(m%2==0)
    {
        pm=m/2;
    }
    else
    {
        pm=m/2+1;
    }
    if(n%2==0)
    {
        pn=n/2;
    }
    else
    {
        pn=n/2+1;
    }
    P=pm*pn;
    cout<<P;


return 0;
}
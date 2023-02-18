#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, p=1;
    bool gasit=false;
    cin >>n;
    while (n != 0)
    {
        if (n%2==1)
        {
            p=p*(n%10);
            gasit=true;
        }
            n=n/10;

    }
    if (gasit == true)
        cout << p;
    else
        cout << -1;
    return 0;
}
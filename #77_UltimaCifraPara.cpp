#include <bits/stdc++.h>

using namespace std;

int main ()
{
    long long int n;
    cin >> n;
    int par=0;
    int cnt=0;
    if (n == 0)
        cnt++;    
    while (n>0)
    {
        if (n%2==0)
        {
        par = n%10;
        cnt++;
        break;
        }
        else
        n/=10;
    }
    if (cnt == 0)
    cout << -1;
    else
    cout << par;
    return 0;
}
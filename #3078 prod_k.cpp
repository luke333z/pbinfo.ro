#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, p;
    long long int prod = 1;
    int nr = 0;
    int cnt = 0;
    cin >> n >> p;
    while(n)
    {
        if(n % 10 != p)
            prod = prod * (n % 10);
        else
            cnt++;
        n/=10;
        nr++;
    }
    if(cnt < nr)
        cout << prod;
    else
        cout << 0;
}
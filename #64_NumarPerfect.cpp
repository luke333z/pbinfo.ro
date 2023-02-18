#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int cnt=0;

    long long sumaDiv = 0;
    for (int d = 1; d * d <= n; ++d)
        if (n % d == 0)
        {
            sumaDiv += d;
            if (d * d != n)
                {sumaDiv += n / d;
                }
        }
        if (sumaDiv == 2*n)
        cout << n << " este perfect";
        else
        cout << n << " nu este perfect";
    return 0;
}
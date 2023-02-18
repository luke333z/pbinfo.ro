#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a[100001],s1=0,s2=0;
    cin >> n;
    for (int i = 1 ; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1 ; i <= n; ++i)
    {
        if (i <= n/2)
            s1+=a[i];
        else
            s2+=a[i];
    }
    cout << s1*s2;
    return 0;
}
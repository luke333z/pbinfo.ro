#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt=0;
    int a[1001];
    for (int i = 0 ; i < n ; ++i)
    cin >> a[i];
    for (int i = 0 ; i < n ; ++i)
    {
        if ((a[i]>=a[0] && a[i]<=a[n-1])||(a[i]<=a[0] && a[i]>=a[n-1]))
        cnt++;
    }
    if (cnt==n)
    cout << "DA";
    else
    cout << "NU";
    
}
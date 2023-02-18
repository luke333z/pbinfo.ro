#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001];
    int cnt=0;
    for (int i = 0 ; i < n; ++i)
    cin >> a[i];
    for (int i = 1 ; i < n-1; ++i)
    {
        if (a[i-1]%2 == a[i]%2 && a[i]%2 == a[i+1]%2) 
        cnt++;
    }
    if (cnt!=0)
    cout << "DA";
    else
    cout << "NU";
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0 ; i < n ; ++i)
    cin >> a[i] ;
    int m;
    cin >> m;
    int b[1000];
    for(int i = 0 ; i < m ; ++i)
    cin >> b[i];
    for(int i = 0 ; i < m ; ++i)
    {
        int cnt=0;
        for(int j = 0 ; j < n ; ++j)
        if(b[i]==a[j])
        cnt++;
        if(cnt!=0)
        cout << 1 << ' ';
        else
        cout << 0 << ' ';
    }
    return 0;
}
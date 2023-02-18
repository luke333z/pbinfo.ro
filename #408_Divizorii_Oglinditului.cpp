#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,r=0;
    cin >> n;
    while(n)
    {
    r=r*10+n%10;
    n=n/10;
    }
    int cnt=0;
    for (int i = 1; i*i <= r ; ++i)
    {
        if (r%i==0)
            cnt+=2;
        if (i*i==r)
            cnt-=1;;
    }
    cout << cnt;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int cnt2 = 0, cnt3 = 0;
    cin >> n;
    while(n > 0){
        if(n % 10 == 2)
            cnt2++;
        else
            cnt3++;
        n/=10;
    }
    if(cnt2 > cnt3)
        cout << 2;
    else if(cnt2 == cnt3)
        cout << 2 << ' ' << 3;
    else
        cout << 3;
    return 0;
}
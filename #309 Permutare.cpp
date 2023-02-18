#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101];
    for(int i = 1 ; i <= n ; ++i)
    cin >> a[i];
    sort(a+1, a+n+1);
    bool dif=true;
    for(int i = 1 ; i <= n ; ++i)
    {
        if(a[i]!=i)
        dif=false;
    }
    if(dif)
    cout << "DA";
    else
    cout << "NU";
    return 0;    
}
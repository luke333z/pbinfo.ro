#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[10];
    int f[100];
    f[0]=1 , f[1]=1;
    for(int i = 2 ; i < 45 ; ++i)
    f[i]=f[i-1]+f[i-2];
    for(int i = 0 ; i < n ; ++i)
    cin >> a[i];
    for(int i = 0 ; i < n ; ++i)
    {
        int cnt=0;
        for(int j=0 ; j < 45 ; ++j)
        if(f[j]==a[i])
        cnt++;
        if(cnt==0)
        cout << "NU" << endl;
        else
        cout << "DA" << endl;
    }
    return 0;    
}
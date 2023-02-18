#include <bits/stdc++.h>
using namespace std;
int main()
{
     unsigned long long n,x,y,s=0,k;
    cin>>n>>k;
    cout<<(n/k)*(((k-1)*k)/2)+(n%k)*(n%k+1)/2;
    return 0;
}
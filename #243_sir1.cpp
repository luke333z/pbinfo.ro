#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,i=1,s=0;
    cin>>n;
    do
    {
        s+=i;
        i+=1;
    }
    while(s+i<=n);
    if(s==n)
        cout<<1;
    else
        cout<<i+1-n%s;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int n,ok,i;
int main()
{
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ok=1;
    for (i=0;i<n-2;i++)
    {
        if (a[i]<a[i+1])
        {
            if (a[i+1]<a[i+2])
                ok=0;
        }
        else
        {
            if (a[i]>a[i+1])
            {
                if (a[i+1]>a[i+2])
                    ok=0;
            }
        }
        if (a[i]==a[i+1])
            ok=0;
    }
    if (ok==0)
        cout<<"NU";
    else cout<<"DA";

    return 0;
}
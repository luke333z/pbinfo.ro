#include <iostream>

using namespace std;
int main()
{
    int n,s,x=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        s+=x;
    }
    cout<<s;
    return 0;
}
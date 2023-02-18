#include <iostream>

using namespace std;
int main()
{
    int n,s=0,x;
    while(cin>>x)
    {
        if(x==0)
        {
            cout<<s; return 0;
        }
        s+=x;
    }
    cout<<s;
    return 0;
}
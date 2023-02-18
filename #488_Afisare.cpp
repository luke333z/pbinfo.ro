#include <iostream>

using namespace std;

int main()
{
    int v[1001];
    int n;cin>>n;
    for(int i =1;i<=n;i++)
        cin>>v[i];
    for(int i=2;i<=n/2*2;i+=2)
        cout<<v[i]<<' ';
    cout<<endl;
    for(int i=n;i>0;i--)
        if(i%2!=0)
        cout<<v[i]<<' ';


    return 0;
}
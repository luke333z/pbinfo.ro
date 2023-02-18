#include <iostream>

using namespace std;

int main()
{
    int n,m,a,nr=0;
    cin>>n>>m;
    for(int i=1; i<=3; i++)
    {
        a=n%10;
        if(a!=0 && m%a==0)
        {
            nr++;
        }
        n=n/10;
    }
    cout<<nr;


    return 0;
}
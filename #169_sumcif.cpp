#include <iostream>

using namespace std;

int main()
{
    int n,cu,cz,cs;
    cin>>n;
    cu=n%10;
    cz=(n/10)%10;
    cs=n/100;
    cout<<cu+cz+cs;
    return 0;
}
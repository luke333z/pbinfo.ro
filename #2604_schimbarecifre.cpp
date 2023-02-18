#include <iostream>

using namespace std;

int main()
{
    int n,cu,cz,P;
    cin>>n;
    cu=n%10;
    cz=n/10;
    cout<<(cu*10+cz)*(cu*10+cz);
    return 0;
}
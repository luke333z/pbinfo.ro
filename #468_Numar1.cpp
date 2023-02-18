#include <iostream>

using namespace std;

int main()
{
    int n,cu,cs,P;
    cin>>n;
    cu=n%10;
    cs=n/100;
    P=(cs*10+cu)*(cs*10+cu);
    cout<<P;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    long long n,unu,S;
    cin >> n;
    unu=(n+1)/2;
    S=(((n+1)/2)*((n+1)/2+1))-unu;
    cout<<S;
    return 0;
}
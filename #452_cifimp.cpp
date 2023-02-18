#include <iostream>

using namespace std;
int n;
int main()
{
    cin >> n;
    if(n<1000 && n>99)
    cout << n%2+n/10%2+n/10/10%2;
    else
    return 0;
}
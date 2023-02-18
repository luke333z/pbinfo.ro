#include <iostream>
using namespace std;
int main()
{
    int n,cz,cs;
    cin>>n;
    cs=n%10;
    cz=n/10%10;
    cout << cs+cz;
    return 0;
}
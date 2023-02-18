#include <iostream>

using namespace std;

int main()
{
    int n,R;
    cin >> n;
    if(n<=15)
    {
        R=n*n;
    }
    if(n>=16 && n<=30)
    {
        R=(n/10)+(n%10);
    }
    if(n>30)
    {
        R=(n/10)*(n%10);
    }
    cout<< R;
    return 0;
}

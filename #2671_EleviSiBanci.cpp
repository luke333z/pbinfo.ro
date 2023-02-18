#include <iostream>

using namespace std;

int main()
{
    long long n,m,e,b,s,d;   
    cin >> n >>m >>e>>b;     
    d=(m*b+e)/(m-n);
    s=d*n+e;
    cout << s << endl;
    cout << d;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int x,l,i,z;
    cin >> x;
    i=x%10;
    l=x/100;
    z=x%100/10;
    if(i==l && l==z)
    {
        cout << "da";
    }
    else
    {
        cout << "nu";
    }
    return 0;
}
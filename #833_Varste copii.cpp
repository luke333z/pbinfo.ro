#include <iostream>

using namespace std;
int a,b,x;
int main()
{
    cin >> a >> b;
    if(a==b)
    {
        cout << "Copiii au varste egale";
    }
    else
    if (a>b)
    {
        x=a-b;
        cout << "Primul copil este mai mare cu" << " " << x << " " << "ani";
    }
    else
    {
        x=b-a;
        cout << "Al doilea copil este mai mare cu" << " " << x << " " << "ani";
    }
    return 0;
}
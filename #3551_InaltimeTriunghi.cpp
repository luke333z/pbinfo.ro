#include <iostream>

using namespace std;

int main()
{
    float c1,c2,i,h;
    cin>>c1>>c2>>i;
    h=(c1*c2)/i;
    h*=100;
    int e = int (h);
    int a = e/100;
    int b = e%100;
    cout<<a<<"."<<b;


    return 0;
}
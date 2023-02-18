#include <iostream>

using namespace std;

int main()
{
    int h1,h2,m1,m2,x,xh;
    cin>>h1>>m1>>x;
    m1=m1+x;
    m2=m1%60;
    xh=m1/60;
    h1=h1+xh;
    h2=h1%24;
    cout<<h2<<" "<<m2;
    return 0;
}
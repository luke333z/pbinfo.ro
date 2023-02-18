#include <iostream>

using namespace std;

int main()
{
    int h1,h2,m1,m2,x,xh,y;
    cin>>h1>>m1>>y>>x;
    m1=m1+x;
    m2=m1%60;
    xh=m1/60;
    h1=h1+xh+y;
    h2=h1%24;
    cout<<h2<<" "<<m2;
    return 0;
}
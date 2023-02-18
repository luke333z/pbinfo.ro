#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float b,B,l,a,d,h;
    cin>> b>>B>>l;
    a=(B-b)/2;
    h=sqrt(l*l-a*a); //tp
    d=sqrt((b+a)*(b+a)+h*h);
    cout<<d;
    return 0;
}
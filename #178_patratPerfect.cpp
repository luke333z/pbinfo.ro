#include <iostream>
#include <math.h>
using namespace std;
int a,b;
int main()
{
    cin>>a;
    b=sqrt(a);
    if(b*b==a)
    {
        cout<<"da";
    }
    else
    {
        cout<<"nu";
    }
    return 0;
}
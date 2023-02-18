#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>0)
    {
        cout<<"pozitiv";
    }
    else
    if(n<0)
    {
        cout<<"negativ";
    }
    else
        if(n==0)
    {
        cout<<"nul";
    }
    else
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    a=n/100*100;
    if(n==a)
        cout<<a;
    else
        cout<<a+100;
    
   
    return 0;
}
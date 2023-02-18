#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char c;
    cin>> a >>b>>c;
    if(c=='+')
    {
        cout<<a+b;
    }
    if(c=='-')
    {
        if(a>b)
        {
            cout<<a-b;
        }
        else
        {
            cout<<b-a;
        }
    }
    if(c=='*')
    {
        cout<<a*b;
    }
    if(c=='/')
    {
        if(a>b)
        {
            cout<<a/b;
        }
        else
        {
            cout<<b/a;
        }
    }
return 0;
}
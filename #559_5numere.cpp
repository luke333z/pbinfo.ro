#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c;
    if(a<b)
        swap(a,b);
    if(a<c)
        swap (a,c);
    if(b<c)
        swap (b,c);
    cin >> d;
    if(d>c)
        swap (c,d);
    if(c>b)
        swap (c,b);
    if(b>a)
        swap (b,a);
    cin >> e;
    if(e>c)
        swap (c,e);
    if(c>b)
        swap (c,b);
    if(b>a)
        swap (b,a);
        cout << a+b+c;
    return 0;
}

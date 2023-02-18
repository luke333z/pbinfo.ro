#include <iostream>

using namespace std;

int main()
{
    int an,cz,cu,udcaa;
    cin >> an;
    cu=an%10;
    cz=an/10%10;
    udcaa=cz*10+cu;
    if(udcaa!=0)
    {
        if(udcaa%4==0)
        {
            cout << "bisect";
        }
        else
        {
            cout<< "nebisect";
        }
    }
    else
    {
        if(an%400==0)
        {
             cout << "bisect";
        }
        else
        {
            cout<< "nebisect";
        }
    }
    return 0;
}
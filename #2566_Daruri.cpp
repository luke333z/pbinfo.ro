#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("daruri.in");
    ofstream fout("daruri.out");
    int t,l,a,b,c,d;
    fin>>t>>l;
    a=t;
    b=l;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    if(a>=2)
    {
       c=t/a;
    d=l/a;
    fout<<a<<endl<<c<<" "<<d;
    }
    else
    {
        fout<<0<<endl<<0<<" "<<0;
    }

    return 0;
}
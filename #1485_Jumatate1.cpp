#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("jumatate1.in");
ofstream fout("jumatate1.out");

int main()
{
    long long n, x,y,p,q,m;
    fin>>n;
    p=q=1;
    while(n/q>0)
    {
        p*=10;
        q*=100;
    }
    x=n/p;
    y=n%p;
    m=x%y;
    while(m)
    {
        x=y;
        y=m;
        m=x%y;
    }
    fout<<y;
    return 0;
}
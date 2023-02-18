#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "sir11";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n;in>> n;
    int f1=1,f2=-1,f3;
    for(int i=3; i<=n; i++)
    {
        f3=1-2*f2-f1;
        if(i!=n)
        {
            f1=f2;
            f2=f3;
        }
    }
    for(int i = n; i >= 3; --i)
    {
        out<<f3<<' ';
        f1=1-2*f2-f3;
        f3=f2;
        f2=f1;
    }
    out<<-1<<' '<<1;
}
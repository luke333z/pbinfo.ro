#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <climits>
std::string filename = "maxim3";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main ()
{
    int maxx=INT_MIN,a;
    for(int i=1;i<=3;i++)
    {
        in>>a;
        if(a>maxx)
            maxx=a;
    }
    out<<maxx;
    return 0;
}
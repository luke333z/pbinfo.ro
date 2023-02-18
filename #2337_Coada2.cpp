#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "coada2";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    long long x,y,z,s;
    in>>x>>y>>z;
    if(x < 0 || y < 1 || z < 1 || x > z-1 || x > y-1)
    {
        out<<-1;
        return 0;
    }
    s = y+z-x;
    out<<s;
    return 0;
}
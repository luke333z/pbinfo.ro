#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "zmeu";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    long long n,m,a;
    in>>n>>m;
    m*=2;
    out<<n/m<<'\n'<<m-n%m;
    return 0;
}
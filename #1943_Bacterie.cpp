#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <climits>
std::string filename = "bacterie";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main ()
{
    unsigned long long n,m;
    in>>n>>m;
    if(n>m)
        std::swap(n,m);
    out<<(n*m)-(n*(n+1)/2);
    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <climits>
std::string filename = "formula1";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main ()
{
    long long c, k, n;
    in >> c >> k >> n;
    if (c == 1)
        out << (k*2-1)*(k*2-1);
    else
    {
        n = n*2 - 1;   c = 0;
        for (long long i=3; i<=n; i+=2)
        c += i*i/2;
        c += c+1;
        c = sqrt(c);
        if (c%2 == 0)
            c--;
        out << c*c;
    }
    return 0;
}
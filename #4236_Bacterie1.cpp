#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <climits>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main ()
{
    unsigned long long n,m;
    std::cin>>n>>m;
    if(n>m)
        std::swap(n,m);
    std::cout<<(n*m)-(n*(n+1)/2);
    return 0;
}
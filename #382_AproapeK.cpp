#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,k,p;
    std::cin >> k >> n;
    p=k/n;
    if (k-p*n>n*(p+1)-k)
        std::cout<<n*(p+1);
    else
        std::cout<<p*n;
    return 0;
}
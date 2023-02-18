#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int p;
    long long k;
    std::cin>>p>>k;
    if(k%2==0) 
        std::cout<<k/2+k-2<<p;
    else 
        std::cout<<k/2+k-1<<p;
    return 0;
}
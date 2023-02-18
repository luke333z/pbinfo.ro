#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int a,cif=0;
    std::cin>>a;
    while(a)
    {
        if(a%10>cif)
            cif=a%10;
        a/=10;
    }
    std::cout<<cif;
    return 0;
}
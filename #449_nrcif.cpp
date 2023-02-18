#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int a;
    std::cin>>a;
    if(a<=9)
        std::cout<<1;
    else if(a<=99)
        std::cout<<2;
    else    
        std::cout<<3;
    return 0;
}
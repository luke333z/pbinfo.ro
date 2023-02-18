#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    double a,b,c;
    std::cin>>a>>b>>c;
    if (a<b+c && b<a+c && c<a+b)
        std::cout<<"da";
    else 
        std::cout<<"nu";
    return 0;
}
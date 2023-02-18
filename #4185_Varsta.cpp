#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    double a,b,c,d;
    double x;
    std::cin>>a>>b>>c>>d;

    x = (trunc((c * b - a * d) * 100.0f / (d - c))) / 100.0f;
    std::cout<<std::fixed<<std::setprecision(2)<<x;
    return 0;
}
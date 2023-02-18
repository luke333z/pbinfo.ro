#include <iostream>
#include <cmath>
#include <iomanip>

int main() 
{
    double a, b, c, m;
    const double PI = atan(1)*4;
    std::cin>>a>>b>>m;
    c = sqrt(a*a+b*b-2*a*b*cos(m*PI/180.0));
    std::cout<<std::fixed<<std::setprecision(2)<<c;

    return 0;
}
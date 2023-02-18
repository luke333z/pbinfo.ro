#include <iostream>
#include <cmath>  
#include <iomanip>    

int main()
{
    double r;
    double area, perimeter;
    const double pi = atan(1)*4;
    std::cin>>r;
    area=pi*r*r;
    perimeter=2*pi*r;
    std::cout<<std::fixed<<std::setprecision(10)<<area<<' '<<perimeter;
    return 0;
}
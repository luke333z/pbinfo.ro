#include <iostream>
#include <cmath>
#include <iomanip>


int main()
{
    double n,L;
    const double pi = atan(1)*4;
    std::cin>>n>>L;
    long long int r=(long long int)(1.0*L/(2.0*sin(180/n*pi/180))*100);
    std::cout<<std::fixed<<std::setprecision(2)<<1.0*r/100;
    return 0;
}
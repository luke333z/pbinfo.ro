#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <climits>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    float a,b,c,d;
    std::cin >> a >> b >> c;
    d=b*b-4*a*c;
    if(d<0)
        std::cout<<"Nu are solutii reale";
    else if(d==0)
        std::cout << "Radacina dubla " << std::fixed << std::setprecision(2) << -(b/2*a);
        else
            std::cout << std::fixed << std::setprecision(2) << (-b+sqrt(d))/(2*a) << ' ' << (-b-sqrt(d))/(2*a);
    return 0;
}
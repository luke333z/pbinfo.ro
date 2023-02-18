#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    double a,b,c;
    std::cin >> a >> b >> c;
    if (a<b+c && b<a+c && c<a+b)
    {
        double s,p,r,area,pi=atan(1)*4;
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        r=(a*b*c)/(4*s);
        r*=100;
        std::cout << int(r) / 100 << '.' << int(r) / 10 % 10 << int(r) % 10;
    }
    else 
        std::cout << "Imposibil";
    return 0;
}
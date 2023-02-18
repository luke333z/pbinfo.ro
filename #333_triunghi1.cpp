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
    if (a <= 0 || b <= 0 || c <= 0 || a>=b+c || b>=a+c || c>=a+b)
        std::cout << "nu este triunghi";
    else if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
        std::cout << "triunghi dreptunghic";
        else if (a*a + b*b > c*c && b*b + c*c > a*a && c*c + a*a > b*b) 
            std::cout << "triunghi ascutitunghic";
            else 
                std::cout << "triunghi obtuzunghic";
    return 0;
}
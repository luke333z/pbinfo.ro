#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main() {
    double a, b, c, d, S;
    std::cin>>a>>b>>c>>d;
    S=(a+b+c+d)/2.0;
    double A=sqrt((S-a)*(S-b)*(S-c)*(S-d));
    std::cout << std::fixed << std::setprecision(3) << (int)(A * 1000) / 1000.0;

}
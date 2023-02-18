#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    double x;
    const double pi = atan(1)*4;
        std::cin >> x;
        std::cout << std::fixed << std::setprecision(3) << sin(x * pi / 180) << " " <<cos(x * pi / 180) << '\n';
    return 0;
}
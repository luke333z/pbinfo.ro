#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main() 
{
    int n;
    std::cin >> n;
    if (n % 3 != 0) std::cout << "NU EXISTA";
    else std::cout << n / 3 - 1 << " " << n / 3 << " " << n / 3 + 1;
    return 0;
}
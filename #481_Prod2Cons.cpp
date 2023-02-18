#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main() 
{
    int n, a;
    std::cin >> n;
    a = sqrt(n);
    if (a * (a + 1) == n) std::cout << a << " " << a + 1;
    else std::cout << "NU EXISTA";
    return 0;
}
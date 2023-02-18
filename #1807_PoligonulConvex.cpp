#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main() 
{ 
    long long n,a,b; 
    std::cin >> n; 
    a=(n*(n-3))/2; 
    b=180*(n-2); 
    std::cout << a << "\n"<<b; 
    return 0;
}
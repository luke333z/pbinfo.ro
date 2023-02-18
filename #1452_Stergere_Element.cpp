#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int n, p;
    std::cin >> n >> p;
    int a[1501];
    for(int i = 1; i <= n; ++i)
        std::cin >> a[i];
    for(int i = p + 1; i <= n; ++i)
        a[i-1] = a[i];
    n--;
    for(int i = 1; i <= n; ++i)
        std::cout << a[i] << " ";
    return 0;
}
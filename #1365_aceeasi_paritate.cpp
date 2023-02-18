#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main ()
{
    int a[1000001];
    int n;
    std::cin >> n;
    for (int i = 0 ; i < n ; ++i)
        std::cin >> a[i];
    for (int i = 0 ; i < n ; ++i)
    {
        std::cout << a[i] << ' ';
        if ((a[i]+a[i+1])%2==0)
        {
        if (i==n-1)
        {}
        else
        std::cout << (a[i]+a[i+1])/2 << ' ';
        }
    }
    return 0;
    
}
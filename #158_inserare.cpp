#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int n,x,p;
    std::cin >> n>>x>>p;
    int a[1001];
    for(int i = 1; i <= n; i++)
        std::cin >> a[i];
    for(int i = n  ; i >= p ; i --)
        a[i+1] = a[i];
        a[p] = x;
        n++;

    
    for(int i = 1; i <= n; i++)
        std::cout << a[i] << " ";
    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main ()
{
    int a,b,d;
    std::cin >> a >> b >> d;
    int x,y;
    x=a/d;
    y=b/d;
    if (a % d != 0)
        x++;
    if (b % d != 0)
        y++;
    std::cout << x * y;
    return 0;
}
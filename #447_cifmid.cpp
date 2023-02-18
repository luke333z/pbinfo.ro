#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int x,a,b,c;
    std::cin >> x;
    a=x/100;
    b=(x%100)/10;
    c=(x%100)%10;
    if ((a<b && b<c) || (c<b && b<a))
        std::cout << b;
    else if ((b<a && a<c) || (c<a && a<b))
        std::cout << a;
        else 
     std::cout << c;
    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int a,b,d;
    std::cin>>a>>b>>d;
    if(a<b)
        std::swap(a,b);
    int x;
    int ms=abs(b*b-a*a+d*d);
    x=ms/(2*d);
    std::cout << x;
    return 0;
}
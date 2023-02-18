#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main() 
{
    int a,b,a1,a2,b1,b2;
    std::cin>>a>>b;
    a1=a%10;
    b1=b%10;
    a2=a/10;
    b2=b/10;
    if(a1==b1 || a1==b2 || a2==b1 || a2==b2)
        std::cout<<"da";
    else
        std::cout<<"nu";
    return 0;
}
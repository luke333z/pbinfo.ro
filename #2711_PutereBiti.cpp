#include <iostream>
#include <fstream>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int n,x=1;
    std::cin>>n;
    x=x<<n;
    std::cout<<x;
    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main ()
{
    int n,x,y,v;
    std::cin>>n>>x>>y>>v;
    std::cout<<(x-1)*n+y<< ' ';
    if (v%n==0) 
        std::cout<<v/n<<' '<< n;
    else 
        std::cout<<v/n+1<<' '<< v%n;
    return 0;
}
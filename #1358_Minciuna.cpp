#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main ()
{
    int a,b;
    std::cin>>a>>b;
    if((a+1==b && a%2==0) || (b+1==a && b%2==0))
        std::cout<<"Andrei e mai responsabil";
    else 
        std::cout<<"minciuna";
    return 0;
}
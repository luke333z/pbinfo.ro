#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main ()
{
    int r,g,b;
    std::cin>>r>>g>>b;
    if((r>=0 && r<=255)&&(g>=0 && g<=255)&&(b>=0 && b<=255))
    {
        if(abs(r-g)<=10 && abs(r-b)<=10 && abs(b-g)<=10)
            std::cout<<"GRI";
        else
            std::cout<<"CULOARE";
    }
    else
        std::cout<<"NU E CULOARE";
    return 0;
}
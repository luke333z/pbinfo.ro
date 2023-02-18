#include <iostream>
#include <fstream>
#include <cstdlib>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int n, f1,f2,faux;

    std::cin>>f1>>f2>>n;
    std::cout<<f1<<' ';
    faux=f1+f1;
    while(abs(faux)<=n)
    {
        std::cout<<f2<<' ';
        faux=f1+f2;
        f1=f2;
        f2=faux;
        
    }
    return 0;
}
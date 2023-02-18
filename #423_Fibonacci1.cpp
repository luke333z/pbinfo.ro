#include <iostream>
#include <fstream>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int n, f1=1,f2=1,faux;
    std::cin>>n;
    std::cout<<1<<' ';
    while(f2<=n)
    {
        std::cout<<f2<<' ';
        faux=f1+f2;
        f1=f2;
        f2=faux;
        
    }
    return 0;
}
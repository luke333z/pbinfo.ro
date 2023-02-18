#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n, x,y;
    std::cin>>n>>y;
    for(int i=2;i<=n;i++)
    {
        std::cin>>x;
        if(x!=y)
        {
            std::cout<<"NU";
            return 0;
        }
    }
    std::cout<<"DA";
    return 0;
}
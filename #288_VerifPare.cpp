#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n, x;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        std::cin>>x;
        if(x%2==1)
        {
            std::cout<<"NU";
            return 0;
        }
    }
    std::cout<<"DA";
    return 0;
}
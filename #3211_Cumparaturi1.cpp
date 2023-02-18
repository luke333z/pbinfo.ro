#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    long long S,C,N;
    std::cin>>S>>C>>N;
    if(S%C==0 && S%N==0)
    {
        std::cout<<"CN";
    }
    else if(S%C==0 && S%N!=0)
    {
        std::cout<<"C";
    }
    else if(S%C!=0 && S%N==0)
    {
        std::cout<<"N";
    }
    else
    {
        std::cout<<"nimic";
    }
    return 0;
}
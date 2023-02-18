#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int a,b,c,s;
    std::cin>>a>>b>>c;
    switch(c)
    {
        case 1:s=a+b ;break;
        case 2:s=a-b ;break;
        case 3:s=a*b ;break;
        case 4:s=a/b ;break;
        case 5:s=a%b ;break;
    }
    std::cout<<s;
    return 0;
}
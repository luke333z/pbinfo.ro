#include <iostream>
#include <fstream>

int main() 
{
    int a, b, nr;
    std::cin>>a>>b;
    nr=b/10-(a-1)/10;
    std::cout<<nr;
    return 0;
}
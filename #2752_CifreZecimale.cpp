#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main ()
{
    int p = 1,v[300];
    for(int i=10;i<=99;i++)
    {
        v[p]=i/10;
        p++;
        v[p]=i%10;
        p++;
    }
    p--;
    int k;
    std::cin>>k;
    std::cout<<v[k];
    return 0;
}
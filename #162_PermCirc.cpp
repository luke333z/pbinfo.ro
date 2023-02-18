#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,v[20];    
    std::cin>>n;
    for(int i=1;i<=n;i++)
        std::cin>>v[i];
    int aux=n;
    
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n;k++)
            std::cout<<v[k]<<' ';
        std::cout<<'\n';
        int val=v[1];
        for(int k=1 ; k <= aux-1 ; k ++)
            v[k] = v[k+1];
        v[aux] = val;
        
        
    }
    return 0;
}
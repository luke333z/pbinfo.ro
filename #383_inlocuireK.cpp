#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int calc(int n, int k)
{
    int r=n%k;
    if(r<=k/2) 
        return n-r;
    else 
        return n+k-r;
}
int main()
{
    int n,k,x,v[201];std::cin>>k>>n;
    for(int i=1; i<=n; i++)
    {
        std::cin>>x;
        v[i]=calc(x,k);
    }
    for(int i = n; i >= 1;i--)
    {
        std::cout<<v[i]<<' ';
    }
   
}
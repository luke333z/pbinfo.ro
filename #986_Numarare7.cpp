#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,maxx=-1,pos=0,x,y,r,s;std::cin>>n;
    double a[1001];
    
    for(int i=1; i<=n; i++)
    {
        std::cin>>a[i];
        
    }
    if(a[1]>a[n])std::swap(a[1],a[n]); 
    for(int i=2;i<n;i++)
    {
        if(!(a[i]<=a[n]&&a[i]>=a[1]))
            pos++;
    }    
    std::cout<<pos;
    return 0;
}
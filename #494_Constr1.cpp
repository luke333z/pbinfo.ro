#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,med,s=0,x,a[10001],cnt;std::cin>>n;
    for(int i=1; i<=n; i++)
    {
        std::cin>>a[i];
        s+=a[i];
    }

    for(int i=1;i<=n;i++)
    {       
         std::cout<<s-a[i]<<' ';
        
    }
   
    
    return 0;
}
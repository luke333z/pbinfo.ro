#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,k,x,maxx=1000000000,a[10001],m;std::cin>>n;
    for(int i=1; i<=n; i++)
    {
        std::cin>>a[i];
    }
    std::cin>>m;
    for(int i = 1; i <= m;i++)
    {
        std::cin>>x;
        if(maxx>x)
            maxx=x;
    }
    int ok=0;
   for(int i=1;i<=n;i++)
   {       
        if(a[i]<=maxx)
        {
            std::cout<<a[i]<<' ';
            ok=1;
        }
   }
    if(!ok) std::cout<<"NU EXISTA";
   return 0;
}